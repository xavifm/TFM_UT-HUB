// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Rounds/RoundsManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRoundsManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AAudioManager_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AChallengeDatabase_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AChallengeInformation_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ARoundsManager();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ARoundsManager_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AScoreDatabase_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_UPlayerMapUI_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ARoundsManager Function AssignMapUI **************************************
struct Z_Construct_UFunction_ARoundsManager_AssignMapUI_Statics
{
	struct RoundsManager_eventAssignMapUI_Parms
	{
		UPlayerMapUI* a_MapUI;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Assign the Map UI.\n\x09 * @param a_MapUI Pointer to the player's map UI.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Rounds/RoundsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign the Map UI.\n@param a_MapUI Pointer to the player's map UI." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_a_MapUI_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_a_MapUI;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARoundsManager_AssignMapUI_Statics::NewProp_a_MapUI = { "a_MapUI", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoundsManager_eventAssignMapUI_Parms, a_MapUI), Z_Construct_UClass_UPlayerMapUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_a_MapUI_MetaData), NewProp_a_MapUI_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoundsManager_AssignMapUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoundsManager_AssignMapUI_Statics::NewProp_a_MapUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundsManager_AssignMapUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoundsManager_AssignMapUI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARoundsManager, nullptr, "AssignMapUI", Z_Construct_UFunction_ARoundsManager_AssignMapUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundsManager_AssignMapUI_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARoundsManager_AssignMapUI_Statics::RoundsManager_eventAssignMapUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundsManager_AssignMapUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoundsManager_AssignMapUI_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARoundsManager_AssignMapUI_Statics::RoundsManager_eventAssignMapUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARoundsManager_AssignMapUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoundsManager_AssignMapUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoundsManager::execAssignMapUI)
{
	P_GET_OBJECT(UPlayerMapUI,Z_Param_a_MapUI);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AssignMapUI(Z_Param_a_MapUI);
	P_NATIVE_END;
}
// ********** End Class ARoundsManager Function AssignMapUI ****************************************

// ********** Begin Class ARoundsManager Function CheckForDuelMinigame *****************************
struct Z_Construct_UFunction_ARoundsManager_CheckForDuelMinigame_Statics
{
	struct RoundsManager_eventCheckForDuelMinigame_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks if a Minigame must be played on the end of the round.\n\x09 * @return True if a Minigame must be played on the end of the round.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Rounds/RoundsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if a Minigame must be played on the end of the round.\n@return True if a Minigame must be played on the end of the round." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ARoundsManager_CheckForDuelMinigame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RoundsManager_eventCheckForDuelMinigame_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARoundsManager_CheckForDuelMinigame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RoundsManager_eventCheckForDuelMinigame_Parms), &Z_Construct_UFunction_ARoundsManager_CheckForDuelMinigame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoundsManager_CheckForDuelMinigame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoundsManager_CheckForDuelMinigame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundsManager_CheckForDuelMinigame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoundsManager_CheckForDuelMinigame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARoundsManager, nullptr, "CheckForDuelMinigame", Z_Construct_UFunction_ARoundsManager_CheckForDuelMinigame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundsManager_CheckForDuelMinigame_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARoundsManager_CheckForDuelMinigame_Statics::RoundsManager_eventCheckForDuelMinigame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundsManager_CheckForDuelMinigame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoundsManager_CheckForDuelMinigame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARoundsManager_CheckForDuelMinigame_Statics::RoundsManager_eventCheckForDuelMinigame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARoundsManager_CheckForDuelMinigame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoundsManager_CheckForDuelMinigame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoundsManager::execCheckForDuelMinigame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckForDuelMinigame();
	P_NATIVE_END;
}
// ********** End Class ARoundsManager Function CheckForDuelMinigame *******************************

// ********** Begin Class ARoundsManager Function CheckForEndRoundMinigame *************************
struct Z_Construct_UFunction_ARoundsManager_CheckForEndRoundMinigame_Statics
{
	struct RoundsManager_eventCheckForEndRoundMinigame_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Rounds/RoundsManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ARoundsManager_CheckForEndRoundMinigame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RoundsManager_eventCheckForEndRoundMinigame_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARoundsManager_CheckForEndRoundMinigame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RoundsManager_eventCheckForEndRoundMinigame_Parms), &Z_Construct_UFunction_ARoundsManager_CheckForEndRoundMinigame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoundsManager_CheckForEndRoundMinigame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoundsManager_CheckForEndRoundMinigame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundsManager_CheckForEndRoundMinigame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoundsManager_CheckForEndRoundMinigame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARoundsManager, nullptr, "CheckForEndRoundMinigame", Z_Construct_UFunction_ARoundsManager_CheckForEndRoundMinigame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundsManager_CheckForEndRoundMinigame_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARoundsManager_CheckForEndRoundMinigame_Statics::RoundsManager_eventCheckForEndRoundMinigame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundsManager_CheckForEndRoundMinigame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoundsManager_CheckForEndRoundMinigame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARoundsManager_CheckForEndRoundMinigame_Statics::RoundsManager_eventCheckForEndRoundMinigame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARoundsManager_CheckForEndRoundMinigame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoundsManager_CheckForEndRoundMinigame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoundsManager::execCheckForEndRoundMinigame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckForEndRoundMinigame();
	P_NATIVE_END;
}
// ********** End Class ARoundsManager Function CheckForEndRoundMinigame ***************************

// ********** Begin Class ARoundsManager Function FinishGame ***************************************
struct Z_Construct_UFunction_ARoundsManager_FinishGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Finishes the Minigame.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Rounds/RoundsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finishes the Minigame." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoundsManager_FinishGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARoundsManager, nullptr, "FinishGame", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundsManager_FinishGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoundsManager_FinishGame_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ARoundsManager_FinishGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoundsManager_FinishGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoundsManager::execFinishGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishGame();
	P_NATIVE_END;
}
// ********** End Class ARoundsManager Function FinishGame *****************************************

