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
    Wait = 0,
    CloseDistance,
    Backpedal,
    Strafe,
    Reposition,
    Dash,
    SeekCover
};

UENUM(BlueprintType)
enum class EAIWeaponAction : uint8
{
	None   UMETA(DisplayName = "None"),
	Fire   UMETA(DisplayName = "Fire"),
	Reload UMETA(DisplayName = "Reload")
};