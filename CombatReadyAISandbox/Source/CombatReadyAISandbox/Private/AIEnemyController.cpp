// Fill out your copyright notice in the Description page of Project Settings.


#include "AIEnemyController.h"

#include "AIEnemyCharacter.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "HealthComponent.h"

#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AISenseConfig_Hearing.h"
#include "Perception/AISense_Sight.h"
#include "Perception/AISense_Hearing.h"

#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/Pawn.h"

AAIEnemyController::AAIEnemyController() {
	PrimaryActorTick.bCanEverTick = true;

	PerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("PerceptionComponent"));
	SetPerceptionComponent(*PerceptionComponent);

	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("SightConfig"));
	HearingConfig = CreateDefaultSubobject<UAISenseConfig_Hearing>(TEXT("HearingConfig"));

	SightConfig->SightRadius = 2500.0f;
	SightConfig->LoseSightRadius = 3000.0f;
	SightConfig->PeripheralVisionAngleDegrees = 70.0f;
	SightConfig->SetMaxAge(5.0f);
	SightConfig->DetectionByAffiliation.bDetectEnemies = true;
	SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
	SightConfig->DetectionByAffiliation.bDetectNeutrals = true;

	HearingConfig->HearingRange = 3000.0f;
	HearingConfig->SetMaxAge(3.0f);
	HearingConfig->DetectionByAffiliation.bDetectEnemies = true;
	HearingConfig->DetectionByAffiliation.bDetectFriendlies = true;
	HearingConfig->DetectionByAffiliation.bDetectNeutrals = true;

	PerceptionComponent->ConfigureSense(*SightConfig);
	PerceptionComponent->ConfigureSense(*HearingConfig);
	PerceptionComponent->SetDominantSense(UAISense_Sight::StaticClass());

	PerceptionComponent->OnTargetPerceptionUpdated.AddDynamic(this, &AAIEnemyController::OnTargetPerceptionUpdated);
}

void AAIEnemyController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if (!IsValid(BBAsset) || !IsValid(BTAsset)) {
		UE_LOG(LogTemp, Error, TEXT("AIEnemyController missing BBAsset or BTAsset"));
		return;
	}

	UBlackboardComponent* BBComp = nullptr;;
	if (!UseBlackboard(BBAsset, BBComp)) {
		UE_LOG(LogTemp, Error, TEXT("AIEnemyController failed to initialize blackboard"));
		return;
	}

	BlackboardComponent = BBComp;

	if (!BBComp || !IsValid(Archetype)) {
		UE_LOG(LogTemp, Error, TEXT("AIEnemyController missing BlackboardComponent or Archetype"));
		return;
	}

	ApplyArchetypeToBlackboard(BlackboardComponent, InPawn);


	if (!RunBehaviorTree(BTAsset)) {
		UE_LOG(LogTemp, Error, TEXT("AIEnemyController failed to run behavior tree"));
		return;
	}


	UE_LOG(LogTemp, Warning, TEXT("BehaviorTree started successfully"));

	StopAllFiring();
}

void AAIEnemyController::OnUnPossess()
{
	StopAllFiring();
	Super::OnUnPossess();
}

void AAIEnemyController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	FireManagerAccum += DeltaSeconds;
	if (FireManagerAccum >= FireManagerTickInterval) {
		FireManagerAccum = 0.0f;
		UpdateFireManager(DeltaSeconds);
	}
}

void AAIEnemyController::UpdateFireManager(float DeltaSeconds)
{
	if (!BlackboardComponent) {
		StopAllFiring();
		return;
	}

	if (bFireBlockedByCooldown)
	{
		return;
	}

	AActor* Target = Cast<AActor>(BlackboardComponent->GetValueAsObject(Key_TargetActor));
	if (!Target) {
		StopAllFiring();
		return;
	}

	if (!ShouldTryFire()) {
		StopAllFiring();
		return;
	}

	FVector AimPoint;
	if (!HasLineOfFireToTarget(Target, AimPoint)) {
		StopAllFiring();
		return;
	}

	if (!bBurstActive) {
		const float AimReactionTime = BlackboardComponent->GetValueAsFloat(TEXT("AimReactionTime"));
		const float Delay = FMath::Max(0.0f, AimReactionTime);

		if (!GetWorldTimerManager().IsTimerActive(Timer_AimReaction)) {
			GetWorldTimerManager().SetTimer(
				Timer_AimReaction,
				this,
				&AAIEnemyController::StartBurst,
				Delay,
				false
			);
		}
	}
}

bool AAIEnemyController::ShouldTryFire() const
{
	if (!BlackboardComponent) return false;

	const uint8 RawState = BlackboardComponent->GetValueAsEnum(Key_CombatState);
	const EAICombatState State = static_cast<EAICombatState>(RawState);

	if (State != EAICombatState::Engaged) return false;

	const bool bHasLOS = BlackboardComponent->GetValueAsBool(Key_HasLOS);
	if (!bHasLOS) return false;

	return true;
}

