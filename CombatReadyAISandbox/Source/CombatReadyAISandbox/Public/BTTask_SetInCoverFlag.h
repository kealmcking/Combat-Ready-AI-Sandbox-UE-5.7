// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_SetInCoverFlag.generated.h"

/**
 * 
 */
UCLASS()
class COMBATREADYAISANDBOX_API UBTTask_SetInCoverFlag : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UBTTask_SetInCoverFlag();

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	const FName Key_MovingToCover = TEXT("bMovingToCover");
	const FName Key_InCover = TEXT("bInCover");

	const FName Key_CoverHoldUntil = TEXT("CoverHoldUntil");

	const FName Key_DesiredCoverAction = TEXT("DesiredCoverAction");
};
