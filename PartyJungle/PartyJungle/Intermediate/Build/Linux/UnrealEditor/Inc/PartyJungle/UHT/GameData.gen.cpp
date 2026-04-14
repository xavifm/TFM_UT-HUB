// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/GameInstance/GameInstanceAux/GameData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGameData() {}

// ********** Begin Cross Module References ********************************************************
PARTYJUNGLE_API UClass* Z_Construct_UClass_UChallengeDto_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_UScoreDto_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_UTransactionDto_NoRegister();
PARTYJUNGLE_API UScriptStruct* Z_Construct_UScriptStruct_FGameData();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FGameData *********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGameData;
class UScriptStruct* FGameData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGameData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGameData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameData, (UObject*)Z_Construct_UPackage__Script_PartyJungle(), TEXT("GameData"));
	}
	return Z_Registration_Info_UScriptStruct_FGameData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGameData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Struct container of all the data that must be preserved between scenes.\n */" },
#endif
		{ "ModuleRelativePath", "GameInstance/GameInstanceAux/GameData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct container of all the data that must be preserved between scenes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DEFAULT_PLAYERS_IN_BOARD_MetaData[] = {
		{ "ModuleRelativePath", "GameInstance/GameInstanceAux/GameData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DEFAULT_ROUNDS_IN_BOARD_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Default amount of Players for a Game.\n" },
#endif
		{ "ModuleRelativePath", "GameInstance/GameInstanceAux/GameData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Default amount of Players for a Game." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_PlayersInBoard_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Default amount of Rounds for a Game.\n" },
#endif
		{ "ModuleRelativePath", "GameInstance/GameInstanceAux/GameData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Default amount of Rounds for a Game." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_RoundsInBoard_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Amount of Players for the current Game.\n" },
#endif
		{ "ModuleRelativePath", "GameInstance/GameInstanceAux/GameData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Amount of Players for the current Game." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_Scores_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Amount of Rounds for the current Game.\n" },
#endif
		{ "ModuleRelativePath", "GameInstance/GameInstanceAux/GameData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Amount of Rounds for the current Game." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_TransactionsRegistry_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Array of pointers to the Score Data for each Player in the current Game.\n" },
#endif
		{ "ModuleRelativePath", "GameInstance/GameInstanceAux/GameData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Array of pointers to the Score Data for each Player in the current Game." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_ChallengesRegistry_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Array of pointers to the Transaction Data for each Player in the current Game.\n" },
#endif
		{ "ModuleRelativePath", "GameInstance/GameInstanceAux/GameData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Array of pointers to the Transaction Data for each Player in the current Game." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DEFAULT_PLAYERS_IN_BOARD;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DEFAULT_ROUNDS_IN_BOARD;
	static const UECodeGen_Private::FIntPropertyParams NewProp_m_PlayersInBoard;
	static const UECodeGen_Private::FIntPropertyParams NewProp_m_RoundsInBoard;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_Scores_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_m_Scores;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_TransactionsRegistry_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_m_TransactionsRegistry;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_ChallengesRegistry_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_m_ChallengesRegistry;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameData_Statics::NewProp_DEFAULT_PLAYERS_IN_BOARD = { "DEFAULT_PLAYERS_IN_BOARD", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameData, DEFAULT_PLAYERS_IN_BOARD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DEFAULT_PLAYERS_IN_BOARD_MetaData), NewProp_DEFAULT_PLAYERS_IN_BOARD_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameData_Statics::NewProp_DEFAULT_ROUNDS_IN_BOARD = { "DEFAULT_ROUNDS_IN_BOARD", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameData, DEFAULT_ROUNDS_IN_BOARD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DEFAULT_ROUNDS_IN_BOARD_MetaData), NewProp_DEFAULT_ROUNDS_IN_BOARD_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameData_Statics::NewProp_m_PlayersInBoard = { "m_PlayersInBoard", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameData, m_PlayersInBoard), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_PlayersInBoard_MetaData), NewProp_m_PlayersInBoard_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameData_Statics::NewProp_m_RoundsInBoard = { "m_RoundsInBoard", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameData, m_RoundsInBoard), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_RoundsInBoard_MetaData), NewProp_m_RoundsInBoard_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameData_Statics::NewProp_m_Scores_Inner = { "m_Scores", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UScoreDto_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameData_Statics::NewProp_m_Scores = { "m_Scores", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameData, m_Scores), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_Scores_MetaData), NewProp_m_Scores_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameData_Statics::NewProp_m_TransactionsRegistry_Inner = { "m_TransactionsRegistry", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTransactionDto_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameData_Statics::NewProp_m_TransactionsRegistry = { "m_TransactionsRegistry", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameData, m_TransactionsRegistry), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_TransactionsRegistry_MetaData), NewProp_m_TransactionsRegistry_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameData_Statics::NewProp_m_ChallengesRegistry_Inner = { "m_ChallengesRegistry", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UChallengeDto_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameData_Statics::NewProp_m_ChallengesRegistry = { "m_ChallengesRegistry", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameData, m_ChallengesRegistry), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_ChallengesRegistry_MetaData), NewProp_m_ChallengesRegistry_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameData_Statics::NewProp_DEFAULT_PLAYERS_IN_BOARD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameData_Statics::NewProp_DEFAULT_ROUNDS_IN_BOARD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameData_Statics::NewProp_m_PlayersInBoard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameData_Statics::NewProp_m_RoundsInBoard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameData_Statics::NewProp_m_Scores_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameData_Statics::NewProp_m_Scores,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameData_Statics::NewProp_m_TransactionsRegistry_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameData_Statics::NewProp_m_TransactionsRegistry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameData_Statics::NewProp_m_ChallengesRegistry_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameData_Statics::NewProp_m_ChallengesRegistry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
	nullptr,
	&NewStructOps,
	"GameData",
	Z_Construct_UScriptStruct_FGameData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameData_Statics::PropPointers),
	sizeof(FGameData),
	alignof(FGameData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameData()
{
	if (!Z_Registration_Info_UScriptStruct_FGameData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGameData.InnerSingleton, Z_Construct_UScriptStruct_FGameData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGameData.InnerSingleton;
}
// ********** End ScriptStruct FGameData ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_GameInstance_GameInstanceAux_GameData_h__Script_PartyJungle_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGameData::StaticStruct, Z_Construct_UScriptStruct_FGameData_Statics::NewStructOps, TEXT("GameData"), &Z_Registration_Info_UScriptStruct_FGameData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameData), 2351023519U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_GameInstance_GameInstanceAux_GameData_h__Script_PartyJungle_1529401757(TEXT("/Script/PartyJungle"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_GameInstance_GameInstanceAux_GameData_h__Script_PartyJungle_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_GameInstance_GameInstanceAux_GameData_h__Script_PartyJungle_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
