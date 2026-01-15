// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "AICombatTypes.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BTService_UpdateCombatState.generated.h"

/**
 * 
 */
UCLASS()
class COMBATREADYAISANDBOX_API UBTService_UpdateCombatState : public UBTService
{
	GENERATED_BODY()

public:
	UBTService_UpdateCombatState();

protected:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

	// Key names
	const FName Key_TargetActor = TEXT("TargetActor");
	const FName Key_HasLOS = TEXT("HasLOS");
	const FName Key_IsSearching = TEXT("IsSearching");

	const FName Key_CombatState = TEXT("CombatState");
	const FName Key_DistanceToTarget = TEXT("DistanceToTarget");
	const FName Key_HealthPercent = TEXT("HealthPercent");

	// Tuning
	UPROPERTY(EditAnywhere, Category = "Combat")
	float RetreatHealthThreshold = 0.3f;

	UPROPERTY(EditAnywhere, Category = "Combat")
	float AlertedGraceSeconds = 1.5f;

	float LastHadLOSTime = -1000.0f;

	EAICombatState ComputeState(UBlackboardComponent* BB, float Now, AActor* Target, bool bHasLOS, bool bIsSearching, float HealthPercent) const;
	
};
