// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Player/UI/EndGameUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndGameUI() {}

// Begin Cross Module References
PARTYJUNGLE_API UClass* Z_Construct_UClass_AScoresCalculator_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_UChallengeDto_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_UEndGameUI();
PARTYJUNGLE_API UClass* Z_Construct_UClass_UEndGameUI_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_UScoreDto_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_UTransactionDto_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// End Cross Module References

// Begin Class UEndGameUI Function GetChallengesRegistry
struct Z_Construct_UFunction_UEndGameUI_GetChallengesRegistry_Statics
{
	struct EndGameUI_eventGetChallengesRegistry_Parms
	{
		TArray<UChallengeDto*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/UI/EndGameUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEndGameUI_GetChallengesRegistry_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UChallengeDto_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEndGameUI_GetChallengesRegistry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EndGameUI_eventGetChallengesRegistry_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEndGameUI_GetChallengesRegistry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEndGameUI_GetChallengesRegistry_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEndGameUI_GetChallengesRegistry_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameUI_GetChallengesRegistry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEndGameUI_GetChallengesRegistry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEndGameUI, nullptr, "GetChallengesRegistry", nullptr, nullptr, Z_Construct_UFunction_UEndGameUI_GetChallengesRegistry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameUI_GetChallengesRegistry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEndGameUI_GetChallengesRegistry_Statics::EndGameUI_eventGetChallengesRegistry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameUI_GetChallengesRegistry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEndGameUI_GetChallengesRegistry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEndGameUI_GetChallengesRegistry_Statics::EndGameUI_eventGetChallengesRegistry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEndGameUI_GetChallengesRegistry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEndGameUI_GetChallengesRegistry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEndGameUI::execGetChallengesRegistry)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UChallengeDto*>*)Z_Param__Result=P_THIS->GetChallengesRegistry();
	P_NATIVE_END;
}
// End Class UEndGameUI Function GetChallengesRegistry

// Begin Class UEndGameUI Function GetPlayerScores
struct Z_Construct_UFunction_UEndGameUI_GetPlayerScores_Statics
{
	struct EndGameUI_eventGetPlayerScores_Parms
	{
		TArray<UScoreDto*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/UI/EndGameUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEndGameUI_GetPlayerScores_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UScoreDto_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEndGameUI_GetPlayerScores_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EndGameUI_eventGetPlayerScores_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEndGameUI_GetPlayerScores_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEndGameUI_GetPlayerScores_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEndGameUI_GetPlayerScores_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameUI_GetPlayerScores_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEndGameUI_GetPlayerScores_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEndGameUI, nullptr, "GetPlayerScores", nullptr, nullptr, Z_Construct_UFunction_UEndGameUI_GetPlayerScores_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameUI_GetPlayerScores_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEndGameUI_GetPlayerScores_Statics::EndGameUI_eventGetPlayerScores_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameUI_GetPlayerScores_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEndGameUI_GetPlayerScores_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEndGameUI_GetPlayerScores_Statics::EndGameUI_eventGetPlayerScores_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEndGameUI_GetPlayerScores()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEndGameUI_GetPlayerScores_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEndGameUI::execGetPlayerScores)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UScoreDto*>*)Z_Param__Result=P_THIS->GetPlayerScores();
	P_NATIVE_END;
}
// End Class UEndGameUI Function GetPlayerScores

// Begin Class UEndGameUI Function GetTransactionRegistry
struct Z_Construct_UFunction_UEndGameUI_GetTransactionRegistry_Statics
{
	struct EndGameUI_eventGetTransactionRegistry_Parms
	{
		TArray<UTransactionDto*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/UI/EndGameUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEndGameUI_GetTransactionRegistry_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTransactionDto_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEndGameUI_GetTransactionRegistry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EndGameUI_eventGetTransactionRegistry_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEndGameUI_GetTransactionRegistry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEndGameUI_GetTransactionRegistry_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEndGameUI_GetTransactionRegistry_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameUI_GetTransactionRegistry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEndGameUI_GetTransactionRegistry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEndGameUI, nullptr, "GetTransactionRegistry", nullptr, nullptr, Z_Construct_UFunction_UEndGameUI_GetTransactionRegistry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameUI_GetTransactionRegistry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEndGameUI_GetTransactionRegistry_Statics::EndGameUI_eventGetTransactionRegistry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameUI_GetTransactionRegistry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEndGameUI_GetTransactionRegistry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEndGameUI_GetTransactionRegistry_Statics::EndGameUI_eventGetTransactionRegistry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEndGameUI_GetTransactionRegistry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEndGameUI_GetTransactionRegistry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEndGameUI::execGetTransactionRegistry)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UTransactionDto*>*)Z_Param__Result=P_THIS->GetTransactionRegistry();
	P_NATIVE_END;
}
// End Class UEndGameUI Function GetTransactionRegistry

// Begin Class UEndGameUI
void UEndGameUI::StaticRegisterNativesUEndGameUI()
{
	UClass* Class = UEndGameUI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetChallengesRegistry", &UEndGameUI::execGetChallengesRegistry },
		{ "GetPlayerScores", &UEndGameUI::execGetPlayerScores },
		{ "GetTransactionRegistry", &UEndGameUI::execGetTransactionRegistry },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEndGameUI);
UClass* Z_Construct_UClass_UEndGameUI_NoRegister()
{
	return UEndGameUI::StaticClass();
}
struct Z_Construct_UClass_UEndGameUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Player/UI/EndGameUI.h" },
		{ "ModuleRelativePath", "Player/UI/EndGameUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoresCalculator_MetaData[] = {
		{ "ModuleRelativePath", "Player/UI/EndGameUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScoresCalculator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEndGameUI_GetChallengesRegistry, "GetChallengesRegistry" }, // 2913592136
		{ &Z_Construct_UFunction_UEndGameUI_GetPlayerScores, "GetPlayerScores" }, // 2756946855
		{ &Z_Construct_UFunction_UEndGameUI_GetTransactionRegistry, "GetTransactionRegistry" }, // 3319097543
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEndGameUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEndGameUI_Statics::NewProp_ScoresCalculator = { "ScoresCalculator", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEndGameUI, ScoresCalculator), Z_Construct_UClass_AScoresCalculator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoresCalculator_MetaData), NewProp_ScoresCalculator_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEndGameUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEndGameUI_Statics::NewProp_ScoresCalculator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEndGameUI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEndGameUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEndGameUI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEndGameUI_Statics::ClassParams = {
	&UEndGameUI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEndGameUI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEndGameUI_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEndGameUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UEndGameUI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEndGameUI()
{
	if (!Z_Registration_Info_UClass_UEndGameUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEndGameUI.OuterSingleton, Z_Construct_UClass_UEndGameUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEndGameUI.OuterSingleton;
}
template<> PARTYJUNGLE_API UClass* StaticClass<UEndGameUI>()
{
	return UEndGameUI::StaticClass();
}
UEndGameUI::UEndGameUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEndGameUI);
UEndGameUI::~UEndGameUI() {}
// End Class UEndGameUI

// Begin Registration
struct Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Player_UI_EndGameUI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEndGameUI, UEndGameUI::StaticClass, TEXT("UEndGameUI"), &Z_Registration_Info_UClass_UEndGameUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEndGameUI), 393097877U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Player_UI_EndGameUI_h_1735205614(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Player_UI_EndGameUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Player_UI_EndGameUI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
