// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Minigame/Minigame2/Minigame2Logic.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMinigame2Logic() {}

// ********** Begin Cross Module References ********************************************************
PARTYJUNGLE_API UClass* Z_Construct_UClass_ACocoCannon_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinigame2Logic();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinigame2Logic_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinigameLogic();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AVictimCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMinigame2Logic Function CheckIfAllVictimsAreDeadToStopMinigame **********
struct Z_Construct_UFunction_AMinigame2Logic_CheckIfAllVictimsAreDeadToStopMinigame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Minigame/Minigame2/Minigame2Logic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigame2Logic_CheckIfAllVictimsAreDeadToStopMinigame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigame2Logic, nullptr, "CheckIfAllVictimsAreDeadToStopMinigame", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigame2Logic_CheckIfAllVictimsAreDeadToStopMinigame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigame2Logic_CheckIfAllVictimsAreDeadToStopMinigame_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMinigame2Logic_CheckIfAllVictimsAreDeadToStopMinigame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigame2Logic_CheckIfAllVictimsAreDeadToStopMinigame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigame2Logic::execCheckIfAllVictimsAreDeadToStopMinigame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckIfAllVictimsAreDeadToStopMinigame();
	P_NATIVE_END;
}
// ********** End Class AMinigame2Logic Function CheckIfAllVictimsAreDeadToStopMinigame ************

// ********** Begin Class AMinigame2Logic **********************************************************
void AMinigame2Logic::StaticRegisterNativesAMinigame2Logic()
{
	UClass* Class = AMinigame2Logic::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckIfAllVictimsAreDeadToStopMinigame", &AMinigame2Logic::execCheckIfAllVictimsAreDeadToStopMinigame },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMinigame2Logic;
UClass* AMinigame2Logic::GetPrivateStaticClass()
{
	using TClass = AMinigame2Logic;
	if (!Z_Registration_Info_UClass_AMinigame2Logic.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Minigame2Logic"),
			Z_Registration_Info_UClass_AMinigame2Logic.InnerSingleton,
			StaticRegisterNativesAMinigame2Logic,
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
	return Z_Registration_Info_UClass_AMinigame2Logic.InnerSingleton;
}
UClass* Z_Construct_UClass_AMinigame2Logic_NoRegister()
{
	return AMinigame2Logic::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMinigame2Logic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Minigame/Minigame2/Minigame2Logic.h" },
		{ "ModuleRelativePath", "Minigame/Minigame2/Minigame2Logic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Victims_MetaData[] = {
		{ "Category", "Minigame2Logic" },
		{ "ModuleRelativePath", "Minigame/Minigame2/Minigame2Logic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attacker_MetaData[] = {
		{ "Category", "Minigame2Logic" },
		{ "ModuleRelativePath", "Minigame/Minigame2/Minigame2Logic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Victims_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Victims;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Attacker;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMinigame2Logic_CheckIfAllVictimsAreDeadToStopMinigame, "CheckIfAllVictimsAreDeadToStopMinigame" }, // 1539918847
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinigame2Logic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinigame2Logic_Statics::NewProp_Victims_Inner = { "Victims", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AVictimCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMinigame2Logic_Statics::NewProp_Victims = { "Victims", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigame2Logic, Victims), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Victims_MetaData), NewProp_Victims_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinigame2Logic_Statics::NewProp_Attacker = { "Attacker", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigame2Logic, Attacker), Z_Construct_UClass_ACocoCannon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attacker_MetaData), NewProp_Attacker_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMinigame2Logic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame2Logic_Statics::NewProp_Victims_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame2Logic_Statics::NewProp_Victims,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame2Logic_Statics::NewProp_Attacker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinigame2Logic_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMinigame2Logic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMinigameLogic,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinigame2Logic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMinigame2Logic_Statics::ClassParams = {
	&AMinigame2Logic::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMinigame2Logic_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMinigame2Logic_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinigame2Logic_Statics::Class_MetaDataParams), Z_Construct_UClass_AMinigame2Logic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMinigame2Logic()
{
	if (!Z_Registration_Info_UClass_AMinigame2Logic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMinigame2Logic.OuterSingleton, Z_Construct_UClass_AMinigame2Logic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMinigame2Logic.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMinigame2Logic);
AMinigame2Logic::~AMinigame2Logic() {}
// ********** End Class AMinigame2Logic ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame2_Minigame2Logic_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMinigame2Logic, AMinigame2Logic::StaticClass, TEXT("AMinigame2Logic"), &Z_Registration_Info_UClass_AMinigame2Logic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMinigame2Logic), 2174259420U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame2_Minigame2Logic_h__Script_PartyJungle_3724539144(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame2_Minigame2Logic_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame2_Minigame2Logic_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