// ********** Begin Class ARoundsManager Function GetCurrentRound **********************************
struct Z_Construct_UFunction_ARoundsManager_GetCurrentRound_Statics
{
	struct RoundsManager_eventGetCurrentRound_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the current round.\n\x09 * @return Current round.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Rounds/RoundsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current round.\n@return Current round." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARoundsManager_GetCurrentRound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoundsManager_eventGetCurrentRound_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoundsManager_GetCurrentRound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoundsManager_GetCurrentRound_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundsManager_GetCurrentRound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoundsManager_GetCurrentRound_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARoundsManager, nullptr, "GetCurrentRound", Z_Construct_UFunction_ARoundsManager_GetCurrentRound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundsManager_GetCurrentRound_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARoundsManager_GetCurrentRound_Statics::RoundsManager_eventGetCurrentRound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundsManager_GetCurrentRound_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoundsManager_GetCurrentRound_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARoundsManager_GetCurrentRound_Statics::RoundsManager_eventGetCurrentRound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARoundsManager_GetCurrentRound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoundsManager_GetCurrentRound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoundsManager::execGetCurrentRound)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentRound();
	P_NATIVE_END;
}
// ********** End Class ARoundsManager Function GetCurrentRound ************************************

// ********** Begin Class ARoundsManager Function GetRoundsLeft ************************************
struct Z_Construct_UFunction_ARoundsManager_GetRoundsLeft_Statics
{
	struct RoundsManager_eventGetRoundsLeft_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the amount of rounds left.\n\x09 * @return Amount of rounds left.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Rounds/RoundsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the amount of rounds left.\n@return Amount of rounds left." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARoundsManager_GetRoundsLeft_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoundsManager_eventGetRoundsLeft_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoundsManager_GetRoundsLeft_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoundsManager_GetRoundsLeft_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundsManager_GetRoundsLeft_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoundsManager_GetRoundsLeft_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARoundsManager, nullptr, "GetRoundsLeft", Z_Construct_UFunction_ARoundsManager_GetRoundsLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundsManager_GetRoundsLeft_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARoundsManager_GetRoundsLeft_Statics::RoundsManager_eventGetRoundsLeft_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundsManager_GetRoundsLeft_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoundsManager_GetRoundsLeft_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARoundsManager_GetRoundsLeft_Statics::RoundsManager_eventGetRoundsLeft_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARoundsManager_GetRoundsLeft()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoundsManager_GetRoundsLeft_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoundsManager::execGetRoundsLeft)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetRoundsLeft();
	P_NATIVE_END;
}
// ********** End Class ARoundsManager Function GetRoundsLeft **************************************

