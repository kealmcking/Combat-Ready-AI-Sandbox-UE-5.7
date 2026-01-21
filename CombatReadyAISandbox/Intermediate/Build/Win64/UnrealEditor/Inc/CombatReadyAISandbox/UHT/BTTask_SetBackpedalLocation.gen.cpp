// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BTTask_SetBackpedalLocation.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBTTask_SetBackpedalLocation() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
COMBATREADYAISANDBOX_API UClass* Z_Construct_UClass_UBTTask_SetBackpedalLocation();
COMBATREADYAISANDBOX_API UClass* Z_Construct_UClass_UBTTask_SetBackpedalLocation_NoRegister();
UPackage* Z_Construct_UPackage__Script_CombatReadyAISandbox();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBTTask_SetBackpedalLocation *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBTTask_SetBackpedalLocation;
UClass* UBTTask_SetBackpedalLocation::GetPrivateStaticClass()
{
	using TClass = UBTTask_SetBackpedalLocation;
	if (!Z_Registration_Info_UClass_UBTTask_SetBackpedalLocation.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BTTask_SetBackpedalLocation"),
			Z_Registration_Info_UClass_UBTTask_SetBackpedalLocation.InnerSingleton,
			StaticRegisterNativesUBTTask_SetBackpedalLocation,
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
	return Z_Registration_Info_UClass_UBTTask_SetBackpedalLocation.InnerSingleton;
}
UClass* Z_Construct_UClass_UBTTask_SetBackpedalLocation_NoRegister()
{
	return UBTTask_SetBackpedalLocation::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBTTask_SetBackpedalLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTTask_SetBackpedalLocation.h" },
		{ "ModuleRelativePath", "Public/BTTask_SetBackpedalLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackpedalDistance_MetaData[] = {
		{ "Category", "Tuning" },
		{ "ModuleRelativePath", "Public/BTTask_SetBackpedalLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SideJitter_MetaData[] = {
		{ "Category", "Tuning" },
		{ "ModuleRelativePath", "Public/BTTask_SetBackpedalLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectRadius_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/BTTask_SetBackpedalLocation.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBTTask_SetBackpedalLocation constinit property declarations *************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BackpedalDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SideJitter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBTTask_SetBackpedalLocation constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_SetBackpedalLocation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBTTask_SetBackpedalLocation_Statics

// ********** Begin Class UBTTask_SetBackpedalLocation Property Definitions ************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_SetBackpedalLocation_Statics::NewProp_BackpedalDistance = { "BackpedalDistance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_SetBackpedalLocation, BackpedalDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackpedalDistance_MetaData), NewProp_BackpedalDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_SetBackpedalLocation_Statics::NewProp_SideJitter = { "SideJitter", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_SetBackpedalLocation, SideJitter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SideJitter_MetaData), NewProp_SideJitter_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_SetBackpedalLocation_Statics::NewProp_ProjectRadius = { "ProjectRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_SetBackpedalLocation, ProjectRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectRadius_MetaData), NewProp_ProjectRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_SetBackpedalLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetBackpedalLocation_Statics::NewProp_BackpedalDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetBackpedalLocation_Statics::NewProp_SideJitter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetBackpedalLocation_Statics::NewProp_ProjectRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetBackpedalLocation_Statics::PropPointers) < 2048);
// ********** End Class UBTTask_SetBackpedalLocation Property Definitions **************************
UObject* (*const Z_Construct_UClass_UBTTask_SetBackpedalLocation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_CombatReadyAISandbox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetBackpedalLocation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_SetBackpedalLocation_Statics::ClassParams = {
	&UBTTask_SetBackpedalLocation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_SetBackpedalLocation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetBackpedalLocation_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetBackpedalLocation_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_SetBackpedalLocation_Statics::Class_MetaDataParams)
};
void UBTTask_SetBackpedalLocation::StaticRegisterNativesUBTTask_SetBackpedalLocation()
{
}
UClass* Z_Construct_UClass_UBTTask_SetBackpedalLocation()
{
	if (!Z_Registration_Info_UClass_UBTTask_SetBackpedalLocation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_SetBackpedalLocation.OuterSingleton, Z_Construct_UClass_UBTTask_SetBackpedalLocation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_SetBackpedalLocation.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBTTask_SetBackpedalLocation);
UBTTask_SetBackpedalLocation::~UBTTask_SetBackpedalLocation() {}
// ********** End Class UBTTask_SetBackpedalLocation ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTTask_SetBackpedalLocation_h__Script_CombatReadyAISandbox_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_SetBackpedalLocation, UBTTask_SetBackpedalLocation::StaticClass, TEXT("UBTTask_SetBackpedalLocation"), &Z_Registration_Info_UClass_UBTTask_SetBackpedalLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_SetBackpedalLocation), 4207317952U) },
	};
}; // Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTTask_SetBackpedalLocation_h__Script_CombatReadyAISandbox_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTTask_SetBackpedalLocation_h__Script_CombatReadyAISandbox_1954915290{
	TEXT("/Script/CombatReadyAISandbox"),
	Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTTask_SetBackpedalLocation_h__Script_CombatReadyAISandbox_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTTask_SetBackpedalLocation_h__Script_CombatReadyAISandbox_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
