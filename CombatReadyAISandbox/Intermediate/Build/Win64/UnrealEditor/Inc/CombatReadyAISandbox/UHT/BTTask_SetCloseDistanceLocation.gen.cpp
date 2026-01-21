// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BTTask_SetCloseDistanceLocation.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBTTask_SetCloseDistanceLocation() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
COMBATREADYAISANDBOX_API UClass* Z_Construct_UClass_UBTTask_SetCloseDistanceLocation();
COMBATREADYAISANDBOX_API UClass* Z_Construct_UClass_UBTTask_SetCloseDistanceLocation_NoRegister();
UPackage* Z_Construct_UPackage__Script_CombatReadyAISandbox();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBTTask_SetCloseDistanceLocation *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBTTask_SetCloseDistanceLocation;
UClass* UBTTask_SetCloseDistanceLocation::GetPrivateStaticClass()
{
	using TClass = UBTTask_SetCloseDistanceLocation;
	if (!Z_Registration_Info_UClass_UBTTask_SetCloseDistanceLocation.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BTTask_SetCloseDistanceLocation"),
			Z_Registration_Info_UClass_UBTTask_SetCloseDistanceLocation.InnerSingleton,
			StaticRegisterNativesUBTTask_SetCloseDistanceLocation,
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
	return Z_Registration_Info_UClass_UBTTask_SetCloseDistanceLocation.InnerSingleton;
}
UClass* Z_Construct_UClass_UBTTask_SetCloseDistanceLocation_NoRegister()
{
	return UBTTask_SetCloseDistanceLocation::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBTTask_SetCloseDistanceLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTTask_SetCloseDistanceLocation.h" },
		{ "ModuleRelativePath", "Public/BTTask_SetCloseDistanceLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SideJitter_MetaData[] = {
		{ "Category", "Tuning" },
		{ "ModuleRelativePath", "Public/BTTask_SetCloseDistanceLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeBias01_MetaData[] = {
		{ "Category", "Tuning" },
		{ "ModuleRelativePath", "Public/BTTask_SetCloseDistanceLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSeperationFromTarget_MetaData[] = {
		{ "Category", "Tuning" },
		{ "ModuleRelativePath", "Public/BTTask_SetCloseDistanceLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectRadius_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/BTTask_SetCloseDistanceLocation.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBTTask_SetCloseDistanceLocation constinit property declarations *********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SideJitter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RangeBias01;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSeperationFromTarget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBTTask_SetCloseDistanceLocation constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_SetCloseDistanceLocation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBTTask_SetCloseDistanceLocation_Statics

// ********** Begin Class UBTTask_SetCloseDistanceLocation Property Definitions ********************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_SetCloseDistanceLocation_Statics::NewProp_SideJitter = { "SideJitter", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_SetCloseDistanceLocation, SideJitter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SideJitter_MetaData), NewProp_SideJitter_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_SetCloseDistanceLocation_Statics::NewProp_RangeBias01 = { "RangeBias01", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_SetCloseDistanceLocation, RangeBias01), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeBias01_MetaData), NewProp_RangeBias01_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_SetCloseDistanceLocation_Statics::NewProp_MinSeperationFromTarget = { "MinSeperationFromTarget", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_SetCloseDistanceLocation, MinSeperationFromTarget), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSeperationFromTarget_MetaData), NewProp_MinSeperationFromTarget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_SetCloseDistanceLocation_Statics::NewProp_ProjectRadius = { "ProjectRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_SetCloseDistanceLocation, ProjectRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectRadius_MetaData), NewProp_ProjectRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_SetCloseDistanceLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetCloseDistanceLocation_Statics::NewProp_SideJitter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetCloseDistanceLocation_Statics::NewProp_RangeBias01,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetCloseDistanceLocation_Statics::NewProp_MinSeperationFromTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetCloseDistanceLocation_Statics::NewProp_ProjectRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetCloseDistanceLocation_Statics::PropPointers) < 2048);
// ********** End Class UBTTask_SetCloseDistanceLocation Property Definitions **********************
UObject* (*const Z_Construct_UClass_UBTTask_SetCloseDistanceLocation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_CombatReadyAISandbox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetCloseDistanceLocation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_SetCloseDistanceLocation_Statics::ClassParams = {
	&UBTTask_SetCloseDistanceLocation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_SetCloseDistanceLocation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetCloseDistanceLocation_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetCloseDistanceLocation_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_SetCloseDistanceLocation_Statics::Class_MetaDataParams)
};
void UBTTask_SetCloseDistanceLocation::StaticRegisterNativesUBTTask_SetCloseDistanceLocation()
{
}
UClass* Z_Construct_UClass_UBTTask_SetCloseDistanceLocation()
{
	if (!Z_Registration_Info_UClass_UBTTask_SetCloseDistanceLocation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_SetCloseDistanceLocation.OuterSingleton, Z_Construct_UClass_UBTTask_SetCloseDistanceLocation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_SetCloseDistanceLocation.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBTTask_SetCloseDistanceLocation);
UBTTask_SetCloseDistanceLocation::~UBTTask_SetCloseDistanceLocation() {}
// ********** End Class UBTTask_SetCloseDistanceLocation *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTTask_SetCloseDistanceLocation_h__Script_CombatReadyAISandbox_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_SetCloseDistanceLocation, UBTTask_SetCloseDistanceLocation::StaticClass, TEXT("UBTTask_SetCloseDistanceLocation"), &Z_Registration_Info_UClass_UBTTask_SetCloseDistanceLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_SetCloseDistanceLocation), 2977240340U) },
	};
}; // Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTTask_SetCloseDistanceLocation_h__Script_CombatReadyAISandbox_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTTask_SetCloseDistanceLocation_h__Script_CombatReadyAISandbox_641835811{
	TEXT("/Script/CombatReadyAISandbox"),
	Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTTask_SetCloseDistanceLocation_h__Script_CombatReadyAISandbox_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTTask_SetCloseDistanceLocation_h__Script_CombatReadyAISandbox_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
