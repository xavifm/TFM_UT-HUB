// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Controllers/GameLoopControllers/GameLoopControllerBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGameLoopControllerBase() {}

// ********** Begin Cross Module References ********************************************************
PARTYJUNGLE_API UClass* Z_Construct_UClass_AControllerBase();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AGameLoopControllerBase();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AGameLoopControllerBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGameLoopControllerBase Function CalculateWinner *************************
struct Z_Construct_UFunction_AGameLoopControllerBase_CalculateWinner_Statics
{
	struct GameLoopControllerBase_eventCalculateWinner_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Calculates the winner of this GameLoop.\n\x09 * @return Id of the winner player.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/GameLoopControllers/GameLoopControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calculates the winner of this GameLoop.\n@return Id of the winner player." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameLoopControllerBase_CalculateWinner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameLoopControllerBase_eventCalculateWinner_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameLoopControllerBase_CalculateWinner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLoopControllerBase_CalculateWinner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLoopControllerBase_CalculateWinner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLoopControllerBase_CalculateWinner_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGameLoopControllerBase, nullptr, "CalculateWinner", Z_Construct_UFunction_AGameLoopControllerBase_CalculateWinner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLoopControllerBase_CalculateWinner_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameLoopControllerBase_CalculateWinner_Statics::GameLoopControllerBase_eventCalculateWinner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLoopControllerBase_CalculateWinner_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameLoopControllerBase_CalculateWinner_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGameLoopControllerBase_CalculateWinner_Statics::GameLoopControllerBase_eventCalculateWinner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameLoopControllerBase_CalculateWinner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameLoopControllerBase_CalculateWinner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameLoopControllerBase::execCalculateWinner)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->CalculateWinner();
	P_NATIVE_END;
}
// ********** End Class AGameLoopControllerBase Function CalculateWinner ***************************

// ********** Begin Class AGameLoopControllerBase Function IsGameLoopFinished **********************
struct Z_Construct_UFunction_AGameLoopControllerBase_IsGameLoopFinished_Statics
{
	struct GameLoopControllerBase_eventIsGameLoopFinished_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets if the GameLoop has finished.\n\x09 * @return True if the GameLoop has finished.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/GameLoopControllers/GameLoopControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets if the GameLoop has finished.\n@return True if the GameLoop has finished." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGameLoopControllerBase_IsGameLoopFinished_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GameLoopControllerBase_eventIsGameLoopFinished_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameLoopControllerBase_IsGameLoopFinished_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameLoopControllerBase_eventIsGameLoopFinished_Parms), &Z_Construct_UFunction_AGameLoopControllerBase_IsGameLoopFinished_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameLoopControllerBase_IsGameLoopFinished_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLoopControllerBase_IsGameLoopFinished_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLoopControllerBase_IsGameLoopFinished_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLoopControllerBase_IsGameLoopFinished_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGameLoopControllerBase, nullptr, "IsGameLoopFinished", Z_Construct_UFunction_AGameLoopControllerBase_IsGameLoopFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLoopControllerBase_IsGameLoopFinished_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameLoopControllerBase_IsGameLoopFinished_Statics::GameLoopControllerBase_eventIsGameLoopFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLoopControllerBase_IsGameLoopFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameLoopControllerBase_IsGameLoopFinished_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGameLoopControllerBase_IsGameLoopFinished_Statics::GameLoopControllerBase_eventIsGameLoopFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameLoopControllerBase_IsGameLoopFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameLoopControllerBase_IsGameLoopFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameLoopControllerBase::execIsGameLoopFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsGameLoopFinished();
	P_NATIVE_END;
}
// ********** End Class AGameLoopControllerBase Function IsGameLoopFinished ************************

// ********** Begin Class AGameLoopControllerBase Function ResetGameLoop ***************************
struct Z_Construct_UFunction_AGameLoopControllerBase_ResetGameLoop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameLoop_Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Resets this GameLoop Controller.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/GameLoopControllers/GameLoopControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resets this GameLoop Controller." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLoopControllerBase_ResetGameLoop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGameLoopControllerBase, nullptr, "ResetGameLoop", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLoopControllerBase_ResetGameLoop_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameLoopControllerBase_ResetGameLoop_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AGameLoopControllerBase_ResetGameLoop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameLoopControllerBase_ResetGameLoop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameLoopControllerBase::execResetGameLoop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetGameLoop();
	P_NATIVE_END;
}
// ********** End Class AGameLoopControllerBase Function ResetGameLoop *****************************