bool AAIEnemyController::HasLineOfFireToTarget(AActor* Target, FVector& OutAimPoint) const
{
	if (!Target) return false;

	const APawn* P = GetPawn();
	if (!P) return false;

	OutAimPoint = Target->GetActorLocation() + FVector(0, 0, 60.f);

	const FVector Start = P->GetActorLocation() + FVector(0, 0, 60.f);
	const FVector End = OutAimPoint;

	FCollisionQueryParams Params(SCENE_QUERY_STAT(AIFireLOF), false);
	Params.AddIgnoredActor(P);
	Params.AddIgnoredActor(Target);

	FHitResult Hit;
	const bool bHit = GetWorld()->LineTraceSingleByChannel(
		Hit,
		Start,
		End,
		ECC_Visibility,
		Params
	);

	if (!bHit) return true;

	return Hit.GetActor() == Target;
}

void AAIEnemyController::StartBurst()
{
	GetWorldTimerManager().ClearTimer(Timer_AimReaction);
	
	if (!BlackboardComponent || bFireBlockedByCooldown) return;

	if (!ShouldTryFire()) return;

	const int32 MinBurst = BlackboardComponent->GetValueAsInt(TEXT("FireBurstMin"));
	const int32 MaxBurst = BlackboardComponent->GetValueAsInt(TEXT("FireBirstMax"));

	const int32 SafeMin = FMath::Max(1, MinBurst);
	const int32 SafeMax = FMath::Max(SafeMin, MaxBurst);

	ShotsRemaining = FMath::RandRange(SafeMin, SafeMax);
	bBurstActive = true;

	FireOneShot();

	const float TimeBetween = FMath::Max(0.02f, BlackboardComponent->GetValueAsFloat(TEXT("TimeBetweenShots")));

	if (ShotsRemaining > 0) {
		GetWorldTimerManager().SetTimer(
			Timer_ShotTick,
			this,
			&AAIEnemyController::FireOneShot,
			TimeBetween,
			true
		);
	}
	else {
		EndBurst();
	}
}

void AAIEnemyController::FireOneShot()
{
	if (!BlackboardComponent) {
		StopAllFiring();
		return;
	}

	AActor* Target = Cast<AActor>(BlackboardComponent->GetValueAsObject(Key_TargetActor));
	if (!Target || !ShouldTryFire()) {
		StopAllFiring();
		return;
	}

	FVector AimPoint;
	if (!HasLineOfFireToTarget(Target, AimPoint)) {
		StopAllFiring();
		return;
	}

	if (!TryFireWeaponAt(AimPoint)) {
		StopAllFiring();
		return;
	}

	ShotsRemaining--;
	if (ShotsRemaining <= 0) {
		EndBurst();
	}
}

void AAIEnemyController::EndBurst()
{
	GetWorldTimerManager().ClearTimer(Timer_ShotTick);
	bBurstActive = false;
	ShotsRemaining = 0;

	const float ReloadCooldown = BlackboardComponent ? BlackboardComponent->GetValueAsFloat(TEXT("ReloadCooldown")) : 0.f;
	const float Cooldown = FMath::Max(0.0f, ReloadCooldown);

	bFireBlockedByCooldown = true;

	GetWorldTimerManager().SetTimer(
		Timer_ReloadCooldown,
		[this]()
		{
			bFireBlockedByCooldown = false;
		},
		Cooldown,
		false
	);
}

void AAIEnemyController::StopAllFiring()
{
	GetWorldTimerManager().ClearTimer(Timer_AimReaction);
	GetWorldTimerManager().ClearTimer(Timer_ShotTick);

	bBurstActive = false;
	ShotsRemaining = 0;
}

bool AAIEnemyController::TryFireWeaponAt(const FVector& AimPoint)
{
	BP_FireAt(AimPoint);
	return true;
}

