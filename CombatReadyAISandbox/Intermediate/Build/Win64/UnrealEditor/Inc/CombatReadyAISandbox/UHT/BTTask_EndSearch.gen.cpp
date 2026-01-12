// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BTTask_EndSearch.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBTTask_EndSearch() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
COMBATREADYAISANDBOX_API UClass* Z_Construct_UClass_UBTTask_EndSearch();
COMBATREADYAISANDBOX_API UClass* Z_Construct_UClass_UBTTask_EndSearch_NoRegister();
UPackage* Z_Construct_UPackage__Script_CombatReadyAISandbox();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBTTask_EndSearch ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBTTask_EndSearch;
UClass* UBTTask_EndSearch::GetPrivateStaticClass()
{
	using TClass = UBTTask_EndSearch;
	if (!Z_Registration_Info_UClass_UBTTask_EndSearch.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BTTask_EndSearch"),
			Z_Registration_Info_UClass_UBTTask_EndSearch.InnerSingleton,
			StaticRegisterNativesUBTTask_EndSearch,
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
	return Z_Registration_Info_UClass_UBTTask_EndSearch.InnerSingleton;
}
UClass* Z_Construct_UClass_UBTTask_EndSearch_NoRegister()
{
	return UBTTask_EndSearch::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBTTask_EndSearch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTTask_EndSearch.h" },
		{ "ModuleRelativePath", "Public/BTTask_EndSearch.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBTTask_EndSearch constinit property declarations ************************
// ********** End Class UBTTask_EndSearch constinit property declarations **************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_EndSearch>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBTTask_EndSearch_Statics
UObject* (*const Z_Construct_UClass_UBTTask_EndSearch_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_CombatReadyAISandbox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_EndSearch_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_EndSearch_Statics::ClassParams = {
	&UBTTask_EndSearch::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_EndSearch_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_EndSearch_Statics::Class_MetaDataParams)
};
void UBTTask_EndSearch::StaticRegisterNativesUBTTask_EndSearch()
{
}
UClass* Z_Construct_UClass_UBTTask_EndSearch()
{
	if (!Z_Registration_Info_UClass_UBTTask_EndSearch.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_EndSearch.OuterSingleton, Z_Construct_UClass_UBTTask_EndSearch_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_EndSearch.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBTTask_EndSearch);
UBTTask_EndSearch::~UBTTask_EndSearch() {}
// ********** End Class UBTTask_EndSearch **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTTask_EndSearch_h__Script_CombatReadyAISandbox_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_EndSearch, UBTTask_EndSearch::StaticClass, TEXT("UBTTask_EndSearch"), &Z_Registration_Info_UClass_UBTTask_EndSearch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_EndSearch), 1183290081U) },
	};
}; // Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTTask_EndSearch_h__Script_CombatReadyAISandbox_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTTask_EndSearch_h__Script_CombatReadyAISandbox_701929361{
	TEXT("/Script/CombatReadyAISandbox"),
	Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTTask_EndSearch_h__Script_CombatReadyAISandbox_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTTask_EndSearch_h__Script_CombatReadyAISandbox_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