// ********** Begin Class AGameLoopControllerBase Function SetTeamReady ****************************
struct Z_Construct_UFunction_AGameLoopControllerBase_SetTeamReady_Statics
{
	struct GameLoopControllerBase_eventSetTeamReady_Parms
	{
		int32 a_Team;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the chosen Team Ready.\n\x09 * @param a_Team Id of the chosen Team.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/GameLoopControllers/GameLoopControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the chosen Team Ready.\n@param a_Team Id of the chosen Team." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_Team;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameLoopControllerBase_SetTeamReady_Statics::NewProp_a_Team = { "a_Team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameLoopControllerBase_eventSetTeamReady_Parms, a_Team), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameLoopControllerBase_SetTeamReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLoopControllerBase_SetTeamReady_Statics::NewProp_a_Team,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLoopControllerBase_SetTeamReady_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLoopControllerBase_SetTeamReady_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGameLoopControllerBase, nullptr, "SetTeamReady", Z_Construct_UFunction_AGameLoopControllerBase_SetTeamReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLoopControllerBase_SetTeamReady_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameLoopControllerBase_SetTeamReady_Statics::GameLoopControllerBase_eventSetTeamReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLoopControllerBase_SetTeamReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameLoopControllerBase_SetTeamReady_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGameLoopControllerBase_SetTeamReady_Statics::GameLoopControllerBase_eventSetTeamReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameLoopControllerBase_SetTeamReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameLoopControllerBase_SetTeamReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameLoopControllerBase::execSetTeamReady)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_a_Team);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTeamReady(Z_Param_a_Team);
	P_NATIVE_END;
}
// ********** End Class AGameLoopControllerBase Function SetTeamReady ******************************

