// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_SelectMoveAction.h"

#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"

#include "AICombatTypes.h"

UBTService_SelectMoveAction::UBTService_SelectMoveAction()
{
	NodeName = TEXT("Select Move Action");
	Interval = 0.5f;
	RandomDeviation = 0.1f;
}

void UBTService_SelectMoveAction::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	UBlackboardComponent* BB = OwnerComp.GetBlackboardComponent();
	if (!BB) return;

	const float Now = OwnerComp.GetWorld() ? OwnerComp.GetWorld()->GetTimeSeconds() : 0.0f;

	const float LockTime = BB->GetValueAsFloat(Key_DecisionLockTime);
	if (Now < LockTime) {
		return;
	}

	AActor* Target = Cast<AActor>(BB->GetValueAsObject(Key_TargetActor));
	if (!Target) {
		BB->SetValueAsEnum(Key_DesiredMoveAction, static_cast<uint8>(EAICombatAction::Wait));
		BB->SetValueAsFloat(Key_DecisionLockTime, Now + DecisionLockSeconds);
		return;
	}

	const float Dist = BB->GetValueAsFloat(Key_DistanceToTarget);

	EAICombatAction Chosen = EAICombatAction::Wait;

	if (Dist > PreferredRangeMax) {
		Chosen = EAICombatAction::CloseDistance;
	}
	else if (Dist < PreferredRangeMin) {
		Chosen = EAICombatAction::Backpedal;
	}
	else {
		Chosen = EAICombatAction::Wait;
	}

	BB->SetValueAsEnum(Key_DesiredMoveAction, static_cast<uint8>(Chosen));
	BB->SetValueAsFloat(Key_DecisionLockTime, Now + DecisionLockSeconds);
}


