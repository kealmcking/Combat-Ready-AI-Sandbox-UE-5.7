// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AIArchetypeData.generated.h"

/**
 * 
 */
UCLASS()
class COMBATREADYAISANDBOX_API UAIArchetypeData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category = "Parameters | Movement")
	float WalkSpeed;

	UPROPERTY(BlueprintReadWrite, Category = "Parameters | Movement")
	float RunSpeed;

	UPROPERTY(BlueprintReadWrite, Category = "Parameters | Weapon")
	float PrefferedRangeMin;
	
	UPROPERTY(BlueprintReadWrite, Category = "Parameters | Weapon")
	float PrefferedRangeMax;

	UPROPERTY(BlueprintReadWrite, Category = "Parameters | Attribute")
	float Aggression;

	UPROPERTY(BlueprintReadWrite, Category = "Parameters | Attribute")
	float Bravery;

	UPROPERTY(BlueprintReadWrite, Category = "Parameters | Attribute")
	float RetreatHealthThreshold;

	UPROPERTY(BlueprintReadWrite, Category = "Parameters | Movement")
	float SearchDuration;

	UPROPERTY(BlueprintReadWrite, Category = "Parameters | Movement")
	float StrafeChance;

	UPROPERTY(BlueprintReadWrite, Category = "Parameters | Movement")
	float RepositionChance;

	UPROPERTY(BlueprintReadWrite, Category = "Parameters | Weapon")
	int32 FireBurstMin;

	UPROPERTY(BlueprintReadWrite, Category = "Parameters | Weapon")
	int32 FireBurstMax;

	UPROPERTY(BlueprintReadWrite, Category = "Parameters | Weapon")
	float TimeBetweenShots;

	UPROPERTY(BlueprintReadWrite, Category = "Parameters | Weapon")
	float AimReactionTime;

	UPROPERTY(BlueprintReadWrite, Category = "Parameters | Movement")
	float DashCooldown;

	UPROPERTY(BlueprintReadWrite, Category = "Parameters | Weapon")
	float ReloadCooldown;

	UPROPERTY(BlueprintReadWrite, Category = "Parameters | Movement")
	float PreferredCoverDistance;

	UPROPERTY(BlueprintReadWrite, Category = "Parameters | Weapon")
	float LineOfSightHoldTime;

	UPROPERTY(BlueprintReadWrite, Category = "Parameters | Weapon")
	float Accuracy;
};
