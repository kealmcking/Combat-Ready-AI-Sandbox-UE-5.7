// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BTTask_SetCoverTravelFlags.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBTTask_SetCoverTravelFlags() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
COMBATREADYAISANDBOX_API UClass* Z_Construct_UClass_UBTTask_SetCoverTravelFlags();
COMBATREADYAISANDBOX_API UClass* Z_Construct_UClass_UBTTask_SetCoverTravelFlags_NoRegister();
UPackage* Z_Construct_UPackage__Script_CombatReadyAISandbox();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBTTask_SetCoverTravelFlags **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBTTask_SetCoverTravelFlags;
UClass* UBTTask_SetCoverTravelFlags::GetPrivateStaticClass()
{
	using TClass = UBTTask_SetCoverTravelFlags;
	if (!Z_Registration_Info_UClass_UBTTask_SetCoverTravelFlags.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BTTask_SetCoverTravelFlags"),
			Z_Registration_Info_UClass_UBTTask_SetCoverTravelFlags.InnerSingleton,
			StaticRegisterNativesUBTTask_SetCoverTravelFlags,
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
	return Z_Registration_Info_UClass_UBTTask_SetCoverTravelFlags.InnerSingleton;
}
UClass* Z_Construct_UClass_UBTTask_SetCoverTravelFlags_NoRegister()
{
	return UBTTask_SetCoverTravelFlags::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBTTask_SetCoverTravelFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTTask_SetCoverTravelFlags.h" },
		{ "ModuleRelativePath", "Public/BTTask_SetCoverTravelFlags.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBTTask_SetCoverTravelFlags constinit property declarations **************
// ********** End Class UBTTask_SetCoverTravelFlags constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_SetCoverTravelFlags>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBTTask_SetCoverTravelFlags_Statics
UObject* (*const Z_Construct_UClass_UBTTask_SetCoverTravelFlags_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_CombatReadyAISandbox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetCoverTravelFlags_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_SetCoverTravelFlags_Statics::ClassParams = {
	&UBTTask_SetCoverTravelFlags::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetCoverTravelFlags_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_SetCoverTravelFlags_Statics::Class_MetaDataParams)
};
void UBTTask_SetCoverTravelFlags::StaticRegisterNativesUBTTask_SetCoverTravelFlags()
{
}
UClass* Z_Construct_UClass_UBTTask_SetCoverTravelFlags()
{
	if (!Z_Registration_Info_UClass_UBTTask_SetCoverTravelFlags.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_SetCoverTravelFlags.OuterSingleton, Z_Construct_UClass_UBTTask_SetCoverTravelFlags_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_SetCoverTravelFlags.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBTTask_SetCoverTravelFlags);
UBTTask_SetCoverTravelFlags::~UBTTask_SetCoverTravelFlags() {}
// ********** End Class UBTTask_SetCoverTravelFlags ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTTask_SetCoverTravelFlags_h__Script_CombatReadyAISandbox_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_SetCoverTravelFlags, UBTTask_SetCoverTravelFlags::StaticClass, TEXT("UBTTask_SetCoverTravelFlags"), &Z_Registration_Info_UClass_UBTTask_SetCoverTravelFlags, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_SetCoverTravelFlags), 1003450685U) },
	};
}; // Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTTask_SetCoverTravelFlags_h__Script_CombatReadyAISandbox_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTTask_SetCoverTravelFlags_h__Script_CombatReadyAISandbox_1078081972{
	TEXT("/Script/CombatReadyAISandbox"),
	Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTTask_SetCoverTravelFlags_h__Script_CombatReadyAISandbox_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTTask_SetCoverTravelFlags_h__Script_CombatReadyAISandbox_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
