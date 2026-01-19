// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AICombatTypes.h"
#include "Perception/AIPerceptionTypes.h"
#include "AIArchetypeData.h"
#include "AIEnemyController.generated.h"

class UAIPerceptionComponent;
class UAISenseConfig_Sight;
class UAISenseConfig_Hearing;

/**
 * 
 */
UCLASS()
class COMBATREADYAISANDBOX_API AAIEnemyController : public AAIController
{
	GENERATED_BODY()

	AAIEnemyController();

public:
	void OnPossess(APawn* InPawn) override;

	const UAIArchetypeData* Archetype;

	UPROPERTY()
	UBlackboardComponent* BlackboardComponent;

	UPROPERTY(EditDefaultsOnly, Category = "AI")
	UBlackboardData* BBAsset;

	UPROPERTY(EditDefaultsOnly, Category = "AI")
	UBehaviorTree* BTAsset;

	UPROPERTY()
	UAISenseConfig_Sight* SightConfig;

	UPROPERTY()
	UAISenseConfig_Hearing* HearingConfig;

	UFUNCTION()
	void OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);
	
};
