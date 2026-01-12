// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BTService_UpdateTargetMemory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBTService_UpdateTargetMemory() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTService();
COMBATREADYAISANDBOX_API UClass* Z_Construct_UClass_UBTService_UpdateTargetMemory();
COMBATREADYAISANDBOX_API UClass* Z_Construct_UClass_UBTService_UpdateTargetMemory_NoRegister();
UPackage* Z_Construct_UPackage__Script_CombatReadyAISandbox();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBTService_UpdateTargetMemory ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBTService_UpdateTargetMemory;
UClass* UBTService_UpdateTargetMemory::GetPrivateStaticClass()
{
	using TClass = UBTService_UpdateTargetMemory;
	if (!Z_Registration_Info_UClass_UBTService_UpdateTargetMemory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BTService_UpdateTargetMemory"),
			Z_Registration_Info_UClass_UBTService_UpdateTargetMemory.InnerSingleton,
			StaticRegisterNativesUBTService_UpdateTargetMemory,
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
	return Z_Registration_Info_UClass_UBTService_UpdateTargetMemory.InnerSingleton;
}
UClass* Z_Construct_UClass_UBTService_UpdateTargetMemory_NoRegister()
{
	return UBTService_UpdateTargetMemory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBTService_UpdateTargetMemory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTService_UpdateTargetMemory.h" },
		{ "ModuleRelativePath", "Public/BTService_UpdateTargetMemory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSearchTime_MetaData[] = {
		{ "Category", "Memory" },
		{ "ModuleRelativePath", "Public/BTService_UpdateTargetMemory.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBTService_UpdateTargetMemory constinit property declarations ************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSearchTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBTService_UpdateTargetMemory constinit property declarations **************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_UpdateTargetMemory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBTService_UpdateTargetMemory_Statics

// ********** Begin Class UBTService_UpdateTargetMemory Property Definitions ***********************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTService_UpdateTargetMemory_Statics::NewProp_MaxSearchTime = { "MaxSearchTime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_UpdateTargetMemory, MaxSearchTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSearchTime_MetaData), NewProp_MaxSearchTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_UpdateTargetMemory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_UpdateTargetMemory_Statics::NewProp_MaxSearchTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_UpdateTargetMemory_Statics::PropPointers) < 2048);
// ********** End Class UBTService_UpdateTargetMemory Property Definitions *************************
UObject* (*const Z_Construct_UClass_UBTService_UpdateTargetMemory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService,
	(UObject* (*)())Z_Construct_UPackage__Script_CombatReadyAISandbox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_UpdateTargetMemory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_UpdateTargetMemory_Statics::ClassParams = {
	&UBTService_UpdateTargetMemory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTService_UpdateTargetMemory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_UpdateTargetMemory_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_UpdateTargetMemory_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTService_UpdateTargetMemory_Statics::Class_MetaDataParams)
};
void UBTService_UpdateTargetMemory::StaticRegisterNativesUBTService_UpdateTargetMemory()
{
}
UClass* Z_Construct_UClass_UBTService_UpdateTargetMemory()
{
	if (!Z_Registration_Info_UClass_UBTService_UpdateTargetMemory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_UpdateTargetMemory.OuterSingleton, Z_Construct_UClass_UBTService_UpdateTargetMemory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTService_UpdateTargetMemory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBTService_UpdateTargetMemory);
UBTService_UpdateTargetMemory::~UBTService_UpdateTargetMemory() {}
// ********** End Class UBTService_UpdateTargetMemory **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTService_UpdateTargetMemory_h__Script_CombatReadyAISandbox_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_UpdateTargetMemory, UBTService_UpdateTargetMemory::StaticClass, TEXT("UBTService_UpdateTargetMemory"), &Z_Registration_Info_UClass_UBTService_UpdateTargetMemory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_UpdateTargetMemory), 1322724737U) },
	};
}; // Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTService_UpdateTargetMemory_h__Script_CombatReadyAISandbox_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTService_UpdateTargetMemory_h__Script_CombatReadyAISandbox_2985763079{
	TEXT("/Script/CombatReadyAISandbox"),
	Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTService_UpdateTargetMemory_h__Script_CombatReadyAISandbox_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTService_UpdateTargetMemory_h__Script_CombatReadyAISandbox_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
