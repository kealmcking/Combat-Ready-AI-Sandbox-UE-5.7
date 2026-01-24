// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTService_SelectCoverAction.generated.h"

/**
 * 
 */
UCLASS()
class COMBATREADYAISANDBOX_API UBTService_SelectCoverAction : public UBTService
{
	GENERATED_BODY()

	UBTService_SelectCoverAction();

protected:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

	UPROPERTY(EditAnywhere, Category="Blackboard")
	FName Key_TargetActor = TEXT("TargetActor");

	UPROPERTY(EditAnywhere, Category = "Blackboard")
	FName Key_HasLOS = TEXT("HasLOS");

	UPROPERTY(EditAnywhere, Category = "Blackboard")
	FName Key_InCover = TEXT("bInCover");

	UPROPERTY(EditAnywhere, Category = "Blackboard")
	FName Key_MovingToCover = TEXT("bMovingToCover");

	UPROPERTY(EditAnywhere, Category = "Blackboard")
	FName Key_CoverAction = TEXT("DesiredCoverAction");

	UPROPERTY(EditAnywhere, Category = "Blackboard")
	FName Key_NextCoverActionTime = TEXT("NextCoverActionTime");

	UPROPERTY(EditAnywhere, Category = "Blackboard")
	FName Key_MinPeekCooldown = TEXT("MinPeekCooldown");

	UPROPERTY(EditAnywhere, Category = "Blackboard")
	FName Key_MaxPeekCooldown = TEXT("MaxPeekCooldown");

	UPROPERTY(EditAnywhere, Category = "Blackboard")
	FName Key_PeekDuration = TEXT("PeekDuration");

	UPROPERTY(EditAnywhere, Category = "Blackboard")
	FName Key_RepositionChance = TEXT("RepositionChance");

	UPROPERTY(EditAnywhere, Category = "Blackboard")
	FName Key_MinRepositionCooldown = TEXT("MinRepositionCooldown");

	UPROPERTY(EditAnywhere, Category = "Blackboard")
	FName Key_MaxRepositionCooldown = TEXT("MaxRepositionCooldown");

	UPROPERTY(EditAnywhere, Category = "Blackboard")
	FName Key_PeekChance = TEXT("PeekChance");

	UPROPERTY(EditAnywhere, Category = "Blackboard")
	FName Key_BreakHealthThreshold = TEXT("BreakHealthThreshold");
	
};
