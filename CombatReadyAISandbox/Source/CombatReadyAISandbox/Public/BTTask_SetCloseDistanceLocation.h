// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_SetCloseDistanceLocation.generated.h"

/**
 * 
 */
UCLASS()
class COMBATREADYAISANDBOX_API UBTTask_SetCloseDistanceLocation : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UBTTask_SetCloseDistanceLocation();

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	const FName Key_TargetActor = TEXT("TargetActor");
	const FName Key_DesiredLocation = TEXT("DesiredMoveLocation");

	const FName Key_PreferredRangeMin = TEXT("PreferredRangeMin");
	const FName Key_PreferredRangeMax = TEXT("PreferredRangeMax");

	UPROPERTY(EditAnywhere, Category="Tuning")
	float SideJitter = 250.0f;

	UPROPERTY(EditAnywhere, Category="Tuning")
	float RangeBias01 = 0.6f;

	UPROPERTY(EditAnywhere, Category="Tuning")
	float MinSeperationFromTarget = 120.0f;

	UPROPERTY(EditAnywhere, Category="Navigation")
	float ProjectRadius = 150.0f;
	
};
