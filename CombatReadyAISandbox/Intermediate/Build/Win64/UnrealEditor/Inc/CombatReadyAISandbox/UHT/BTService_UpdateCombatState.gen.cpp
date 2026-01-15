// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BTService_UpdateCombatState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBTService_UpdateCombatState() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTService();
COMBATREADYAISANDBOX_API UClass* Z_Construct_UClass_UBTService_UpdateCombatState();
COMBATREADYAISANDBOX_API UClass* Z_Construct_UClass_UBTService_UpdateCombatState_NoRegister();
UPackage* Z_Construct_UPackage__Script_CombatReadyAISandbox();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBTService_UpdateCombatState *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBTService_UpdateCombatState;
UClass* UBTService_UpdateCombatState::GetPrivateStaticClass()
{
	using TClass = UBTService_UpdateCombatState;
	if (!Z_Registration_Info_UClass_UBTService_UpdateCombatState.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BTService_UpdateCombatState"),
			Z_Registration_Info_UClass_UBTService_UpdateCombatState.InnerSingleton,
			StaticRegisterNativesUBTService_UpdateCombatState,
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
	return Z_Registration_Info_UClass_UBTService_UpdateCombatState.InnerSingleton;
}
UClass* Z_Construct_UClass_UBTService_UpdateCombatState_NoRegister()
{
	return UBTService_UpdateCombatState::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBTService_UpdateCombatState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTService_UpdateCombatState.h" },
		{ "ModuleRelativePath", "Public/BTService_UpdateCombatState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RetreatHealthThreshold_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tuning\n" },
#endif
		{ "ModuleRelativePath", "Public/BTService_UpdateCombatState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tuning" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlertedGraceSeconds_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/BTService_UpdateCombatState.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBTService_UpdateCombatState constinit property declarations *************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RetreatHealthThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AlertedGraceSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBTService_UpdateCombatState constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_UpdateCombatState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBTService_UpdateCombatState_Statics

// ********** Begin Class UBTService_UpdateCombatState Property Definitions ************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTService_UpdateCombatState_Statics::NewProp_RetreatHealthThreshold = { "RetreatHealthThreshold", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_UpdateCombatState, RetreatHealthThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RetreatHealthThreshold_MetaData), NewProp_RetreatHealthThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTService_UpdateCombatState_Statics::NewProp_AlertedGraceSeconds = { "AlertedGraceSeconds", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_UpdateCombatState, AlertedGraceSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlertedGraceSeconds_MetaData), NewProp_AlertedGraceSeconds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_UpdateCombatState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_UpdateCombatState_Statics::NewProp_RetreatHealthThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_UpdateCombatState_Statics::NewProp_AlertedGraceSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_UpdateCombatState_Statics::PropPointers) < 2048);
// ********** End Class UBTService_UpdateCombatState Property Definitions **************************
UObject* (*const Z_Construct_UClass_UBTService_UpdateCombatState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService,
	(UObject* (*)())Z_Construct_UPackage__Script_CombatReadyAISandbox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_UpdateCombatState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_UpdateCombatState_Statics::ClassParams = {
	&UBTService_UpdateCombatState::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTService_UpdateCombatState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_UpdateCombatState_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_UpdateCombatState_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTService_UpdateCombatState_Statics::Class_MetaDataParams)
};
void UBTService_UpdateCombatState::StaticRegisterNativesUBTService_UpdateCombatState()
{
}
UClass* Z_Construct_UClass_UBTService_UpdateCombatState()
{
	if (!Z_Registration_Info_UClass_UBTService_UpdateCombatState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_UpdateCombatState.OuterSingleton, Z_Construct_UClass_UBTService_UpdateCombatState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTService_UpdateCombatState.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBTService_UpdateCombatState);
UBTService_UpdateCombatState::~UBTService_UpdateCombatState() {}
// ********** End Class UBTService_UpdateCombatState ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTService_UpdateCombatState_h__Script_CombatReadyAISandbox_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_UpdateCombatState, UBTService_UpdateCombatState::StaticClass, TEXT("UBTService_UpdateCombatState"), &Z_Registration_Info_UClass_UBTService_UpdateCombatState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_UpdateCombatState), 1495297049U) },
	};
}; // Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTService_UpdateCombatState_h__Script_CombatReadyAISandbox_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTService_UpdateCombatState_h__Script_CombatReadyAISandbox_1111753745{
	TEXT("/Script/CombatReadyAISandbox"),
	Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTService_UpdateCombatState_h__Script_CombatReadyAISandbox_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTService_UpdateCombatState_h__Script_CombatReadyAISandbox_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
