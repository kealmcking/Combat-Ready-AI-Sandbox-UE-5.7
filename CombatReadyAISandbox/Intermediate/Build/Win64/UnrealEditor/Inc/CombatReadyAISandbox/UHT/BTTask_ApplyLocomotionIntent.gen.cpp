// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BTTask_ApplyLocomotionIntent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBTTask_ApplyLocomotionIntent() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
COMBATREADYAISANDBOX_API UClass* Z_Construct_UClass_UBTTask_ApplyLocomotionIntent();
COMBATREADYAISANDBOX_API UClass* Z_Construct_UClass_UBTTask_ApplyLocomotionIntent_NoRegister();
UPackage* Z_Construct_UPackage__Script_CombatReadyAISandbox();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBTTask_ApplyLocomotionIntent ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBTTask_ApplyLocomotionIntent;
UClass* UBTTask_ApplyLocomotionIntent::GetPrivateStaticClass()
{
	using TClass = UBTTask_ApplyLocomotionIntent;
	if (!Z_Registration_Info_UClass_UBTTask_ApplyLocomotionIntent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BTTask_ApplyLocomotionIntent"),
			Z_Registration_Info_UClass_UBTTask_ApplyLocomotionIntent.InnerSingleton,
			StaticRegisterNativesUBTTask_ApplyLocomotionIntent,
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
	return Z_Registration_Info_UClass_UBTTask_ApplyLocomotionIntent.InnerSingleton;
}
UClass* Z_Construct_UClass_UBTTask_ApplyLocomotionIntent_NoRegister()
{
	return UBTTask_ApplyLocomotionIntent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBTTask_ApplyLocomotionIntent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTTask_ApplyLocomotionIntent.h" },
		{ "ModuleRelativePath", "Public/BTTask_ApplyLocomotionIntent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWantsWalk_MetaData[] = {
		{ "Category", "LocomotionIntent" },
		{ "ModuleRelativePath", "Public/BTTask_ApplyLocomotionIntent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWantsSprint_MetaData[] = {
		{ "Category", "LocomotionIntent" },
		{ "ModuleRelativePath", "Public/BTTask_ApplyLocomotionIntent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWantsStrafe_MetaData[] = {
		{ "Category", "LocomotionIntent" },
		{ "ModuleRelativePath", "Public/BTTask_ApplyLocomotionIntent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWantsAim_MetaData[] = {
		{ "Category", "LocomotionIntent" },
		{ "ModuleRelativePath", "Public/BTTask_ApplyLocomotionIntent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWantsCrouch_MetaData[] = {
		{ "Category", "LocomotionIntent" },
		{ "ModuleRelativePath", "Public/BTTask_ApplyLocomotionIntent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyApplyIfChanged_MetaData[] = {
		{ "Category", "LocomotionIntent" },
		{ "ModuleRelativePath", "Public/BTTask_ApplyLocomotionIntent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBTTask_ApplyLocomotionIntent constinit property declarations ************
	static void NewProp_bWantsWalk_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantsWalk;
	static void NewProp_bWantsSprint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantsSprint;
	static void NewProp_bWantsStrafe_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantsStrafe;
	static void NewProp_bWantsAim_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantsAim;
	static void NewProp_bWantsCrouch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantsCrouch;
	static void NewProp_bOnlyApplyIfChanged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyApplyIfChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBTTask_ApplyLocomotionIntent constinit property declarations **************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_ApplyLocomotionIntent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBTTask_ApplyLocomotionIntent_Statics

// ********** Begin Class UBTTask_ApplyLocomotionIntent Property Definitions ***********************
void Z_Construct_UClass_UBTTask_ApplyLocomotionIntent_Statics::NewProp_bWantsWalk_SetBit(void* Obj)
{
	((UBTTask_ApplyLocomotionIntent*)Obj)->bWantsWalk = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_ApplyLocomotionIntent_Statics::NewProp_bWantsWalk = { "bWantsWalk", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBTTask_ApplyLocomotionIntent), &Z_Construct_UClass_UBTTask_ApplyLocomotionIntent_Statics::NewProp_bWantsWalk_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWantsWalk_MetaData), NewProp_bWantsWalk_MetaData) };
void Z_Construct_UClass_UBTTask_ApplyLocomotionIntent_Statics::NewProp_bWantsSprint_SetBit(void* Obj)
{
	((UBTTask_ApplyLocomotionIntent*)Obj)->bWantsSprint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_ApplyLocomotionIntent_Statics::NewProp_bWantsSprint = { "bWantsSprint", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBTTask_ApplyLocomotionIntent), &Z_Construct_UClass_UBTTask_ApplyLocomotionIntent_Statics::NewProp_bWantsSprint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWantsSprint_MetaData), NewProp_bWantsSprint_MetaData) };
void Z_Construct_UClass_UBTTask_ApplyLocomotionIntent_Statics::NewProp_bWantsStrafe_SetBit(void* Obj)
{
	((UBTTask_ApplyLocomotionIntent*)Obj)->bWantsStrafe = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_ApplyLocomotionIntent_Statics::NewProp_bWantsStrafe = { "bWantsStrafe", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBTTask_ApplyLocomotionIntent), &Z_Construct_UClass_UBTTask_ApplyLocomotionIntent_Statics::NewProp_bWantsStrafe_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWantsStrafe_MetaData), NewProp_bWantsStrafe_MetaData) };
void Z_Construct_UClass_UBTTask_ApplyLocomotionIntent_Statics::NewProp_bWantsAim_SetBit(void* Obj)
{
	((UBTTask_ApplyLocomotionIntent*)Obj)->bWantsAim = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_ApplyLocomotionIntent_Statics::NewProp_bWantsAim = { "bWantsAim", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBTTask_ApplyLocomotionIntent), &Z_Construct_UClass_UBTTask_ApplyLocomotionIntent_Statics::NewProp_bWantsAim_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWantsAim_MetaData), NewProp_bWantsAim_MetaData) };
void Z_Construct_UClass_UBTTask_ApplyLocomotionIntent_Statics::NewProp_bWantsCrouch_SetBit(void* Obj)
{
	((UBTTask_ApplyLocomotionIntent*)Obj)->bWantsCrouch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_ApplyLocomotionIntent_Statics::NewProp_bWantsCrouch = { "bWantsCrouch", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBTTask_ApplyLocomotionIntent), &Z_Construct_UClass_UBTTask_ApplyLocomotionIntent_Statics::NewProp_bWantsCrouch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWantsCrouch_MetaData), NewProp_bWantsCrouch_MetaData) };