void AAIEnemyController::OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus) {
	if (!BlackboardComponent || !Actor) return;

	const float Now = GetWorld() ? GetWorld()->GetTimeSeconds() : 0.f;
	const bool bIsSight = Stimulus.Type == UAISense::GetSenseID<UAISense_Sight>();

	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(this, 0);
	if (!PlayerPawn || Actor != PlayerPawn) {
		return;
	}

	if (Stimulus.WasSuccessfullySensed())
	{

		if (bIsSight && !IsActorInFrontFOV(Actor, 0.35f))
		{
			return;
		}

		BlackboardComponent->SetValueAsObject(TEXT("TargetActor"), Actor);
		BlackboardComponent->SetValueAsVector(TEXT("LastKnownLocation"), Stimulus.StimulusLocation);
		BlackboardComponent->SetValueAsFloat(TEXT("LastSensedTime"), Now);

		if (bIsSight)
		{
			BlackboardComponent->SetValueAsBool(TEXT("HasLOS"), true);
			BlackboardComponent->SetValueAsBool(TEXT("IsSearching"), false);
		}
		else
		{
			BlackboardComponent->SetValueAsBool(TEXT("HasLOS"), false);
			BlackboardComponent->SetValueAsBool(TEXT("IsSearching"), true);
		}
	}
	else
	{
		if (bIsSight)
		{
			BlackboardComponent->SetValueAsBool(TEXT("HasLOS"), false);
			BlackboardComponent->SetValueAsBool(TEXT("IsSearching"), true);
			BlackboardComponent->SetValueAsVector(TEXT("LastKnownLocation"), Stimulus.StimulusLocation);
			BlackboardComponent->SetValueAsFloat(TEXT("LastSensedTime"), Now);
		}
	}
}

void AAIEnemyController::ApplyArchetypeToBlackboard(UBlackboardComponent* BBComp, APawn* InPawn)
{
	BBComp->SetValueAsFloat(TEXT("PreferredRangeMin"), Archetype->PreferredRangeMin);
	BBComp->SetValueAsFloat(TEXT("PreferredRangeMax"), Archetype->PreferredRangeMax);

	BBComp->SetValueAsFloat(TEXT("Bravery"), Archetype->Bravery);
	BBComp->SetValueAsFloat(TEXT("Aggression"), Archetype->Aggression);

	BBComp->SetValueAsFloat(TEXT("WalkSpeed"), Archetype->WalkSpeed);
	BBComp->SetValueAsFloat(TEXT("RunSpeed"), Archetype->RunSpeed);

	BBComp->SetValueAsFloat(TEXT("RetreatHealthThreshold"), Archetype->RetreatHealthThreshold);

	BBComp->SetValueAsFloat(TEXT("StrafeChance"), Archetype->StrafeChance);
	BBComp->SetValueAsFloat(TEXT("RepositionChance"), Archetype->RepositionChance);
	BBComp->SetValueAsFloat(TEXT("SearchDuration"), Archetype->SearchDuration);

	BBComp->SetValueAsFloat(TEXT("MinRepositionCooldown"), Archetype->MinRepositionCooldown);
	BBComp->SetValueAsFloat(TEXT("MaxRepositionCooldown"), Archetype->MaxRepositionCooldown);

	BBComp->SetValueAsInt(TEXT("FireBurstMin"), Archetype->FireBurstMin);
	BBComp->SetValueAsInt(TEXT("FireBurstMax"), Archetype->FireBurstMax);

	BBComp->SetValueAsFloat(TEXT("TimeBetweenShots"), Archetype->TimeBetweenShots);
	BBComp->SetValueAsFloat(TEXT("AimReactionTime"), Archetype->AimReactionTime);

	BBComp->SetValueAsFloat(TEXT("Accuracy"), Archetype->Accuracy);
	BBComp->SetValueAsFloat(TEXT("ReloadCooldown"), Archetype->ReloadCooldown);
	BBComp->SetValueAsFloat(TEXT("LineOfSightHoldTime"), Archetype->LineOfSightHoldTime);

	BBComp->SetValueAsFloat(TEXT("MinPeekCooldown"), Archetype->MinPeekCooldown);
	BBComp->SetValueAsFloat(TEXT("MaxPeekCooldown"), Archetype->MaxPeekCooldown);
	BBComp->SetValueAsFloat(TEXT("PeekDuration"), Archetype->PeekDuration);
	BBComp->SetValueAsFloat(TEXT("PeekChance"), Archetype->PeekChance);
	BBComp->SetValueAsFloat(TEXT("BreakHealthThreshold"), Archetype->BreakHealthThreshold);

	UHealthComponent* Health = InPawn->GetComponentByClass<UHealthComponent>();

	if (Health) {
		BBComp->SetValueAsFloat(TEXT("HealthPct"), Health->GetHealthPercent());
	}
	
}

void AAIEnemyController::SetCombatFocus(AActor* Target)
{
	if (!Target) return;
	SetFocus(Target, EAIFocusPriority::Gameplay);
}

void AAIEnemyController::ClearCombatFocus()
{
	ClearFocus(EAIFocusPriority::Gameplay);
}

bool AAIEnemyController::IsActorInFrontFOV(const AActor* Target, float MinDot) const
{
	if (!Target) return false;

	const APawn* P = GetPawn();
	if (!P) return false;

	const FVector ToTarget = (Target->GetActorLocation() - P->GetActorLocation()).GetSafeNormal();
	const FVector Forward = P->GetActorForwardVector();

	const float Dot = FVector::DotProduct(Forward, ToTarget);

	return Dot >= MinDot;
}


