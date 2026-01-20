// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AIArchetypeData.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class COMBATREADYAISANDBOX_API UAIArchetypeData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Parameters | Movement")
	float WalkSpeed;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Parameters | Movement")
	float RunSpeed;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Parameters | Weapon")
	float PrefferedRangeMin;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Parameters | Weapon")
	float PrefferedRangeMax;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Parameters | Attribute")
	float Aggression;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Parameters | Attribute")
	float Bravery;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Parameters | Attribute")
	float RetreatHealthThreshold;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Parameters | Movement")
	float SearchDuration;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Parameters | Movement")
	float StrafeChance;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Parameters | Movement")
	float RepositionChance;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Parameters | Weapon")
	int32 FireBurstMin;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Parameters | Weapon")
	int32 FireBurstMax;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Parameters | Weapon")
	float TimeBetweenShots;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Parameters | Weapon")
	float AimReactionTime;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Parameters | Movement")
	float DashCooldown;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Parameters | Weapon")
	float ReloadCooldown;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Parameters | Movement")
	float PreferredCoverDistance;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Parameters | Weapon")
	float LineOfSightHoldTime;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Parameters | Weapon")
	float Accuracy;
};
