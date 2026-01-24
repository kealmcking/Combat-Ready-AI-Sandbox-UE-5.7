// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTService_UpdateCoverFocus.generated.h"

/**
 * 
 */
UCLASS()
class COMBATREADYAISANDBOX_API UBTService_UpdateCoverFocus : public UBTService
{
	GENERATED_BODY()

protected:
	UBTService_UpdateCoverFocus();

protected:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

	const FName Key_TargetActor = TEXT("TargetActor");
	const FName Key_DesiredCoverAction = TEXT("DesiredCoverAction");
	
};
