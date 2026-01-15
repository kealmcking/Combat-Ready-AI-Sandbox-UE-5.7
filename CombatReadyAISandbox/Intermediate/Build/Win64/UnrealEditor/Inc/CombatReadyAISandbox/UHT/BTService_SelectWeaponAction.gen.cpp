// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BTService_SelectWeaponAction.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBTService_SelectWeaponAction() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTService();
COMBATREADYAISANDBOX_API UClass* Z_Construct_UClass_UBTService_SelectWeaponAction();
COMBATREADYAISANDBOX_API UClass* Z_Construct_UClass_UBTService_SelectWeaponAction_NoRegister();
UPackage* Z_Construct_UPackage__Script_CombatReadyAISandbox();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBTService_SelectWeaponAction ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBTService_SelectWeaponAction;
UClass* UBTService_SelectWeaponAction::GetPrivateStaticClass()
{
	using TClass = UBTService_SelectWeaponAction;
	if (!Z_Registration_Info_UClass_UBTService_SelectWeaponAction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BTService_SelectWeaponAction"),
			Z_Registration_Info_UClass_UBTService_SelectWeaponAction.InnerSingleton,
			StaticRegisterNativesUBTService_SelectWeaponAction,
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
	return Z_Registration_Info_UClass_UBTService_SelectWeaponAction.InnerSingleton;
}
UClass* Z_Construct_UClass_UBTService_SelectWeaponAction_NoRegister()
{
	return UBTService_SelectWeaponAction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBTService_SelectWeaponAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTService_SelectWeaponAction.h" },
		{ "ModuleRelativePath", "Public/BTService_SelectWeaponAction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBTService_SelectWeaponAction constinit property declarations ************
// ********** End Class UBTService_SelectWeaponAction constinit property declarations **************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_SelectWeaponAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBTService_SelectWeaponAction_Statics
UObject* (*const Z_Construct_UClass_UBTService_SelectWeaponAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService,
	(UObject* (*)())Z_Construct_UPackage__Script_CombatReadyAISandbox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_SelectWeaponAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_SelectWeaponAction_Statics::ClassParams = {
	&UBTService_SelectWeaponAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_SelectWeaponAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTService_SelectWeaponAction_Statics::Class_MetaDataParams)
};
void UBTService_SelectWeaponAction::StaticRegisterNativesUBTService_SelectWeaponAction()
{
}
UClass* Z_Construct_UClass_UBTService_SelectWeaponAction()
{
	if (!Z_Registration_Info_UClass_UBTService_SelectWeaponAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_SelectWeaponAction.OuterSingleton, Z_Construct_UClass_UBTService_SelectWeaponAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTService_SelectWeaponAction.OuterSingleton;
}
UBTService_SelectWeaponAction::UBTService_SelectWeaponAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBTService_SelectWeaponAction);
UBTService_SelectWeaponAction::~UBTService_SelectWeaponAction() {}
// ********** End Class UBTService_SelectWeaponAction **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTService_SelectWeaponAction_h__Script_CombatReadyAISandbox_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_SelectWeaponAction, UBTService_SelectWeaponAction::StaticClass, TEXT("UBTService_SelectWeaponAction"), &Z_Registration_Info_UClass_UBTService_SelectWeaponAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_SelectWeaponAction), 2771159996U) },
	};
}; // Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTService_SelectWeaponAction_h__Script_CombatReadyAISandbox_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTService_SelectWeaponAction_h__Script_CombatReadyAISandbox_3717433764{
	TEXT("/Script/CombatReadyAISandbox"),
	Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTService_SelectWeaponAction_h__Script_CombatReadyAISandbox_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTService_SelectWeaponAction_h__Script_CombatReadyAISandbox_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
