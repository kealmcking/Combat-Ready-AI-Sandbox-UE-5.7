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
    SeekCover,
    InCover
};

UENUM(BlueprintType)
enum class EAIWeaponAction : uint8
{
	None   UMETA(DisplayName = "None"),
	Fire   UMETA(DisplayName = "Fire"),
	Reload UMETA(DisplayName = "Reload"),
    OutOfAmmo UMETA(DisplayName = "OutOfAmmo")
};

UENUM(BlueprintType) 
enum class EAICoverAction : uint8
{
    Hold,        // In cover, waiting
    Hide,        // Fully concealed
    Peek,        // Brief exposure for LOS / firing
    Lean,        // Minimal exposure
    BlindFire,   // Fire without LOS
    Reload,      // Reload safely in cover
    Reposition,  // Adjust position while staying in cover
    Break        // Leave cover entirely
};