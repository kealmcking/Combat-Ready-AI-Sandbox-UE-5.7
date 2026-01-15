// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AIWeaponAction.h"

#ifdef COMBATREADYAISANDBOX_AIWeaponAction_generated_h
#error "AIWeaponAction.generated.h already included, missing '#pragma once' in AIWeaponAction.h"
#endif
#define COMBATREADYAISANDBOX_AIWeaponAction_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_AIWeaponAction_h

// ********** Begin Enum EAIWeaponState ************************************************************
#define FOREACH_ENUM_EAIWEAPONSTATE(op) \
	op(EAIWeaponState::None) \
	op(EAIWeaponState::Fire) \
	op(EAIWeaponState::Reload) \
	op(EAIWeaponState::HoldFire) 

enum class EAIWeaponState : uint8;
template<> struct TIsUEnumClass<EAIWeaponState> { enum { Value = true }; };
template<> COMBATREADYAISANDBOX_NON_ATTRIBUTED_API UEnum* StaticEnum<EAIWeaponState>();
// ********** End Enum EAIWeaponState **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
