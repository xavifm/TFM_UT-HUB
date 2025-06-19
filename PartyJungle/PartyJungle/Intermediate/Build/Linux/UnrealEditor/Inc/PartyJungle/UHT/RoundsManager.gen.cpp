// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Rounds/RoundsManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoundsManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AAudioManager_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AChallengeDatabase_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ARoundsManager();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ARoundsManager_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AScoreDatabase_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_UPlayerMapUI_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// End Cross Module References

// Begin Class ARoundsManager Function AssignMapUI
struct Z_Construct_UFunction_ARoundsManager_AssignMapUI_Statics
{
	struct RoundsManager_eventAssignMapUI_Parms
	{
		UPlayerMapUI* _mapUI;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Rounds/RoundsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__mapUI_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__mapUI;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARoundsManager_AssignMapUI_Statics::NewProp__mapUI = { "_mapUI", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoundsManager_eventAssignMapUI_Parms, _mapUI), Z_Construct_UClass_UPlayerMapUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__mapUI_MetaData), NewProp__mapUI_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoundsManager_AssignMapUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoundsManager_AssignMapUI_Statics::NewProp__mapUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundsManager_AssignMapUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoundsManager_AssignMapUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoundsManager, nullptr, "AssignMapUI", nullptr, nullptr, Z_Construct_UFunction_ARoundsManager_AssignMapUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundsManager_AssignMapUI_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARoundsManager_AssignMapUI_Statics::RoundsManager_eventAssignMapUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundsManager_AssignMapUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoundsManager_AssignMapUI_Statics::Function_MetaDataParams) };
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
	P_GET_OBJECT(UPlayerMapUI,Z_Param__mapUI);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AssignMapUI(Z_Param__mapUI);
	P_NATIVE_END;
}
// End Class ARoundsManager Function AssignMapUI

// Begin Class ARoundsManager Function FinishGame
struct Z_Construct_UFunction_ARoundsManager_FinishGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Rounds/RoundsManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoundsManager_FinishGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoundsManager, nullptr, "FinishGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundsManager_FinishGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoundsManager_FinishGame_Statics::Function_MetaDataParams) };
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
// End Class ARoundsManager Function FinishGame

// Begin Class ARoundsManager Function GetCurrentRound
struct Z_Construct_UFunction_ARoundsManager_GetCurrentRound_Statics
{
	struct RoundsManager_eventGetCurrentRound_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Rounds/RoundsManager.h" },
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoundsManager_GetCurrentRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoundsManager, nullptr, "GetCurrentRound", nullptr, nullptr, Z_Construct_UFunction_ARoundsManager_GetCurrentRound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundsManager_GetCurrentRound_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARoundsManager_GetCurrentRound_Statics::RoundsManager_eventGetCurrentRound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundsManager_GetCurrentRound_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoundsManager_GetCurrentRound_Statics::Function_MetaDataParams) };
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
// End Class ARoundsManager Function GetCurrentRound

// Begin Class ARoundsManager Function GetRoundsLeft
struct Z_Construct_UFunction_ARoundsManager_GetRoundsLeft_Statics
{
	struct RoundsManager_eventGetRoundsLeft_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Rounds/RoundsManager.h" },
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoundsManager_GetRoundsLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoundsManager, nullptr, "GetRoundsLeft", nullptr, nullptr, Z_Construct_UFunction_ARoundsManager_GetRoundsLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundsManager_GetRoundsLeft_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARoundsManager_GetRoundsLeft_Statics::RoundsManager_eventGetRoundsLeft_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundsManager_GetRoundsLeft_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoundsManager_GetRoundsLeft_Statics::Function_MetaDataParams) };
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
// End Class ARoundsManager Function GetRoundsLeft

