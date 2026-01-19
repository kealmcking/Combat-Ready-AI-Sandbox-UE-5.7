// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTService_SelectWeaponAction.generated.h"

/**
 * 
 */
UCLASS()
class COMBATREADYAISANDBOX_API UBTService_SelectWeaponAction : public UBTService
{
	GENERATED_BODY()

public:
	UBTService_SelectWeaponAction();

protected:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

	// Key Names
	FName Key_TargetActor = TEXT("TargetActor");
	FName Key_HasLOS = TEXT("HasLOS");
	FName Key_DistanceToTarget = TEXT("DistanceToTarget");
	FName Key_AmmoInMag = TEXT("AmmoInMag");
	FName Key_NextFireTime = TEXT("NextFireTime");
	FName Key_ReloadEndTime = TEXT("ReloadEndTime");
	FName Key_DesiredWeaponAction = TEXT("DesiredWeaponAction");

	UPROPERTY(EditAnywhere, Category = "Tuning")
	float MaxFireDistance = 3000.0f;
	
};
