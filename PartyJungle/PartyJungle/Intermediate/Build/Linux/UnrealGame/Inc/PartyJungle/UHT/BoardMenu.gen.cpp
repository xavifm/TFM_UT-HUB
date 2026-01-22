// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Menu/BoardMenu.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBoardMenu() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ABoardMenu();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ABoardMenu_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABoardMenu Function GetCurrentMenuPosition *******************************
struct Z_Construct_UFunction_ABoardMenu_GetCurrentMenuPosition_Statics
{
	struct BoardMenu_eventGetCurrentMenuPosition_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Menu/BoardMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABoardMenu_GetCurrentMenuPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoardMenu_eventGetCurrentMenuPosition_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoardMenu_GetCurrentMenuPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoardMenu_GetCurrentMenuPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardMenu_GetCurrentMenuPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoardMenu_GetCurrentMenuPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABoardMenu, nullptr, "GetCurrentMenuPosition", Z_Construct_UFunction_ABoardMenu_GetCurrentMenuPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardMenu_GetCurrentMenuPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABoardMenu_GetCurrentMenuPosition_Statics::BoardMenu_eventGetCurrentMenuPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardMenu_GetCurrentMenuPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABoardMenu_GetCurrentMenuPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABoardMenu_GetCurrentMenuPosition_Statics::BoardMenu_eventGetCurrentMenuPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABoardMenu_GetCurrentMenuPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABoardMenu_GetCurrentMenuPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABoardMenu::execGetCurrentMenuPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentMenuPosition();
	P_NATIVE_END;
}
// ********** End Class ABoardMenu Function GetCurrentMenuPosition *********************************

// ********** Begin Class ABoardMenu Function PerformMenuAction ************************************
struct BoardMenu_eventPerformMenuAction_Parms
{
	int32 CurrentBoardPosition;
};
static FName NAME_ABoardMenu_PerformMenuAction = FName(TEXT("PerformMenuAction"));
void ABoardMenu::PerformMenuAction(int32 CurrentBoardPosition)
{
	BoardMenu_eventPerformMenuAction_Parms Parms;
	Parms.CurrentBoardPosition=CurrentBoardPosition;
	UFunction* Func = FindFunctionChecked(NAME_ABoardMenu_PerformMenuAction);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABoardMenu_PerformMenuAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Menu/BoardMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentBoardPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABoardMenu_PerformMenuAction_Statics::NewProp_CurrentBoardPosition = { "CurrentBoardPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoardMenu_eventPerformMenuAction_Parms, CurrentBoardPosition), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoardMenu_PerformMenuAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoardMenu_PerformMenuAction_Statics::NewProp_CurrentBoardPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardMenu_PerformMenuAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoardMenu_PerformMenuAction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABoardMenu, nullptr, "PerformMenuAction", Z_Construct_UFunction_ABoardMenu_PerformMenuAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardMenu_PerformMenuAction_Statics::PropPointers), sizeof(BoardMenu_eventPerformMenuAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardMenu_PerformMenuAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABoardMenu_PerformMenuAction_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BoardMenu_eventPerformMenuAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABoardMenu_PerformMenuAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABoardMenu_PerformMenuAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ABoardMenu Function PerformMenuAction **************************************

// ********** Begin Class ABoardMenu Function PerformPartyAction ***********************************
struct Z_Construct_UFunction_ABoardMenu_PerformPartyAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Menu/BoardMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoardMenu_PerformPartyAction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABoardMenu, nullptr, "PerformPartyAction", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardMenu_PerformPartyAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABoardMenu_PerformPartyAction_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABoardMenu_PerformPartyAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABoardMenu_PerformPartyAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABoardMenu::execPerformPartyAction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PerformPartyAction();
	P_NATIVE_END;
}
// ********** End Class ABoardMenu Function PerformPartyAction *************************************

// ********** Begin Class ABoardMenu Function StartGame ********************************************
struct Z_Construct_UFunction_ABoardMenu_StartGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Menu/BoardMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoardMenu_StartGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABoardMenu, nullptr, "StartGame", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardMenu_StartGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABoardMenu_StartGame_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABoardMenu_StartGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABoardMenu_StartGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABoardMenu::execStartGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartGame();
	P_NATIVE_END;
}
// ********** End Class ABoardMenu Function StartGame **********************************************

