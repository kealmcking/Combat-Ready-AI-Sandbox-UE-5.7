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

protected:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

	// Key Names
	const FName Key_TargetActor = TEXT("TargetActor");
	const FName Key_HasLOS = TEXT("HasLOS");
	const FName Key_CombatState = TEXT("CombatState");

	const FName Key_DistanceToTarget = TEXT("DistanceToTarget");
	const FName Key_PreferredRangeMin = TEXT("PreferredRangeMin");
	const FName Key_PreferredRangeMax = TEXT("PreferredRangeMax");

	const FName Key_CoverLocation = TEXT("CoverLocation");
	const FName Key_LastKnownLocation = TEXT("LastKnownLocation");

	const FName Key_HealthPct = TEXT("HealthPct");
	const FName Key_DesiredMoveAction = TEXT("DesiredMoveAction");
	
};