// Begin Class ARoundsManager Function HandleEndRound
struct Z_Construct_UFunction_ARoundsManager_HandleEndRound_Statics
{
	struct RoundsManager_eventHandleEndRound_Parms
	{
		bool _minigame;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Rounds/RoundsManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp__minigame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__minigame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ARoundsManager_HandleEndRound_Statics::NewProp__minigame_SetBit(void* Obj)
{
	((RoundsManager_eventHandleEndRound_Parms*)Obj)->_minigame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARoundsManager_HandleEndRound_Statics::NewProp__minigame = { "_minigame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RoundsManager_eventHandleEndRound_Parms), &Z_Construct_UFunction_ARoundsManager_HandleEndRound_Statics::NewProp__minigame_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoundsManager_HandleEndRound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoundsManager_HandleEndRound_Statics::NewProp__minigame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundsManager_HandleEndRound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoundsManager_HandleEndRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoundsManager, nullptr, "HandleEndRound", nullptr, nullptr, Z_Construct_UFunction_ARoundsManager_HandleEndRound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundsManager_HandleEndRound_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARoundsManager_HandleEndRound_Statics::RoundsManager_eventHandleEndRound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundsManager_HandleEndRound_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoundsManager_HandleEndRound_Statics::Function_MetaDataParams) };
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
	P_GET_UBOOL(Z_Param__minigame);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleEndRound(Z_Param__minigame);
	P_NATIVE_END;
}
// End Class ARoundsManager Function HandleEndRound

// Begin Class ARoundsManager Function StartEndRoundMinigame
struct Z_Construct_UFunction_ARoundsManager_StartEndRoundMinigame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Rounds/RoundsManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoundsManager_StartEndRoundMinigame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoundsManager, nullptr, "StartEndRoundMinigame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundsManager_StartEndRoundMinigame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoundsManager_StartEndRoundMinigame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ARoundsManager_StartEndRoundMinigame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoundsManager_StartEndRoundMinigame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoundsManager::execStartEndRoundMinigame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartEndRoundMinigame();
	P_NATIVE_END;
}
// End Class ARoundsManager Function StartEndRoundMinigame

// Begin Class ARoundsManager Function StartNextRound
struct Z_Construct_UFunction_ARoundsManager_StartNextRound_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Rounds/RoundsManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoundsManager_StartNextRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoundsManager, nullptr, "StartNextRound", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundsManager_StartNextRound_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoundsManager_StartNextRound_Statics::Function_MetaDataParams) };
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
// End Class ARoundsManager Function StartNextRound

// Begin Class ARoundsManager
void ARoundsManager::StaticRegisterNativesARoundsManager()
{
	UClass* Class = ARoundsManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AssignMapUI", &ARoundsManager::execAssignMapUI },
		{ "FinishGame", &ARoundsManager::execFinishGame },
		{ "GetCurrentRound", &ARoundsManager::execGetCurrentRound },
		{ "GetRoundsLeft", &ARoundsManager::execGetRoundsLeft },
		{ "HandleEndRound", &ARoundsManager::execHandleEndRound },
		{ "StartEndRoundMinigame", &ARoundsManager::execStartEndRoundMinigame },
		{ "StartNextRound", &ARoundsManager::execStartNextRound },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARoundsManager);
