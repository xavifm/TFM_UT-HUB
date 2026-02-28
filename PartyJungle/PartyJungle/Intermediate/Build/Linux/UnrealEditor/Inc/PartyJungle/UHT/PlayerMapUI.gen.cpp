// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Player/UI/PlayerMapUI.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePlayerMapUI() {}

// ********** Begin Cross Module References ********************************************************
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMapDatabase_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AScoreDatabase_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_UPlayerMapUI();
PARTYJUNGLE_API UClass* Z_Construct_UClass_UPlayerMapUI_NoRegister();
PARTYJUNGLE_API UEnum* Z_Construct_UEnum_PartyJungle_EDuelType();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPlayerMapUI Function HideInScreenText ***********************************
static FName NAME_UPlayerMapUI_HideInScreenText = FName(TEXT("HideInScreenText"));
void UPlayerMapUI::HideInScreenText()
{
	UFunction* Func = FindFunctionChecked(NAME_UPlayerMapUI_HideInScreenText);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UPlayerMapUI_HideInScreenText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/UI/PlayerMapUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMapUI_HideInScreenText_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerMapUI, nullptr, "HideInScreenText", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_HideInScreenText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerMapUI_HideInScreenText_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPlayerMapUI_HideInScreenText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMapUI_HideInScreenText_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UPlayerMapUI Function HideInScreenText *************************************

// ********** Begin Class UPlayerMapUI Function InitializeRouletteElement **************************
struct PlayerMapUI_eventInitializeRouletteElement_Parms
{
	int32 RouletteSize;
	int32 Position;
	int32 Player;
	FString Option;
};
static FName NAME_UPlayerMapUI_InitializeRouletteElement = FName(TEXT("InitializeRouletteElement"));
void UPlayerMapUI::InitializeRouletteElement(int32 RouletteSize, int32 Position, int32 Player, const FString& Option)
{
	PlayerMapUI_eventInitializeRouletteElement_Parms Parms;
	Parms.RouletteSize=RouletteSize;
	Parms.Position=Position;
	Parms.Player=Player;
	Parms.Option=Option;
	UFunction* Func = FindFunctionChecked(NAME_UPlayerMapUI_InitializeRouletteElement);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UPlayerMapUI_InitializeRouletteElement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Player/UI/PlayerMapUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Option_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_RouletteSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Position;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Player;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Option;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerMapUI_InitializeRouletteElement_Statics::NewProp_RouletteSize = { "RouletteSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerMapUI_eventInitializeRouletteElement_Parms, RouletteSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerMapUI_InitializeRouletteElement_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerMapUI_eventInitializeRouletteElement_Parms, Position), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerMapUI_InitializeRouletteElement_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerMapUI_eventInitializeRouletteElement_Parms, Player), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayerMapUI_InitializeRouletteElement_Statics::NewProp_Option = { "Option", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerMapUI_eventInitializeRouletteElement_Parms, Option), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Option_MetaData), NewProp_Option_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMapUI_InitializeRouletteElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_InitializeRouletteElement_Statics::NewProp_RouletteSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_InitializeRouletteElement_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_InitializeRouletteElement_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_InitializeRouletteElement_Statics::NewProp_Option,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_InitializeRouletteElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMapUI_InitializeRouletteElement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerMapUI, nullptr, "InitializeRouletteElement", Z_Construct_UFunction_UPlayerMapUI_InitializeRouletteElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_InitializeRouletteElement_Statics::PropPointers), sizeof(PlayerMapUI_eventInitializeRouletteElement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_InitializeRouletteElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerMapUI_InitializeRouletteElement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlayerMapUI_eventInitializeRouletteElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerMapUI_InitializeRouletteElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMapUI_InitializeRouletteElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UPlayerMapUI Function InitializeRouletteElement ****************************

// ********** Begin Class UPlayerMapUI Function InitializeUI ***************************************
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
	UFunction* Func = FindFunctionChecked(NAME_UPlayerMapUI_InitializeUI);
	ProcessEvent(Func,&Parms);
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMapUI_InitializeUI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerMapUI, nullptr, "InitializeUI", Z_Construct_UFunction_UPlayerMapUI_InitializeUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_InitializeUI_Statics::PropPointers), sizeof(PlayerMapUI_eventInitializeUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_InitializeUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerMapUI_InitializeUI_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UPlayerMapUI Function InitializeUI *****************************************

// ********** Begin Class UPlayerMapUI Function InitializeWheelValue *******************************
struct PlayerMapUI_eventInitializeWheelValue_Parms
{
	int32 _index;
	FText _value;
};
static FName NAME_UPlayerMapUI_InitializeWheelValue = FName(TEXT("InitializeWheelValue"));
void UPlayerMapUI::InitializeWheelValue(int32 _index, FText const& _value)
{
	PlayerMapUI_eventInitializeWheelValue_Parms Parms;
	Parms._index=_index;
	Parms._value=_value;
	UFunction* Func = FindFunctionChecked(NAME_UPlayerMapUI_InitializeWheelValue);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UPlayerMapUI_InitializeWheelValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI_Minigame" },
		{ "ModuleRelativePath", "Player/UI/PlayerMapUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__index;
	static const UECodeGen_Private::FTextPropertyParams NewProp__value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerMapUI_InitializeWheelValue_Statics::NewProp__index = { "_index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerMapUI_eventInitializeWheelValue_Parms, _index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UPlayerMapUI_InitializeWheelValue_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerMapUI_eventInitializeWheelValue_Parms, _value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__value_MetaData), NewProp__value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMapUI_InitializeWheelValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_InitializeWheelValue_Statics::NewProp__index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_InitializeWheelValue_Statics::NewProp__value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_InitializeWheelValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMapUI_InitializeWheelValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerMapUI, nullptr, "InitializeWheelValue", Z_Construct_UFunction_UPlayerMapUI_InitializeWheelValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_InitializeWheelValue_Statics::PropPointers), sizeof(PlayerMapUI_eventInitializeWheelValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_InitializeWheelValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerMapUI_InitializeWheelValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlayerMapUI_eventInitializeWheelValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerMapUI_InitializeWheelValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMapUI_InitializeWheelValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UPlayerMapUI Function InitializeWheelValue *********************************

// ********** Begin Class UPlayerMapUI Function SetMinigameVisibleTime *****************************
struct PlayerMapUI_eventSetMinigameVisibleTime_Parms
{
	float Time;
};
static FName NAME_UPlayerMapUI_SetMinigameVisibleTime = FName(TEXT("SetMinigameVisibleTime"));
void UPlayerMapUI::SetMinigameVisibleTime(float Time)
{
	PlayerMapUI_eventSetMinigameVisibleTime_Parms Parms;
	Parms.Time=Time;
	UFunction* Func = FindFunctionChecked(NAME_UPlayerMapUI_SetMinigameVisibleTime);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UPlayerMapUI_SetMinigameVisibleTime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/UI/PlayerMapUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerMapUI_SetMinigameVisibleTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerMapUI_eventSetMinigameVisibleTime_Parms, Time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMapUI_SetMinigameVisibleTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_SetMinigameVisibleTime_Statics::NewProp_Time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SetMinigameVisibleTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMapUI_SetMinigameVisibleTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerMapUI, nullptr, "SetMinigameVisibleTime", Z_Construct_UFunction_UPlayerMapUI_SetMinigameVisibleTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SetMinigameVisibleTime_Statics::PropPointers), sizeof(PlayerMapUI_eventSetMinigameVisibleTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SetMinigameVisibleTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerMapUI_SetMinigameVisibleTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlayerMapUI_eventSetMinigameVisibleTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerMapUI_SetMinigameVisibleTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMapUI_SetMinigameVisibleTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UPlayerMapUI Function SetMinigameVisibleTime *******************************

// ********** Begin Class UPlayerMapUI Function SetScore *******************************************
struct PlayerMapUI_eventSetScore_Parms
{
	int32 _position;
	int32 _team;
	int32 _coins;
	int32 _crowns;
};
static FName NAME_UPlayerMapUI_SetScore = FName(TEXT("SetScore"));
void UPlayerMapUI::SetScore(int32 _position, int32 _team, int32 _coins, int32 _crowns)
{
	PlayerMapUI_eventSetScore_Parms Parms;
	Parms._position=_position;
	Parms._team=_team;
	Parms._coins=_coins;
	Parms._crowns=_crowns;
	UFunction* Func = FindFunctionChecked(NAME_UPlayerMapUI_SetScore);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UPlayerMapUI_SetScore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Player/UI/PlayerMapUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__position;
	static const UECodeGen_Private::FIntPropertyParams NewProp__team;
	static const UECodeGen_Private::FIntPropertyParams NewProp__coins;
	static const UECodeGen_Private::FIntPropertyParams NewProp__crowns;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerMapUI_SetScore_Statics::NewProp__position = { "_position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerMapUI_eventSetScore_Parms, _position), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerMapUI_SetScore_Statics::NewProp__team = { "_team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerMapUI_eventSetScore_Parms, _team), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerMapUI_SetScore_Statics::NewProp__coins = { "_coins", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerMapUI_eventSetScore_Parms, _coins), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerMapUI_SetScore_Statics::NewProp__crowns = { "_crowns", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerMapUI_eventSetScore_Parms, _crowns), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMapUI_SetScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_SetScore_Statics::NewProp__position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_SetScore_Statics::NewProp__team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_SetScore_Statics::NewProp__coins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_SetScore_Statics::NewProp__crowns,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SetScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMapUI_SetScore_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerMapUI, nullptr, "SetScore", Z_Construct_UFunction_UPlayerMapUI_SetScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SetScore_Statics::PropPointers), sizeof(PlayerMapUI_eventSetScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SetScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerMapUI_SetScore_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlayerMapUI_eventSetScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerMapUI_SetScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMapUI_SetScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UPlayerMapUI Function SetScore *********************************************

// ********** Begin Class UPlayerMapUI Function SetupUIPots ****************************************
struct PlayerMapUI_eventSetupUIPots_Parms
{
	int32 MinPot;
	int32 MaxPot;
};
static FName NAME_UPlayerMapUI_SetupUIPots = FName(TEXT("SetupUIPots"));
void UPlayerMapUI::SetupUIPots(int32 MinPot, int32 MaxPot)
{
	PlayerMapUI_eventSetupUIPots_Parms Parms;
	Parms.MinPot=MinPot;
	Parms.MaxPot=MaxPot;
	UFunction* Func = FindFunctionChecked(NAME_UPlayerMapUI_SetupUIPots);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UPlayerMapUI_SetupUIPots_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Player/UI/PlayerMapUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinPot;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerMapUI_SetupUIPots_Statics::NewProp_MinPot = { "MinPot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerMapUI_eventSetupUIPots_Parms, MinPot), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerMapUI_SetupUIPots_Statics::NewProp_MaxPot = { "MaxPot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerMapUI_eventSetupUIPots_Parms, MaxPot), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMapUI_SetupUIPots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_SetupUIPots_Statics::NewProp_MinPot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_SetupUIPots_Statics::NewProp_MaxPot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SetupUIPots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMapUI_SetupUIPots_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerMapUI, nullptr, "SetupUIPots", Z_Construct_UFunction_UPlayerMapUI_SetupUIPots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SetupUIPots_Statics::PropPointers), sizeof(PlayerMapUI_eventSetupUIPots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SetupUIPots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerMapUI_SetupUIPots_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlayerMapUI_eventSetupUIPots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerMapUI_SetupUIPots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMapUI_SetupUIPots_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UPlayerMapUI Function SetupUIPots ******************************************

// ********** Begin Class UPlayerMapUI Function ShowTextInScreen ***********************************
struct PlayerMapUI_eventShowTextInScreen_Parms
{
	FString Text;
	float Time;
};
static FName NAME_UPlayerMapUI_ShowTextInScreen = FName(TEXT("ShowTextInScreen"));
void UPlayerMapUI::ShowTextInScreen(const FString& Text, float Time)
{
	PlayerMapUI_eventShowTextInScreen_Parms Parms;
	Parms.Text=Text;
	Parms.Time=Time;
	UFunction* Func = FindFunctionChecked(NAME_UPlayerMapUI_ShowTextInScreen);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UPlayerMapUI_ShowTextInScreen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/UI/PlayerMapUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayerMapUI_ShowTextInScreen_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerMapUI_eventShowTextInScreen_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerMapUI_ShowTextInScreen_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerMapUI_eventShowTextInScreen_Parms, Time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMapUI_ShowTextInScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_ShowTextInScreen_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_ShowTextInScreen_Statics::NewProp_Time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_ShowTextInScreen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMapUI_ShowTextInScreen_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerMapUI, nullptr, "ShowTextInScreen", Z_Construct_UFunction_UPlayerMapUI_ShowTextInScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_ShowTextInScreen_Statics::PropPointers), sizeof(PlayerMapUI_eventShowTextInScreen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_ShowTextInScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerMapUI_ShowTextInScreen_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlayerMapUI_eventShowTextInScreen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerMapUI_ShowTextInScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMapUI_ShowTextInScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UPlayerMapUI Function ShowTextInScreen *************************************

// ********** Begin Class UPlayerMapUI Function SpinWheel ******************************************
struct Z_Construct_UFunction_UPlayerMapUI_SpinWheel_Statics
{
	struct PlayerMapUI_eventSpinWheel_Parms
	{
		int32 WheelSize;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/UI/PlayerMapUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_WheelSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerMapUI_SpinWheel_Statics::NewProp_WheelSize = { "WheelSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerMapUI_eventSpinWheel_Parms, WheelSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerMapUI_SpinWheel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerMapUI_eventSpinWheel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMapUI_SpinWheel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_SpinWheel_Statics::NewProp_WheelSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_SpinWheel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SpinWheel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMapUI_SpinWheel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerMapUI, nullptr, "SpinWheel", Z_Construct_UFunction_UPlayerMapUI_SpinWheel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SpinWheel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerMapUI_SpinWheel_Statics::PlayerMapUI_eventSpinWheel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SpinWheel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerMapUI_SpinWheel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlayerMapUI_SpinWheel_Statics::PlayerMapUI_eventSpinWheel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerMapUI_SpinWheel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMapUI_SpinWheel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerMapUI::execSpinWheel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_WheelSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->SpinWheel(Z_Param_WheelSize);
	P_NATIVE_END;
}
// ********** End Class UPlayerMapUI Function SpinWheel ********************************************

// ********** Begin Class UPlayerMapUI Function SpinWheelEvent *************************************
struct PlayerMapUI_eventSpinWheelEvent_Parms
{
	int32 WheelSize;
};
static FName NAME_UPlayerMapUI_SpinWheelEvent = FName(TEXT("SpinWheelEvent"));
void UPlayerMapUI::SpinWheelEvent(int32 WheelSize)
{
	PlayerMapUI_eventSpinWheelEvent_Parms Parms;
	Parms.WheelSize=WheelSize;
	UFunction* Func = FindFunctionChecked(NAME_UPlayerMapUI_SpinWheelEvent);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UPlayerMapUI_SpinWheelEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Player/UI/PlayerMapUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_WheelSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerMapUI_SpinWheelEvent_Statics::NewProp_WheelSize = { "WheelSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerMapUI_eventSpinWheelEvent_Parms, WheelSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMapUI_SpinWheelEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_SpinWheelEvent_Statics::NewProp_WheelSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SpinWheelEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMapUI_SpinWheelEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerMapUI, nullptr, "SpinWheelEvent", Z_Construct_UFunction_UPlayerMapUI_SpinWheelEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SpinWheelEvent_Statics::PropPointers), sizeof(PlayerMapUI_eventSpinWheelEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SpinWheelEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerMapUI_SpinWheelEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlayerMapUI_eventSpinWheelEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerMapUI_SpinWheelEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMapUI_SpinWheelEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UPlayerMapUI Function SpinWheelEvent ***************************************

// ********** Begin Class UPlayerMapUI Function SwitchChallengePlayerUIVisibility ******************
struct PlayerMapUI_eventSwitchChallengePlayerUIVisibility_Parms
{
	int32 Team;
	bool IsVisible;
};
static FName NAME_UPlayerMapUI_SwitchChallengePlayerUIVisibility = FName(TEXT("SwitchChallengePlayerUIVisibility"));
void UPlayerMapUI::SwitchChallengePlayerUIVisibility(int32 Team, bool IsVisible)
{
	PlayerMapUI_eventSwitchChallengePlayerUIVisibility_Parms Parms;
	Parms.Team=Team;
	Parms.IsVisible=IsVisible ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UPlayerMapUI_SwitchChallengePlayerUIVisibility);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UPlayerMapUI_SwitchChallengePlayerUIVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Player/UI/PlayerMapUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Team;
	static void NewProp_IsVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerMapUI_SwitchChallengePlayerUIVisibility_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerMapUI_eventSwitchChallengePlayerUIVisibility_Parms, Team), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayerMapUI_SwitchChallengePlayerUIVisibility_Statics::NewProp_IsVisible_SetBit(void* Obj)
{
	((PlayerMapUI_eventSwitchChallengePlayerUIVisibility_Parms*)Obj)->IsVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerMapUI_SwitchChallengePlayerUIVisibility_Statics::NewProp_IsVisible = { "IsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerMapUI_eventSwitchChallengePlayerUIVisibility_Parms), &Z_Construct_UFunction_UPlayerMapUI_SwitchChallengePlayerUIVisibility_Statics::NewProp_IsVisible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMapUI_SwitchChallengePlayerUIVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_SwitchChallengePlayerUIVisibility_Statics::NewProp_Team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_SwitchChallengePlayerUIVisibility_Statics::NewProp_IsVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchChallengePlayerUIVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMapUI_SwitchChallengePlayerUIVisibility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerMapUI, nullptr, "SwitchChallengePlayerUIVisibility", Z_Construct_UFunction_UPlayerMapUI_SwitchChallengePlayerUIVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchChallengePlayerUIVisibility_Statics::PropPointers), sizeof(PlayerMapUI_eventSwitchChallengePlayerUIVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchChallengePlayerUIVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerMapUI_SwitchChallengePlayerUIVisibility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlayerMapUI_eventSwitchChallengePlayerUIVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerMapUI_SwitchChallengePlayerUIVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMapUI_SwitchChallengePlayerUIVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UPlayerMapUI Function SwitchChallengePlayerUIVisibility ********************

// ********** Begin Class UPlayerMapUI Function SwitchChallengePopupVisibility *********************
struct PlayerMapUI_eventSwitchChallengePopupVisibility_Parms
{
	bool IsVisible;
};
static FName NAME_UPlayerMapUI_SwitchChallengePopupVisibility = FName(TEXT("SwitchChallengePopupVisibility"));
void UPlayerMapUI::SwitchChallengePopupVisibility(bool IsVisible)
{
	PlayerMapUI_eventSwitchChallengePopupVisibility_Parms Parms;
	Parms.IsVisible=IsVisible ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UPlayerMapUI_SwitchChallengePopupVisibility);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UPlayerMapUI_SwitchChallengePopupVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Player/UI/PlayerMapUI.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPlayerMapUI_SwitchChallengePopupVisibility_Statics::NewProp_IsVisible_SetBit(void* Obj)
{
	((PlayerMapUI_eventSwitchChallengePopupVisibility_Parms*)Obj)->IsVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerMapUI_SwitchChallengePopupVisibility_Statics::NewProp_IsVisible = { "IsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerMapUI_eventSwitchChallengePopupVisibility_Parms), &Z_Construct_UFunction_UPlayerMapUI_SwitchChallengePopupVisibility_Statics::NewProp_IsVisible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMapUI_SwitchChallengePopupVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_SwitchChallengePopupVisibility_Statics::NewProp_IsVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchChallengePopupVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMapUI_SwitchChallengePopupVisibility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerMapUI, nullptr, "SwitchChallengePopupVisibility", Z_Construct_UFunction_UPlayerMapUI_SwitchChallengePopupVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchChallengePopupVisibility_Statics::PropPointers), sizeof(PlayerMapUI_eventSwitchChallengePopupVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchChallengePopupVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerMapUI_SwitchChallengePopupVisibility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlayerMapUI_eventSwitchChallengePopupVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerMapUI_SwitchChallengePopupVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMapUI_SwitchChallengePopupVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UPlayerMapUI Function SwitchChallengePopupVisibility ***********************

// ********** Begin Class UPlayerMapUI Function SwitchChallengeVisibility **************************
struct PlayerMapUI_eventSwitchChallengeVisibility_Parms
{
	bool IsVisible;
};
static FName NAME_UPlayerMapUI_SwitchChallengeVisibility = FName(TEXT("SwitchChallengeVisibility"));
void UPlayerMapUI::SwitchChallengeVisibility(bool IsVisible)
{
	PlayerMapUI_eventSwitchChallengeVisibility_Parms Parms;
	Parms.IsVisible=IsVisible ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UPlayerMapUI_SwitchChallengeVisibility);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UPlayerMapUI_SwitchChallengeVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Player/UI/PlayerMapUI.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPlayerMapUI_SwitchChallengeVisibility_Statics::NewProp_IsVisible_SetBit(void* Obj)
{
	((PlayerMapUI_eventSwitchChallengeVisibility_Parms*)Obj)->IsVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerMapUI_SwitchChallengeVisibility_Statics::NewProp_IsVisible = { "IsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerMapUI_eventSwitchChallengeVisibility_Parms), &Z_Construct_UFunction_UPlayerMapUI_SwitchChallengeVisibility_Statics::NewProp_IsVisible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMapUI_SwitchChallengeVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_SwitchChallengeVisibility_Statics::NewProp_IsVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchChallengeVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMapUI_SwitchChallengeVisibility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerMapUI, nullptr, "SwitchChallengeVisibility", Z_Construct_UFunction_UPlayerMapUI_SwitchChallengeVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchChallengeVisibility_Statics::PropPointers), sizeof(PlayerMapUI_eventSwitchChallengeVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchChallengeVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerMapUI_SwitchChallengeVisibility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlayerMapUI_eventSwitchChallengeVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerMapUI_SwitchChallengeVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMapUI_SwitchChallengeVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UPlayerMapUI Function SwitchChallengeVisibility ****************************

// ********** Begin Class UPlayerMapUI Function SwitchCrownSavePlaceVisibility *********************
struct PlayerMapUI_eventSwitchCrownSavePlaceVisibility_Parms
{
	bool IsVisible;
};
static FName NAME_UPlayerMapUI_SwitchCrownSavePlaceVisibility = FName(TEXT("SwitchCrownSavePlaceVisibility"));
void UPlayerMapUI::SwitchCrownSavePlaceVisibility(bool IsVisible)
{
	PlayerMapUI_eventSwitchCrownSavePlaceVisibility_Parms Parms;
	Parms.IsVisible=IsVisible ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UPlayerMapUI_SwitchCrownSavePlaceVisibility);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UPlayerMapUI_SwitchCrownSavePlaceVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Player/UI/PlayerMapUI.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPlayerMapUI_SwitchCrownSavePlaceVisibility_Statics::NewProp_IsVisible_SetBit(void* Obj)
{
	((PlayerMapUI_eventSwitchCrownSavePlaceVisibility_Parms*)Obj)->IsVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerMapUI_SwitchCrownSavePlaceVisibility_Statics::NewProp_IsVisible = { "IsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerMapUI_eventSwitchCrownSavePlaceVisibility_Parms), &Z_Construct_UFunction_UPlayerMapUI_SwitchCrownSavePlaceVisibility_Statics::NewProp_IsVisible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMapUI_SwitchCrownSavePlaceVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_SwitchCrownSavePlaceVisibility_Statics::NewProp_IsVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchCrownSavePlaceVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMapUI_SwitchCrownSavePlaceVisibility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerMapUI, nullptr, "SwitchCrownSavePlaceVisibility", Z_Construct_UFunction_UPlayerMapUI_SwitchCrownSavePlaceVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchCrownSavePlaceVisibility_Statics::PropPointers), sizeof(PlayerMapUI_eventSwitchCrownSavePlaceVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchCrownSavePlaceVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerMapUI_SwitchCrownSavePlaceVisibility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlayerMapUI_eventSwitchCrownSavePlaceVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerMapUI_SwitchCrownSavePlaceVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMapUI_SwitchCrownSavePlaceVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UPlayerMapUI Function SwitchCrownSavePlaceVisibility ***********************

// ********** Begin Class UPlayerMapUI Function SwitchCrownStoreVisibility *************************
struct PlayerMapUI_eventSwitchCrownStoreVisibility_Parms
{
	bool IsVisible;
};
static FName NAME_UPlayerMapUI_SwitchCrownStoreVisibility = FName(TEXT("SwitchCrownStoreVisibility"));
void UPlayerMapUI::SwitchCrownStoreVisibility(bool IsVisible)
{
	PlayerMapUI_eventSwitchCrownStoreVisibility_Parms Parms;
	Parms.IsVisible=IsVisible ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UPlayerMapUI_SwitchCrownStoreVisibility);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UPlayerMapUI_SwitchCrownStoreVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Player/UI/PlayerMapUI.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPlayerMapUI_SwitchCrownStoreVisibility_Statics::NewProp_IsVisible_SetBit(void* Obj)
{
	((PlayerMapUI_eventSwitchCrownStoreVisibility_Parms*)Obj)->IsVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerMapUI_SwitchCrownStoreVisibility_Statics::NewProp_IsVisible = { "IsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerMapUI_eventSwitchCrownStoreVisibility_Parms), &Z_Construct_UFunction_UPlayerMapUI_SwitchCrownStoreVisibility_Statics::NewProp_IsVisible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMapUI_SwitchCrownStoreVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_SwitchCrownStoreVisibility_Statics::NewProp_IsVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchCrownStoreVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMapUI_SwitchCrownStoreVisibility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerMapUI, nullptr, "SwitchCrownStoreVisibility", Z_Construct_UFunction_UPlayerMapUI_SwitchCrownStoreVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchCrownStoreVisibility_Statics::PropPointers), sizeof(PlayerMapUI_eventSwitchCrownStoreVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchCrownStoreVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerMapUI_SwitchCrownStoreVisibility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlayerMapUI_eventSwitchCrownStoreVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerMapUI_SwitchCrownStoreVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMapUI_SwitchCrownStoreVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UPlayerMapUI Function SwitchCrownStoreVisibility ***************************

// ********** Begin Class UPlayerMapUI Function SwitchDuelTurnUI ***********************************
struct PlayerMapUI_eventSwitchDuelTurnUI_Parms
{
	int32 Team;
};
static FName NAME_UPlayerMapUI_SwitchDuelTurnUI = FName(TEXT("SwitchDuelTurnUI"));
void UPlayerMapUI::SwitchDuelTurnUI(int32 Team)
{
	PlayerMapUI_eventSwitchDuelTurnUI_Parms Parms;
	Parms.Team=Team;
	UFunction* Func = FindFunctionChecked(NAME_UPlayerMapUI_SwitchDuelTurnUI);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UPlayerMapUI_SwitchDuelTurnUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Player/UI/PlayerMapUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Team;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerMapUI_SwitchDuelTurnUI_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerMapUI_eventSwitchDuelTurnUI_Parms, Team), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMapUI_SwitchDuelTurnUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_SwitchDuelTurnUI_Statics::NewProp_Team,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchDuelTurnUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMapUI_SwitchDuelTurnUI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerMapUI, nullptr, "SwitchDuelTurnUI", Z_Construct_UFunction_UPlayerMapUI_SwitchDuelTurnUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchDuelTurnUI_Statics::PropPointers), sizeof(PlayerMapUI_eventSwitchDuelTurnUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchDuelTurnUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerMapUI_SwitchDuelTurnUI_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlayerMapUI_eventSwitchDuelTurnUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerMapUI_SwitchDuelTurnUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMapUI_SwitchDuelTurnUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UPlayerMapUI Function SwitchDuelTurnUI *************************************

// ********** Begin Class UPlayerMapUI Function SwitchItemThrowPlayer ******************************
struct PlayerMapUI_eventSwitchItemThrowPlayer_Parms
{
	int32 Player;
};
static FName NAME_UPlayerMapUI_SwitchItemThrowPlayer = FName(TEXT("SwitchItemThrowPlayer"));
void UPlayerMapUI::SwitchItemThrowPlayer(int32 Player)
{
	PlayerMapUI_eventSwitchItemThrowPlayer_Parms Parms;
	Parms.Player=Player;
	UFunction* Func = FindFunctionChecked(NAME_UPlayerMapUI_SwitchItemThrowPlayer);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UPlayerMapUI_SwitchItemThrowPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Player/UI/PlayerMapUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerMapUI_SwitchItemThrowPlayer_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerMapUI_eventSwitchItemThrowPlayer_Parms, Player), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMapUI_SwitchItemThrowPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_SwitchItemThrowPlayer_Statics::NewProp_Player,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchItemThrowPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMapUI_SwitchItemThrowPlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerMapUI, nullptr, "SwitchItemThrowPlayer", Z_Construct_UFunction_UPlayerMapUI_SwitchItemThrowPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchItemThrowPlayer_Statics::PropPointers), sizeof(PlayerMapUI_eventSwitchItemThrowPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchItemThrowPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerMapUI_SwitchItemThrowPlayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlayerMapUI_eventSwitchItemThrowPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerMapUI_SwitchItemThrowPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMapUI_SwitchItemThrowPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UPlayerMapUI Function SwitchItemThrowPlayer ********************************

// ********** Begin Class UPlayerMapUI Function SwitchItemThrowSelectorVisibility ******************
struct PlayerMapUI_eventSwitchItemThrowSelectorVisibility_Parms
{
	bool IsVisible;
};
static FName NAME_UPlayerMapUI_SwitchItemThrowSelectorVisibility = FName(TEXT("SwitchItemThrowSelectorVisibility"));
void UPlayerMapUI::SwitchItemThrowSelectorVisibility(bool IsVisible)
{
	PlayerMapUI_eventSwitchItemThrowSelectorVisibility_Parms Parms;
	Parms.IsVisible=IsVisible ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UPlayerMapUI_SwitchItemThrowSelectorVisibility);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UPlayerMapUI_SwitchItemThrowSelectorVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Player/UI/PlayerMapUI.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPlayerMapUI_SwitchItemThrowSelectorVisibility_Statics::NewProp_IsVisible_SetBit(void* Obj)
{
	((PlayerMapUI_eventSwitchItemThrowSelectorVisibility_Parms*)Obj)->IsVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerMapUI_SwitchItemThrowSelectorVisibility_Statics::NewProp_IsVisible = { "IsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerMapUI_eventSwitchItemThrowSelectorVisibility_Parms), &Z_Construct_UFunction_UPlayerMapUI_SwitchItemThrowSelectorVisibility_Statics::NewProp_IsVisible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMapUI_SwitchItemThrowSelectorVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_SwitchItemThrowSelectorVisibility_Statics::NewProp_IsVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchItemThrowSelectorVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMapUI_SwitchItemThrowSelectorVisibility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerMapUI, nullptr, "SwitchItemThrowSelectorVisibility", Z_Construct_UFunction_UPlayerMapUI_SwitchItemThrowSelectorVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchItemThrowSelectorVisibility_Statics::PropPointers), sizeof(PlayerMapUI_eventSwitchItemThrowSelectorVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchItemThrowSelectorVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerMapUI_SwitchItemThrowSelectorVisibility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlayerMapUI_eventSwitchItemThrowSelectorVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerMapUI_SwitchItemThrowSelectorVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMapUI_SwitchItemThrowSelectorVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UPlayerMapUI Function SwitchItemThrowSelectorVisibility ********************

// ********** Begin Class UPlayerMapUI Function SwitchLegendVisibility *****************************
struct PlayerMapUI_eventSwitchLegendVisibility_Parms
{
	bool IsVisible;
};
static FName NAME_UPlayerMapUI_SwitchLegendVisibility = FName(TEXT("SwitchLegendVisibility"));
void UPlayerMapUI::SwitchLegendVisibility(bool IsVisible)
{
	PlayerMapUI_eventSwitchLegendVisibility_Parms Parms;
	Parms.IsVisible=IsVisible ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UPlayerMapUI_SwitchLegendVisibility);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UPlayerMapUI_SwitchLegendVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Player/UI/PlayerMapUI.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPlayerMapUI_SwitchLegendVisibility_Statics::NewProp_IsVisible_SetBit(void* Obj)
{
	((PlayerMapUI_eventSwitchLegendVisibility_Parms*)Obj)->IsVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerMapUI_SwitchLegendVisibility_Statics::NewProp_IsVisible = { "IsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerMapUI_eventSwitchLegendVisibility_Parms), &Z_Construct_UFunction_UPlayerMapUI_SwitchLegendVisibility_Statics::NewProp_IsVisible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMapUI_SwitchLegendVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_SwitchLegendVisibility_Statics::NewProp_IsVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchLegendVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMapUI_SwitchLegendVisibility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerMapUI, nullptr, "SwitchLegendVisibility", Z_Construct_UFunction_UPlayerMapUI_SwitchLegendVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchLegendVisibility_Statics::PropPointers), sizeof(PlayerMapUI_eventSwitchLegendVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchLegendVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerMapUI_SwitchLegendVisibility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlayerMapUI_eventSwitchLegendVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerMapUI_SwitchLegendVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMapUI_SwitchLegendVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UPlayerMapUI Function SwitchLegendVisibility *******************************

// ********** Begin Class UPlayerMapUI Function SwitchMinigameUIVisibility *************************
struct PlayerMapUI_eventSwitchMinigameUIVisibility_Parms
{
	bool IsVisible;
};
static FName NAME_UPlayerMapUI_SwitchMinigameUIVisibility = FName(TEXT("SwitchMinigameUIVisibility"));
void UPlayerMapUI::SwitchMinigameUIVisibility(bool IsVisible)
{
	PlayerMapUI_eventSwitchMinigameUIVisibility_Parms Parms;
	Parms.IsVisible=IsVisible ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UPlayerMapUI_SwitchMinigameUIVisibility);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UPlayerMapUI_SwitchMinigameUIVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/UI/PlayerMapUI.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPlayerMapUI_SwitchMinigameUIVisibility_Statics::NewProp_IsVisible_SetBit(void* Obj)
{
	((PlayerMapUI_eventSwitchMinigameUIVisibility_Parms*)Obj)->IsVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerMapUI_SwitchMinigameUIVisibility_Statics::NewProp_IsVisible = { "IsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerMapUI_eventSwitchMinigameUIVisibility_Parms), &Z_Construct_UFunction_UPlayerMapUI_SwitchMinigameUIVisibility_Statics::NewProp_IsVisible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMapUI_SwitchMinigameUIVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_SwitchMinigameUIVisibility_Statics::NewProp_IsVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchMinigameUIVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMapUI_SwitchMinigameUIVisibility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerMapUI, nullptr, "SwitchMinigameUIVisibility", Z_Construct_UFunction_UPlayerMapUI_SwitchMinigameUIVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchMinigameUIVisibility_Statics::PropPointers), sizeof(PlayerMapUI_eventSwitchMinigameUIVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchMinigameUIVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerMapUI_SwitchMinigameUIVisibility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlayerMapUI_eventSwitchMinigameUIVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerMapUI_SwitchMinigameUIVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMapUI_SwitchMinigameUIVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UPlayerMapUI Function SwitchMinigameUIVisibility ***************************

// ********** Begin Class UPlayerMapUI Function SwitchMinigameWheelVisibility **********************
struct PlayerMapUI_eventSwitchMinigameWheelVisibility_Parms
{
	bool _visible;
};
static FName NAME_UPlayerMapUI_SwitchMinigameWheelVisibility = FName(TEXT("SwitchMinigameWheelVisibility"));
void UPlayerMapUI::SwitchMinigameWheelVisibility(bool _visible)
{
	PlayerMapUI_eventSwitchMinigameWheelVisibility_Parms Parms;
	Parms._visible=_visible ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UPlayerMapUI_SwitchMinigameWheelVisibility);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UPlayerMapUI_SwitchMinigameWheelVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI_Minigame" },
		{ "ModuleRelativePath", "Player/UI/PlayerMapUI.h" },
	};
#endif // WITH_METADATA
	static void NewProp__visible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__visible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPlayerMapUI_SwitchMinigameWheelVisibility_Statics::NewProp__visible_SetBit(void* Obj)
{
	((PlayerMapUI_eventSwitchMinigameWheelVisibility_Parms*)Obj)->_visible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerMapUI_SwitchMinigameWheelVisibility_Statics::NewProp__visible = { "_visible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerMapUI_eventSwitchMinigameWheelVisibility_Parms), &Z_Construct_UFunction_UPlayerMapUI_SwitchMinigameWheelVisibility_Statics::NewProp__visible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMapUI_SwitchMinigameWheelVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_SwitchMinigameWheelVisibility_Statics::NewProp__visible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchMinigameWheelVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMapUI_SwitchMinigameWheelVisibility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerMapUI, nullptr, "SwitchMinigameWheelVisibility", Z_Construct_UFunction_UPlayerMapUI_SwitchMinigameWheelVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchMinigameWheelVisibility_Statics::PropPointers), sizeof(PlayerMapUI_eventSwitchMinigameWheelVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchMinigameWheelVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerMapUI_SwitchMinigameWheelVisibility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlayerMapUI_eventSwitchMinigameWheelVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerMapUI_SwitchMinigameWheelVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMapUI_SwitchMinigameWheelVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UPlayerMapUI Function SwitchMinigameWheelVisibility ************************

// ********** Begin Class UPlayerMapUI Function SwitchMinionDuelSelectionMenu **********************
struct PlayerMapUI_eventSwitchMinionDuelSelectionMenu_Parms
{
	bool IsVisible;
};
static FName NAME_UPlayerMapUI_SwitchMinionDuelSelectionMenu = FName(TEXT("SwitchMinionDuelSelectionMenu"));
void UPlayerMapUI::SwitchMinionDuelSelectionMenu(bool IsVisible)
{
	PlayerMapUI_eventSwitchMinionDuelSelectionMenu_Parms Parms;
	Parms.IsVisible=IsVisible ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UPlayerMapUI_SwitchMinionDuelSelectionMenu);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UPlayerMapUI_SwitchMinionDuelSelectionMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Player/UI/PlayerMapUI.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPlayerMapUI_SwitchMinionDuelSelectionMenu_Statics::NewProp_IsVisible_SetBit(void* Obj)
{
	((PlayerMapUI_eventSwitchMinionDuelSelectionMenu_Parms*)Obj)->IsVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerMapUI_SwitchMinionDuelSelectionMenu_Statics::NewProp_IsVisible = { "IsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerMapUI_eventSwitchMinionDuelSelectionMenu_Parms), &Z_Construct_UFunction_UPlayerMapUI_SwitchMinionDuelSelectionMenu_Statics::NewProp_IsVisible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMapUI_SwitchMinionDuelSelectionMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_SwitchMinionDuelSelectionMenu_Statics::NewProp_IsVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchMinionDuelSelectionMenu_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMapUI_SwitchMinionDuelSelectionMenu_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerMapUI, nullptr, "SwitchMinionDuelSelectionMenu", Z_Construct_UFunction_UPlayerMapUI_SwitchMinionDuelSelectionMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchMinionDuelSelectionMenu_Statics::PropPointers), sizeof(PlayerMapUI_eventSwitchMinionDuelSelectionMenu_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchMinionDuelSelectionMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerMapUI_SwitchMinionDuelSelectionMenu_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlayerMapUI_eventSwitchMinionDuelSelectionMenu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerMapUI_SwitchMinionDuelSelectionMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMapUI_SwitchMinionDuelSelectionMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UPlayerMapUI Function SwitchMinionDuelSelectionMenu ************************

// ********** Begin Class UPlayerMapUI Function SwitchRouletteVisibility ***************************
struct PlayerMapUI_eventSwitchRouletteVisibility_Parms
{
	int32 Roulette;
	bool IsVisible;
};
static FName NAME_UPlayerMapUI_SwitchRouletteVisibility = FName(TEXT("SwitchRouletteVisibility"));
void UPlayerMapUI::SwitchRouletteVisibility(int32 Roulette, bool IsVisible)
{
	PlayerMapUI_eventSwitchRouletteVisibility_Parms Parms;
	Parms.Roulette=Roulette;
	Parms.IsVisible=IsVisible ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UPlayerMapUI_SwitchRouletteVisibility);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UPlayerMapUI_SwitchRouletteVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Player/UI/PlayerMapUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Roulette;
	static void NewProp_IsVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerMapUI_SwitchRouletteVisibility_Statics::NewProp_Roulette = { "Roulette", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerMapUI_eventSwitchRouletteVisibility_Parms, Roulette), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayerMapUI_SwitchRouletteVisibility_Statics::NewProp_IsVisible_SetBit(void* Obj)
{
	((PlayerMapUI_eventSwitchRouletteVisibility_Parms*)Obj)->IsVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerMapUI_SwitchRouletteVisibility_Statics::NewProp_IsVisible = { "IsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerMapUI_eventSwitchRouletteVisibility_Parms), &Z_Construct_UFunction_UPlayerMapUI_SwitchRouletteVisibility_Statics::NewProp_IsVisible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMapUI_SwitchRouletteVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_SwitchRouletteVisibility_Statics::NewProp_Roulette,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_SwitchRouletteVisibility_Statics::NewProp_IsVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchRouletteVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMapUI_SwitchRouletteVisibility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerMapUI, nullptr, "SwitchRouletteVisibility", Z_Construct_UFunction_UPlayerMapUI_SwitchRouletteVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchRouletteVisibility_Statics::PropPointers), sizeof(PlayerMapUI_eventSwitchRouletteVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchRouletteVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerMapUI_SwitchRouletteVisibility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlayerMapUI_eventSwitchRouletteVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerMapUI_SwitchRouletteVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMapUI_SwitchRouletteVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UPlayerMapUI Function SwitchRouletteVisibility *****************************

// ********** Begin Class UPlayerMapUI Function SwitchScoreListUI **********************************
struct PlayerMapUI_eventSwitchScoreListUI_Parms
{
	bool _visible;
};
static FName NAME_UPlayerMapUI_SwitchScoreListUI = FName(TEXT("SwitchScoreListUI"));
void UPlayerMapUI::SwitchScoreListUI(bool _visible)
{
	PlayerMapUI_eventSwitchScoreListUI_Parms Parms;
	Parms._visible=_visible ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UPlayerMapUI_SwitchScoreListUI);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UPlayerMapUI_SwitchScoreListUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Player/UI/PlayerMapUI.h" },
	};
#endif // WITH_METADATA
	static void NewProp__visible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__visible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPlayerMapUI_SwitchScoreListUI_Statics::NewProp__visible_SetBit(void* Obj)
{
	((PlayerMapUI_eventSwitchScoreListUI_Parms*)Obj)->_visible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerMapUI_SwitchScoreListUI_Statics::NewProp__visible = { "_visible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerMapUI_eventSwitchScoreListUI_Parms), &Z_Construct_UFunction_UPlayerMapUI_SwitchScoreListUI_Statics::NewProp__visible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMapUI_SwitchScoreListUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_SwitchScoreListUI_Statics::NewProp__visible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchScoreListUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMapUI_SwitchScoreListUI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerMapUI, nullptr, "SwitchScoreListUI", Z_Construct_UFunction_UPlayerMapUI_SwitchScoreListUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchScoreListUI_Statics::PropPointers), sizeof(PlayerMapUI_eventSwitchScoreListUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchScoreListUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerMapUI_SwitchScoreListUI_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlayerMapUI_eventSwitchScoreListUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerMapUI_SwitchScoreListUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMapUI_SwitchScoreListUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UPlayerMapUI Function SwitchScoreListUI ************************************

// ********** Begin Class UPlayerMapUI Function SwitchScoresVisibility *****************************
struct PlayerMapUI_eventSwitchScoresVisibility_Parms
{
	bool IsVisible;
};
static FName NAME_UPlayerMapUI_SwitchScoresVisibility = FName(TEXT("SwitchScoresVisibility"));
void UPlayerMapUI::SwitchScoresVisibility(bool IsVisible)
{
	PlayerMapUI_eventSwitchScoresVisibility_Parms Parms;
	Parms.IsVisible=IsVisible ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UPlayerMapUI_SwitchScoresVisibility);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UPlayerMapUI_SwitchScoresVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Player/UI/PlayerMapUI.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPlayerMapUI_SwitchScoresVisibility_Statics::NewProp_IsVisible_SetBit(void* Obj)
{
	((PlayerMapUI_eventSwitchScoresVisibility_Parms*)Obj)->IsVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerMapUI_SwitchScoresVisibility_Statics::NewProp_IsVisible = { "IsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerMapUI_eventSwitchScoresVisibility_Parms), &Z_Construct_UFunction_UPlayerMapUI_SwitchScoresVisibility_Statics::NewProp_IsVisible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMapUI_SwitchScoresVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_SwitchScoresVisibility_Statics::NewProp_IsVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchScoresVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMapUI_SwitchScoresVisibility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerMapUI, nullptr, "SwitchScoresVisibility", Z_Construct_UFunction_UPlayerMapUI_SwitchScoresVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchScoresVisibility_Statics::PropPointers), sizeof(PlayerMapUI_eventSwitchScoresVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchScoresVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerMapUI_SwitchScoresVisibility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlayerMapUI_eventSwitchScoresVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerMapUI_SwitchScoresVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMapUI_SwitchScoresVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UPlayerMapUI Function SwitchScoresVisibility *******************************

// ********** Begin Class UPlayerMapUI Function SwitchTurnUI ***************************************
struct PlayerMapUI_eventSwitchTurnUI_Parms
{
	int32 Team;
};
static FName NAME_UPlayerMapUI_SwitchTurnUI = FName(TEXT("SwitchTurnUI"));
void UPlayerMapUI::SwitchTurnUI(int32 Team)
{
	PlayerMapUI_eventSwitchTurnUI_Parms Parms;
	Parms.Team=Team;
	UFunction* Func = FindFunctionChecked(NAME_UPlayerMapUI_SwitchTurnUI);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UPlayerMapUI_SwitchTurnUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Player/UI/PlayerMapUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Team;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerMapUI_SwitchTurnUI_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerMapUI_eventSwitchTurnUI_Parms, Team), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMapUI_SwitchTurnUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_SwitchTurnUI_Statics::NewProp_Team,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchTurnUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMapUI_SwitchTurnUI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerMapUI, nullptr, "SwitchTurnUI", Z_Construct_UFunction_UPlayerMapUI_SwitchTurnUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchTurnUI_Statics::PropPointers), sizeof(PlayerMapUI_eventSwitchTurnUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchTurnUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerMapUI_SwitchTurnUI_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlayerMapUI_eventSwitchTurnUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerMapUI_SwitchTurnUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMapUI_SwitchTurnUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UPlayerMapUI Function SwitchTurnUI *****************************************

// ********** Begin Class UPlayerMapUI Function SwitchUITeamVisibility *****************************
struct PlayerMapUI_eventSwitchUITeamVisibility_Parms
{
	int32 Team;
	bool IsVisible;
};
static FName NAME_UPlayerMapUI_SwitchUITeamVisibility = FName(TEXT("SwitchUITeamVisibility"));
void UPlayerMapUI::SwitchUITeamVisibility(int32 Team, bool IsVisible)
{
	PlayerMapUI_eventSwitchUITeamVisibility_Parms Parms;
	Parms.Team=Team;
	Parms.IsVisible=IsVisible ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UPlayerMapUI_SwitchUITeamVisibility);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UPlayerMapUI_SwitchUITeamVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Player/UI/PlayerMapUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Team;
	static void NewProp_IsVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerMapUI_SwitchUITeamVisibility_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerMapUI_eventSwitchUITeamVisibility_Parms, Team), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayerMapUI_SwitchUITeamVisibility_Statics::NewProp_IsVisible_SetBit(void* Obj)
{
	((PlayerMapUI_eventSwitchUITeamVisibility_Parms*)Obj)->IsVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerMapUI_SwitchUITeamVisibility_Statics::NewProp_IsVisible = { "IsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerMapUI_eventSwitchUITeamVisibility_Parms), &Z_Construct_UFunction_UPlayerMapUI_SwitchUITeamVisibility_Statics::NewProp_IsVisible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMapUI_SwitchUITeamVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_SwitchUITeamVisibility_Statics::NewProp_Team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_SwitchUITeamVisibility_Statics::NewProp_IsVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchUITeamVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMapUI_SwitchUITeamVisibility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerMapUI, nullptr, "SwitchUITeamVisibility", Z_Construct_UFunction_UPlayerMapUI_SwitchUITeamVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchUITeamVisibility_Statics::PropPointers), sizeof(PlayerMapUI_eventSwitchUITeamVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchUITeamVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerMapUI_SwitchUITeamVisibility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlayerMapUI_eventSwitchUITeamVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerMapUI_SwitchUITeamVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMapUI_SwitchUITeamVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UPlayerMapUI Function SwitchUITeamVisibility *******************************

// ********** Begin Class UPlayerMapUI Function SwitchWheelValueSelected ***************************
struct PlayerMapUI_eventSwitchWheelValueSelected_Parms
{
	int32 _index;
	bool _selected;
};
static FName NAME_UPlayerMapUI_SwitchWheelValueSelected = FName(TEXT("SwitchWheelValueSelected"));
void UPlayerMapUI::SwitchWheelValueSelected(int32 _index, bool _selected)
{
	PlayerMapUI_eventSwitchWheelValueSelected_Parms Parms;
	Parms._index=_index;
	Parms._selected=_selected ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UPlayerMapUI_SwitchWheelValueSelected);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UPlayerMapUI_SwitchWheelValueSelected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI_Minigame" },
		{ "ModuleRelativePath", "Player/UI/PlayerMapUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__index;
	static void NewProp__selected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__selected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerMapUI_SwitchWheelValueSelected_Statics::NewProp__index = { "_index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerMapUI_eventSwitchWheelValueSelected_Parms, _index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayerMapUI_SwitchWheelValueSelected_Statics::NewProp__selected_SetBit(void* Obj)
{
	((PlayerMapUI_eventSwitchWheelValueSelected_Parms*)Obj)->_selected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerMapUI_SwitchWheelValueSelected_Statics::NewProp__selected = { "_selected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerMapUI_eventSwitchWheelValueSelected_Parms), &Z_Construct_UFunction_UPlayerMapUI_SwitchWheelValueSelected_Statics::NewProp__selected_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMapUI_SwitchWheelValueSelected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_SwitchWheelValueSelected_Statics::NewProp__index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_SwitchWheelValueSelected_Statics::NewProp__selected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchWheelValueSelected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMapUI_SwitchWheelValueSelected_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerMapUI, nullptr, "SwitchWheelValueSelected", Z_Construct_UFunction_UPlayerMapUI_SwitchWheelValueSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchWheelValueSelected_Statics::PropPointers), sizeof(PlayerMapUI_eventSwitchWheelValueSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_SwitchWheelValueSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerMapUI_SwitchWheelValueSelected_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlayerMapUI_eventSwitchWheelValueSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerMapUI_SwitchWheelValueSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMapUI_SwitchWheelValueSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UPlayerMapUI Function SwitchWheelValueSelected *****************************

// ********** Begin Class UPlayerMapUI Function UpdateCoins ****************************************
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMapUI_UpdateCoins_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerMapUI, nullptr, "UpdateCoins", Z_Construct_UFunction_UPlayerMapUI_UpdateCoins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_UpdateCoins_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerMapUI_UpdateCoins_Statics::PlayerMapUI_eventUpdateCoins_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_UpdateCoins_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerMapUI_UpdateCoins_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UPlayerMapUI Function UpdateCoins ******************************************

// ********** Begin Class UPlayerMapUI Function UpdateCrowns ***************************************
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMapUI_UpdateCrowns_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerMapUI, nullptr, "UpdateCrowns", Z_Construct_UFunction_UPlayerMapUI_UpdateCrowns_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_UpdateCrowns_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerMapUI_UpdateCrowns_Statics::PlayerMapUI_eventUpdateCrowns_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_UpdateCrowns_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerMapUI_UpdateCrowns_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UPlayerMapUI Function UpdateCrowns *****************************************

// ********** Begin Class UPlayerMapUI Function UpdateDuelScreenInfo *******************************
struct PlayerMapUI_eventUpdateDuelScreenInfo_Parms
{
	int32 _coins;
	int32 _crowns;
	EDuelType _duelType;
	int32 _team;
};
static FName NAME_UPlayerMapUI_UpdateDuelScreenInfo = FName(TEXT("UpdateDuelScreenInfo"));
void UPlayerMapUI::UpdateDuelScreenInfo(int32 _coins, int32 _crowns, EDuelType _duelType, int32 _team)
{
	PlayerMapUI_eventUpdateDuelScreenInfo_Parms Parms;
	Parms._coins=_coins;
	Parms._crowns=_crowns;
	Parms._duelType=_duelType;
	Parms._team=_team;
	UFunction* Func = FindFunctionChecked(NAME_UPlayerMapUI_UpdateDuelScreenInfo);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UPlayerMapUI_UpdateDuelScreenInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Player/UI/PlayerMapUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__coins;
	static const UECodeGen_Private::FIntPropertyParams NewProp__crowns;
	static const UECodeGen_Private::FBytePropertyParams NewProp__duelType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__duelType;
	static const UECodeGen_Private::FIntPropertyParams NewProp__team;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerMapUI_UpdateDuelScreenInfo_Statics::NewProp__coins = { "_coins", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerMapUI_eventUpdateDuelScreenInfo_Parms, _coins), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerMapUI_UpdateDuelScreenInfo_Statics::NewProp__crowns = { "_crowns", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerMapUI_eventUpdateDuelScreenInfo_Parms, _crowns), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPlayerMapUI_UpdateDuelScreenInfo_Statics::NewProp__duelType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPlayerMapUI_UpdateDuelScreenInfo_Statics::NewProp__duelType = { "_duelType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerMapUI_eventUpdateDuelScreenInfo_Parms, _duelType), Z_Construct_UEnum_PartyJungle_EDuelType, METADATA_PARAMS(0, nullptr) }; // 2964326876
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerMapUI_UpdateDuelScreenInfo_Statics::NewProp__team = { "_team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerMapUI_eventUpdateDuelScreenInfo_Parms, _team), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMapUI_UpdateDuelScreenInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_UpdateDuelScreenInfo_Statics::NewProp__coins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_UpdateDuelScreenInfo_Statics::NewProp__crowns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_UpdateDuelScreenInfo_Statics::NewProp__duelType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_UpdateDuelScreenInfo_Statics::NewProp__duelType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMapUI_UpdateDuelScreenInfo_Statics::NewProp__team,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_UpdateDuelScreenInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMapUI_UpdateDuelScreenInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerMapUI, nullptr, "UpdateDuelScreenInfo", Z_Construct_UFunction_UPlayerMapUI_UpdateDuelScreenInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_UpdateDuelScreenInfo_Statics::PropPointers), sizeof(PlayerMapUI_eventUpdateDuelScreenInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_UpdateDuelScreenInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerMapUI_UpdateDuelScreenInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlayerMapUI_eventUpdateDuelScreenInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerMapUI_UpdateDuelScreenInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMapUI_UpdateDuelScreenInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UPlayerMapUI Function UpdateDuelScreenInfo *********************************

// ********** Begin Class UPlayerMapUI Function UpdateUIScore **************************************
struct PlayerMapUI_eventUpdateUIScore_Parms
{
	AScoreDatabase* ScoresList;
};
static FName NAME_UPlayerMapUI_UpdateUIScore = FName(TEXT("UpdateUIScore"));
void UPlayerMapUI::UpdateUIScore(AScoreDatabase* ScoresList)
{
	PlayerMapUI_eventUpdateUIScore_Parms Parms;
	Parms.ScoresList=ScoresList;
	UFunction* Func = FindFunctionChecked(NAME_UPlayerMapUI_UpdateUIScore);
	ProcessEvent(Func,&Parms);
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMapUI_UpdateUIScore_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerMapUI, nullptr, "UpdateUIScore", Z_Construct_UFunction_UPlayerMapUI_UpdateUIScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_UpdateUIScore_Statics::PropPointers), sizeof(PlayerMapUI_eventUpdateUIScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMapUI_UpdateUIScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerMapUI_UpdateUIScore_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UPlayerMapUI Function UpdateUIScore ****************************************

// ********** Begin Class UPlayerMapUI *************************************************************
void UPlayerMapUI::StaticRegisterNativesUPlayerMapUI()
{
	UClass* Class = UPlayerMapUI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SpinWheel", &UPlayerMapUI::execSpinWheel },
		{ "UpdateCoins", &UPlayerMapUI::execUpdateCoins },
		{ "UpdateCrowns", &UPlayerMapUI::execUpdateCrowns },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPlayerMapUI;
UClass* UPlayerMapUI::GetPrivateStaticClass()
{
	using TClass = UPlayerMapUI;
	if (!Z_Registration_Info_UClass_UPlayerMapUI.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlayerMapUI"),
			Z_Registration_Info_UClass_UPlayerMapUI.InnerSingleton,
			StaticRegisterNativesUPlayerMapUI,
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
	return Z_Registration_Info_UClass_UPlayerMapUI.InnerSingleton;
}
UClass* Z_Construct_UClass_UPlayerMapUI_NoRegister()
{
	return UPlayerMapUI::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPlayerMapUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Player/UI/PlayerMapUI.h" },
		{ "ModuleRelativePath", "Player/UI/PlayerMapUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoresDb_MetaData[] = {
		{ "Category", "PlayerMapUI" },
		{ "ModuleRelativePath", "Player/UI/PlayerMapUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WheelValue_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Player/UI/PlayerMapUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScoresDb;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WheelValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerMapUI_HideInScreenText, "HideInScreenText" }, // 3348733800
		{ &Z_Construct_UFunction_UPlayerMapUI_InitializeRouletteElement, "InitializeRouletteElement" }, // 3072822697
		{ &Z_Construct_UFunction_UPlayerMapUI_InitializeUI, "InitializeUI" }, // 2712313346
		{ &Z_Construct_UFunction_UPlayerMapUI_InitializeWheelValue, "InitializeWheelValue" }, // 1173492839
		{ &Z_Construct_UFunction_UPlayerMapUI_SetMinigameVisibleTime, "SetMinigameVisibleTime" }, // 2620845466
		{ &Z_Construct_UFunction_UPlayerMapUI_SetScore, "SetScore" }, // 489454972
		{ &Z_Construct_UFunction_UPlayerMapUI_SetupUIPots, "SetupUIPots" }, // 2685654397
		{ &Z_Construct_UFunction_UPlayerMapUI_ShowTextInScreen, "ShowTextInScreen" }, // 3679402220
		{ &Z_Construct_UFunction_UPlayerMapUI_SpinWheel, "SpinWheel" }, // 4232801093
		{ &Z_Construct_UFunction_UPlayerMapUI_SpinWheelEvent, "SpinWheelEvent" }, // 2721343810
		{ &Z_Construct_UFunction_UPlayerMapUI_SwitchChallengePlayerUIVisibility, "SwitchChallengePlayerUIVisibility" }, // 336042933
		{ &Z_Construct_UFunction_UPlayerMapUI_SwitchChallengePopupVisibility, "SwitchChallengePopupVisibility" }, // 256378770
		{ &Z_Construct_UFunction_UPlayerMapUI_SwitchChallengeVisibility, "SwitchChallengeVisibility" }, // 2851671446
		{ &Z_Construct_UFunction_UPlayerMapUI_SwitchCrownSavePlaceVisibility, "SwitchCrownSavePlaceVisibility" }, // 233007215
		{ &Z_Construct_UFunction_UPlayerMapUI_SwitchCrownStoreVisibility, "SwitchCrownStoreVisibility" }, // 2702068171
		{ &Z_Construct_UFunction_UPlayerMapUI_SwitchDuelTurnUI, "SwitchDuelTurnUI" }, // 2827719201
		{ &Z_Construct_UFunction_UPlayerMapUI_SwitchItemThrowPlayer, "SwitchItemThrowPlayer" }, // 767679543
		{ &Z_Construct_UFunction_UPlayerMapUI_SwitchItemThrowSelectorVisibility, "SwitchItemThrowSelectorVisibility" }, // 2851455349
		{ &Z_Construct_UFunction_UPlayerMapUI_SwitchLegendVisibility, "SwitchLegendVisibility" }, // 199844718
		{ &Z_Construct_UFunction_UPlayerMapUI_SwitchMinigameUIVisibility, "SwitchMinigameUIVisibility" }, // 1714041853
		{ &Z_Construct_UFunction_UPlayerMapUI_SwitchMinigameWheelVisibility, "SwitchMinigameWheelVisibility" }, // 692014330
		{ &Z_Construct_UFunction_UPlayerMapUI_SwitchMinionDuelSelectionMenu, "SwitchMinionDuelSelectionMenu" }, // 953674691
		{ &Z_Construct_UFunction_UPlayerMapUI_SwitchRouletteVisibility, "SwitchRouletteVisibility" }, // 3679523160
		{ &Z_Construct_UFunction_UPlayerMapUI_SwitchScoreListUI, "SwitchScoreListUI" }, // 2838422833
		{ &Z_Construct_UFunction_UPlayerMapUI_SwitchScoresVisibility, "SwitchScoresVisibility" }, // 1421446087
		{ &Z_Construct_UFunction_UPlayerMapUI_SwitchTurnUI, "SwitchTurnUI" }, // 1048608052
		{ &Z_Construct_UFunction_UPlayerMapUI_SwitchUITeamVisibility, "SwitchUITeamVisibility" }, // 2593174012
		{ &Z_Construct_UFunction_UPlayerMapUI_SwitchWheelValueSelected, "SwitchWheelValueSelected" }, // 1012997367
		{ &Z_Construct_UFunction_UPlayerMapUI_UpdateCoins, "UpdateCoins" }, // 2055757430
		{ &Z_Construct_UFunction_UPlayerMapUI_UpdateCrowns, "UpdateCrowns" }, // 865943901
		{ &Z_Construct_UFunction_UPlayerMapUI_UpdateDuelScreenInfo, "UpdateDuelScreenInfo" }, // 3117213477
		{ &Z_Construct_UFunction_UPlayerMapUI_UpdateUIScore, "UpdateUIScore" }, // 274681922
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerMapUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerMapUI_Statics::NewProp_ScoresDb = { "ScoresDb", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerMapUI, ScoresDb), Z_Construct_UClass_AScoreDatabase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoresDb_MetaData), NewProp_ScoresDb_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerMapUI_Statics::NewProp_WheelValue = { "WheelValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerMapUI, WheelValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WheelValue_MetaData), NewProp_WheelValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerMapUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMapUI_Statics::NewProp_ScoresDb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMapUI_Statics::NewProp_WheelValue,
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
UPlayerMapUI::UPlayerMapUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerMapUI);
UPlayerMapUI::~UPlayerMapUI() {}
// ********** End Class UPlayerMapUI ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_UI_PlayerMapUI_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerMapUI, UPlayerMapUI::StaticClass, TEXT("UPlayerMapUI"), &Z_Registration_Info_UClass_UPlayerMapUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerMapUI), 2429596031U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_UI_PlayerMapUI_h__Script_PartyJungle_1384522654(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_UI_PlayerMapUI_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_UI_PlayerMapUI_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
