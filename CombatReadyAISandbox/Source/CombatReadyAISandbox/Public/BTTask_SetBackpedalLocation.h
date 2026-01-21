// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_SetBackpedalLocation.generated.h"

/**
 * 
 */
UCLASS()
class COMBATREADYAISANDBOX_API UBTTask_SetBackpedalLocation : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UBTTask_SetBackpedalLocation();

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	const FName Key_TargetActor = TEXT("TargetActor");
	const FName Key_DesiredLocation = TEXT("DesiredMoveLocation");

	UPROPERTY(EditAnywhere, Category = "Tuning")
	float BackpedalDistance = 600.0f;

	UPROPERTY(EditAnywhere, Category = "Tuning")
	float SideJitter = 150.0f;

	UPROPERTY(EditAnywhere, Category = "Navigation")
	float ProjectRadius = 200.0f;
	
};
