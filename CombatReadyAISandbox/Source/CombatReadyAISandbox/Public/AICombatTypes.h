// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AICombatTypes.generated.h"

UENUM(BlueprintType)
enum class EAICombatState : uint8
{
    Patrol,
    Alerted,
    Engaged,
    Searching,
    Retreating
};

UENUM(BlueprintType)
enum class EAICombatAction : uint8
{
	CloseDistance UMETA(DisplayName = "CloseDistance"),
	Backpedal     UMETA(DisplayName = "Backpedal"),
	Strafe        UMETA(DisplayName = "Strafe"),
	Reposition    UMETA(DisplayName = "Reposition"),
	Retreat       UMETA(DisplayName = "Retreat"),
	Dash          UMETA(DisplayName = "Dash"),
	SeekCover     UMETA(DisplayName = "SeekCover"),
	Wait          UMETA(DisplayName = "Wait")
};

UENUM(BlueprintType)
enum class EAIWeaponAction : uint8
{
	None   UMETA(DisplayName = "None"),
	Fire   UMETA(DisplayName = "Fire"),
	Reload UMETA(DisplayName = "Reload")
};