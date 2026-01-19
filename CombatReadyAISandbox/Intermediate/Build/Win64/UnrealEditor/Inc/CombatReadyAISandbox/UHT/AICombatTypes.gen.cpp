// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AICombatTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAICombatTypes() {}

// ********** Begin Cross Module References ********************************************************
COMBATREADYAISANDBOX_API UEnum* Z_Construct_UEnum_CombatReadyAISandbox_EAICombatAction();
COMBATREADYAISANDBOX_API UEnum* Z_Construct_UEnum_CombatReadyAISandbox_EAICombatState();
COMBATREADYAISANDBOX_API UEnum* Z_Construct_UEnum_CombatReadyAISandbox_EAIWeaponAction();
UPackage* Z_Construct_UPackage__Script_CombatReadyAISandbox();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EAICombatState ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAICombatState;
static UEnum* EAICombatState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAICombatState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAICombatState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CombatReadyAISandbox_EAICombatState, (UObject*)Z_Construct_UPackage__Script_CombatReadyAISandbox(), TEXT("EAICombatState"));
	}
	return Z_Registration_Info_UEnum_EAICombatState.OuterSingleton;
}
template<> COMBATREADYAISANDBOX_NON_ATTRIBUTED_API UEnum* StaticEnum<EAICombatState>()
{
	return EAICombatState_StaticEnum();
}
struct Z_Construct_UEnum_CombatReadyAISandbox_EAICombatState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Alerted.Name", "EAICombatState::Alerted" },
		{ "BlueprintType", "true" },
		{ "Engaged.Name", "EAICombatState::Engaged" },
		{ "ModuleRelativePath", "Public/AICombatTypes.h" },
		{ "Patrol.Name", "EAICombatState::Patrol" },
		{ "Retreating.Name", "EAICombatState::Retreating" },
		{ "Searching.Name", "EAICombatState::Searching" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAICombatState::Patrol", (int64)EAICombatState::Patrol },
		{ "EAICombatState::Alerted", (int64)EAICombatState::Alerted },
		{ "EAICombatState::Engaged", (int64)EAICombatState::Engaged },
		{ "EAICombatState::Searching", (int64)EAICombatState::Searching },
		{ "EAICombatState::Retreating", (int64)EAICombatState::Retreating },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_CombatReadyAISandbox_EAICombatState_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CombatReadyAISandbox_EAICombatState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CombatReadyAISandbox,
	nullptr,
	"EAICombatState",
	"EAICombatState",
	Z_Construct_UEnum_CombatReadyAISandbox_EAICombatState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CombatReadyAISandbox_EAICombatState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CombatReadyAISandbox_EAICombatState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CombatReadyAISandbox_EAICombatState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CombatReadyAISandbox_EAICombatState()
{
	if (!Z_Registration_Info_UEnum_EAICombatState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAICombatState.InnerSingleton, Z_Construct_UEnum_CombatReadyAISandbox_EAICombatState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAICombatState.InnerSingleton;
}
// ********** End Enum EAICombatState **************************************************************

// ********** Begin Enum EAICombatAction ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAICombatAction;
static UEnum* EAICombatAction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAICombatAction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAICombatAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CombatReadyAISandbox_EAICombatAction, (UObject*)Z_Construct_UPackage__Script_CombatReadyAISandbox(), TEXT("EAICombatAction"));
	}
	return Z_Registration_Info_UEnum_EAICombatAction.OuterSingleton;
}
template<> COMBATREADYAISANDBOX_NON_ATTRIBUTED_API UEnum* StaticEnum<EAICombatAction>()
{
	return EAICombatAction_StaticEnum();
}
struct Z_Construct_UEnum_CombatReadyAISandbox_EAICombatAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Backpedal.DisplayName", "Backpedal" },
		{ "Backpedal.Name", "EAICombatAction::Backpedal" },
		{ "BlueprintType", "true" },
		{ "CloseDistance.DisplayName", "CloseDistance" },
		{ "CloseDistance.Name", "EAICombatAction::CloseDistance" },
		{ "Dash.DisplayName", "Dash" },
		{ "Dash.Name", "EAICombatAction::Dash" },
		{ "ModuleRelativePath", "Public/AICombatTypes.h" },
		{ "Reposition.DisplayName", "Reposition" },
		{ "Reposition.Name", "EAICombatAction::Reposition" },
		{ "Retreat.DisplayName", "Retreat" },
		{ "Retreat.Name", "EAICombatAction::Retreat" },
		{ "SeekCover.DisplayName", "SeekCover" },
		{ "SeekCover.Name", "EAICombatAction::SeekCover" },
		{ "Strafe.DisplayName", "Strafe" },
		{ "Strafe.Name", "EAICombatAction::Strafe" },
		{ "Wait.DisplayName", "Wait" },
		{ "Wait.Name", "EAICombatAction::Wait" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAICombatAction::CloseDistance", (int64)EAICombatAction::CloseDistance },
		{ "EAICombatAction::Backpedal", (int64)EAICombatAction::Backpedal },
		{ "EAICombatAction::Strafe", (int64)EAICombatAction::Strafe },
		{ "EAICombatAction::Reposition", (int64)EAICombatAction::Reposition },
		{ "EAICombatAction::Retreat", (int64)EAICombatAction::Retreat },
		{ "EAICombatAction::Dash", (int64)EAICombatAction::Dash },
		{ "EAICombatAction::SeekCover", (int64)EAICombatAction::SeekCover },
		{ "EAICombatAction::Wait", (int64)EAICombatAction::Wait },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_CombatReadyAISandbox_EAICombatAction_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CombatReadyAISandbox_EAICombatAction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CombatReadyAISandbox,
	nullptr,
	"EAICombatAction",
	"EAICombatAction",
	Z_Construct_UEnum_CombatReadyAISandbox_EAICombatAction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CombatReadyAISandbox_EAICombatAction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CombatReadyAISandbox_EAICombatAction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CombatReadyAISandbox_EAICombatAction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CombatReadyAISandbox_EAICombatAction()
{
	if (!Z_Registration_Info_UEnum_EAICombatAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAICombatAction.InnerSingleton, Z_Construct_UEnum_CombatReadyAISandbox_EAICombatAction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAICombatAction.InnerSingleton;
}
// ********** End Enum EAICombatAction *************************************************************

// ********** Begin Enum EAIWeaponAction ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAIWeaponAction;
static UEnum* EAIWeaponAction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAIWeaponAction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAIWeaponAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CombatReadyAISandbox_EAIWeaponAction, (UObject*)Z_Construct_UPackage__Script_CombatReadyAISandbox(), TEXT("EAIWeaponAction"));
	}
	return Z_Registration_Info_UEnum_EAIWeaponAction.OuterSingleton;
}
template<> COMBATREADYAISANDBOX_NON_ATTRIBUTED_API UEnum* StaticEnum<EAIWeaponAction>()
{
	return EAIWeaponAction_StaticEnum();
}
struct Z_Construct_UEnum_CombatReadyAISandbox_EAIWeaponAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Fire.DisplayName", "Fire" },
		{ "Fire.Name", "EAIWeaponAction::Fire" },
		{ "ModuleRelativePath", "Public/AICombatTypes.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EAIWeaponAction::None" },
		{ "Reload.DisplayName", "Reload" },
		{ "Reload.Name", "EAIWeaponAction::Reload" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAIWeaponAction::None", (int64)EAIWeaponAction::None },
		{ "EAIWeaponAction::Fire", (int64)EAIWeaponAction::Fire },
		{ "EAIWeaponAction::Reload", (int64)EAIWeaponAction::Reload },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_CombatReadyAISandbox_EAIWeaponAction_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CombatReadyAISandbox_EAIWeaponAction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CombatReadyAISandbox,
	nullptr,
	"EAIWeaponAction",
	"EAIWeaponAction",
	Z_Construct_UEnum_CombatReadyAISandbox_EAIWeaponAction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CombatReadyAISandbox_EAIWeaponAction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CombatReadyAISandbox_EAIWeaponAction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CombatReadyAISandbox_EAIWeaponAction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CombatReadyAISandbox_EAIWeaponAction()
{
	if (!Z_Registration_Info_UEnum_EAIWeaponAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAIWeaponAction.InnerSingleton, Z_Construct_UEnum_CombatReadyAISandbox_EAIWeaponAction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAIWeaponAction.InnerSingleton;
}
// ********** End Enum EAIWeaponAction *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_AICombatTypes_h__Script_CombatReadyAISandbox_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAICombatState_StaticEnum, TEXT("EAICombatState"), &Z_Registration_Info_UEnum_EAICombatState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2184826638U) },
		{ EAICombatAction_StaticEnum, TEXT("EAICombatAction"), &Z_Registration_Info_UEnum_EAICombatAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 357110670U) },
		{ EAIWeaponAction_StaticEnum, TEXT("EAIWeaponAction"), &Z_Registration_Info_UEnum_EAIWeaponAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3941271516U) },
	};
}; // Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_AICombatTypes_h__Script_CombatReadyAISandbox_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_AICombatTypes_h__Script_CombatReadyAISandbox_219469228{
	TEXT("/Script/CombatReadyAISandbox"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_AICombatTypes_h__Script_CombatReadyAISandbox_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_AICombatTypes_h__Script_CombatReadyAISandbox_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
