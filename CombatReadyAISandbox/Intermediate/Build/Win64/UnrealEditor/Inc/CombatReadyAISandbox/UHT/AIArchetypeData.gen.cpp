// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIArchetypeData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAIArchetypeData() {}

// ********** Begin Cross Module References ********************************************************
COMBATREADYAISANDBOX_API UClass* Z_Construct_UClass_UAIArchetypeData();
COMBATREADYAISANDBOX_API UClass* Z_Construct_UClass_UAIArchetypeData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
UPackage* Z_Construct_UPackage__Script_CombatReadyAISandbox();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAIArchetypeData *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAIArchetypeData;
UClass* UAIArchetypeData::GetPrivateStaticClass()
{
	using TClass = UAIArchetypeData;
	if (!Z_Registration_Info_UClass_UAIArchetypeData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AIArchetypeData"),
			Z_Registration_Info_UClass_UAIArchetypeData.InnerSingleton,
			StaticRegisterNativesUAIArchetypeData,
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
	return Z_Registration_Info_UClass_UAIArchetypeData.InnerSingleton;
}
UClass* Z_Construct_UClass_UAIArchetypeData_NoRegister()
{
	return UAIArchetypeData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAIArchetypeData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AIArchetypeData.h" },
		{ "ModuleRelativePath", "Public/AIArchetypeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "Parameters | Movement" },
		{ "ModuleRelativePath", "Public/AIArchetypeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunSpeed_MetaData[] = {
		{ "Category", "Parameters | Movement" },
		{ "ModuleRelativePath", "Public/AIArchetypeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreferredRangeMin_MetaData[] = {
		{ "Category", "Parameters | Weapon" },
		{ "ModuleRelativePath", "Public/AIArchetypeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreferredRangeMax_MetaData[] = {
		{ "Category", "Parameters | Weapon" },
		{ "ModuleRelativePath", "Public/AIArchetypeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Aggression_MetaData[] = {
		{ "Category", "Parameters | Attribute" },
		{ "ModuleRelativePath", "Public/AIArchetypeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bravery_MetaData[] = {
		{ "Category", "Parameters | Attribute" },
		{ "ModuleRelativePath", "Public/AIArchetypeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RetreatHealthThreshold_MetaData[] = {
		{ "Category", "Parameters | Attribute" },
		{ "ModuleRelativePath", "Public/AIArchetypeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchDuration_MetaData[] = {
		{ "Category", "Parameters | Movement" },
		{ "ModuleRelativePath", "Public/AIArchetypeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrafeChance_MetaData[] = {
		{ "Category", "Parameters | Movement" },
		{ "ModuleRelativePath", "Public/AIArchetypeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepositionChance_MetaData[] = {
		{ "Category", "Parameters | Movement" },
		{ "ModuleRelativePath", "Public/AIArchetypeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireBurstMin_MetaData[] = {
		{ "Category", "Parameters | Weapon" },
		{ "ModuleRelativePath", "Public/AIArchetypeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireBurstMax_MetaData[] = {
		{ "Category", "Parameters | Weapon" },
		{ "ModuleRelativePath", "Public/AIArchetypeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeBetweenShots_MetaData[] = {
		{ "Category", "Parameters | Weapon" },
		{ "ModuleRelativePath", "Public/AIArchetypeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimReactionTime_MetaData[] = {
		{ "Category", "Parameters | Weapon" },
		{ "ModuleRelativePath", "Public/AIArchetypeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DashCooldown_MetaData[] = {
		{ "Category", "Parameters | Movement" },
		{ "ModuleRelativePath", "Public/AIArchetypeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadCooldown_MetaData[] = {
		{ "Category", "Parameters | Weapon" },
		{ "ModuleRelativePath", "Public/AIArchetypeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreferredCoverDistance_MetaData[] = {
		{ "Category", "Parameters | Movement" },
		{ "ModuleRelativePath", "Public/AIArchetypeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineOfSightHoldTime_MetaData[] = {
		{ "Category", "Parameters | Weapon" },
		{ "ModuleRelativePath", "Public/AIArchetypeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Accuracy_MetaData[] = {
		{ "Category", "Parameters | Weapon" },
		{ "ModuleRelativePath", "Public/AIArchetypeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinPeekCooldown_MetaData[] = {
		{ "Category", "Parameters | Cover" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// COVER\n" },
#endif
		{ "ModuleRelativePath", "Public/AIArchetypeData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "COVER" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPeekCooldown_MetaData[] = {
		{ "Category", "Parameters | Cover" },
		{ "ModuleRelativePath", "Public/AIArchetypeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PeekDuration_MetaData[] = {
		{ "Category", "Parameters | Cover" },
		{ "ModuleRelativePath", "Public/AIArchetypeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PeekChance_MetaData[] = {
		{ "Category", "Parameters | Cover" },
		{ "ModuleRelativePath", "Public/AIArchetypeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BreakHealthThreshold_MetaData[] = {
		{ "Category", "Parameters | Cover" },
		{ "ModuleRelativePath", "Public/AIArchetypeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinRepositionCooldown_MetaData[] = {
		{ "Category", "Parameters | Cover" },
		{ "ModuleRelativePath", "Public/AIArchetypeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRepositionCooldown_MetaData[] = {
		{ "Category", "Parameters | Cover" },
		{ "ModuleRelativePath", "Public/AIArchetypeData.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAIArchetypeData constinit property declarations *************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RunSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreferredRangeMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreferredRangeMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Aggression;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Bravery;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RetreatHealthThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SearchDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrafeChance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RepositionChance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FireBurstMin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FireBurstMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeBetweenShots;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimReactionTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DashCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReloadCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreferredCoverDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineOfSightHoldTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Accuracy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinPeekCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPeekCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PeekDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PeekChance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BreakHealthThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRepositionCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRepositionCooldown;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAIArchetypeData constinit property declarations ***************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIArchetypeData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAIArchetypeData_Statics

// ********** Begin Class UAIArchetypeData Property Definitions ************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIArchetypeData, WalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkSpeed_MetaData), NewProp_WalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_RunSpeed = { "RunSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIArchetypeData, RunSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunSpeed_MetaData), NewProp_RunSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_PreferredRangeMin = { "PreferredRangeMin", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIArchetypeData, PreferredRangeMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreferredRangeMin_MetaData), NewProp_PreferredRangeMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_PreferredRangeMax = { "PreferredRangeMax", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIArchetypeData, PreferredRangeMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreferredRangeMax_MetaData), NewProp_PreferredRangeMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_Aggression = { "Aggression", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIArchetypeData, Aggression), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Aggression_MetaData), NewProp_Aggression_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_Bravery = { "Bravery", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIArchetypeData, Bravery), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bravery_MetaData), NewProp_Bravery_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_RetreatHealthThreshold = { "RetreatHealthThreshold", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIArchetypeData, RetreatHealthThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RetreatHealthThreshold_MetaData), NewProp_RetreatHealthThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_SearchDuration = { "SearchDuration", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIArchetypeData, SearchDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchDuration_MetaData), NewProp_SearchDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_StrafeChance = { "StrafeChance", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIArchetypeData, StrafeChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrafeChance_MetaData), NewProp_StrafeChance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_RepositionChance = { "RepositionChance", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIArchetypeData, RepositionChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepositionChance_MetaData), NewProp_RepositionChance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_FireBurstMin = { "FireBurstMin", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIArchetypeData, FireBurstMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireBurstMin_MetaData), NewProp_FireBurstMin_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_FireBurstMax = { "FireBurstMax", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIArchetypeData, FireBurstMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireBurstMax_MetaData), NewProp_FireBurstMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_TimeBetweenShots = { "TimeBetweenShots", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIArchetypeData, TimeBetweenShots), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeBetweenShots_MetaData), NewProp_TimeBetweenShots_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_AimReactionTime = { "AimReactionTime", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIArchetypeData, AimReactionTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimReactionTime_MetaData), NewProp_AimReactionTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_DashCooldown = { "DashCooldown", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIArchetypeData, DashCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DashCooldown_MetaData), NewProp_DashCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_ReloadCooldown = { "ReloadCooldown", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIArchetypeData, ReloadCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadCooldown_MetaData), NewProp_ReloadCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_PreferredCoverDistance = { "PreferredCoverDistance", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIArchetypeData, PreferredCoverDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreferredCoverDistance_MetaData), NewProp_PreferredCoverDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_LineOfSightHoldTime = { "LineOfSightHoldTime", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIArchetypeData, LineOfSightHoldTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineOfSightHoldTime_MetaData), NewProp_LineOfSightHoldTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_Accuracy = { "Accuracy", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIArchetypeData, Accuracy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Accuracy_MetaData), NewProp_Accuracy_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_MinPeekCooldown = { "MinPeekCooldown", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIArchetypeData, MinPeekCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinPeekCooldown_MetaData), NewProp_MinPeekCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_MaxPeekCooldown = { "MaxPeekCooldown", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIArchetypeData, MaxPeekCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPeekCooldown_MetaData), NewProp_MaxPeekCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_PeekDuration = { "PeekDuration", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIArchetypeData, PeekDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PeekDuration_MetaData), NewProp_PeekDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_PeekChance = { "PeekChance", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIArchetypeData, PeekChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PeekChance_MetaData), NewProp_PeekChance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_BreakHealthThreshold = { "BreakHealthThreshold", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIArchetypeData, BreakHealthThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BreakHealthThreshold_MetaData), NewProp_BreakHealthThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_MinRepositionCooldown = { "MinRepositionCooldown", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIArchetypeData, MinRepositionCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinRepositionCooldown_MetaData), NewProp_MinRepositionCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_MaxRepositionCooldown = { "MaxRepositionCooldown", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIArchetypeData, MaxRepositionCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRepositionCooldown_MetaData), NewProp_MaxRepositionCooldown_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAIArchetypeData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_WalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_RunSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_PreferredRangeMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_PreferredRangeMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_Aggression,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_Bravery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_RetreatHealthThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_SearchDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_StrafeChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_RepositionChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_FireBurstMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_FireBurstMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_TimeBetweenShots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_AimReactionTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_DashCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_ReloadCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_PreferredCoverDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_LineOfSightHoldTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_Accuracy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_MinPeekCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_MaxPeekCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_PeekDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_PeekChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_BreakHealthThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_MinRepositionCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIArchetypeData_Statics::NewProp_MaxRepositionCooldown,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAIArchetypeData_Statics::PropPointers) < 2048);
// ********** End Class UAIArchetypeData Property Definitions **************************************
UObject* (*const Z_Construct_UClass_UAIArchetypeData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_CombatReadyAISandbox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAIArchetypeData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAIArchetypeData_Statics::ClassParams = {
	&UAIArchetypeData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAIArchetypeData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAIArchetypeData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAIArchetypeData_Statics::Class_MetaDataParams), Z_Construct_UClass_UAIArchetypeData_Statics::Class_MetaDataParams)
};
void UAIArchetypeData::StaticRegisterNativesUAIArchetypeData()
{
}
UClass* Z_Construct_UClass_UAIArchetypeData()
{
	if (!Z_Registration_Info_UClass_UAIArchetypeData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAIArchetypeData.OuterSingleton, Z_Construct_UClass_UAIArchetypeData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAIArchetypeData.OuterSingleton;
}
UAIArchetypeData::UAIArchetypeData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAIArchetypeData);
UAIArchetypeData::~UAIArchetypeData() {}
// ********** End Class UAIArchetypeData ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_AIArchetypeData_h__Script_CombatReadyAISandbox_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAIArchetypeData, UAIArchetypeData::StaticClass, TEXT("UAIArchetypeData"), &Z_Registration_Info_UClass_UAIArchetypeData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAIArchetypeData), 3427807556U) },
	};
}; // Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_AIArchetypeData_h__Script_CombatReadyAISandbox_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_AIArchetypeData_h__Script_CombatReadyAISandbox_2251805632{
	TEXT("/Script/CombatReadyAISandbox"),
	Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_AIArchetypeData_h__Script_CombatReadyAISandbox_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_AIArchetypeData_h__Script_CombatReadyAISandbox_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
