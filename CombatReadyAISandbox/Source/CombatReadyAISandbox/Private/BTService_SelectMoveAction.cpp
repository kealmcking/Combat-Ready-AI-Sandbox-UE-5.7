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

	UWorld* World = OwnerComp.GetWorld();
	const float Now = World ? World->GetTimeSeconds() : 0.0f;

	// Respect decision lock
	const float LockTime = BB->GetValueAsFloat(Key_DecisionLockTime);
	if (Now < LockTime)
	{
		return;
	}

	// Must have a target to do meaningful combat movement.
	AActor* Target = Cast<AActor>(BB->GetValueAsObject(Key_TargetActor));
	if (!Target)
	{
		BB->SetValueAsEnum(Key_DesiredMoveAction, (uint8)EAICombatAction::Wait);
		BB->SetValueAsFloat(Key_DecisionLockTime, Now + DecisionLockSeconds);
		return;
	}

	const EAICombatState CombatState =
		static_cast<EAICombatState>(BB->GetValueAsEnum(Key_CombatState));

	const float Dist = BB->GetValueAsFloat(Key_DistanceToTarget);
	const float Min = BB->GetValueAsFloat(Key_PreferredRangeMin);
	const float Max = BB->GetValueAsFloat(Key_PreferredRangeMax);

	const bool bInCover = BB->GetValueAsBool(Key_InCover);
	const bool bMovingToCover = BB->GetValueAsBool(Key_MovingToCover);

	EAICombatAction Chosen = EAICombatAction::Wait;


	if (bMovingToCover)
	{
		Chosen = EAICombatAction::SeekCover;
	}
	else if (bInCover)
	{
		Chosen = EAICombatAction::InCover;
	}
	else
	{
		switch (CombatState)
		{
		case EAICombatState::Retreating:
			Chosen = EAICombatAction::SeekCover;
			break;

		case EAICombatState::Searching:
			Chosen = EAICombatAction::Wait;
			break;

		case EAICombatState::Alerted:
			Chosen = EAICombatAction::Wait;
			break;

		case EAICombatState::Engaged:
		default:
		{
			const float HealthPct = BB->GetValueAsFloat(Key_HealthPct);
			const float RetreatThreshold = BB->GetValueAsFloat(Key_RetreatThreshold);

			const float Bravery = BB->GetValueAsFloat(Key_Bravery);
			const float Accuracy = BB->GetValueAsFloat(Key_Accuracy);

			const bool bWantsCover =
				(HealthPct <= RetreatThreshold) ||
				(Bravery <= 0.3f && Accuracy <= 0.2f);

			if (bWantsCover)
			{
				Chosen = EAICombatAction::SeekCover;
			}
			else
			{
				if (Dist > Max)              Chosen = EAICombatAction::CloseDistance;
				else if (Dist < Min && Min > 0.f) Chosen = EAICombatAction::Backpedal;
				else                         Chosen = EAICombatAction::Wait;
			}
		}
		break;
		}
	}

	BB->SetValueAsEnum(Key_DesiredMoveAction, (uint8)Chosen);
	BB->SetValueAsFloat(Key_DecisionLockTime, Now + DecisionLockSeconds);
}



