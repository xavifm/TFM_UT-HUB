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

// Begin Class UEndGameUI Function AddChallengeToList
struct EndGameUI_eventAddChallengeToList_Parms
{
	UChallengeDto* _challenge;
	bool _debug;
};
static FName NAME_UEndGameUI_AddChallengeToList = FName(TEXT("AddChallengeToList"));
void UEndGameUI::AddChallengeToList(UChallengeDto* _challenge, bool _debug)
{
	EndGameUI_eventAddChallengeToList_Parms Parms;
	Parms._challenge=_challenge;
	Parms._debug=_debug ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_UEndGameUI_AddChallengeToList),&Parms);
}
struct Z_Construct_UFunction_UEndGameUI_AddChallengeToList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default__debug", "false" },
		{ "ModuleRelativePath", "Player/UI/EndGameUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__challenge;
	static void NewProp__debug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__debug;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEndGameUI_AddChallengeToList_Statics::NewProp__challenge = { "_challenge", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EndGameUI_eventAddChallengeToList_Parms, _challenge), Z_Construct_UClass_UChallengeDto_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEndGameUI_AddChallengeToList_Statics::NewProp__debug_SetBit(void* Obj)
{
	((EndGameUI_eventAddChallengeToList_Parms*)Obj)->_debug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEndGameUI_AddChallengeToList_Statics::NewProp__debug = { "_debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EndGameUI_eventAddChallengeToList_Parms), &Z_Construct_UFunction_UEndGameUI_AddChallengeToList_Statics::NewProp__debug_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEndGameUI_AddChallengeToList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEndGameUI_AddChallengeToList_Statics::NewProp__challenge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEndGameUI_AddChallengeToList_Statics::NewProp__debug,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameUI_AddChallengeToList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEndGameUI_AddChallengeToList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEndGameUI, nullptr, "AddChallengeToList", nullptr, nullptr, Z_Construct_UFunction_UEndGameUI_AddChallengeToList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameUI_AddChallengeToList_Statics::PropPointers), sizeof(EndGameUI_eventAddChallengeToList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameUI_AddChallengeToList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEndGameUI_AddChallengeToList_Statics::Function_MetaDataParams) };
static_assert(sizeof(EndGameUI_eventAddChallengeToList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEndGameUI_AddChallengeToList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEndGameUI_AddChallengeToList_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UEndGameUI Function AddChallengeToList

// Begin Class UEndGameUI Function AddScoreToList
struct EndGameUI_eventAddScoreToList_Parms
{
	UScoreDto* _score;
	bool _debug;
};
static FName NAME_UEndGameUI_AddScoreToList = FName(TEXT("AddScoreToList"));
void UEndGameUI::AddScoreToList(UScoreDto* _score, bool _debug)
{
	EndGameUI_eventAddScoreToList_Parms Parms;
	Parms._score=_score;
	Parms._debug=_debug ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_UEndGameUI_AddScoreToList),&Parms);
}
struct Z_Construct_UFunction_UEndGameUI_AddScoreToList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default__debug", "false" },
		{ "ModuleRelativePath", "Player/UI/EndGameUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__score;
	static void NewProp__debug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__debug;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEndGameUI_AddScoreToList_Statics::NewProp__score = { "_score", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EndGameUI_eventAddScoreToList_Parms, _score), Z_Construct_UClass_UScoreDto_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEndGameUI_AddScoreToList_Statics::NewProp__debug_SetBit(void* Obj)
{
	((EndGameUI_eventAddScoreToList_Parms*)Obj)->_debug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEndGameUI_AddScoreToList_Statics::NewProp__debug = { "_debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EndGameUI_eventAddScoreToList_Parms), &Z_Construct_UFunction_UEndGameUI_AddScoreToList_Statics::NewProp__debug_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEndGameUI_AddScoreToList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEndGameUI_AddScoreToList_Statics::NewProp__score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEndGameUI_AddScoreToList_Statics::NewProp__debug,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameUI_AddScoreToList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEndGameUI_AddScoreToList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEndGameUI, nullptr, "AddScoreToList", nullptr, nullptr, Z_Construct_UFunction_UEndGameUI_AddScoreToList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameUI_AddScoreToList_Statics::PropPointers), sizeof(EndGameUI_eventAddScoreToList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameUI_AddScoreToList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEndGameUI_AddScoreToList_Statics::Function_MetaDataParams) };
static_assert(sizeof(EndGameUI_eventAddScoreToList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEndGameUI_AddScoreToList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEndGameUI_AddScoreToList_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UEndGameUI Function AddScoreToList

// Begin Class UEndGameUI Function AddTransactionToList
struct EndGameUI_eventAddTransactionToList_Parms
{
	UTransactionDto* _transaction;
	bool _debug;
};
static FName NAME_UEndGameUI_AddTransactionToList = FName(TEXT("AddTransactionToList"));
void UEndGameUI::AddTransactionToList(UTransactionDto* _transaction, bool _debug)
{
	EndGameUI_eventAddTransactionToList_Parms Parms;
	Parms._transaction=_transaction;
	Parms._debug=_debug ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_UEndGameUI_AddTransactionToList),&Parms);
}
struct Z_Construct_UFunction_UEndGameUI_AddTransactionToList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default__debug", "false" },
		{ "ModuleRelativePath", "Player/UI/EndGameUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__transaction;
	static void NewProp__debug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__debug;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEndGameUI_AddTransactionToList_Statics::NewProp__transaction = { "_transaction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EndGameUI_eventAddTransactionToList_Parms, _transaction), Z_Construct_UClass_UTransactionDto_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEndGameUI_AddTransactionToList_Statics::NewProp__debug_SetBit(void* Obj)
{
	((EndGameUI_eventAddTransactionToList_Parms*)Obj)->_debug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEndGameUI_AddTransactionToList_Statics::NewProp__debug = { "_debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EndGameUI_eventAddTransactionToList_Parms), &Z_Construct_UFunction_UEndGameUI_AddTransactionToList_Statics::NewProp__debug_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEndGameUI_AddTransactionToList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEndGameUI_AddTransactionToList_Statics::NewProp__transaction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEndGameUI_AddTransactionToList_Statics::NewProp__debug,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameUI_AddTransactionToList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEndGameUI_AddTransactionToList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEndGameUI, nullptr, "AddTransactionToList", nullptr, nullptr, Z_Construct_UFunction_UEndGameUI_AddTransactionToList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameUI_AddTransactionToList_Statics::PropPointers), sizeof(EndGameUI_eventAddTransactionToList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameUI_AddTransactionToList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEndGameUI_AddTransactionToList_Statics::Function_MetaDataParams) };
static_assert(sizeof(EndGameUI_eventAddTransactionToList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEndGameUI_AddTransactionToList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEndGameUI_AddTransactionToList_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UEndGameUI Function AddTransactionToList

// Begin Class UEndGameUI Function InitializeRegistry
struct Z_Construct_UFunction_UEndGameUI_InitializeRegistry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/UI/EndGameUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEndGameUI_InitializeRegistry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEndGameUI, nullptr, "InitializeRegistry", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameUI_InitializeRegistry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEndGameUI_InitializeRegistry_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEndGameUI_InitializeRegistry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEndGameUI_InitializeRegistry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEndGameUI::execInitializeRegistry)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeRegistry();
	P_NATIVE_END;
}
// End Class UEndGameUI Function InitializeRegistry

// Begin Class UEndGameUI Function StartChallengeList
struct Z_Construct_UFunction_UEndGameUI_StartChallengeList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/UI/EndGameUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEndGameUI_StartChallengeList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEndGameUI, nullptr, "StartChallengeList", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameUI_StartChallengeList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEndGameUI_StartChallengeList_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEndGameUI_StartChallengeList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEndGameUI_StartChallengeList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEndGameUI::execStartChallengeList)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartChallengeList();
	P_NATIVE_END;
}
// End Class UEndGameUI Function StartChallengeList

// Begin Class UEndGameUI Function StartScoreList
struct Z_Construct_UFunction_UEndGameUI_StartScoreList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/UI/EndGameUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEndGameUI_StartScoreList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEndGameUI, nullptr, "StartScoreList", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameUI_StartScoreList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEndGameUI_StartScoreList_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEndGameUI_StartScoreList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEndGameUI_StartScoreList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEndGameUI::execStartScoreList)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartScoreList();
	P_NATIVE_END;
}
// End Class UEndGameUI Function StartScoreList

// Begin Class UEndGameUI
void UEndGameUI::StaticRegisterNativesUEndGameUI()
{
	UClass* Class = UEndGameUI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitializeRegistry", &UEndGameUI::execInitializeRegistry },
		{ "StartChallengeList", &UEndGameUI::execStartChallengeList },
		{ "StartScoreList", &UEndGameUI::execStartScoreList },
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
		{ "Category", "EndGameUI" },
		{ "ModuleRelativePath", "Player/UI/EndGameUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScoresCalculator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEndGameUI_AddChallengeToList, "AddChallengeToList" }, // 6522153
		{ &Z_Construct_UFunction_UEndGameUI_AddScoreToList, "AddScoreToList" }, // 2849937285
		{ &Z_Construct_UFunction_UEndGameUI_AddTransactionToList, "AddTransactionToList" }, // 761842817
		{ &Z_Construct_UFunction_UEndGameUI_InitializeRegistry, "InitializeRegistry" }, // 2522627936
		{ &Z_Construct_UFunction_UEndGameUI_StartChallengeList, "StartChallengeList" }, // 1670011517
		{ &Z_Construct_UFunction_UEndGameUI_StartScoreList, "StartScoreList" }, // 3743202272
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEndGameUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEndGameUI_Statics::NewProp_ScoresCalculator = { "ScoresCalculator", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEndGameUI, ScoresCalculator), Z_Construct_UClass_AScoresCalculator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoresCalculator_MetaData), NewProp_ScoresCalculator_MetaData) };
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
		{ Z_Construct_UClass_UEndGameUI, UEndGameUI::StaticClass, TEXT("UEndGameUI"), &Z_Registration_Info_UClass_UEndGameUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEndGameUI), 2296411427U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Player_UI_EndGameUI_h_1017388034(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Player_UI_EndGameUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Player_UI_EndGameUI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
