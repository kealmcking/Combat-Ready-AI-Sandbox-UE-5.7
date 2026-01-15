// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AICombatAction.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAICombatAction() {}

// ********** Begin Cross Module References ********************************************************
COMBATREADYAISANDBOX_API UEnum* Z_Construct_UEnum_CombatReadyAISandbox_EAICombatAction();
UPackage* Z_Construct_UPackage__Script_CombatReadyAISandbox();
// ********** End Cross Module References **********************************************************

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
		{ "Backpedal.Comment", "// Target too far, close the distance\n" },
		{ "Backpedal.Name", "EAICombatAction::Backpedal" },
		{ "Backpedal.ToolTip", "Target too far, close the distance" },
		{ "BlueprintType", "true" },
		{ "CloseDistance.Name", "EAICombatAction::CloseDistance" },
		{ "Dash.Comment", "// Fall back to a safer position\n" },
		{ "Dash.Name", "EAICombatAction::Dash" },
		{ "Dash.ToolTip", "Fall back to a safer position" },
		{ "Fire.Comment", "// Pick a new firing spot\n" },
		{ "Fire.Name", "EAICombatAction::Fire" },
		{ "Fire.ToolTip", "Pick a new firing spot" },
		{ "ModuleRelativePath", "Public/AICombatAction.h" },
		{ "Reload.Comment", "// Quick burst movement to evade or reposition\n" },
		{ "Reload.Name", "EAICombatAction::Reload" },
		{ "Reload.ToolTip", "Quick burst movement to evade or reposition" },
		{ "Reposition.Comment", "// Maintain range, lateral movement\n" },
		{ "Reposition.Name", "EAICombatAction::Reposition" },
		{ "Reposition.ToolTip", "Maintain range, lateral movement" },
		{ "Retreat.Comment", "// Shoot or trigger firing behavior\n" },
		{ "Retreat.Name", "EAICombatAction::Retreat" },
		{ "Retreat.ToolTip", "Shoot or trigger firing behavior" },
		{ "SeekCover.Comment", "// Reload weapon\n" },
		{ "SeekCover.Name", "EAICombatAction::SeekCover" },
		{ "SeekCover.ToolTip", "Reload weapon" },
		{ "Strafe.Comment", "// Target too close, create space\n" },
		{ "Strafe.Name", "EAICombatAction::Strafe" },
		{ "Strafe.ToolTip", "Target too close, create space" },
		{ "Wait.Comment", "// Move to cover position\n" },
		{ "Wait.Name", "EAICombatAction::Wait" },
		{ "Wait.ToolTip", "Move to cover position" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAICombatAction::CloseDistance", (int64)EAICombatAction::CloseDistance },
		{ "EAICombatAction::Backpedal", (int64)EAICombatAction::Backpedal },
		{ "EAICombatAction::Strafe", (int64)EAICombatAction::Strafe },
		{ "EAICombatAction::Reposition", (int64)EAICombatAction::Reposition },
		{ "EAICombatAction::Fire", (int64)EAICombatAction::Fire },
		{ "EAICombatAction::Retreat", (int64)EAICombatAction::Retreat },
		{ "EAICombatAction::Dash", (int64)EAICombatAction::Dash },
		{ "EAICombatAction::Reload", (int64)EAICombatAction::Reload },
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

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_AICombatAction_h__Script_CombatReadyAISandbox_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAICombatAction_StaticEnum, TEXT("EAICombatAction"), &Z_Registration_Info_UEnum_EAICombatAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1399977751U) },
	};
}; // Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_AICombatAction_h__Script_CombatReadyAISandbox_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_AICombatAction_h__Script_CombatReadyAISandbox_1008105011{
	TEXT("/Script/CombatReadyAISandbox"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_AICombatAction_h__Script_CombatReadyAISandbox_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_AICombatAction_h__Script_CombatReadyAISandbox_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