UClass* Z_Construct_UClass_ARoundsManager_NoRegister()
{
	return ARoundsManager::StaticClass();
}
struct Z_Construct_UClass_ARoundsManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Rounds/RoundsManager.h" },
		{ "ModuleRelativePath", "Rounds/RoundsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameFinished_MetaData[] = {
		{ "Category", "Rounds" },
		{ "ModuleRelativePath", "Rounds/RoundsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioManager_MetaData[] = {
		{ "Category", "Rounds Audio" },
		{ "ModuleRelativePath", "Rounds/RoundsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRounds_MetaData[] = {
		{ "Category", "Rounds" },
		{ "ModuleRelativePath", "Rounds/RoundsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRound_MetaData[] = {
		{ "Category", "Rounds" },
		{ "ModuleRelativePath", "Rounds/RoundsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapUI_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Rounds/RoundsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoresDB_MetaData[] = {
		{ "Category", "ScoresDB" },
		{ "ModuleRelativePath", "Rounds/RoundsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChallengeDB_MetaData[] = {
		{ "Category", "ChallengeDB" },
		{ "ModuleRelativePath", "Rounds/RoundsManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_GameFinished_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_GameFinished;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioManager;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxRounds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentRound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapUI;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScoresDB;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChallengeDB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARoundsManager_AssignMapUI, "AssignMapUI" }, // 569612526
		{ &Z_Construct_UFunction_ARoundsManager_FinishGame, "FinishGame" }, // 2247627184
		{ &Z_Construct_UFunction_ARoundsManager_GetCurrentRound, "GetCurrentRound" }, // 2762597065
		{ &Z_Construct_UFunction_ARoundsManager_GetRoundsLeft, "GetRoundsLeft" }, // 3978237118
		{ &Z_Construct_UFunction_ARoundsManager_HandleEndRound, "HandleEndRound" }, // 579427661
		{ &Z_Construct_UFunction_ARoundsManager_StartEndRoundMinigame, "StartEndRoundMinigame" }, // 4104889651
		{ &Z_Construct_UFunction_ARoundsManager_StartNextRound, "StartNextRound" }, // 925592627
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoundsManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ARoundsManager_Statics::NewProp_GameFinished_SetBit(void* Obj)
{
	((ARoundsManager*)Obj)->GameFinished = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARoundsManager_Statics::NewProp_GameFinished = { "GameFinished", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARoundsManager), &Z_Construct_UClass_ARoundsManager_Statics::NewProp_GameFinished_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameFinished_MetaData), NewProp_GameFinished_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoundsManager_Statics::NewProp_AudioManager = { "AudioManager", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoundsManager, AudioManager), Z_Construct_UClass_AAudioManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioManager_MetaData), NewProp_AudioManager_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARoundsManager_Statics::NewProp_MaxRounds = { "MaxRounds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoundsManager, MaxRounds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRounds_MetaData), NewProp_MaxRounds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARoundsManager_Statics::NewProp_CurrentRound = { "CurrentRound", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoundsManager, CurrentRound), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRound_MetaData), NewProp_CurrentRound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoundsManager_Statics::NewProp_MapUI = { "MapUI", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoundsManager, MapUI), Z_Construct_UClass_UPlayerMapUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapUI_MetaData), NewProp_MapUI_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoundsManager_Statics::NewProp_ScoresDB = { "ScoresDB", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoundsManager, ScoresDB), Z_Construct_UClass_AScoreDatabase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoresDB_MetaData), NewProp_ScoresDB_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoundsManager_Statics::NewProp_ChallengeDB = { "ChallengeDB", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoundsManager, ChallengeDB), Z_Construct_UClass_AChallengeDatabase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChallengeDB_MetaData), NewProp_ChallengeDB_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARoundsManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundsManager_Statics::NewProp_GameFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundsManager_Statics::NewProp_AudioManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundsManager_Statics::NewProp_MaxRounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundsManager_Statics::NewProp_CurrentRound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundsManager_Statics::NewProp_MapUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundsManager_Statics::NewProp_ScoresDB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundsManager_Statics::NewProp_ChallengeDB,
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
	0x009000A4u,
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
template<> PARTYJUNGLE_API UClass* StaticClass<ARoundsManager>()
{
	return ARoundsManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARoundsManager);
ARoundsManager::~ARoundsManager() {}
// End Class ARoundsManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Rounds_RoundsManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARoundsManager, ARoundsManager::StaticClass, TEXT("ARoundsManager"), &Z_Registration_Info_UClass_ARoundsManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARoundsManager), 2353254812U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Rounds_RoundsManager_h_2805936246(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Rounds_RoundsManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Rounds_RoundsManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
