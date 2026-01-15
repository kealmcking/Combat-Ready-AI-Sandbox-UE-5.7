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
COMBATREADYAISANDBOX_API UEnum* Z_Construct_UEnum_CombatReadyAISandbox_EAICombatState();
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

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_AICombatTypes_h__Script_CombatReadyAISandbox_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAICombatState_StaticEnum, TEXT("EAICombatState"), &Z_Registration_Info_UEnum_EAICombatState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2184826638U) },
	};
}; // Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_AICombatTypes_h__Script_CombatReadyAISandbox_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_AICombatTypes_h__Script_CombatReadyAISandbox_1628197408{
	TEXT("/Script/CombatReadyAISandbox"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_AICombatTypes_h__Script_CombatReadyAISandbox_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_AICombatTypes_h__Script_CombatReadyAISandbox_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
