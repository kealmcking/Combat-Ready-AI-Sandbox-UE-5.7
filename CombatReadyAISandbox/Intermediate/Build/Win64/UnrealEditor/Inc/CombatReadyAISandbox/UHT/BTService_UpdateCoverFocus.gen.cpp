// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BTService_UpdateCoverFocus.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBTService_UpdateCoverFocus() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTService();
COMBATREADYAISANDBOX_API UClass* Z_Construct_UClass_UBTService_UpdateCoverFocus();
COMBATREADYAISANDBOX_API UClass* Z_Construct_UClass_UBTService_UpdateCoverFocus_NoRegister();
UPackage* Z_Construct_UPackage__Script_CombatReadyAISandbox();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBTService_UpdateCoverFocus **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBTService_UpdateCoverFocus;
UClass* UBTService_UpdateCoverFocus::GetPrivateStaticClass()
{
	using TClass = UBTService_UpdateCoverFocus;
	if (!Z_Registration_Info_UClass_UBTService_UpdateCoverFocus.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BTService_UpdateCoverFocus"),
			Z_Registration_Info_UClass_UBTService_UpdateCoverFocus.InnerSingleton,
			StaticRegisterNativesUBTService_UpdateCoverFocus,
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
	return Z_Registration_Info_UClass_UBTService_UpdateCoverFocus.InnerSingleton;
}
UClass* Z_Construct_UClass_UBTService_UpdateCoverFocus_NoRegister()
{
	return UBTService_UpdateCoverFocus::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBTService_UpdateCoverFocus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTService_UpdateCoverFocus.h" },
		{ "ModuleRelativePath", "Public/BTService_UpdateCoverFocus.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBTService_UpdateCoverFocus constinit property declarations **************
// ********** End Class UBTService_UpdateCoverFocus constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_UpdateCoverFocus>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBTService_UpdateCoverFocus_Statics
UObject* (*const Z_Construct_UClass_UBTService_UpdateCoverFocus_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService,
	(UObject* (*)())Z_Construct_UPackage__Script_CombatReadyAISandbox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_UpdateCoverFocus_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_UpdateCoverFocus_Statics::ClassParams = {
	&UBTService_UpdateCoverFocus::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_UpdateCoverFocus_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTService_UpdateCoverFocus_Statics::Class_MetaDataParams)
};
void UBTService_UpdateCoverFocus::StaticRegisterNativesUBTService_UpdateCoverFocus()
{
}
UClass* Z_Construct_UClass_UBTService_UpdateCoverFocus()
{
	if (!Z_Registration_Info_UClass_UBTService_UpdateCoverFocus.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_UpdateCoverFocus.OuterSingleton, Z_Construct_UClass_UBTService_UpdateCoverFocus_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTService_UpdateCoverFocus.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBTService_UpdateCoverFocus);
UBTService_UpdateCoverFocus::~UBTService_UpdateCoverFocus() {}
// ********** End Class UBTService_UpdateCoverFocus ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTService_UpdateCoverFocus_h__Script_CombatReadyAISandbox_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_UpdateCoverFocus, UBTService_UpdateCoverFocus::StaticClass, TEXT("UBTService_UpdateCoverFocus"), &Z_Registration_Info_UClass_UBTService_UpdateCoverFocus, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_UpdateCoverFocus), 1660409399U) },
	};
}; // Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTService_UpdateCoverFocus_h__Script_CombatReadyAISandbox_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTService_UpdateCoverFocus_h__Script_CombatReadyAISandbox_1218926577{
	TEXT("/Script/CombatReadyAISandbox"),
	Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTService_UpdateCoverFocus_h__Script_CombatReadyAISandbox_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTService_UpdateCoverFocus_h__Script_CombatReadyAISandbox_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
