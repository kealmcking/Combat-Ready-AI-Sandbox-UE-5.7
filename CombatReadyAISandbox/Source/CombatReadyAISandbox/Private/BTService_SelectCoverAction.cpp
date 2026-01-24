// Fill out your copyright notice in the Description page of Project Settings.
#include "BTService_SelectCoverAction.h"

#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Actor.h"
#include "Kismet/KismetMathLibrary.h"

#include "AICombatTypes.h"

UBTService_SelectCoverAction::UBTService_SelectCoverAction()
{
	NodeName = TEXT("Select Cover Action");
	Interval = 0.5f;
	RandomDeviation = 0.1f;
}

static uint8 ToBBEnum(EAICoverAction Action) {
	return static_cast<uint8>(Action);
}

static bool IsVisibleToPlayer(UWorld* World, const AActor* AIActor)
{
	if (!World || !AIActor) return false;

	APlayerController* PC = UGameplayStatics::GetPlayerController(World, 0);
	if (!PC) return false;

	FVector CamLoc;
	FRotator CamRot;
	PC->GetPlayerViewPoint(CamLoc, CamRot);

	const FVector ToAI = (AIActor->GetActorLocation() - CamLoc).GetSafeNormal();
	const float Dot = FVector::DotProduct(CamRot.Vector(), ToAI);

	// ~60° half-FOV
	constexpr float ViewDotThreshold = 0.5f;
	if (Dot < ViewDotThreshold)
	{
		return false;
	}

	FHitResult Hit;
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(AIActor);

	const bool bHit = World->LineTraceSingleByChannel(
		Hit,
		CamLoc,
		AIActor->GetActorLocation(),
		ECC_Visibility,
		Params
	);

	return !bHit || Hit.GetActor() == AIActor;
}


void UBTService_SelectCoverAction::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	UBlackboardComponent* BB = OwnerComp.GetBlackboardComponent();
	if (!BB) return;

	UWorld* World = OwnerComp.GetWorld();
	const float Now = World ? World->GetTimeSeconds() : 0.0f;

	AActor* TargetActor = Cast<AActor>(BB->GetValueAsObject(Key_TargetActor));
	const bool bInCover = BB->GetValueAsBool(Key_InCover);
	const bool bMovingToCover = BB->GetValueAsBool(Key_MovingToCover);

	// No target = hold
	if (!TargetActor)
	{
		BB->SetValueAsEnum(Key_CoverAction, (uint8)EAICoverAction::Hold);
		return;
	}

	// Not settled into cover yet = hold
	if (!bInCover || bMovingToCover)
	{
		BB->SetValueAsEnum(Key_CoverAction, (uint8)EAICoverAction::Hold);
		return;
	}

	// Cooldown gate
	const float NextAllowedTime = BB->GetValueAsFloat(Key_NextCoverActionTime);
	if (Now < NextAllowedTime)
	{
		return;
	}

	// HealthPct: treat missing key as "healthy"
	float HealthPct = 1.0f;
	const FBlackboard::FKey HealthId = BB->GetKeyID(TEXT("HealthPct"));
	if (HealthId != FBlackboard::InvalidKey)
	{
		HealthPct = BB->GetValueAsFloat(TEXT("HealthPct"));
	}

	const float BreakHealthThreshold = BB->GetValueAsFloat(Key_BreakHealthThreshold);

	// If health is low, reposition
	if (HealthPct <= BreakHealthThreshold)
	{
		BB->SetValueAsEnum(Key_CoverAction, (uint8)EAICoverAction::Break);

		const float MinPeekCooldown = BB->GetValueAsFloat(Key_MinPeekCooldown);
		const float MaxPeekCooldown = BB->GetValueAsFloat(Key_MaxPeekCooldown);
		BB->SetValueAsFloat(Key_NextCoverActionTime, Now + FMath::FRandRange(MinPeekCooldown, MaxPeekCooldown));
		return;
	}

	float RepositionChance = BB->GetValueAsFloat(Key_RepositionChance);

	RepositionChance = FMath::Clamp(RepositionChance, 0.0f, 1.0f);

	APawn* AIPawn = OwnerComp.GetAIOwner()
		? OwnerComp.GetAIOwner()->GetPawn()
		: nullptr;

	if (!AIPawn) return;

	const bool bVisibleToPlayer = IsVisibleToPlayer(World, AIPawn);

	const uint8 CurrentCoverAction = BB->GetValueAsEnum(Key_CoverAction);
	const bool bIsPeeking = (CurrentCoverAction == static_cast<uint8>(EAICoverAction::Peek));

	const bool bHasLOS = BB->GetValueAsBool(Key_HasLOS);

	bool bDoReposition = false;

	if (bVisibleToPlayer && !bIsPeeking && bHasLOS)
	{
		bDoReposition = (FMath::FRand() < 0.85f);
	}
	else
	{
		bDoReposition = (FMath::FRand() < RepositionChance);
	}


	const float MinRepositionCooldown = BB->GetValueAsFloat(Key_MinRepositionCooldown);
	const float MaxRepositionCooldown = BB->GetValueAsFloat(Key_MaxRepositionCooldown);

	if (bDoReposition) {
		BB->SetValueAsEnum(Key_CoverAction, (uint8)EAICoverAction::Reposition);
		BB->SetValueAsFloat(Key_NextCoverActionTime, Now + FMath::FRandRange(MinRepositionCooldown, MaxRepositionCooldown));
	}
	else {
		float PeekChance = 0.0f;
		const FBlackboard::FKey PeekId = BB->GetKeyID(Key_PeekChance);
		if (PeekId != FBlackboard::InvalidKey)
		{
			PeekChance = BB->GetValueAsFloat(Key_PeekChance);
		}
		PeekChance = FMath::Clamp(PeekChance, 0.0f, 1.0f);

		const bool bDoPeek = (FMath::FRand() < PeekChance);

		const float MinPeekCooldown = BB->GetValueAsFloat(Key_MinPeekCooldown);
		const float MaxPeekCooldown = BB->GetValueAsFloat(Key_MaxPeekCooldown);

		if (bDoPeek)
		{
			BB->SetValueAsEnum(Key_CoverAction, (uint8)EAICoverAction::Peek);
			BB->SetValueAsFloat(Key_NextCoverActionTime, Now + FMath::FRandRange(MinPeekCooldown, MaxPeekCooldown));
		}
		else
		{
			BB->SetValueAsEnum(Key_CoverAction, (uint8)EAICoverAction::Hold);
			BB->SetValueAsFloat(Key_NextCoverActionTime, Now + FMath::FRandRange(0.5f, 1.0f));
		}
	}


}