void Z_Construct_UClass_UBTTask_ApplyLocomotionIntent_Statics::NewProp_bOnlyApplyIfChanged_SetBit(void* Obj)
{
	((UBTTask_ApplyLocomotionIntent*)Obj)->bOnlyApplyIfChanged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_ApplyLocomotionIntent_Statics::NewProp_bOnlyApplyIfChanged = { "bOnlyApplyIfChanged", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBTTask_ApplyLocomotionIntent), &Z_Construct_UClass_UBTTask_ApplyLocomotionIntent_Statics::NewProp_bOnlyApplyIfChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyApplyIfChanged_MetaData), NewProp_bOnlyApplyIfChanged_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_ApplyLocomotionIntent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ApplyLocomotionIntent_Statics::NewProp_bWantsWalk,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ApplyLocomotionIntent_Statics::NewProp_bWantsSprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ApplyLocomotionIntent_Statics::NewProp_bWantsStrafe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ApplyLocomotionIntent_Statics::NewProp_bWantsAim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ApplyLocomotionIntent_Statics::NewProp_bWantsCrouch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ApplyLocomotionIntent_Statics::NewProp_bOnlyApplyIfChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ApplyLocomotionIntent_Statics::PropPointers) < 2048);
// ********** End Class UBTTask_ApplyLocomotionIntent Property Definitions *************************
UObject* (*const Z_Construct_UClass_UBTTask_ApplyLocomotionIntent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_CombatReadyAISandbox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ApplyLocomotionIntent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_ApplyLocomotionIntent_Statics::ClassParams = {
	&UBTTask_ApplyLocomotionIntent::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_ApplyLocomotionIntent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ApplyLocomotionIntent_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ApplyLocomotionIntent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_ApplyLocomotionIntent_Statics::Class_MetaDataParams)
};
void UBTTask_ApplyLocomotionIntent::StaticRegisterNativesUBTTask_ApplyLocomotionIntent()
{
}
UClass* Z_Construct_UClass_UBTTask_ApplyLocomotionIntent()
{
	if (!Z_Registration_Info_UClass_UBTTask_ApplyLocomotionIntent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_ApplyLocomotionIntent.OuterSingleton, Z_Construct_UClass_UBTTask_ApplyLocomotionIntent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_ApplyLocomotionIntent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBTTask_ApplyLocomotionIntent);
UBTTask_ApplyLocomotionIntent::~UBTTask_ApplyLocomotionIntent() {}
// ********** End Class UBTTask_ApplyLocomotionIntent **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTTask_ApplyLocomotionIntent_h__Script_CombatReadyAISandbox_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_ApplyLocomotionIntent, UBTTask_ApplyLocomotionIntent::StaticClass, TEXT("UBTTask_ApplyLocomotionIntent"), &Z_Registration_Info_UClass_UBTTask_ApplyLocomotionIntent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_ApplyLocomotionIntent), 3708342155U) },
	};
}; // Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTTask_ApplyLocomotionIntent_h__Script_CombatReadyAISandbox_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTTask_ApplyLocomotionIntent_h__Script_CombatReadyAISandbox_3364486510{
	TEXT("/Script/CombatReadyAISandbox"),
	Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTTask_ApplyLocomotionIntent_h__Script_CombatReadyAISandbox_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Portfolio_Combat_Ready_AI_Sandbox_UE_5_7_CombatReadyAISandbox_Source_CombatReadyAISandbox_Public_BTTask_ApplyLocomotionIntent_h__Script_CombatReadyAISandbox_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
