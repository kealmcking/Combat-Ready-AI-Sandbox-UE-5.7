// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AICombatAction.h"

#ifdef COMBATREADYAISANDBOX_AICombatAction_generated_h
#error "AICombatAction.generated.h already included, missing '#pragma once' in AICombatAction.h"
#endif
#define COMBATREADYAISANDBOX_AICombatAction_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_AICombatAction_h

// ********** Begin Enum EAICombatAction ***********************************************************
#define FOREACH_ENUM_EAICOMBATACTION(op) \
	op(EAICombatAction::CloseDistance) \
	op(EAICombatAction::Backpedal) \
	op(EAICombatAction::Strafe) \
	op(EAICombatAction::Reposition) \
	op(EAICombatAction::Fire) \
	op(EAICombatAction::Retreat) \
	op(EAICombatAction::Dash) \
	op(EAICombatAction::Reload) \
	op(EAICombatAction::SeekCover) \
	op(EAICombatAction::Wait) 

enum class EAICombatAction : uint8;
template<> struct TIsUEnumClass<EAICombatAction> { enum { Value = true }; };
template<> COMBATREADYAISANDBOX_NON_ATTRIBUTED_API UEnum* StaticEnum<EAICombatAction>();
// ********** End Enum EAICombatAction *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
