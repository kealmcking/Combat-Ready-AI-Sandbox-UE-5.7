// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AIEnemyController.generated.h"

/**
 * 
 */
UCLASS()
class COMBATREADYAISANDBOX_API AAIEnemyController : public AAIController
{
	GENERATED_BODY()

public:
	void OnPossess(APawn* InPawn) override;

	UPROPERTY()
	UBlackboardComponent* BlackboardComponent;

	UPROPERTY(EditAnywhere, Category = "AI")
	UBlackboardData* BBAsset;

	UPROPERTY(EditAnywhere, Category = "AI")
	UBehaviorTree* BTAsset;
	
};
