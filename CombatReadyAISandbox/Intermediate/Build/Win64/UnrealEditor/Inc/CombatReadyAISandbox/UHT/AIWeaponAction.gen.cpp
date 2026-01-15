// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIWeaponAction.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAIWeaponAction() {}

// ********** Begin Cross Module References ********************************************************
COMBATREADYAISANDBOX_API UEnum* Z_Construct_UEnum_CombatReadyAISandbox_EAIWeaponState();
UPackage* Z_Construct_UPackage__Script_CombatReadyAISandbox();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EAIWeaponState ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAIWeaponState;
static UEnum* EAIWeaponState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAIWeaponState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAIWeaponState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CombatReadyAISandbox_EAIWeaponState, (UObject*)Z_Construct_UPackage__Script_CombatReadyAISandbox(), TEXT("EAIWeaponState"));
	}
	return Z_Registration_Info_UEnum_EAIWeaponState.OuterSingleton;
}
template<> COMBATREADYAISANDBOX_NON_ATTRIBUTED_API UEnum* StaticEnum<EAIWeaponState>()
{
	return EAIWeaponState_StaticEnum();
}
struct Z_Construct_UEnum_CombatReadyAISandbox_EAIWeaponState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Fire.Name", "EAIWeaponState::Fire" },
		{ "HoldFire.Name", "EAIWeaponState::HoldFire" },
		{ "ModuleRelativePath", "Public/AIWeaponAction.h" },
		{ "None.Name", "EAIWeaponState::None" },
		{ "Reload.Name", "EAIWeaponState::Reload" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAIWeaponState::None", (int64)EAIWeaponState::None },
		{ "EAIWeaponState::Fire", (int64)EAIWeaponState::Fire },
		{ "EAIWeaponState::Reload", (int64)EAIWeaponState::Reload },
		{ "EAIWeaponState::HoldFire", (int64)EAIWeaponState::HoldFire },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_CombatReadyAISandbox_EAIWeaponState_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CombatReadyAISandbox_EAIWeaponState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CombatReadyAISandbox,
	nullptr,
	"EAIWeaponState",
	"EAIWeaponState",
	Z_Construct_UEnum_CombatReadyAISandbox_EAIWeaponState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CombatReadyAISandbox_EAIWeaponState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CombatReadyAISandbox_EAIWeaponState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CombatReadyAISandbox_EAIWeaponState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CombatReadyAISandbox_EAIWeaponState()
{
	if (!Z_Registration_Info_UEnum_EAIWeaponState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAIWeaponState.InnerSingleton, Z_Construct_UEnum_CombatReadyAISandbox_EAIWeaponState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAIWeaponState.InnerSingleton;
}
// ********** End Enum EAIWeaponState **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_AIWeaponAction_h__Script_CombatReadyAISandbox_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAIWeaponState_StaticEnum, TEXT("EAIWeaponState"), &Z_Registration_Info_UEnum_EAIWeaponState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 939575258U) },
	};
}; // Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_AIWeaponAction_h__Script_CombatReadyAISandbox_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_AIWeaponAction_h__Script_CombatReadyAISandbox_3560951129{
	TEXT("/Script/CombatReadyAISandbox"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_AIWeaponAction_h__Script_CombatReadyAISandbox_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_AIWeaponAction_h__Script_CombatReadyAISandbox_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