// ********** Begin Class AGameLoopControllerBase Function SetTeamScore ****************************
struct Z_Construct_UFunction_AGameLoopControllerBase_SetTeamScore_Statics
{
	struct GameLoopControllerBase_eventSetTeamScore_Parms
	{
		int32 a_Team;
		int32 a_Score;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the Score for the selected Team.\n\x09 * @param a_Team Id of the chosen Team.\n\x09 * @param a_Score Score for the chosen Team.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/GameLoopControllers/GameLoopControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the Score for the selected Team.\n@param a_Team Id of the chosen Team.\n@param a_Score Score for the chosen Team." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_Team;
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_Score;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameLoopControllerBase_SetTeamScore_Statics::NewProp_a_Team = { "a_Team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameLoopControllerBase_eventSetTeamScore_Parms, a_Team), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameLoopControllerBase_SetTeamScore_Statics::NewProp_a_Score = { "a_Score", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameLoopControllerBase_eventSetTeamScore_Parms, a_Score), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameLoopControllerBase_SetTeamScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLoopControllerBase_SetTeamScore_Statics::NewProp_a_Team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLoopControllerBase_SetTeamScore_Statics::NewProp_a_Score,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLoopControllerBase_SetTeamScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLoopControllerBase_SetTeamScore_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGameLoopControllerBase, nullptr, "SetTeamScore", Z_Construct_UFunction_AGameLoopControllerBase_SetTeamScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLoopControllerBase_SetTeamScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameLoopControllerBase_SetTeamScore_Statics::GameLoopControllerBase_eventSetTeamScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLoopControllerBase_SetTeamScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameLoopControllerBase_SetTeamScore_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGameLoopControllerBase_SetTeamScore_Statics::GameLoopControllerBase_eventSetTeamScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameLoopControllerBase_SetTeamScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameLoopControllerBase_SetTeamScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameLoopControllerBase::execSetTeamScore)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_a_Team);
	P_GET_PROPERTY(FIntProperty,Z_Param_a_Score);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTeamScore(Z_Param_a_Team,Z_Param_a_Score);
	P_NATIVE_END;
}
// ********** End Class AGameLoopControllerBase Function SetTeamScore ******************************

// ********** Begin Class AGameLoopControllerBase Function ShowEndScreenSequence *******************
struct GameLoopControllerBase_eventShowEndScreenSequence_Parms
{
	int32 a_Winner;
};
static FName NAME_AGameLoopControllerBase_ShowEndScreenSequence = FName(TEXT("ShowEndScreenSequence"));
void AGameLoopControllerBase::ShowEndScreenSequence(int32 a_Winner)
{
	GameLoopControllerBase_eventShowEndScreenSequence_Parms Parms;
	Parms.a_Winner=a_Winner;
	UFunction* Func = FindFunctionChecked(NAME_AGameLoopControllerBase_ShowEndScreenSequence);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AGameLoopControllerBase_ShowEndScreenSequence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Shows the End Screen Sequence.\n\x09 * @param a_Winner Id of the winner player.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/GameLoopControllers/GameLoopControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shows the End Screen Sequence.\n@param a_Winner Id of the winner player." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_Winner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameLoopControllerBase_ShowEndScreenSequence_Statics::NewProp_a_Winner = { "a_Winner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameLoopControllerBase_eventShowEndScreenSequence_Parms, a_Winner), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameLoopControllerBase_ShowEndScreenSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLoopControllerBase_ShowEndScreenSequence_Statics::NewProp_a_Winner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLoopControllerBase_ShowEndScreenSequence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLoopControllerBase_ShowEndScreenSequence_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGameLoopControllerBase, nullptr, "ShowEndScreenSequence", Z_Construct_UFunction_AGameLoopControllerBase_ShowEndScreenSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLoopControllerBase_ShowEndScreenSequence_Statics::PropPointers), sizeof(GameLoopControllerBase_eventShowEndScreenSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLoopControllerBase_ShowEndScreenSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameLoopControllerBase_ShowEndScreenSequence_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(GameLoopControllerBase_eventShowEndScreenSequence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameLoopControllerBase_ShowEndScreenSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameLoopControllerBase_ShowEndScreenSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AGameLoopControllerBase Function ShowEndScreenSequence *********************

// ********** Begin Class AGameLoopControllerBase Function ShowStartScreenSequence *****************
static FName NAME_AGameLoopControllerBase_ShowStartScreenSequence = FName(TEXT("ShowStartScreenSequence"));
void AGameLoopControllerBase::ShowStartScreenSequence()
{
	UFunction* Func = FindFunctionChecked(NAME_AGameLoopControllerBase_ShowStartScreenSequence);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AGameLoopControllerBase_ShowStartScreenSequence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Shows the Start Screen Sequence.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/GameLoopControllers/GameLoopControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shows the Start Screen Sequence." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLoopControllerBase_ShowStartScreenSequence_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGameLoopControllerBase, nullptr, "ShowStartScreenSequence", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLoopControllerBase_ShowStartScreenSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameLoopControllerBase_ShowStartScreenSequence_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AGameLoopControllerBase_ShowStartScreenSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameLoopControllerBase_ShowStartScreenSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AGameLoopControllerBase Function ShowStartScreenSequence *******************

// ********** Begin Class AGameLoopControllerBase Function UpdateDuelsData *************************
struct Z_Construct_UFunction_AGameLoopControllerBase_UpdateDuelsData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Update all the Duel Manager info related to this GameLoop.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/GameLoopControllers/GameLoopControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update all the Duel Manager info related to this GameLoop." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLoopControllerBase_UpdateDuelsData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGameLoopControllerBase, nullptr, "UpdateDuelsData", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLoopControllerBase_UpdateDuelsData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameLoopControllerBase_UpdateDuelsData_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AGameLoopControllerBase_UpdateDuelsData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameLoopControllerBase_UpdateDuelsData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameLoopControllerBase::execUpdateDuelsData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateDuelsData();
	P_NATIVE_END;
}
// ********** End Class AGameLoopControllerBase Function UpdateDuelsData ***************************

// ********** Begin Class AGameLoopControllerBase **************************************************
void AGameLoopControllerBase::StaticRegisterNativesAGameLoopControllerBase()
{
	UClass* Class = AGameLoopControllerBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalculateWinner", &AGameLoopControllerBase::execCalculateWinner },
		{ "IsGameLoopFinished", &AGameLoopControllerBase::execIsGameLoopFinished },
		{ "ResetGameLoop", &AGameLoopControllerBase::execResetGameLoop },
		{ "SetTeamReady", &AGameLoopControllerBase::execSetTeamReady },
		{ "SetTeamScore", &AGameLoopControllerBase::execSetTeamScore },
		{ "UpdateDuelsData", &AGameLoopControllerBase::execUpdateDuelsData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AGameLoopControllerBase;
UClass* AGameLoopControllerBase::GetPrivateStaticClass()
{
	using TClass = AGameLoopControllerBase;
	if (!Z_Registration_Info_UClass_AGameLoopControllerBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GameLoopControllerBase"),
			Z_Registration_Info_UClass_AGameLoopControllerBase.InnerSingleton,
			StaticRegisterNativesAGameLoopControllerBase,
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
	return Z_Registration_Info_UClass_AGameLoopControllerBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AGameLoopControllerBase_NoRegister()
{
	return AGameLoopControllerBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGameLoopControllerBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base for controllers for each different game loop.\n */" },
#endif
		{ "IncludePath", "Controllers/GameLoopControllers/GameLoopControllerBase.h" },
		{ "ModuleRelativePath", "Controllers/GameLoopControllers/GameLoopControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base for controllers for each different game loop." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_NextState_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Controllers/GameLoopControllers/GameLoopControllerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_PlayingTeams_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Next State Id.\n" },
#endif
		{ "ModuleRelativePath", "Controllers/GameLoopControllers/GameLoopControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Next State Id." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_GameScores_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Set with all the Ids of all the Teams that participate in the Duel.\n" },
#endif
		{ "ModuleRelativePath", "Controllers/GameLoopControllers/GameLoopControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Set with all the Ids of all the Teams that participate in the Duel." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_TeamsReady_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Map with all GameScores related by its Team Id.\n" },
#endif
		{ "ModuleRelativePath", "Controllers/GameLoopControllers/GameLoopControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Map with all GameScores related by its Team Id." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_GameLoopStarted_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Map with a bool that indicated if each Team is ready.\n" },
#endif
		{ "ModuleRelativePath", "Controllers/GameLoopControllers/GameLoopControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Map with a bool that indicated if each Team is ready." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_StartTime_MetaData[] = {
		{ "Category", "Parameters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Flag to indicate if the GameLoop has started.\n" },
#endif
		{ "ModuleRelativePath", "Controllers/GameLoopControllers/GameLoopControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Flag to indicate if the GameLoop has started." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_m_NextState;
	static const UECodeGen_Private::FIntPropertyParams NewProp_m_PlayingTeams_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_m_PlayingTeams;
	static const UECodeGen_Private::FIntPropertyParams NewProp_m_GameScores_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_m_GameScores_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_m_GameScores;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_m_TeamsReady_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_m_TeamsReady_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_m_TeamsReady;
	static void NewProp_m_GameLoopStarted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_m_GameLoopStarted;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_m_StartTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameLoopControllerBase_CalculateWinner, "CalculateWinner" }, // 1686731514
		{ &Z_Construct_UFunction_AGameLoopControllerBase_IsGameLoopFinished, "IsGameLoopFinished" }, // 3624706721
		{ &Z_Construct_UFunction_AGameLoopControllerBase_ResetGameLoop, "ResetGameLoop" }, // 991070640
		{ &Z_Construct_UFunction_AGameLoopControllerBase_SetTeamReady, "SetTeamReady" }, // 445545575
		{ &Z_Construct_UFunction_AGameLoopControllerBase_SetTeamScore, "SetTeamScore" }, // 3965212971
		{ &Z_Construct_UFunction_AGameLoopControllerBase_ShowEndScreenSequence, "ShowEndScreenSequence" }, // 3745827831
		{ &Z_Construct_UFunction_AGameLoopControllerBase_ShowStartScreenSequence, "ShowStartScreenSequence" }, // 2477847559
		{ &Z_Construct_UFunction_AGameLoopControllerBase_UpdateDuelsData, "UpdateDuelsData" }, // 3912118705
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameLoopControllerBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AGameLoopControllerBase_Statics::NewProp_m_NextState = { "m_NextState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameLoopControllerBase, m_NextState), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_NextState_MetaData), NewProp_m_NextState_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameLoopControllerBase_Statics::NewProp_m_PlayingTeams_ElementProp = { "m_PlayingTeams", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_AGameLoopControllerBase_Statics::NewProp_m_PlayingTeams = { "m_PlayingTeams", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameLoopControllerBase, m_PlayingTeams), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_PlayingTeams_MetaData), NewProp_m_PlayingTeams_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameLoopControllerBase_Statics::NewProp_m_GameScores_ValueProp = { "m_GameScores", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameLoopControllerBase_Statics::NewProp_m_GameScores_Key_KeyProp = { "m_GameScores_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AGameLoopControllerBase_Statics::NewProp_m_GameScores = { "m_GameScores", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameLoopControllerBase, m_GameScores), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_GameScores_MetaData), NewProp_m_GameScores_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameLoopControllerBase_Statics::NewProp_m_TeamsReady_ValueProp = { "m_TeamsReady", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameLoopControllerBase_Statics::NewProp_m_TeamsReady_Key_KeyProp = { "m_TeamsReady_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AGameLoopControllerBase_Statics::NewProp_m_TeamsReady = { "m_TeamsReady", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameLoopControllerBase, m_TeamsReady), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_TeamsReady_MetaData), NewProp_m_TeamsReady_MetaData) };
void Z_Construct_UClass_AGameLoopControllerBase_Statics::NewProp_m_GameLoopStarted_SetBit(void* Obj)
{
	((AGameLoopControllerBase*)Obj)->m_GameLoopStarted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameLoopControllerBase_Statics::NewProp_m_GameLoopStarted = { "m_GameLoopStarted", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGameLoopControllerBase), &Z_Construct_UClass_AGameLoopControllerBase_Statics::NewProp_m_GameLoopStarted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_GameLoopStarted_MetaData), NewProp_m_GameLoopStarted_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameLoopControllerBase_Statics::NewProp_m_StartTime = { "m_StartTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameLoopControllerBase, m_StartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_StartTime_MetaData), NewProp_m_StartTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameLoopControllerBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameLoopControllerBase_Statics::NewProp_m_NextState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameLoopControllerBase_Statics::NewProp_m_PlayingTeams_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameLoopControllerBase_Statics::NewProp_m_PlayingTeams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameLoopControllerBase_Statics::NewProp_m_GameScores_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameLoopControllerBase_Statics::NewProp_m_GameScores_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameLoopControllerBase_Statics::NewProp_m_GameScores,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameLoopControllerBase_Statics::NewProp_m_TeamsReady_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameLoopControllerBase_Statics::NewProp_m_TeamsReady_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameLoopControllerBase_Statics::NewProp_m_TeamsReady,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameLoopControllerBase_Statics::NewProp_m_GameLoopStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameLoopControllerBase_Statics::NewProp_m_StartTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameLoopControllerBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGameLoopControllerBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AControllerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameLoopControllerBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameLoopControllerBase_Statics::ClassParams = {
	&AGameLoopControllerBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGameLoopControllerBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGameLoopControllerBase_Statics::PropPointers),
	0,
	0x008001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameLoopControllerBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameLoopControllerBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameLoopControllerBase()
{
	if (!Z_Registration_Info_UClass_AGameLoopControllerBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameLoopControllerBase.OuterSingleton, Z_Construct_UClass_AGameLoopControllerBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameLoopControllerBase.OuterSingleton;
}
AGameLoopControllerBase::AGameLoopControllerBase() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameLoopControllerBase);
AGameLoopControllerBase::~AGameLoopControllerBase() {}
// ********** End Class AGameLoopControllerBase ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_GameLoopControllerBase_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameLoopControllerBase, AGameLoopControllerBase::StaticClass, TEXT("AGameLoopControllerBase"), &Z_Registration_Info_UClass_AGameLoopControllerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameLoopControllerBase), 2644993801U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_GameLoopControllerBase_h__Script_PartyJungle_1020075154(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_GameLoopControllerBase_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_GameLoopControllerBase_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
