// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AICombatTypes.h"

#ifdef COMBATREADYAISANDBOX_AICombatTypes_generated_h
#error "AICombatTypes.generated.h already included, missing '#pragma once' in AICombatTypes.h"
#endif
#define COMBATREADYAISANDBOX_AICombatTypes_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_AICombatTypes_h

// ********** Begin Enum EAICombatState ************************************************************
#define FOREACH_ENUM_EAICOMBATSTATE(op) \
	op(EAICombatState::Patrol) \
	op(EAICombatState::Alerted) \
	op(EAICombatState::Engaged) \
	op(EAICombatState::Searching) \
	op(EAICombatState::Retreating) 

enum class EAICombatState : uint8;
template<> struct TIsUEnumClass<EAICombatState> { enum { Value = true }; };
template<> COMBATREADYAISANDBOX_NON_ATTRIBUTED_API UEnum* StaticEnum<EAICombatState>();
// ********** End Enum EAICombatState **************************************************************

// ********** Begin Enum EAICombatAction ***********************************************************
#define FOREACH_ENUM_EAICOMBATACTION(op) \
	op(EAICombatAction::CloseDistance) \
	op(EAICombatAction::Backpedal) \
	op(EAICombatAction::Strafe) \
	op(EAICombatAction::Reposition) \
	op(EAICombatAction::Retreat) \
	op(EAICombatAction::Dash) \
	op(EAICombatAction::SeekCover) \
	op(EAICombatAction::Wait) 

enum class EAICombatAction : uint8;
template<> struct TIsUEnumClass<EAICombatAction> { enum { Value = true }; };
template<> COMBATREADYAISANDBOX_NON_ATTRIBUTED_API UEnum* StaticEnum<EAICombatAction>();
// ********** End Enum EAICombatAction *************************************************************

// ********** Begin Enum EAIWeaponAction ***********************************************************
#define FOREACH_ENUM_EAIWEAPONACTION(op) \
	op(EAIWeaponAction::None) \
	op(EAIWeaponAction::Fire) \
	op(EAIWeaponAction::Reload) 

enum class EAIWeaponAction : uint8;
template<> struct TIsUEnumClass<EAIWeaponAction> { enum { Value = true }; };
template<> COMBATREADYAISANDBOX_NON_ATTRIBUTED_API UEnum* StaticEnum<EAIWeaponAction>();
// ********** End Enum EAIWeaponAction *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
