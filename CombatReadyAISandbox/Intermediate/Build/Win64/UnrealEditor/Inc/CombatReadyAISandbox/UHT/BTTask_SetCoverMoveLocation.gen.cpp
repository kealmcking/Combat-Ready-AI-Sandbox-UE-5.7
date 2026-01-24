// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BTTask_SetCoverMoveLocation.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBTTask_SetCoverMoveLocation() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
COMBATREADYAISANDBOX_API UClass* Z_Construct_UClass_UBTTask_SetCoverMoveLocation();
COMBATREADYAISANDBOX_API UClass* Z_Construct_UClass_UBTTask_SetCoverMoveLocation_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
UPackage* Z_Construct_UPackage__Script_CombatReadyAISandbox();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBTTask_SetCoverMoveLocation *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBTTask_SetCoverMoveLocation;
UClass* UBTTask_SetCoverMoveLocation::GetPrivateStaticClass()
{
	using TClass = UBTTask_SetCoverMoveLocation;
	if (!Z_Registration_Info_UClass_UBTTask_SetCoverMoveLocation.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BTTask_SetCoverMoveLocation"),
			Z_Registration_Info_UClass_UBTTask_SetCoverMoveLocation.InnerSingleton,
			StaticRegisterNativesUBTTask_SetCoverMoveLocation,
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
	return Z_Registration_Info_UClass_UBTTask_SetCoverMoveLocation.InnerSingleton;
}
UClass* Z_Construct_UClass_UBTTask_SetCoverMoveLocation_NoRegister()
{
	return UBTTask_SetCoverMoveLocation::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBTTask_SetCoverMoveLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTTask_SetCoverMoveLocation.h" },
		{ "ModuleRelativePath", "Public/BTTask_SetCoverMoveLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtraInset_MetaData[] = {
		{ "Category", "Cover" },
		{ "ModuleRelativePath", "Public/BTTask_SetCoverMoveLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinStandOff_MetaData[] = {
		{ "Category", "Cover" },
		{ "ModuleRelativePath", "Public/BTTask_SetCoverMoveLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectRadius_MetaData[] = {
		{ "Category", "Cover" },
		{ "ModuleRelativePath", "Public/BTTask_SetCoverMoveLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Cover|Trace" },
		{ "ModuleRelativePath", "Public/BTTask_SetCoverMoveLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebug_MetaData[] = {
		{ "Category", "Cover|Debug" },
		{ "ModuleRelativePath", "Public/BTTask_SetCoverMoveLocation.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBTTask_SetCoverMoveLocation constinit property declarations *************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExtraInset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinStandOff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectRadius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static void NewProp_bDrawDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBTTask_SetCoverMoveLocation constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_SetCoverMoveLocation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBTTask_SetCoverMoveLocation_Statics

// ********** Begin Class UBTTask_SetCoverMoveLocation Property Definitions ************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_SetCoverMoveLocation_Statics::NewProp_ExtraInset = { "ExtraInset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_SetCoverMoveLocation, ExtraInset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtraInset_MetaData), NewProp_ExtraInset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_SetCoverMoveLocation_Statics::NewProp_MinStandOff = { "MinStandOff", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_SetCoverMoveLocation, MinStandOff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinStandOff_MetaData), NewProp_MinStandOff_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_SetCoverMoveLocation_Statics::NewProp_ProjectRadius = { "ProjectRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_SetCoverMoveLocation, ProjectRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectRadius_MetaData), NewProp_ProjectRadius_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTTask_SetCoverMoveLocation_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_SetCoverMoveLocation, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceChannel_MetaData), NewProp_TraceChannel_MetaData) }; // 838391399
void Z_Construct_UClass_UBTTask_SetCoverMoveLocation_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
{
	((UBTTask_SetCoverMoveLocation*)Obj)->bDrawDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_SetCoverMoveLocation_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBTTask_SetCoverMoveLocation), &Z_Construct_UClass_UBTTask_SetCoverMoveLocation_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebug_MetaData), NewProp_bDrawDebug_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_SetCoverMoveLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetCoverMoveLocation_Statics::NewProp_ExtraInset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetCoverMoveLocation_Statics::NewProp_MinStandOff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetCoverMoveLocation_Statics::NewProp_ProjectRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetCoverMoveLocation_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetCoverMoveLocation_Statics::NewProp_bDrawDebug,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetCoverMoveLocation_Statics::PropPointers) < 2048);
// ********** End Class UBTTask_SetCoverMoveLocation Property Definitions **************************
UObject* (*const Z_Construct_UClass_UBTTask_SetCoverMoveLocation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_CombatReadyAISandbox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetCoverMoveLocation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_SetCoverMoveLocation_Statics::ClassParams = {
	&UBTTask_SetCoverMoveLocation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_SetCoverMoveLocation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetCoverMoveLocation_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetCoverMoveLocation_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_SetCoverMoveLocation_Statics::Class_MetaDataParams)
};
void UBTTask_SetCoverMoveLocation::StaticRegisterNativesUBTTask_SetCoverMoveLocation()
{
}
UClass* Z_Construct_UClass_UBTTask_SetCoverMoveLocation()
{
	if (!Z_Registration_Info_UClass_UBTTask_SetCoverMoveLocation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_SetCoverMoveLocation.OuterSingleton, Z_Construct_UClass_UBTTask_SetCoverMoveLocation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_SetCoverMoveLocation.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBTTask_SetCoverMoveLocation);
UBTTask_SetCoverMoveLocation::~UBTTask_SetCoverMoveLocation() {}
// ********** End Class UBTTask_SetCoverMoveLocation ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTTask_SetCoverMoveLocation_h__Script_CombatReadyAISandbox_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_SetCoverMoveLocation, UBTTask_SetCoverMoveLocation::StaticClass, TEXT("UBTTask_SetCoverMoveLocation"), &Z_Registration_Info_UClass_UBTTask_SetCoverMoveLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_SetCoverMoveLocation), 3213805952U) },
	};
}; // Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTTask_SetCoverMoveLocation_h__Script_CombatReadyAISandbox_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTTask_SetCoverMoveLocation_h__Script_CombatReadyAISandbox_1654742278{
	TEXT("/Script/CombatReadyAISandbox"),
	Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTTask_SetCoverMoveLocation_h__Script_CombatReadyAISandbox_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTTask_SetCoverMoveLocation_h__Script_CombatReadyAISandbox_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
