// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_SetCoverTravelFlags.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"

UBTTask_SetCoverTravelFlags::UBTTask_SetCoverTravelFlags()
{
	NodeName = TEXT("Set Cover Travel Flags");
}

EBTNodeResult::Type UBTTask_SetCoverTravelFlags::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	UBlackboardComponent* BB = OwnerComp.GetBlackboardComponent();
	if (!BB) return EBTNodeResult::Failed;

	const bool bAlreadyMovingToCover = BB->GetValueAsBool(Key_MovingToCover);
	const bool bAlreadyInCover = BB->GetValueAsBool(Key_InCover);

	if (bAlreadyInCover)
	{
		BB->SetValueAsBool(Key_MovingToCover, false);
		return EBTNodeResult::Succeeded;
	}

	if (!bAlreadyMovingToCover)
	{
		BB->SetValueAsBool(Key_MovingToCover, true);
		BB->SetValueAsBool(Key_InCover, false);
	}

	return EBTNodeResult::Succeeded;
}

