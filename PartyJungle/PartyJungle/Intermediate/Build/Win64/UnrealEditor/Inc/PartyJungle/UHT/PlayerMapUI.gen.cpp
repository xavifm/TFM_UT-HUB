// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Player/UI/PlayerMapUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerMapUI() {}

// Begin Cross Module References
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMapDatabase_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AScoreDatabase_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_UPlayerMapUI();
PARTYJUNGLE_API UClass* Z_Construct_UClass_UPlayerMapUI_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// End Cross Module References

// Begin Class UPlayerMapUI Function InitializeUI
struct PlayerMapUI_eventInitializeUI_Parms
{
	AScoreDatabase* InScores;
	AMapDatabase* InMapDb;
};
static FName NAME_UPlayerMapUI_InitializeUI = FName(TEXT("InitializeUI"));
void UPlayerMapUI::InitializeUI(AScoreDatabase* InScores, AMapDatabase* InMapDb)
{
	PlayerMapUI_eventInitializeUI_Parms Parms;
	Parms.InScores=InScores;
	Parms.InMapDb=InMapDb;
	ProcessEvent(FindFunctionChecked(NAME_UPlayerMapUI_InitializeUI),&Parms);
}
struct Z_Construct_UFunction_UPlayerMapUI_InitializeUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Player/UI/PlayerMapUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InScores;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMapDb;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerMapUI_InitializeUI_Statics::NewProp_InScores = { "InScores", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerMapUI_eventInitializeUI_Parms, InScores), Z_Construct_UClass_AScoreDatabase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerMapUI_InitializeUI_Statics::NewProp_InMapDb = { "InMapDb", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerMapUI_eventInitializeUI_Parms, InMapDb), Z_Construct_UClass_AMapDatabase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMapUI_InitializeUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_InitializeUI_Statics::NewProp_InScores,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_InitializeUI_Statics::NewProp_InMapDb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_InitializeUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMapUI_InitializeUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerMapUI, nullptr, "InitializeUI", nullptr, nullptr, Z_Construct_UFunction_UPlayerMapUI_InitializeUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_InitializeUI_Statics::PropPointers), sizeof(PlayerMapUI_eventInitializeUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_InitializeUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerMapUI_InitializeUI_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerMapUI_eventInitializeUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerMapUI_InitializeUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMapUI_InitializeUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UPlayerMapUI Function InitializeUI

// Begin Class UPlayerMapUI Function UpdateCoins
struct Z_Construct_UFunction_UPlayerMapUI_UpdateCoins_Statics
{
	struct PlayerMapUI_eventUpdateCoins_Parms
	{
		int32 Team;
		int32 Quantity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Player/UI/PlayerMapUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Team;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerMapUI_UpdateCoins_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerMapUI_eventUpdateCoins_Parms, Team), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerMapUI_UpdateCoins_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerMapUI_eventUpdateCoins_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMapUI_UpdateCoins_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_UpdateCoins_Statics::NewProp_Team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_UpdateCoins_Statics::NewProp_Quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_UpdateCoins_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMapUI_UpdateCoins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerMapUI, nullptr, "UpdateCoins", nullptr, nullptr, Z_Construct_UFunction_UPlayerMapUI_UpdateCoins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_UpdateCoins_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerMapUI_UpdateCoins_Statics::PlayerMapUI_eventUpdateCoins_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_UpdateCoins_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerMapUI_UpdateCoins_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerMapUI_UpdateCoins_Statics::PlayerMapUI_eventUpdateCoins_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerMapUI_UpdateCoins()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMapUI_UpdateCoins_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerMapUI::execUpdateCoins)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Team);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateCoins(Z_Param_Team,Z_Param_Quantity);
	P_NATIVE_END;
}
// End Class UPlayerMapUI Function UpdateCoins

// Begin Class UPlayerMapUI Function UpdateCrowns
struct Z_Construct_UFunction_UPlayerMapUI_UpdateCrowns_Statics
{
	struct PlayerMapUI_eventUpdateCrowns_Parms
	{
		int32 Team;
		int32 Quantity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Player/UI/PlayerMapUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Team;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerMapUI_UpdateCrowns_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerMapUI_eventUpdateCrowns_Parms, Team), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerMapUI_UpdateCrowns_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerMapUI_eventUpdateCrowns_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMapUI_UpdateCrowns_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_UpdateCrowns_Statics::NewProp_Team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_UpdateCrowns_Statics::NewProp_Quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_UpdateCrowns_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMapUI_UpdateCrowns_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerMapUI, nullptr, "UpdateCrowns", nullptr, nullptr, Z_Construct_UFunction_UPlayerMapUI_UpdateCrowns_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_UpdateCrowns_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerMapUI_UpdateCrowns_Statics::PlayerMapUI_eventUpdateCrowns_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_UpdateCrowns_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerMapUI_UpdateCrowns_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerMapUI_UpdateCrowns_Statics::PlayerMapUI_eventUpdateCrowns_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerMapUI_UpdateCrowns()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMapUI_UpdateCrowns_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerMapUI::execUpdateCrowns)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Team);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateCrowns(Z_Param_Team,Z_Param_Quantity);
	P_NATIVE_END;
}
// End Class UPlayerMapUI Function UpdateCrowns

