// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_SetInCoverFlag.h"
#include "AICombatTypes.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"

UBTTask_SetInCoverFlag::UBTTask_SetInCoverFlag() {
	NodeName = TEXT("Set In Cover Flag");
}

EBTNodeResult::Type UBTTask_SetInCoverFlag::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) {
	UBlackboardComponent* BB = OwnerComp.GetBlackboardComponent();
	if (!BB) return EBTNodeResult::Failed;

	BB->SetValueAsBool(Key_MovingToCover, false);
	BB->SetValueAsBool(Key_InCover, true);

	const float Now = OwnerComp.GetWorld()->GetTimeSeconds();

	BB->SetValueAsFloat(Key_CoverHoldUntil, Now + 6.0f);
	BB->SetValueAsFloat("NextCoverActionTime", Now + 0.25f);

	return EBTNodeResult::Succeeded;
}