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

	UPROPERTY()
	float WalkSpeed;

	UPROPERTY()
	float RunSpeed;

	UPROPERTY()
	float PrefferedRangeMin;
	
	UPROPERTY()
	float PrefferedRangeMax;

	UPROPERTY()
	float Aggression;

	UPROPERTY()
	float Bravery;

	UPROPERTY()
	float RetreatHealthThreshold;

	UPROPERTY()
	float SearchDuration;

	UPROPERTY()
	float StrafeChance;

	UPROPERTY()
	float RepositionChance;

	UPROPERTY()
	int32 FireBurstMin;

	UPROPERTY()
	int32 FireBurstMax;

	UPROPERTY()
	float TimeBetweenShots;

	UPROPERTY()
	float AimReactionTime;

	UPROPERTY()
	float DashCooldown;

	UPROPERTY()
	float ReloadCooldown;

	UPROPERTY()
	float PreferredCoverDistance;

	UPROPERTY()
	float LineOfSightHoldTime;

	UPROPERTY()
	float Accuracy;
};
