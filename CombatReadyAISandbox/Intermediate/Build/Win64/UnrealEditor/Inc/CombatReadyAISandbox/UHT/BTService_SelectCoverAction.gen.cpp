// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BTService_SelectCoverAction.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBTService_SelectCoverAction() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTService();
COMBATREADYAISANDBOX_API UClass* Z_Construct_UClass_UBTService_SelectCoverAction();
COMBATREADYAISANDBOX_API UClass* Z_Construct_UClass_UBTService_SelectCoverAction_NoRegister();
UPackage* Z_Construct_UPackage__Script_CombatReadyAISandbox();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBTService_SelectCoverAction *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBTService_SelectCoverAction;
UClass* UBTService_SelectCoverAction::GetPrivateStaticClass()
{
	using TClass = UBTService_SelectCoverAction;
	if (!Z_Registration_Info_UClass_UBTService_SelectCoverAction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BTService_SelectCoverAction"),
			Z_Registration_Info_UClass_UBTService_SelectCoverAction.InnerSingleton,
			StaticRegisterNativesUBTService_SelectCoverAction,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UBTService_SelectCoverAction.InnerSingleton;
}
UClass* Z_Construct_UClass_UBTService_SelectCoverAction_NoRegister()
{
	return UBTService_SelectCoverAction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBTService_SelectCoverAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTService_SelectCoverAction.h" },
		{ "ModuleRelativePath", "Public/BTService_SelectCoverAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_TargetActor_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/BTService_SelectCoverAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_HasLOS_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/BTService_SelectCoverAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_InCover_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/BTService_SelectCoverAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MovingToCover_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/BTService_SelectCoverAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_CoverAction_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/BTService_SelectCoverAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_NextCoverActionTime_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/BTService_SelectCoverAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MinPeekCooldown_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/BTService_SelectCoverAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MaxPeekCooldown_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/BTService_SelectCoverAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_PeekDuration_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/BTService_SelectCoverAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_RepositionChance_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/BTService_SelectCoverAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MinRepositionCooldown_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/BTService_SelectCoverAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MaxRepositionCooldown_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/BTService_SelectCoverAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_PeekChance_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/BTService_SelectCoverAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_BreakHealthThreshold_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/BTService_SelectCoverAction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBTService_SelectCoverAction constinit property declarations *************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key_TargetActor;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key_HasLOS;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key_InCover;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key_MovingToCover;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key_CoverAction;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key_NextCoverActionTime;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key_MinPeekCooldown;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key_MaxPeekCooldown;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key_PeekDuration;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key_RepositionChance;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key_MinRepositionCooldown;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key_MaxRepositionCooldown;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key_PeekChance;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key_BreakHealthThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBTService_SelectCoverAction constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_SelectCoverAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBTService_SelectCoverAction_Statics

// ********** Begin Class UBTService_SelectCoverAction Property Definitions ************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBTService_SelectCoverAction_Statics::NewProp_Key_TargetActor = { "Key_TargetActor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_SelectCoverAction, Key_TargetActor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_TargetActor_MetaData), NewProp_Key_TargetActor_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBTService_SelectCoverAction_Statics::NewProp_Key_HasLOS = { "Key_HasLOS", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_SelectCoverAction, Key_HasLOS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_HasLOS_MetaData), NewProp_Key_HasLOS_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBTService_SelectCoverAction_Statics::NewProp_Key_InCover = { "Key_InCover", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_SelectCoverAction, Key_InCover), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_InCover_MetaData), NewProp_Key_InCover_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBTService_SelectCoverAction_Statics::NewProp_Key_MovingToCover = { "Key_MovingToCover", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_SelectCoverAction, Key_MovingToCover), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MovingToCover_MetaData), NewProp_Key_MovingToCover_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBTService_SelectCoverAction_Statics::NewProp_Key_CoverAction = { "Key_CoverAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_SelectCoverAction, Key_CoverAction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_CoverAction_MetaData), NewProp_Key_CoverAction_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBTService_SelectCoverAction_Statics::NewProp_Key_NextCoverActionTime = { "Key_NextCoverActionTime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_SelectCoverAction, Key_NextCoverActionTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_NextCoverActionTime_MetaData), NewProp_Key_NextCoverActionTime_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBTService_SelectCoverAction_Statics::NewProp_Key_MinPeekCooldown = { "Key_MinPeekCooldown", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_SelectCoverAction, Key_MinPeekCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MinPeekCooldown_MetaData), NewProp_Key_MinPeekCooldown_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBTService_SelectCoverAction_Statics::NewProp_Key_MaxPeekCooldown = { "Key_MaxPeekCooldown", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_SelectCoverAction, Key_MaxPeekCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MaxPeekCooldown_MetaData), NewProp_Key_MaxPeekCooldown_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBTService_SelectCoverAction_Statics::NewProp_Key_PeekDuration = { "Key_PeekDuration", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_SelectCoverAction, Key_PeekDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_PeekDuration_MetaData), NewProp_Key_PeekDuration_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBTService_SelectCoverAction_Statics::NewProp_Key_RepositionChance = { "Key_RepositionChance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_SelectCoverAction, Key_RepositionChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_RepositionChance_MetaData), NewProp_Key_RepositionChance_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBTService_SelectCoverAction_Statics::NewProp_Key_MinRepositionCooldown = { "Key_MinRepositionCooldown", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_SelectCoverAction, Key_MinRepositionCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MinRepositionCooldown_MetaData), NewProp_Key_MinRepositionCooldown_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBTService_SelectCoverAction_Statics::NewProp_Key_MaxRepositionCooldown = { "Key_MaxRepositionCooldown", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_SelectCoverAction, Key_MaxRepositionCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MaxRepositionCooldown_MetaData), NewProp_Key_MaxRepositionCooldown_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBTService_SelectCoverAction_Statics::NewProp_Key_PeekChance = { "Key_PeekChance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_SelectCoverAction, Key_PeekChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_PeekChance_MetaData), NewProp_Key_PeekChance_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBTService_SelectCoverAction_Statics::NewProp_Key_BreakHealthThreshold = { "Key_BreakHealthThreshold", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_SelectCoverAction, Key_BreakHealthThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_BreakHealthThreshold_MetaData), NewProp_Key_BreakHealthThreshold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_SelectCoverAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_SelectCoverAction_Statics::NewProp_Key_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_SelectCoverAction_Statics::NewProp_Key_HasLOS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_SelectCoverAction_Statics::NewProp_Key_InCover,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_SelectCoverAction_Statics::NewProp_Key_MovingToCover,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_SelectCoverAction_Statics::NewProp_Key_CoverAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_SelectCoverAction_Statics::NewProp_Key_NextCoverActionTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_SelectCoverAction_Statics::NewProp_Key_MinPeekCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_SelectCoverAction_Statics::NewProp_Key_MaxPeekCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_SelectCoverAction_Statics::NewProp_Key_PeekDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_SelectCoverAction_Statics::NewProp_Key_RepositionChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_SelectCoverAction_Statics::NewProp_Key_MinRepositionCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_SelectCoverAction_Statics::NewProp_Key_MaxRepositionCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_SelectCoverAction_Statics::NewProp_Key_PeekChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_SelectCoverAction_Statics::NewProp_Key_BreakHealthThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_SelectCoverAction_Statics::PropPointers) < 2048);
// ********** End Class UBTService_SelectCoverAction Property Definitions **************************
UObject* (*const Z_Construct_UClass_UBTService_SelectCoverAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService,
	(UObject* (*)())Z_Construct_UPackage__Script_CombatReadyAISandbox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_SelectCoverAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_SelectCoverAction_Statics::ClassParams = {
	&UBTService_SelectCoverAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTService_SelectCoverAction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_SelectCoverAction_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_SelectCoverAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTService_SelectCoverAction_Statics::Class_MetaDataParams)
};
void UBTService_SelectCoverAction::StaticRegisterNativesUBTService_SelectCoverAction()
{
}
UClass* Z_Construct_UClass_UBTService_SelectCoverAction()
{
	if (!Z_Registration_Info_UClass_UBTService_SelectCoverAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_SelectCoverAction.OuterSingleton, Z_Construct_UClass_UBTService_SelectCoverAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTService_SelectCoverAction.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBTService_SelectCoverAction);
UBTService_SelectCoverAction::~UBTService_SelectCoverAction() {}
// ********** End Class UBTService_SelectCoverAction ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTService_SelectCoverAction_h__Script_CombatReadyAISandbox_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_SelectCoverAction, UBTService_SelectCoverAction::StaticClass, TEXT("UBTService_SelectCoverAction"), &Z_Registration_Info_UClass_UBTService_SelectCoverAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_SelectCoverAction), 2988784214U) },
	};
}; // Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTService_SelectCoverAction_h__Script_CombatReadyAISandbox_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTService_SelectCoverAction_h__Script_CombatReadyAISandbox_3762129352{
	TEXT("/Script/CombatReadyAISandbox"),
	Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTService_SelectCoverAction_h__Script_CombatReadyAISandbox_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTService_SelectCoverAction_h__Script_CombatReadyAISandbox_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
