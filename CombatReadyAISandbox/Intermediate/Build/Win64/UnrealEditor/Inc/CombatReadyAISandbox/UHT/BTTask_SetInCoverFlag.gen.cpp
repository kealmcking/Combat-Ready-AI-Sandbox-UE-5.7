// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BTTask_SetInCoverFlag.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBTTask_SetInCoverFlag() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
COMBATREADYAISANDBOX_API UClass* Z_Construct_UClass_UBTTask_SetInCoverFlag();
COMBATREADYAISANDBOX_API UClass* Z_Construct_UClass_UBTTask_SetInCoverFlag_NoRegister();
UPackage* Z_Construct_UPackage__Script_CombatReadyAISandbox();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBTTask_SetInCoverFlag ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBTTask_SetInCoverFlag;
UClass* UBTTask_SetInCoverFlag::GetPrivateStaticClass()
{
	using TClass = UBTTask_SetInCoverFlag;
	if (!Z_Registration_Info_UClass_UBTTask_SetInCoverFlag.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BTTask_SetInCoverFlag"),
			Z_Registration_Info_UClass_UBTTask_SetInCoverFlag.InnerSingleton,
			StaticRegisterNativesUBTTask_SetInCoverFlag,
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
	return Z_Registration_Info_UClass_UBTTask_SetInCoverFlag.InnerSingleton;
}
UClass* Z_Construct_UClass_UBTTask_SetInCoverFlag_NoRegister()
{
	return UBTTask_SetInCoverFlag::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBTTask_SetInCoverFlag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTTask_SetInCoverFlag.h" },
		{ "ModuleRelativePath", "Public/BTTask_SetInCoverFlag.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBTTask_SetInCoverFlag constinit property declarations *******************
// ********** End Class UBTTask_SetInCoverFlag constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_SetInCoverFlag>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBTTask_SetInCoverFlag_Statics
UObject* (*const Z_Construct_UClass_UBTTask_SetInCoverFlag_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_CombatReadyAISandbox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetInCoverFlag_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_SetInCoverFlag_Statics::ClassParams = {
	&UBTTask_SetInCoverFlag::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetInCoverFlag_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_SetInCoverFlag_Statics::Class_MetaDataParams)
};
void UBTTask_SetInCoverFlag::StaticRegisterNativesUBTTask_SetInCoverFlag()
{
}
UClass* Z_Construct_UClass_UBTTask_SetInCoverFlag()
{
	if (!Z_Registration_Info_UClass_UBTTask_SetInCoverFlag.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_SetInCoverFlag.OuterSingleton, Z_Construct_UClass_UBTTask_SetInCoverFlag_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_SetInCoverFlag.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBTTask_SetInCoverFlag);
UBTTask_SetInCoverFlag::~UBTTask_SetInCoverFlag() {}
// ********** End Class UBTTask_SetInCoverFlag *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTTask_SetInCoverFlag_h__Script_CombatReadyAISandbox_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_SetInCoverFlag, UBTTask_SetInCoverFlag::StaticClass, TEXT("UBTTask_SetInCoverFlag"), &Z_Registration_Info_UClass_UBTTask_SetInCoverFlag, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_SetInCoverFlag), 3645713465U) },
	};
}; // Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTTask_SetInCoverFlag_h__Script_CombatReadyAISandbox_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTTask_SetInCoverFlag_h__Script_CombatReadyAISandbox_3948181422{
	TEXT("/Script/CombatReadyAISandbox"),
	Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTTask_SetInCoverFlag_h__Script_CombatReadyAISandbox_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTTask_SetInCoverFlag_h__Script_CombatReadyAISandbox_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
