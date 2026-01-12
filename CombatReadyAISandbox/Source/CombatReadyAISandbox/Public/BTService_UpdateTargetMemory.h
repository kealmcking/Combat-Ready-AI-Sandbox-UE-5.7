// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTService_UpdateTargetMemory.generated.h"

/**
 * 
 */
UCLASS()
class COMBATREADYAISANDBOX_API UBTService_UpdateTargetMemory : public UBTService
{
	GENERATED_BODY()
	
public:
	UBTService_UpdateTargetMemory();

protected:
	UPROPERTY(EditAnywhere, Category = "Memory")
	float MaxSearchTime = 5.0f;

	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
};
