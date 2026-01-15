// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_UpdateCombatState.h"
#include "AIController.h"
#include "GameFramework/Pawn.h"

UBTService_UpdateCombatState::UBTService_UpdateCombatState()
{
	NodeName = TEXT("Update Combat State");
	Interval = 0.2f;
	RandomDeviation = 0.0f;
}

void UBTService_UpdateCombatState::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	UBlackboardComponent* BB = OwnerComp.GetBlackboardComponent();
	if (!BB) return;

	const float Now = OwnerComp.GetWorld()->GetTimeSeconds();

	AActor* Target = Cast<AActor>(BB->GetValueAsObject(Key_TargetActor));
	const bool bHasLOS = BB->GetValueAsBool(Key_HasLOS);
	const bool bIsSearching = BB->GetValueAsBool(Key_IsSearching);

	// Distance To Target
	float Dist = 0.0f;
	if (Target) {
		APawn* ControlledPawn = OwnerComp.GetAIOwner() ? OwnerComp.GetAIOwner()->GetPawn() : nullptr;

		if (ControlledPawn) {
			Dist = FVector::Dist(ControlledPawn->GetActorLocation(), Target->GetActorLocation());
		}
	}
	BB->SetValueAsFloat(Key_DistanceToTarget, Dist);

	// Health Percent
	float HealthPercent = BB->GetValueAsFloat(Key_HealthPercent);
	if (HealthPercent <= 0.0f) {
		HealthPercent = 1.0f;
		BB->SetValueAsFloat(Key_HealthPercent, HealthPercent);
	}

	// Track the last time we had LOS
	if (bHasLOS && Target) {
		LastHadLOSTime = Now;
	}

	const EAICombatState NewState = ComputeState(BB, Now, Target, bHasLOS, bIsSearching, HealthPercent);

	const uint8 CurrentStateRaw = BB->GetValueAsEnum(Key_CombatState);
	const EAICombatState CurrentState = static_cast<EAICombatState>(CurrentStateRaw);

	if (NewState != CurrentState) {
		BB->SetValueAsEnum(Key_CombatState, static_cast<uint8>(NewState));
	}
}

EAICombatState UBTService_UpdateCombatState::ComputeState(UBlackboardComponent* BB, float Now, AActor* Target, bool bHasLOS, bool bIsSearching, float HealthPercent) const
{
	if (!Target && !bIsSearching) {
		return EAICombatState::Patrol;
	}

	if (Target && bHasLOS) {
		if (HealthPercent <= RetreatHealthThreshold) {
			return EAICombatState::Retreating;
		}
		return EAICombatState::Engaged;
	}

	if (bIsSearching) {
		return EAICombatState::Searching;
	}

	if (Target && (Now - LastHadLOSTime) <= AlertedGraceSeconds) {
		return EAICombatState::Alerted;
	}

	return Target ? EAICombatState::Alerted : EAICombatState::Patrol;
}
