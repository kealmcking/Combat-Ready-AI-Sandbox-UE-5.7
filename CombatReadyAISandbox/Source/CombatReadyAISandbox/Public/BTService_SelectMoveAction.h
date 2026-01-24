// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTService_SelectMoveAction.generated.h"

/**
 * 
 */
UCLASS()
class COMBATREADYAISANDBOX_API UBTService_SelectMoveAction : public UBTService
{
	GENERATED_BODY()

	UBTService_SelectMoveAction();

protected:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

	// Key Names
	const FName Key_TargetActor = TEXT("TargetActor");
	const FName Key_HasLOS = TEXT("HasLOS");
	const FName Key_CombatState = TEXT("CombatState");
	const FName Key_DistanceToTarget = TEXT("DistanceToTarget");
	const FName Key_HealthPct = TEXT("HealthPct");

	const FName Key_RetreatThreshold = TEXT("RetreatHealthThreshold");

	const FName Key_CoverHoldUntil = TEXT("CoverHoldUntil");
	const FName Key_InCover = TEXT("bInCover");
	const FName Key_MovingToCover = TEXT("bMovingToCover");

	const FName Key_Bravery = TEXT("Bravery");
	const FName Key_Accuracy = TEXT("Accuracy");

	const FName Key_DesiredMoveAction = TEXT("DesiredMoveAction");
	const FName Key_DesiredLocation = TEXT("DesiredMoveLocation");

	const FName Key_PreferredRangeMin = TEXT("PreferredRangeMin");
	const FName Key_PreferredRangeMax = TEXT("PreferredRangeMax");

	const FName Key_DecisionLockTime = TEXT("DecisionLockTime");


	UPROPERTY(EditAnywhere, Category = "Tuning")
	float DecisionLockSeconds = 1.0f;
	
};
