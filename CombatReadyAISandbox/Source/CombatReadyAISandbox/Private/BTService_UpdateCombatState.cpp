// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_UpdateCombatState.h"
#include "AIController.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "AIEnemyController.h"
#include "GameFramework/Pawn.h"

UBTService_UpdateCombatState::UBTService_UpdateCombatState()
{
	NodeName = TEXT("Update Combat State");
	Interval = 0.2f;
	RandomDeviation = 0.0f;

	bCreateNodeInstance = true;
}

void UBTService_UpdateCombatState::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	UBlackboardComponent* BB = OwnerComp.GetBlackboardComponent();
	if (!BB) return;

	UWorld* World = OwnerComp.GetWorld();
	if (!World) return;

	AAIController* AIOwner = OwnerComp.GetAIOwner();
	if (!AIOwner || !IsValid(AIOwner)) return;

	const float Now = World->GetTimeSeconds();

	AActor* Target = Cast<AActor>(BB->GetValueAsObject(Key_TargetActor));
	const bool bHasLOS = BB->GetValueAsBool(Key_HasLOS);
	const bool bIsSearching = BB->GetValueAsBool(Key_IsSearching);

	APawn* ControlledPawn = AIOwner->GetPawn();
	if (!ControlledPawn || !IsValid(ControlledPawn)) return;

	// Distance To Target
	float Dist = 0.0f;
	if (Target && IsValid(Target))
	{
		Dist = FVector::Dist(ControlledPawn->GetActorLocation(), Target->GetActorLocation());
	}
	BB->SetValueAsFloat(Key_DistanceToTarget, Dist);

	float HealthPercent = BB->GetValueAsFloat(Key_HealthPercent);
	HealthPercent = FMath::Clamp(HealthPercent, 0.0f, 1.0f);
	BB->SetValueAsFloat(Key_HealthPercent, HealthPercent);

	if (bHasLOS && Target && IsValid(Target))
	{
		LastHadLOSTime = Now;
	}

	const EAICombatState NewState = ComputeState(BB, Now, Target, bHasLOS, bIsSearching, HealthPercent);

	const uint8 CurrentStateRaw = BB->GetValueAsEnum(Key_CombatState);
	const EAICombatState CurrentState = static_cast<EAICombatState>(CurrentStateRaw);

	if (NewState != CurrentState)
	{
		BB->SetValueAsEnum(Key_CombatState, static_cast<uint8>(NewState));
	}

	AAIEnemyController* MyCon = Cast<AAIEnemyController>(AIOwner);
	if (!MyCon) return;

	if (Target && IsValid(Target))
	{
		MyCon->SetFocalPoint(Target->GetActorLocation());
	}
	else
	{
		MyCon->ClearFocus(EAIFocusPriority::Gameplay);
	}

	const uint8 MoveActionRaw = BB->GetValueAsEnum(TEXT("DesiredMoveAction"));
	const EAICombatAction MoveAction = static_cast<EAICombatAction>(MoveActionRaw);
}


EAICombatState UBTService_UpdateCombatState::ComputeState(
	UBlackboardComponent* BB,
	float Now,
	AActor* Target,
	bool bHasLOS,
	bool bIsSearching,
	float HealthPercent
) const
{
	const bool bMovingToCover = BB->GetValueAsBool(TEXT("bMovingToCover"));
	const bool bInCover = BB->GetValueAsBool(TEXT("bInCover"));

	const float RetreatHealthThreshold = BB->GetValueAsFloat(TEXT("RetreatHealthThreshold"));
	const float HoldTime = BB->GetValueAsFloat(TEXT("LineOfSightHoldTime"));

	const bool bLowHealth = (HealthPercent <= RetreatHealthThreshold);


	const bool bThreatContext =
		(Target != nullptr) ||
		(bIsSearching) ||
		(HoldTime > 0.f && (Now - LastHadLOSTime) <= HoldTime);


	if (bLowHealth && (bThreatContext || bMovingToCover || bInCover))
	{
		return EAICombatState::Retreating;
	}


	if (Target && bHasLOS)
	{
		return EAICombatState::Engaged;
	}


	if (Target && !bHasLOS)
	{
		if (HoldTime > 0.f && (Now - LastHadLOSTime) <= HoldTime)
		{
			return EAICombatState::Engaged;
		}
		return EAICombatState::Alerted;
	}

	if (bIsSearching && !bMovingToCover && !bInCover)
	{
		return EAICombatState::Searching;
	}

	return EAICombatState::Patrol;
}




