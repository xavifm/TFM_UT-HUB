// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Minigame/CrossInfo/MinigameLogic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinigameLogic() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinigameLogic();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinigameLogic_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_UMinigameDataGameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// End Cross Module References

// Begin Class AMinigameLogic Function CalculateWinner
struct Z_Construct_UFunction_AMinigameLogic_CalculateWinner_Statics
{
	struct MinigameLogic_eventCalculateWinner_Parms
	{
		bool _isChallenge;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
	};
#endif // WITH_METADATA
	static void NewProp__isChallenge_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__isChallenge;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMinigameLogic_CalculateWinner_Statics::NewProp__isChallenge_SetBit(void* Obj)
{
	((MinigameLogic_eventCalculateWinner_Parms*)Obj)->_isChallenge = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMinigameLogic_CalculateWinner_Statics::NewProp__isChallenge = { "_isChallenge", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MinigameLogic_eventCalculateWinner_Parms), &Z_Construct_UFunction_AMinigameLogic_CalculateWinner_Statics::NewProp__isChallenge_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMinigameLogic_CalculateWinner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameLogic_eventCalculateWinner_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigameLogic_CalculateWinner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameLogic_CalculateWinner_Statics::NewProp__isChallenge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameLogic_CalculateWinner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_CalculateWinner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameLogic_CalculateWinner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinigameLogic, nullptr, "CalculateWinner", nullptr, nullptr, Z_Construct_UFunction_AMinigameLogic_CalculateWinner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_CalculateWinner_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinigameLogic_CalculateWinner_Statics::MinigameLogic_eventCalculateWinner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_CalculateWinner_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameLogic_CalculateWinner_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMinigameLogic_CalculateWinner_Statics::MinigameLogic_eventCalculateWinner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinigameLogic_CalculateWinner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameLogic_CalculateWinner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigameLogic::execCalculateWinner)
{
	P_GET_UBOOL(Z_Param__isChallenge);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->CalculateWinner(Z_Param__isChallenge);
	P_NATIVE_END;
}
// End Class AMinigameLogic Function CalculateWinner

// Begin Class AMinigameLogic Function CheckIfTheMinigameHasFinished
struct Z_Construct_UFunction_AMinigameLogic_CheckIfTheMinigameHasFinished_Statics
{
	struct MinigameLogic_eventCheckIfTheMinigameHasFinished_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMinigameLogic_CheckIfTheMinigameHasFinished_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MinigameLogic_eventCheckIfTheMinigameHasFinished_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMinigameLogic_CheckIfTheMinigameHasFinished_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MinigameLogic_eventCheckIfTheMinigameHasFinished_Parms), &Z_Construct_UFunction_AMinigameLogic_CheckIfTheMinigameHasFinished_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigameLogic_CheckIfTheMinigameHasFinished_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameLogic_CheckIfTheMinigameHasFinished_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_CheckIfTheMinigameHasFinished_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameLogic_CheckIfTheMinigameHasFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinigameLogic, nullptr, "CheckIfTheMinigameHasFinished", nullptr, nullptr, Z_Construct_UFunction_AMinigameLogic_CheckIfTheMinigameHasFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_CheckIfTheMinigameHasFinished_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinigameLogic_CheckIfTheMinigameHasFinished_Statics::MinigameLogic_eventCheckIfTheMinigameHasFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_CheckIfTheMinigameHasFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameLogic_CheckIfTheMinigameHasFinished_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMinigameLogic_CheckIfTheMinigameHasFinished_Statics::MinigameLogic_eventCheckIfTheMinigameHasFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinigameLogic_CheckIfTheMinigameHasFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameLogic_CheckIfTheMinigameHasFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigameLogic::execCheckIfTheMinigameHasFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckIfTheMinigameHasFinished();
	P_NATIVE_END;
}
// End Class AMinigameLogic Function CheckIfTheMinigameHasFinished