// ********** Begin Class ABoardMenu Function StartGameSequence ************************************
static FName NAME_ABoardMenu_StartGameSequence = FName(TEXT("StartGameSequence"));
void ABoardMenu::StartGameSequence()
{
	UFunction* Func = FindFunctionChecked(NAME_ABoardMenu_StartGameSequence);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ABoardMenu_StartGameSequence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Menu/BoardMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoardMenu_StartGameSequence_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABoardMenu, nullptr, "StartGameSequence", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardMenu_StartGameSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABoardMenu_StartGameSequence_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABoardMenu_StartGameSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABoardMenu_StartGameSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ABoardMenu Function StartGameSequence **************************************

// ********** Begin Class ABoardMenu Function SwitchBoardPartyCurrentOption ************************
struct BoardMenu_eventSwitchBoardPartyCurrentOption_Parms
{
	int32 _position;
};
static FName NAME_ABoardMenu_SwitchBoardPartyCurrentOption = FName(TEXT("SwitchBoardPartyCurrentOption"));
void ABoardMenu::SwitchBoardPartyCurrentOption(int32 _position)
{
	BoardMenu_eventSwitchBoardPartyCurrentOption_Parms Parms;
	Parms._position=_position;
	UFunction* Func = FindFunctionChecked(NAME_ABoardMenu_SwitchBoardPartyCurrentOption);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABoardMenu_SwitchBoardPartyCurrentOption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Menu/BoardMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__position;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABoardMenu_SwitchBoardPartyCurrentOption_Statics::NewProp__position = { "_position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoardMenu_eventSwitchBoardPartyCurrentOption_Parms, _position), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoardMenu_SwitchBoardPartyCurrentOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoardMenu_SwitchBoardPartyCurrentOption_Statics::NewProp__position,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardMenu_SwitchBoardPartyCurrentOption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoardMenu_SwitchBoardPartyCurrentOption_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABoardMenu, nullptr, "SwitchBoardPartyCurrentOption", Z_Construct_UFunction_ABoardMenu_SwitchBoardPartyCurrentOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardMenu_SwitchBoardPartyCurrentOption_Statics::PropPointers), sizeof(BoardMenu_eventSwitchBoardPartyCurrentOption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardMenu_SwitchBoardPartyCurrentOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABoardMenu_SwitchBoardPartyCurrentOption_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BoardMenu_eventSwitchBoardPartyCurrentOption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABoardMenu_SwitchBoardPartyCurrentOption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABoardMenu_SwitchBoardPartyCurrentOption_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ABoardMenu Function SwitchBoardPartyCurrentOption **************************

// ********** Begin Class ABoardMenu Function SwitchBoardVisibleOption *****************************
struct BoardMenu_eventSwitchBoardVisibleOption_Parms
{
	int32 _position;
};
static FName NAME_ABoardMenu_SwitchBoardVisibleOption = FName(TEXT("SwitchBoardVisibleOption"));
void ABoardMenu::SwitchBoardVisibleOption(int32 _position)
{
	BoardMenu_eventSwitchBoardVisibleOption_Parms Parms;
	Parms._position=_position;
	UFunction* Func = FindFunctionChecked(NAME_ABoardMenu_SwitchBoardVisibleOption);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABoardMenu_SwitchBoardVisibleOption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Menu/BoardMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__position;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABoardMenu_SwitchBoardVisibleOption_Statics::NewProp__position = { "_position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoardMenu_eventSwitchBoardVisibleOption_Parms, _position), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoardMenu_SwitchBoardVisibleOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoardMenu_SwitchBoardVisibleOption_Statics::NewProp__position,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardMenu_SwitchBoardVisibleOption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoardMenu_SwitchBoardVisibleOption_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABoardMenu, nullptr, "SwitchBoardVisibleOption", Z_Construct_UFunction_ABoardMenu_SwitchBoardVisibleOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardMenu_SwitchBoardVisibleOption_Statics::PropPointers), sizeof(BoardMenu_eventSwitchBoardVisibleOption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardMenu_SwitchBoardVisibleOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABoardMenu_SwitchBoardVisibleOption_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BoardMenu_eventSwitchBoardVisibleOption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABoardMenu_SwitchBoardVisibleOption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABoardMenu_SwitchBoardVisibleOption_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ABoardMenu Function SwitchBoardVisibleOption *******************************

// ********** Begin Class ABoardMenu Function SwitchMenuNumber *************************************
struct BoardMenu_eventSwitchMenuNumber_Parms
{
	int32 _position;
	int32 _number;
};
static FName NAME_ABoardMenu_SwitchMenuNumber = FName(TEXT("SwitchMenuNumber"));
void ABoardMenu::SwitchMenuNumber(int32 _position, int32 _number)
{
	BoardMenu_eventSwitchMenuNumber_Parms Parms;
	Parms._position=_position;
	Parms._number=_number;
	UFunction* Func = FindFunctionChecked(NAME_ABoardMenu_SwitchMenuNumber);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABoardMenu_SwitchMenuNumber_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Menu/BoardMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__position;
	static const UECodeGen_Private::FIntPropertyParams NewProp__number;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABoardMenu_SwitchMenuNumber_Statics::NewProp__position = { "_position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoardMenu_eventSwitchMenuNumber_Parms, _position), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABoardMenu_SwitchMenuNumber_Statics::NewProp__number = { "_number", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoardMenu_eventSwitchMenuNumber_Parms, _number), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoardMenu_SwitchMenuNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoardMenu_SwitchMenuNumber_Statics::NewProp__position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoardMenu_SwitchMenuNumber_Statics::NewProp__number,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardMenu_SwitchMenuNumber_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoardMenu_SwitchMenuNumber_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABoardMenu, nullptr, "SwitchMenuNumber", Z_Construct_UFunction_ABoardMenu_SwitchMenuNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardMenu_SwitchMenuNumber_Statics::PropPointers), sizeof(BoardMenu_eventSwitchMenuNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardMenu_SwitchMenuNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABoardMenu_SwitchMenuNumber_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BoardMenu_eventSwitchMenuNumber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABoardMenu_SwitchMenuNumber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABoardMenu_SwitchMenuNumber_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ABoardMenu Function SwitchMenuNumber ***************************************

// ********** Begin Class ABoardMenu Function SwitchMenuPosition ***********************************
struct Z_Construct_UFunction_ABoardMenu_SwitchMenuPosition_Statics
{
	struct BoardMenu_eventSwitchMenuPosition_Parms
	{
		int32 _direction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Menu/BoardMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__direction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABoardMenu_SwitchMenuPosition_Statics::NewProp__direction = { "_direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoardMenu_eventSwitchMenuPosition_Parms, _direction), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoardMenu_SwitchMenuPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoardMenu_SwitchMenuPosition_Statics::NewProp__direction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardMenu_SwitchMenuPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoardMenu_SwitchMenuPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABoardMenu, nullptr, "SwitchMenuPosition", Z_Construct_UFunction_ABoardMenu_SwitchMenuPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardMenu_SwitchMenuPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABoardMenu_SwitchMenuPosition_Statics::BoardMenu_eventSwitchMenuPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardMenu_SwitchMenuPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABoardMenu_SwitchMenuPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABoardMenu_SwitchMenuPosition_Statics::BoardMenu_eventSwitchMenuPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABoardMenu_SwitchMenuPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABoardMenu_SwitchMenuPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABoardMenu::execSwitchMenuPosition)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__direction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchMenuPosition(Z_Param__direction);
	P_NATIVE_END;
}
// ********** End Class ABoardMenu Function SwitchMenuPosition *************************************

// ********** Begin Class ABoardMenu Function SwitchPartyMenuPosition ******************************
struct Z_Construct_UFunction_ABoardMenu_SwitchPartyMenuPosition_Statics
{
	struct BoardMenu_eventSwitchPartyMenuPosition_Parms
	{
		int32 _direction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Menu/BoardMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__direction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABoardMenu_SwitchPartyMenuPosition_Statics::NewProp__direction = { "_direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoardMenu_eventSwitchPartyMenuPosition_Parms, _direction), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoardMenu_SwitchPartyMenuPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoardMenu_SwitchPartyMenuPosition_Statics::NewProp__direction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardMenu_SwitchPartyMenuPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoardMenu_SwitchPartyMenuPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABoardMenu, nullptr, "SwitchPartyMenuPosition", Z_Construct_UFunction_ABoardMenu_SwitchPartyMenuPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardMenu_SwitchPartyMenuPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABoardMenu_SwitchPartyMenuPosition_Statics::BoardMenu_eventSwitchPartyMenuPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardMenu_SwitchPartyMenuPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABoardMenu_SwitchPartyMenuPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABoardMenu_SwitchPartyMenuPosition_Statics::BoardMenu_eventSwitchPartyMenuPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABoardMenu_SwitchPartyMenuPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABoardMenu_SwitchPartyMenuPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABoardMenu::execSwitchPartyMenuPosition)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__direction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchPartyMenuPosition(Z_Param__direction);
	P_NATIVE_END;
}
// ********** End Class ABoardMenu Function SwitchPartyMenuPosition ********************************

// ********** Begin Class ABoardMenu Function SwitchPartyValues ************************************
struct Z_Construct_UFunction_ABoardMenu_SwitchPartyValues_Statics
{
	struct BoardMenu_eventSwitchPartyValues_Parms
	{
		int32 _position;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Menu/BoardMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__position;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABoardMenu_SwitchPartyValues_Statics::NewProp__position = { "_position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoardMenu_eventSwitchPartyValues_Parms, _position), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoardMenu_SwitchPartyValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoardMenu_SwitchPartyValues_Statics::NewProp__position,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardMenu_SwitchPartyValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoardMenu_SwitchPartyValues_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABoardMenu, nullptr, "SwitchPartyValues", Z_Construct_UFunction_ABoardMenu_SwitchPartyValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardMenu_SwitchPartyValues_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABoardMenu_SwitchPartyValues_Statics::BoardMenu_eventSwitchPartyValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardMenu_SwitchPartyValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABoardMenu_SwitchPartyValues_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABoardMenu_SwitchPartyValues_Statics::BoardMenu_eventSwitchPartyValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABoardMenu_SwitchPartyValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABoardMenu_SwitchPartyValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABoardMenu::execSwitchPartyValues)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__position);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchPartyValues(Z_Param__position);
	P_NATIVE_END;
}
// ********** End Class ABoardMenu Function SwitchPartyValues **************************************

// ********** Begin Class ABoardMenu ***************************************************************
void ABoardMenu::StaticRegisterNativesABoardMenu()
{
	UClass* Class = ABoardMenu::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentMenuPosition", &ABoardMenu::execGetCurrentMenuPosition },
		{ "PerformPartyAction", &ABoardMenu::execPerformPartyAction },
		{ "StartGame", &ABoardMenu::execStartGame },
		{ "SwitchMenuPosition", &ABoardMenu::execSwitchMenuPosition },
		{ "SwitchPartyMenuPosition", &ABoardMenu::execSwitchPartyMenuPosition },
		{ "SwitchPartyValues", &ABoardMenu::execSwitchPartyValues },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABoardMenu;
UClass* ABoardMenu::GetPrivateStaticClass()
{
	using TClass = ABoardMenu;
	if (!Z_Registration_Info_UClass_ABoardMenu.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BoardMenu"),
			Z_Registration_Info_UClass_ABoardMenu.InnerSingleton,
			StaticRegisterNativesABoardMenu,
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
	return Z_Registration_Info_UClass_ABoardMenu.InnerSingleton;
}
UClass* Z_Construct_UClass_ABoardMenu_NoRegister()
{
	return ABoardMenu::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABoardMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Menu/BoardMenu.h" },
		{ "ModuleRelativePath", "Menu/BoardMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayMenuMode_MetaData[] = {
		{ "Category", "BoardMenu" },
		{ "ModuleRelativePath", "Menu/BoardMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMenuPosition_MetaData[] = {
		{ "ModuleRelativePath", "Menu/BoardMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPartyMenuPosition_MetaData[] = {
		{ "ModuleRelativePath", "Menu/BoardMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayersQ_MetaData[] = {
		{ "ModuleRelativePath", "Menu/BoardMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameRounds_MetaData[] = {
		{ "ModuleRelativePath", "Menu/BoardMenu.h" },
	};
#endif // WITH_METADATA
	static void NewProp_PlayMenuMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PlayMenuMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentMenuPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentPartyMenuPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayersQ;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GameRounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABoardMenu_GetCurrentMenuPosition, "GetCurrentMenuPosition" }, // 406449037
		{ &Z_Construct_UFunction_ABoardMenu_PerformMenuAction, "PerformMenuAction" }, // 2745501884
		{ &Z_Construct_UFunction_ABoardMenu_PerformPartyAction, "PerformPartyAction" }, // 2634774604
		{ &Z_Construct_UFunction_ABoardMenu_StartGame, "StartGame" }, // 3807531011
		{ &Z_Construct_UFunction_ABoardMenu_StartGameSequence, "StartGameSequence" }, // 2304481208
		{ &Z_Construct_UFunction_ABoardMenu_SwitchBoardPartyCurrentOption, "SwitchBoardPartyCurrentOption" }, // 2930583374
		{ &Z_Construct_UFunction_ABoardMenu_SwitchBoardVisibleOption, "SwitchBoardVisibleOption" }, // 2772329613
		{ &Z_Construct_UFunction_ABoardMenu_SwitchMenuNumber, "SwitchMenuNumber" }, // 2859754738
		{ &Z_Construct_UFunction_ABoardMenu_SwitchMenuPosition, "SwitchMenuPosition" }, // 3857486474
		{ &Z_Construct_UFunction_ABoardMenu_SwitchPartyMenuPosition, "SwitchPartyMenuPosition" }, // 2414072746
		{ &Z_Construct_UFunction_ABoardMenu_SwitchPartyValues, "SwitchPartyValues" }, // 3154310685
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoardMenu>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ABoardMenu_Statics::NewProp_PlayMenuMode_SetBit(void* Obj)
{
	((ABoardMenu*)Obj)->PlayMenuMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABoardMenu_Statics::NewProp_PlayMenuMode = { "PlayMenuMode", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABoardMenu), &Z_Construct_UClass_ABoardMenu_Statics::NewProp_PlayMenuMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayMenuMode_MetaData), NewProp_PlayMenuMode_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABoardMenu_Statics::NewProp_CurrentMenuPosition = { "CurrentMenuPosition", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoardMenu, CurrentMenuPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMenuPosition_MetaData), NewProp_CurrentMenuPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABoardMenu_Statics::NewProp_CurrentPartyMenuPosition = { "CurrentPartyMenuPosition", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoardMenu, CurrentPartyMenuPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPartyMenuPosition_MetaData), NewProp_CurrentPartyMenuPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABoardMenu_Statics::NewProp_PlayersQ = { "PlayersQ", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoardMenu, PlayersQ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayersQ_MetaData), NewProp_PlayersQ_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABoardMenu_Statics::NewProp_GameRounds = { "GameRounds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoardMenu, GameRounds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameRounds_MetaData), NewProp_GameRounds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoardMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoardMenu_Statics::NewProp_PlayMenuMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoardMenu_Statics::NewProp_CurrentMenuPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoardMenu_Statics::NewProp_CurrentPartyMenuPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoardMenu_Statics::NewProp_PlayersQ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoardMenu_Statics::NewProp_GameRounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoardMenu_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABoardMenu_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoardMenu_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABoardMenu_Statics::ClassParams = {
	&ABoardMenu::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABoardMenu_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABoardMenu_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoardMenu_Statics::Class_MetaDataParams), Z_Construct_UClass_ABoardMenu_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABoardMenu()
{
	if (!Z_Registration_Info_UClass_ABoardMenu.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABoardMenu.OuterSingleton, Z_Construct_UClass_ABoardMenu_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABoardMenu.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABoardMenu);
ABoardMenu::~ABoardMenu() {}
// ********** End Class ABoardMenu *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Menu_BoardMenu_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABoardMenu, ABoardMenu::StaticClass, TEXT("ABoardMenu"), &Z_Registration_Info_UClass_ABoardMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABoardMenu), 189589246U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Menu_BoardMenu_h__Script_PartyJungle_218314779(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Menu_BoardMenu_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Menu_BoardMenu_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
