// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AICombatAction.generated.h"


UENUM(BlueprintType)
enum class EAICombatAction : uint8
{
	CloseDistance,      // Target too far, close the distance
    Backpedal,          // Target too close, create space
	Strafe,             // Maintain range, lateral movement
    Reposition,         // Pick a new firing spot
	Fire,   			// Shoot or trigger firing behavior
	Retreat,            // Fall back to a safer position
	Dash,				// Quick burst movement to evade or reposition
	Reload,				// Reload weapon
	SeekCover,			// Move to cover position
	Wait				// Hold position and assess
};
