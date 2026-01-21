// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BTService_SelectMoveAction.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBTService_SelectMoveAction() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTService();
COMBATREADYAISANDBOX_API UClass* Z_Construct_UClass_UBTService_SelectMoveAction();
COMBATREADYAISANDBOX_API UClass* Z_Construct_UClass_UBTService_SelectMoveAction_NoRegister();
UPackage* Z_Construct_UPackage__Script_CombatReadyAISandbox();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBTService_SelectMoveAction **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBTService_SelectMoveAction;
UClass* UBTService_SelectMoveAction::GetPrivateStaticClass()
{
	using TClass = UBTService_SelectMoveAction;
	if (!Z_Registration_Info_UClass_UBTService_SelectMoveAction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BTService_SelectMoveAction"),
			Z_Registration_Info_UClass_UBTService_SelectMoveAction.InnerSingleton,
			StaticRegisterNativesUBTService_SelectMoveAction,
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
	return Z_Registration_Info_UClass_UBTService_SelectMoveAction.InnerSingleton;
}
UClass* Z_Construct_UClass_UBTService_SelectMoveAction_NoRegister()
{
	return UBTService_SelectMoveAction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBTService_SelectMoveAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTService_SelectMoveAction.h" },
		{ "ModuleRelativePath", "Public/BTService_SelectMoveAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecisionLockSeconds_MetaData[] = {
		{ "Category", "Tuning" },
		{ "ModuleRelativePath", "Public/BTService_SelectMoveAction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBTService_SelectMoveAction constinit property declarations **************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DecisionLockSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBTService_SelectMoveAction constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_SelectMoveAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBTService_SelectMoveAction_Statics

// ********** Begin Class UBTService_SelectMoveAction Property Definitions *************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTService_SelectMoveAction_Statics::NewProp_DecisionLockSeconds = { "DecisionLockSeconds", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_SelectMoveAction, DecisionLockSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecisionLockSeconds_MetaData), NewProp_DecisionLockSeconds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_SelectMoveAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_SelectMoveAction_Statics::NewProp_DecisionLockSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_SelectMoveAction_Statics::PropPointers) < 2048);
// ********** End Class UBTService_SelectMoveAction Property Definitions ***************************
UObject* (*const Z_Construct_UClass_UBTService_SelectMoveAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService,
	(UObject* (*)())Z_Construct_UPackage__Script_CombatReadyAISandbox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_SelectMoveAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_SelectMoveAction_Statics::ClassParams = {
	&UBTService_SelectMoveAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTService_SelectMoveAction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_SelectMoveAction_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_SelectMoveAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTService_SelectMoveAction_Statics::Class_MetaDataParams)
};
void UBTService_SelectMoveAction::StaticRegisterNativesUBTService_SelectMoveAction()
{
}
UClass* Z_Construct_UClass_UBTService_SelectMoveAction()
{
	if (!Z_Registration_Info_UClass_UBTService_SelectMoveAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_SelectMoveAction.OuterSingleton, Z_Construct_UClass_UBTService_SelectMoveAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTService_SelectMoveAction.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBTService_SelectMoveAction);
UBTService_SelectMoveAction::~UBTService_SelectMoveAction() {}
// ********** End Class UBTService_SelectMoveAction ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTService_SelectMoveAction_h__Script_CombatReadyAISandbox_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_SelectMoveAction, UBTService_SelectMoveAction::StaticClass, TEXT("UBTService_SelectMoveAction"), &Z_Registration_Info_UClass_UBTService_SelectMoveAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_SelectMoveAction), 4225351603U) },
	};
}; // Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTService_SelectMoveAction_h__Script_CombatReadyAISandbox_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTService_SelectMoveAction_h__Script_CombatReadyAISandbox_2222394635{
	TEXT("/Script/CombatReadyAISandbox"),
	Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTService_SelectMoveAction_h__Script_CombatReadyAISandbox_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTService_SelectMoveAction_h__Script_CombatReadyAISandbox_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
