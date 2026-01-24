// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BTTask_FindCoverLocation.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBTTask_FindCoverLocation() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
COMBATREADYAISANDBOX_API UClass* Z_Construct_UClass_UBTTask_FindCoverLocation();
COMBATREADYAISANDBOX_API UClass* Z_Construct_UClass_UBTTask_FindCoverLocation_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
UPackage* Z_Construct_UPackage__Script_CombatReadyAISandbox();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBTTask_FindCoverLocation ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBTTask_FindCoverLocation;
UClass* UBTTask_FindCoverLocation::GetPrivateStaticClass()
{
	using TClass = UBTTask_FindCoverLocation;
	if (!Z_Registration_Info_UClass_UBTTask_FindCoverLocation.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BTTask_FindCoverLocation"),
			Z_Registration_Info_UClass_UBTTask_FindCoverLocation.InnerSingleton,
			StaticRegisterNativesUBTTask_FindCoverLocation,
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
	return Z_Registration_Info_UClass_UBTTask_FindCoverLocation.InnerSingleton;
}
UClass* Z_Construct_UClass_UBTTask_FindCoverLocation_NoRegister()
{
	return UBTTask_FindCoverLocation::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBTTask_FindCoverLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTTask_FindCoverLocation.h" },
		{ "ModuleRelativePath", "Public/BTTask_FindCoverLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchRadius_MetaData[] = {
		{ "Category", "Cover|Search" },
		{ "ModuleRelativePath", "Public/BTTask_FindCoverLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSamples_MetaData[] = {
		{ "Category", "Cover|Search" },
		{ "ModuleRelativePath", "Public/BTTask_FindCoverLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDistanceBand_MetaData[] = {
		{ "Category", "Cover|Distance" },
		{ "ModuleRelativePath", "Public/BTTask_FindCoverLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinTargetDistance_MetaData[] = {
		{ "Category", "Cover|Distance" },
		{ "EditCondition", "bUseDistanceBand" },
		{ "ModuleRelativePath", "Public/BTTask_FindCoverLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTargetDistance_MetaData[] = {
		{ "Category", "Cover|Distance" },
		{ "EditCondition", "bUseDistanceBand" },
		{ "ModuleRelativePath", "Public/BTTask_FindCoverLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EyeHeightOffset_MetaData[] = {
		{ "Category", "Cover|Trace" },
		{ "ModuleRelativePath", "Public/BTTask_FindCoverLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Cover|Trace" },
		{ "ModuleRelativePath", "Public/BTTask_FindCoverLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequireLOSBlocked_MetaData[] = {
		{ "Category", "Cover|Trace" },
		{ "ModuleRelativePath", "Public/BTTask_FindCoverLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoverLockSeconds_MetaData[] = {
		{ "Category", "Cover|Lock" },
		{ "ModuleRelativePath", "Public/BTTask_FindCoverLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebug_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/BTTask_FindCoverLocation.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBTTask_FindCoverLocation constinit property declarations ****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SearchRadius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSamples;
	static void NewProp_bUseDistanceBand_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDistanceBand;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinTargetDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTargetDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EyeHeightOffset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static void NewProp_bRequireLOSBlocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireLOSBlocked;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CoverLockSeconds;
	static void NewProp_bDrawDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBTTask_FindCoverLocation constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_FindCoverLocation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBTTask_FindCoverLocation_Statics

// ********** Begin Class UBTTask_FindCoverLocation Property Definitions ***************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_FindCoverLocation_Statics::NewProp_SearchRadius = { "SearchRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_FindCoverLocation, SearchRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchRadius_MetaData), NewProp_SearchRadius_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBTTask_FindCoverLocation_Statics::NewProp_NumSamples = { "NumSamples", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_FindCoverLocation, NumSamples), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSamples_MetaData), NewProp_NumSamples_MetaData) };
void Z_Construct_UClass_UBTTask_FindCoverLocation_Statics::NewProp_bUseDistanceBand_SetBit(void* Obj)
{
	((UBTTask_FindCoverLocation*)Obj)->bUseDistanceBand = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_FindCoverLocation_Statics::NewProp_bUseDistanceBand = { "bUseDistanceBand", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBTTask_FindCoverLocation), &Z_Construct_UClass_UBTTask_FindCoverLocation_Statics::NewProp_bUseDistanceBand_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDistanceBand_MetaData), NewProp_bUseDistanceBand_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_FindCoverLocation_Statics::NewProp_MinTargetDistance = { "MinTargetDistance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_FindCoverLocation, MinTargetDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinTargetDistance_MetaData), NewProp_MinTargetDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_FindCoverLocation_Statics::NewProp_MaxTargetDistance = { "MaxTargetDistance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_FindCoverLocation, MaxTargetDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTargetDistance_MetaData), NewProp_MaxTargetDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_FindCoverLocation_Statics::NewProp_EyeHeightOffset = { "EyeHeightOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_FindCoverLocation, EyeHeightOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EyeHeightOffset_MetaData), NewProp_EyeHeightOffset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTTask_FindCoverLocation_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_FindCoverLocation, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceChannel_MetaData), NewProp_TraceChannel_MetaData) }; // 838391399
void Z_Construct_UClass_UBTTask_FindCoverLocation_Statics::NewProp_bRequireLOSBlocked_SetBit(void* Obj)
{
	((UBTTask_FindCoverLocation*)Obj)->bRequireLOSBlocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_FindCoverLocation_Statics::NewProp_bRequireLOSBlocked = { "bRequireLOSBlocked", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBTTask_FindCoverLocation), &Z_Construct_UClass_UBTTask_FindCoverLocation_Statics::NewProp_bRequireLOSBlocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequireLOSBlocked_MetaData), NewProp_bRequireLOSBlocked_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_FindCoverLocation_Statics::NewProp_CoverLockSeconds = { "CoverLockSeconds", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_FindCoverLocation, CoverLockSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoverLockSeconds_MetaData), NewProp_CoverLockSeconds_MetaData) };
void Z_Construct_UClass_UBTTask_FindCoverLocation_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
{
	((UBTTask_FindCoverLocation*)Obj)->bDrawDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_FindCoverLocation_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBTTask_FindCoverLocation), &Z_Construct_UClass_UBTTask_FindCoverLocation_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebug_MetaData), NewProp_bDrawDebug_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_FindCoverLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FindCoverLocation_Statics::NewProp_SearchRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FindCoverLocation_Statics::NewProp_NumSamples,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FindCoverLocation_Statics::NewProp_bUseDistanceBand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FindCoverLocation_Statics::NewProp_MinTargetDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FindCoverLocation_Statics::NewProp_MaxTargetDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FindCoverLocation_Statics::NewProp_EyeHeightOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FindCoverLocation_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FindCoverLocation_Statics::NewProp_bRequireLOSBlocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FindCoverLocation_Statics::NewProp_CoverLockSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FindCoverLocation_Statics::NewProp_bDrawDebug,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindCoverLocation_Statics::PropPointers) < 2048);
// ********** End Class UBTTask_FindCoverLocation Property Definitions *****************************
UObject* (*const Z_Construct_UClass_UBTTask_FindCoverLocation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_CombatReadyAISandbox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindCoverLocation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_FindCoverLocation_Statics::ClassParams = {
	&UBTTask_FindCoverLocation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_FindCoverLocation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindCoverLocation_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindCoverLocation_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_FindCoverLocation_Statics::Class_MetaDataParams)
};
void UBTTask_FindCoverLocation::StaticRegisterNativesUBTTask_FindCoverLocation()
{
}
UClass* Z_Construct_UClass_UBTTask_FindCoverLocation()
{
	if (!Z_Registration_Info_UClass_UBTTask_FindCoverLocation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_FindCoverLocation.OuterSingleton, Z_Construct_UClass_UBTTask_FindCoverLocation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_FindCoverLocation.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBTTask_FindCoverLocation);
UBTTask_FindCoverLocation::~UBTTask_FindCoverLocation() {}
// ********** End Class UBTTask_FindCoverLocation **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTTask_FindCoverLocation_h__Script_CombatReadyAISandbox_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_FindCoverLocation, UBTTask_FindCoverLocation::StaticClass, TEXT("UBTTask_FindCoverLocation"), &Z_Registration_Info_UClass_UBTTask_FindCoverLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_FindCoverLocation), 1809342976U) },
	};
}; // Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTTask_FindCoverLocation_h__Script_CombatReadyAISandbox_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTTask_FindCoverLocation_h__Script_CombatReadyAISandbox_1061610604{
	TEXT("/Script/CombatReadyAISandbox"),
	Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTTask_FindCoverLocation_h__Script_CombatReadyAISandbox_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTTask_FindCoverLocation_h__Script_CombatReadyAISandbox_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