// Begin Class UPlayerMapUI Function UpdateUIScore
struct PlayerMapUI_eventUpdateUIScore_Parms
{
	AScoreDatabase* ScoresList;
};
static FName NAME_UPlayerMapUI_UpdateUIScore = FName(TEXT("UpdateUIScore"));
void UPlayerMapUI::UpdateUIScore(AScoreDatabase* ScoresList)
{
	PlayerMapUI_eventUpdateUIScore_Parms Parms;
	Parms.ScoresList=ScoresList;
	ProcessEvent(FindFunctionChecked(NAME_UPlayerMapUI_UpdateUIScore),&Parms);
}
struct Z_Construct_UFunction_UPlayerMapUI_UpdateUIScore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Player/UI/PlayerMapUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScoresList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerMapUI_UpdateUIScore_Statics::NewProp_ScoresList = { "ScoresList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerMapUI_eventUpdateUIScore_Parms, ScoresList), Z_Construct_UClass_AScoreDatabase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMapUI_UpdateUIScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_UpdateUIScore_Statics::NewProp_ScoresList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_UpdateUIScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMapUI_UpdateUIScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerMapUI, nullptr, "UpdateUIScore", nullptr, nullptr, Z_Construct_UFunction_UPlayerMapUI_UpdateUIScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_UpdateUIScore_Statics::PropPointers), sizeof(PlayerMapUI_eventUpdateUIScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_UpdateUIScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerMapUI_UpdateUIScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerMapUI_eventUpdateUIScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerMapUI_UpdateUIScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMapUI_UpdateUIScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UPlayerMapUI Function UpdateUIScore

// Begin Class UPlayerMapUI
void UPlayerMapUI::StaticRegisterNativesUPlayerMapUI()
{
	UClass* Class = UPlayerMapUI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateCoins", &UPlayerMapUI::execUpdateCoins },
		{ "UpdateCrowns", &UPlayerMapUI::execUpdateCrowns },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerMapUI);
UClass* Z_Construct_UClass_UPlayerMapUI_NoRegister()
{
	return UPlayerMapUI::StaticClass();
}
struct Z_Construct_UClass_UPlayerMapUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Player/UI/PlayerMapUI.h" },
		{ "ModuleRelativePath", "Player/UI/PlayerMapUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoresDb_MetaData[] = {
		{ "ModuleRelativePath", "Player/UI/PlayerMapUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapDb_MetaData[] = {
		{ "ModuleRelativePath", "Player/UI/PlayerMapUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScoresDb;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapDb;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerMapUI_InitializeUI, "InitializeUI" }, // 2434387993
		{ &Z_Construct_UFunction_UPlayerMapUI_UpdateCoins, "UpdateCoins" }, // 2892537950
		{ &Z_Construct_UFunction_UPlayerMapUI_UpdateCrowns, "UpdateCrowns" }, // 1731745352
		{ &Z_Construct_UFunction_UPlayerMapUI_UpdateUIScore, "UpdateUIScore" }, // 1456132318
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerMapUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerMapUI_Statics::NewProp_ScoresDb = { "ScoresDb", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerMapUI, ScoresDb), Z_Construct_UClass_AScoreDatabase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoresDb_MetaData), NewProp_ScoresDb_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerMapUI_Statics::NewProp_MapDb = { "MapDb", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerMapUI, MapDb), Z_Construct_UClass_AMapDatabase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapDb_MetaData), NewProp_MapDb_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerMapUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMapUI_Statics::NewProp_ScoresDb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMapUI_Statics::NewProp_MapDb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMapUI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerMapUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMapUI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerMapUI_Statics::ClassParams = {
	&UPlayerMapUI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPlayerMapUI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMapUI_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMapUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerMapUI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerMapUI()
{
	if (!Z_Registration_Info_UClass_UPlayerMapUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerMapUI.OuterSingleton, Z_Construct_UClass_UPlayerMapUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerMapUI.OuterSingleton;
}
template<> PARTYJUNGLE_API UClass* StaticClass<UPlayerMapUI>()
{
	return UPlayerMapUI::StaticClass();
}
UPlayerMapUI::UPlayerMapUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerMapUI);
UPlayerMapUI::~UPlayerMapUI() {}
// End Class UPlayerMapUI

// Begin Registration
struct Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Player_UI_PlayerMapUI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerMapUI, UPlayerMapUI::StaticClass, TEXT("UPlayerMapUI"), &Z_Registration_Info_UClass_UPlayerMapUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerMapUI), 1331952270U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Player_UI_PlayerMapUI_h_1267359243(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Player_UI_PlayerMapUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Player_UI_PlayerMapUI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