// ********** Begin Class ARoundsManager Function HandleEndRound ***********************************
struct Z_Construct_UFunction_ARoundsManager_HandleEndRound_Statics
{
	struct RoundsManager_eventHandleEndRound_Parms
	{
		bool a_Minigame;
		TArray<bool> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Handles the end of round logic.\n\x09 * @param a_Minigame Indicates if an end of round Minigame has been played.\n\x09 * @return Array of booleans indicating whether a Minigame must be played before ending the round.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Rounds/RoundsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles the end of round logic.\n@param a_Minigame Indicates if an end of round Minigame has been played.\n@return Array of booleans indicating whether a Minigame must be played before ending the round." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_a_Minigame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_a_Minigame;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ARoundsManager_HandleEndRound_Statics::NewProp_a_Minigame_SetBit(void* Obj)
{
	((RoundsManager_eventHandleEndRound_Parms*)Obj)->a_Minigame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARoundsManager_HandleEndRound_Statics::NewProp_a_Minigame = { "a_Minigame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RoundsManager_eventHandleEndRound_Parms), &Z_Construct_UFunction_ARoundsManager_HandleEndRound_Statics::NewProp_a_Minigame_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARoundsManager_HandleEndRound_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ARoundsManager_HandleEndRound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoundsManager_eventHandleEndRound_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoundsManager_HandleEndRound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoundsManager_HandleEndRound_Statics::NewProp_a_Minigame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoundsManager_HandleEndRound_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoundsManager_HandleEndRound_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundsManager_HandleEndRound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoundsManager_HandleEndRound_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARoundsManager, nullptr, "HandleEndRound", Z_Construct_UFunction_ARoundsManager_HandleEndRound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundsManager_HandleEndRound_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARoundsManager_HandleEndRound_Statics::RoundsManager_eventHandleEndRound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundsManager_HandleEndRound_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoundsManager_HandleEndRound_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARoundsManager_HandleEndRound_Statics::RoundsManager_eventHandleEndRound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARoundsManager_HandleEndRound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoundsManager_HandleEndRound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoundsManager::execHandleEndRound)
{
	P_GET_UBOOL(Z_Param_a_Minigame);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<bool>*)Z_Param__Result=P_THIS->HandleEndRound(Z_Param_a_Minigame);
	P_NATIVE_END;
}
// ********** End Class ARoundsManager Function HandleEndRound *************************************

// ********** Begin Class ARoundsManager Function StartNextRound ***********************************
struct Z_Construct_UFunction_ARoundsManager_StartNextRound_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Starts the next round\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Rounds/RoundsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Starts the next round" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoundsManager_StartNextRound_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARoundsManager, nullptr, "StartNextRound", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundsManager_StartNextRound_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoundsManager_StartNextRound_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ARoundsManager_StartNextRound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoundsManager_StartNextRound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoundsManager::execStartNextRound)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartNextRound();
	P_NATIVE_END;
}
// ********** End Class ARoundsManager Function StartNextRound *************************************

// ********** Begin Class ARoundsManager ***********************************************************
void ARoundsManager::StaticRegisterNativesARoundsManager()
{
	UClass* Class = ARoundsManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AssignMapUI", &ARoundsManager::execAssignMapUI },
		{ "CheckForDuelMinigame", &ARoundsManager::execCheckForDuelMinigame },
		{ "CheckForEndRoundMinigame", &ARoundsManager::execCheckForEndRoundMinigame },
		{ "FinishGame", &ARoundsManager::execFinishGame },
		{ "GetCurrentRound", &ARoundsManager::execGetCurrentRound },
		{ "GetRoundsLeft", &ARoundsManager::execGetRoundsLeft },
		{ "HandleEndRound", &ARoundsManager::execHandleEndRound },
		{ "StartNextRound", &ARoundsManager::execStartNextRound },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ARoundsManager;
UClass* ARoundsManager::GetPrivateStaticClass()
{
	using TClass = ARoundsManager;
	if (!Z_Registration_Info_UClass_ARoundsManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RoundsManager"),
			Z_Registration_Info_UClass_ARoundsManager.InnerSingleton,
			StaticRegisterNativesARoundsManager,
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
	return Z_Registration_Info_UClass_ARoundsManager.InnerSingleton;
}
UClass* Z_Construct_UClass_ARoundsManager_NoRegister()
{
	return ARoundsManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARoundsManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Actor in charge of managing the rounds of the game.\n */" },
#endif
		{ "IncludePath", "Rounds/RoundsManager.h" },
		{ "ModuleRelativePath", "Rounds/RoundsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor in charge of managing the rounds of the game." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_GameFinished_MetaData[] = {
		{ "Category", "Rounds" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Amount of round remaining for the game to announce its rounds left.\n" },
#endif
		{ "ModuleRelativePath", "Rounds/RoundsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Amount of round remaining for the game to announce its rounds left." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_AudioManager_MetaData[] = {
		{ "Category", "Rounds Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Indicates if the game has ended.\n" },
#endif
		{ "ModuleRelativePath", "Rounds/RoundsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Indicates if the game has ended." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_ChallengeInfo_MetaData[] = {
		{ "Category", "Challenge Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ToDo Capy: Substituir pel DuelManager\n" },
#endif
		{ "ModuleRelativePath", "Rounds/RoundsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ToDo Capy: Substituir pel DuelManager" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_MaxRounds_MetaData[] = {
		{ "Category", "Rounds" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Pointer to the Challenge information.\n" },
#endif
		{ "ModuleRelativePath", "Rounds/RoundsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Pointer to the Challenge information." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_EndRoundMinigameAvailable_MetaData[] = {
		{ "Category", "RoundsManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Maximum rounds of this game.\n" },
#endif
		{ "ModuleRelativePath", "Rounds/RoundsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Maximum rounds of this game." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_CurrentRound_MetaData[] = {
		{ "Category", "Rounds" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Volume of the SFX that sounds when entering the last round.\n" },
#endif
		{ "ModuleRelativePath", "Rounds/RoundsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Volume of the SFX that sounds when entering the last round." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_MapUI_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Current round of this game.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Rounds/RoundsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Current round of this game." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_ScoresDB_MetaData[] = {
		{ "Category", "ScoresDB" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Pointer to the map UI.\n" },
#endif
		{ "ModuleRelativePath", "Rounds/RoundsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Pointer to the map UI." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_ChallengeDB_MetaData[] = {
		{ "Category", "ChallengeDB" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Pointer to the Score Database.\n" },
#endif
		{ "ModuleRelativePath", "Rounds/RoundsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Pointer to the Score Database." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_m_GameFinished_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_m_GameFinished;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_AudioManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_ChallengeInfo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_m_MaxRounds;
	static void NewProp_m_EndRoundMinigameAvailable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_m_EndRoundMinigameAvailable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_m_CurrentRound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_MapUI;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_ScoresDB;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_ChallengeDB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARoundsManager_AssignMapUI, "AssignMapUI" }, // 1224720598
		{ &Z_Construct_UFunction_ARoundsManager_CheckForDuelMinigame, "CheckForDuelMinigame" }, // 206117543
		{ &Z_Construct_UFunction_ARoundsManager_CheckForEndRoundMinigame, "CheckForEndRoundMinigame" }, // 2527618696
		{ &Z_Construct_UFunction_ARoundsManager_FinishGame, "FinishGame" }, // 3959011074
		{ &Z_Construct_UFunction_ARoundsManager_GetCurrentRound, "GetCurrentRound" }, // 1089785845
		{ &Z_Construct_UFunction_ARoundsManager_GetRoundsLeft, "GetRoundsLeft" }, // 249979439
		{ &Z_Construct_UFunction_ARoundsManager_HandleEndRound, "HandleEndRound" }, // 1071255419
		{ &Z_Construct_UFunction_ARoundsManager_StartNextRound, "StartNextRound" }, // 1742918855
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoundsManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ARoundsManager_Statics::NewProp_m_GameFinished_SetBit(void* Obj)
{
	((ARoundsManager*)Obj)->m_GameFinished = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARoundsManager_Statics::NewProp_m_GameFinished = { "m_GameFinished", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARoundsManager), &Z_Construct_UClass_ARoundsManager_Statics::NewProp_m_GameFinished_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_GameFinished_MetaData), NewProp_m_GameFinished_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoundsManager_Statics::NewProp_m_AudioManager = { "m_AudioManager", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoundsManager, m_AudioManager), Z_Construct_UClass_AAudioManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_AudioManager_MetaData), NewProp_m_AudioManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoundsManager_Statics::NewProp_m_ChallengeInfo = { "m_ChallengeInfo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoundsManager, m_ChallengeInfo), Z_Construct_UClass_AChallengeInformation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_ChallengeInfo_MetaData), NewProp_m_ChallengeInfo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARoundsManager_Statics::NewProp_m_MaxRounds = { "m_MaxRounds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoundsManager, m_MaxRounds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_MaxRounds_MetaData), NewProp_m_MaxRounds_MetaData) };
void Z_Construct_UClass_ARoundsManager_Statics::NewProp_m_EndRoundMinigameAvailable_SetBit(void* Obj)
{
	((ARoundsManager*)Obj)->m_EndRoundMinigameAvailable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARoundsManager_Statics::NewProp_m_EndRoundMinigameAvailable = { "m_EndRoundMinigameAvailable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARoundsManager), &Z_Construct_UClass_ARoundsManager_Statics::NewProp_m_EndRoundMinigameAvailable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_EndRoundMinigameAvailable_MetaData), NewProp_m_EndRoundMinigameAvailable_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARoundsManager_Statics::NewProp_m_CurrentRound = { "m_CurrentRound", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoundsManager, m_CurrentRound), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_CurrentRound_MetaData), NewProp_m_CurrentRound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoundsManager_Statics::NewProp_m_MapUI = { "m_MapUI", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoundsManager, m_MapUI), Z_Construct_UClass_UPlayerMapUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_MapUI_MetaData), NewProp_m_MapUI_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoundsManager_Statics::NewProp_m_ScoresDB = { "m_ScoresDB", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoundsManager, m_ScoresDB), Z_Construct_UClass_AScoreDatabase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_ScoresDB_MetaData), NewProp_m_ScoresDB_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoundsManager_Statics::NewProp_m_ChallengeDB = { "m_ChallengeDB", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoundsManager, m_ChallengeDB), Z_Construct_UClass_AChallengeDatabase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_ChallengeDB_MetaData), NewProp_m_ChallengeDB_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARoundsManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundsManager_Statics::NewProp_m_GameFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundsManager_Statics::NewProp_m_AudioManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundsManager_Statics::NewProp_m_ChallengeInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundsManager_Statics::NewProp_m_MaxRounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundsManager_Statics::NewProp_m_EndRoundMinigameAvailable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundsManager_Statics::NewProp_m_CurrentRound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundsManager_Statics::NewProp_m_MapUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundsManager_Statics::NewProp_m_ScoresDB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundsManager_Statics::NewProp_m_ChallengeDB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARoundsManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARoundsManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARoundsManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARoundsManager_Statics::ClassParams = {
	&ARoundsManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARoundsManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARoundsManager_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARoundsManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ARoundsManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARoundsManager()
{
	if (!Z_Registration_Info_UClass_ARoundsManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARoundsManager.OuterSingleton, Z_Construct_UClass_ARoundsManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARoundsManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARoundsManager);
ARoundsManager::~ARoundsManager() {}
// ********** End Class ARoundsManager *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Rounds_RoundsManager_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARoundsManager, ARoundsManager::StaticClass, TEXT("ARoundsManager"), &Z_Registration_Info_UClass_ARoundsManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARoundsManager), 3089509204U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Rounds_RoundsManager_h__Script_PartyJungle_3395625114(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Rounds_RoundsManager_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Rounds_RoundsManager_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