// Begin Class AMinigameLogic Function FinishMinigame
struct Z_Construct_UFunction_AMinigameLogic_FinishMinigame_Statics
{
	struct MinigameLogic_eventFinishMinigame_Parms
	{
		int32 _winner;
		bool _draw;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__winner;
	static void NewProp__draw_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__draw;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMinigameLogic_FinishMinigame_Statics::NewProp__winner = { "_winner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameLogic_eventFinishMinigame_Parms, _winner), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMinigameLogic_FinishMinigame_Statics::NewProp__draw_SetBit(void* Obj)
{
	((MinigameLogic_eventFinishMinigame_Parms*)Obj)->_draw = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMinigameLogic_FinishMinigame_Statics::NewProp__draw = { "_draw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MinigameLogic_eventFinishMinigame_Parms), &Z_Construct_UFunction_AMinigameLogic_FinishMinigame_Statics::NewProp__draw_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigameLogic_FinishMinigame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameLogic_FinishMinigame_Statics::NewProp__winner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameLogic_FinishMinigame_Statics::NewProp__draw,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_FinishMinigame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameLogic_FinishMinigame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinigameLogic, nullptr, "FinishMinigame", nullptr, nullptr, Z_Construct_UFunction_AMinigameLogic_FinishMinigame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_FinishMinigame_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinigameLogic_FinishMinigame_Statics::MinigameLogic_eventFinishMinigame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_FinishMinigame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameLogic_FinishMinigame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMinigameLogic_FinishMinigame_Statics::MinigameLogic_eventFinishMinigame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinigameLogic_FinishMinigame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameLogic_FinishMinigame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigameLogic::execFinishMinigame)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__winner);
	P_GET_UBOOL(Z_Param__draw);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishMinigame(Z_Param__winner,Z_Param__draw);
	P_NATIVE_END;
}
// End Class AMinigameLogic Function FinishMinigame

// Begin Class AMinigameLogic Function SetTeamReady
struct Z_Construct_UFunction_AMinigameLogic_SetTeamReady_Statics
{
	struct MinigameLogic_eventSetTeamReady_Parms
	{
		int32 _team;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__team;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMinigameLogic_SetTeamReady_Statics::NewProp__team = { "_team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameLogic_eventSetTeamReady_Parms, _team), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigameLogic_SetTeamReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameLogic_SetTeamReady_Statics::NewProp__team,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_SetTeamReady_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameLogic_SetTeamReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinigameLogic, nullptr, "SetTeamReady", nullptr, nullptr, Z_Construct_UFunction_AMinigameLogic_SetTeamReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_SetTeamReady_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinigameLogic_SetTeamReady_Statics::MinigameLogic_eventSetTeamReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_SetTeamReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameLogic_SetTeamReady_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMinigameLogic_SetTeamReady_Statics::MinigameLogic_eventSetTeamReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinigameLogic_SetTeamReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameLogic_SetTeamReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigameLogic::execSetTeamReady)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__team);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTeamReady(Z_Param__team);
	P_NATIVE_END;
}
// End Class AMinigameLogic Function SetTeamReady

// Begin Class AMinigameLogic Function ShowWinnerScene
struct Z_Construct_UFunction_AMinigameLogic_ShowWinnerScene_Statics
{
	struct MinigameLogic_eventShowWinnerScene_Parms
	{
		int32 _endMinigameTime;
		int32 _winner;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__endMinigameTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp__winner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMinigameLogic_ShowWinnerScene_Statics::NewProp__endMinigameTime = { "_endMinigameTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameLogic_eventShowWinnerScene_Parms, _endMinigameTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMinigameLogic_ShowWinnerScene_Statics::NewProp__winner = { "_winner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameLogic_eventShowWinnerScene_Parms, _winner), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigameLogic_ShowWinnerScene_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameLogic_ShowWinnerScene_Statics::NewProp__endMinigameTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameLogic_ShowWinnerScene_Statics::NewProp__winner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_ShowWinnerScene_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameLogic_ShowWinnerScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinigameLogic, nullptr, "ShowWinnerScene", nullptr, nullptr, Z_Construct_UFunction_AMinigameLogic_ShowWinnerScene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_ShowWinnerScene_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinigameLogic_ShowWinnerScene_Statics::MinigameLogic_eventShowWinnerScene_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_ShowWinnerScene_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameLogic_ShowWinnerScene_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMinigameLogic_ShowWinnerScene_Statics::MinigameLogic_eventShowWinnerScene_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinigameLogic_ShowWinnerScene()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameLogic_ShowWinnerScene_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigameLogic::execShowWinnerScene)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__endMinigameTime);
	P_GET_PROPERTY(FIntProperty,Z_Param__winner);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowWinnerScene(Z_Param__endMinigameTime,Z_Param__winner);
	P_NATIVE_END;
}
// End Class AMinigameLogic Function ShowWinnerScene

// Begin Class AMinigameLogic Function StartMinigame
struct Z_Construct_UFunction_AMinigameLogic_StartMinigame_Statics
{
	struct MinigameLogic_eventStartMinigame_Parms
	{
		int32 _startTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__startTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMinigameLogic_StartMinigame_Statics::NewProp__startTime = { "_startTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameLogic_eventStartMinigame_Parms, _startTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigameLogic_StartMinigame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameLogic_StartMinigame_Statics::NewProp__startTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_StartMinigame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameLogic_StartMinigame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinigameLogic, nullptr, "StartMinigame", nullptr, nullptr, Z_Construct_UFunction_AMinigameLogic_StartMinigame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_StartMinigame_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinigameLogic_StartMinigame_Statics::MinigameLogic_eventStartMinigame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameLogic_StartMinigame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameLogic_StartMinigame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMinigameLogic_StartMinigame_Statics::MinigameLogic_eventStartMinigame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinigameLogic_StartMinigame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameLogic_StartMinigame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigameLogic::execStartMinigame)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__startTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartMinigame(Z_Param__startTime);
	P_NATIVE_END;
}
// End Class AMinigameLogic Function StartMinigame

// Begin Class AMinigameLogic
void AMinigameLogic::StaticRegisterNativesAMinigameLogic()
{
	UClass* Class = AMinigameLogic::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalculateWinner", &AMinigameLogic::execCalculateWinner },
		{ "CheckIfTheMinigameHasFinished", &AMinigameLogic::execCheckIfTheMinigameHasFinished },
		{ "FinishMinigame", &AMinigameLogic::execFinishMinigame },
		{ "SetTeamReady", &AMinigameLogic::execSetTeamReady },
		{ "ShowWinnerScene", &AMinigameLogic::execShowWinnerScene },
		{ "StartMinigame", &AMinigameLogic::execStartMinigame },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMinigameLogic);
UClass* Z_Construct_UClass_AMinigameLogic_NoRegister()
{
	return AMinigameLogic::StaticClass();
}
struct Z_Construct_UClass_AMinigameLogic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Minigame/CrossInfo/MinigameLogic.h" },
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameInstance_MetaData[] = {
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamMinigameScores_MetaData[] = {
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamsReady_MetaData[] = {
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinigameStarted_MetaData[] = {
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Minigame/CrossInfo/MinigameLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameInstance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TeamMinigameScores_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TeamMinigameScores_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TeamMinigameScores;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TeamsReady_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TeamsReady_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TeamsReady;
	static void NewProp_MinigameStarted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_MinigameStarted;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMinigameLogic_CalculateWinner, "CalculateWinner" }, // 3909443429
		{ &Z_Construct_UFunction_AMinigameLogic_CheckIfTheMinigameHasFinished, "CheckIfTheMinigameHasFinished" }, // 3258483724
		{ &Z_Construct_UFunction_AMinigameLogic_FinishMinigame, "FinishMinigame" }, // 2253415474
		{ &Z_Construct_UFunction_AMinigameLogic_SetTeamReady, "SetTeamReady" }, // 3883338738
		{ &Z_Construct_UFunction_AMinigameLogic_ShowWinnerScene, "ShowWinnerScene" }, // 3930965678
		{ &Z_Construct_UFunction_AMinigameLogic_StartMinigame, "StartMinigame" }, // 2472552975
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinigameLogic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinigameLogic_Statics::NewProp_GameInstance = { "GameInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigameLogic, GameInstance), Z_Construct_UClass_UMinigameDataGameInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameInstance_MetaData), NewProp_GameInstance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMinigameLogic_Statics::NewProp_TeamMinigameScores_ValueProp = { "TeamMinigameScores", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMinigameLogic_Statics::NewProp_TeamMinigameScores_Key_KeyProp = { "TeamMinigameScores_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMinigameLogic_Statics::NewProp_TeamMinigameScores = { "TeamMinigameScores", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigameLogic, TeamMinigameScores), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamMinigameScores_MetaData), NewProp_TeamMinigameScores_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMinigameLogic_Statics::NewProp_TeamsReady_ValueProp = { "TeamsReady", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMinigameLogic_Statics::NewProp_TeamsReady_Key_KeyProp = { "TeamsReady_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMinigameLogic_Statics::NewProp_TeamsReady = { "TeamsReady", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigameLogic, TeamsReady), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamsReady_MetaData), NewProp_TeamsReady_MetaData) };
void Z_Construct_UClass_AMinigameLogic_Statics::NewProp_MinigameStarted_SetBit(void* Obj)
{
	((AMinigameLogic*)Obj)->MinigameStarted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMinigameLogic_Statics::NewProp_MinigameStarted = { "MinigameStarted", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMinigameLogic), &Z_Construct_UClass_AMinigameLogic_Statics::NewProp_MinigameStarted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinigameStarted_MetaData), NewProp_MinigameStarted_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMinigameLogic_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigameLogic, StartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTime_MetaData), NewProp_StartTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMinigameLogic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameLogic_Statics::NewProp_GameInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameLogic_Statics::NewProp_TeamMinigameScores_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameLogic_Statics::NewProp_TeamMinigameScores_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameLogic_Statics::NewProp_TeamMinigameScores,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameLogic_Statics::NewProp_TeamsReady_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameLogic_Statics::NewProp_TeamsReady_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameLogic_Statics::NewProp_TeamsReady,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameLogic_Statics::NewProp_MinigameStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameLogic_Statics::NewProp_StartTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinigameLogic_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMinigameLogic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinigameLogic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMinigameLogic_Statics::ClassParams = {
	&AMinigameLogic::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMinigameLogic_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMinigameLogic_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinigameLogic_Statics::Class_MetaDataParams), Z_Construct_UClass_AMinigameLogic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMinigameLogic()
{
	if (!Z_Registration_Info_UClass_AMinigameLogic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMinigameLogic.OuterSingleton, Z_Construct_UClass_AMinigameLogic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMinigameLogic.OuterSingleton;
}
template<> PARTYJUNGLE_API UClass* StaticClass<AMinigameLogic>()
{
	return AMinigameLogic::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMinigameLogic);
AMinigameLogic::~AMinigameLogic() {}
// End Class AMinigameLogic

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameLogic_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMinigameLogic, AMinigameLogic::StaticClass, TEXT("AMinigameLogic"), &Z_Registration_Info_UClass_AMinigameLogic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMinigameLogic), 3027085136U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameLogic_h_3507310745(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameLogic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameLogic_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
