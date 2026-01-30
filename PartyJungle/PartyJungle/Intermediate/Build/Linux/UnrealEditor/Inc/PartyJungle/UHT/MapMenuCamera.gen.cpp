// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Player/Map/MapMenuCamera.h"
#include "InputActionValue.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMapMenuCamera() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AChallengeInformation_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ADice_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AInventory_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMapDatabase_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMapMenuCamera();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMapMenuCamera_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinigameWheel_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinion_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ARoundsManager_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AScoreDatabase_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ASquareOptional_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ASquareShop_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AWorldManager_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_UPlayerMapUI_NoRegister();
PARTYJUNGLE_API UEnum* Z_Construct_UEnum_PartyJungle_EMinigameType();
PARTYJUNGLE_API UEnum* Z_Construct_UEnum_PartyJungle_ETeamsMode();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMapMenuCamera Function BuyCrowns ****************************************
struct Z_Construct_UFunction_AMapMenuCamera_BuyCrowns_Statics
{
	struct MapMenuCamera_eventBuyCrowns_Parms
	{
		int32 _quantity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapMenuCamera_BuyCrowns_Statics::NewProp__quantity = { "_quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMenuCamera_eventBuyCrowns_Parms, _quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapMenuCamera_BuyCrowns_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_BuyCrowns_Statics::NewProp__quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_BuyCrowns_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_BuyCrowns_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "BuyCrowns", Z_Construct_UFunction_AMapMenuCamera_BuyCrowns_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_BuyCrowns_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_BuyCrowns_Statics::MapMenuCamera_eventBuyCrowns_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_BuyCrowns_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_BuyCrowns_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMapMenuCamera_BuyCrowns_Statics::MapMenuCamera_eventBuyCrowns_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapMenuCamera_BuyCrowns()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_BuyCrowns_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execBuyCrowns)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BuyCrowns(Z_Param__quantity);
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function BuyCrowns ******************************************

// ********** Begin Class AMapMenuCamera Function ChangeSelectedPath *******************************
struct Z_Construct_UFunction_AMapMenuCamera_ChangeSelectedPath_Statics
{
	struct MapMenuCamera_eventChangeSelectedPath_Parms
	{
		int32 _direction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__direction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapMenuCamera_ChangeSelectedPath_Statics::NewProp__direction = { "_direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMenuCamera_eventChangeSelectedPath_Parms, _direction), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapMenuCamera_ChangeSelectedPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_ChangeSelectedPath_Statics::NewProp__direction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_ChangeSelectedPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_ChangeSelectedPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "ChangeSelectedPath", Z_Construct_UFunction_AMapMenuCamera_ChangeSelectedPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_ChangeSelectedPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_ChangeSelectedPath_Statics::MapMenuCamera_eventChangeSelectedPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_ChangeSelectedPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_ChangeSelectedPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMapMenuCamera_ChangeSelectedPath_Statics::MapMenuCamera_eventChangeSelectedPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapMenuCamera_ChangeSelectedPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_ChangeSelectedPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execChangeSelectedPath)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__direction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeSelectedPath(Z_Param__direction);
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function ChangeSelectedPath *********************************

// ********** Begin Class AMapMenuCamera Function CloseChallengeMenu *******************************
struct Z_Construct_UFunction_AMapMenuCamera_CloseChallengeMenu_Statics
{
	struct MapMenuCamera_eventCloseChallengeMenu_Parms
	{
		bool _duel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "CPP_Default__duel", "false" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static void NewProp__duel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__duel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMapMenuCamera_CloseChallengeMenu_Statics::NewProp__duel_SetBit(void* Obj)
{
	((MapMenuCamera_eventCloseChallengeMenu_Parms*)Obj)->_duel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapMenuCamera_CloseChallengeMenu_Statics::NewProp__duel = { "_duel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapMenuCamera_eventCloseChallengeMenu_Parms), &Z_Construct_UFunction_AMapMenuCamera_CloseChallengeMenu_Statics::NewProp__duel_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapMenuCamera_CloseChallengeMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_CloseChallengeMenu_Statics::NewProp__duel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_CloseChallengeMenu_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_CloseChallengeMenu_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "CloseChallengeMenu", Z_Construct_UFunction_AMapMenuCamera_CloseChallengeMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_CloseChallengeMenu_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_CloseChallengeMenu_Statics::MapMenuCamera_eventCloseChallengeMenu_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_CloseChallengeMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_CloseChallengeMenu_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMapMenuCamera_CloseChallengeMenu_Statics::MapMenuCamera_eventCloseChallengeMenu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapMenuCamera_CloseChallengeMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_CloseChallengeMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execCloseChallengeMenu)
{
	P_GET_UBOOL(Z_Param__duel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CloseChallengeMenu(Z_Param__duel);
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function CloseChallengeMenu *********************************

// ********** Begin Class AMapMenuCamera Function CloseDuelMenu ************************************
struct Z_Construct_UFunction_AMapMenuCamera_CloseDuelMenu_Statics
{
	struct MapMenuCamera_eventCloseDuelMenu_Parms
	{
		bool _endTurn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static void NewProp__endTurn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__endTurn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMapMenuCamera_CloseDuelMenu_Statics::NewProp__endTurn_SetBit(void* Obj)
{
	((MapMenuCamera_eventCloseDuelMenu_Parms*)Obj)->_endTurn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapMenuCamera_CloseDuelMenu_Statics::NewProp__endTurn = { "_endTurn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapMenuCamera_eventCloseDuelMenu_Parms), &Z_Construct_UFunction_AMapMenuCamera_CloseDuelMenu_Statics::NewProp__endTurn_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapMenuCamera_CloseDuelMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_CloseDuelMenu_Statics::NewProp__endTurn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_CloseDuelMenu_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_CloseDuelMenu_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "CloseDuelMenu", Z_Construct_UFunction_AMapMenuCamera_CloseDuelMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_CloseDuelMenu_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_CloseDuelMenu_Statics::MapMenuCamera_eventCloseDuelMenu_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_CloseDuelMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_CloseDuelMenu_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMapMenuCamera_CloseDuelMenu_Statics::MapMenuCamera_eventCloseDuelMenu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapMenuCamera_CloseDuelMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_CloseDuelMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execCloseDuelMenu)
{
	P_GET_UBOOL(Z_Param__endTurn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CloseDuelMenu(Z_Param__endTurn);
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function CloseDuelMenu **************************************

// ********** Begin Class AMapMenuCamera Function ConfirmMinionToDuel ******************************
struct Z_Construct_UFunction_AMapMenuCamera_ConfirmMinionToDuel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_ConfirmMinionToDuel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "ConfirmMinionToDuel", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_ConfirmMinionToDuel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_ConfirmMinionToDuel_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMapMenuCamera_ConfirmMinionToDuel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_ConfirmMinionToDuel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execConfirmMinionToDuel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConfirmMinionToDuel();
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function ConfirmMinionToDuel ********************************

// ********** Begin Class AMapMenuCamera Function ConfirmPathSelection *****************************
struct Z_Construct_UFunction_AMapMenuCamera_ConfirmPathSelection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_ConfirmPathSelection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "ConfirmPathSelection", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_ConfirmPathSelection_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_ConfirmPathSelection_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMapMenuCamera_ConfirmPathSelection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_ConfirmPathSelection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execConfirmPathSelection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConfirmPathSelection();
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function ConfirmPathSelection *******************************

// ********** Begin Class AMapMenuCamera Function DelayedSceneSwitch *******************************
struct Z_Construct_UFunction_AMapMenuCamera_DelayedSceneSwitch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_DelayedSceneSwitch_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "DelayedSceneSwitch", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_DelayedSceneSwitch_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_DelayedSceneSwitch_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMapMenuCamera_DelayedSceneSwitch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_DelayedSceneSwitch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execDelayedSceneSwitch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DelayedSceneSwitch();
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function DelayedSceneSwitch *********************************

// ********** Begin Class AMapMenuCamera Function ExecuteMinionMovement ****************************
struct Z_Construct_UFunction_AMapMenuCamera_ExecuteMinionMovement_Statics
{
	struct MapMenuCamera_eventExecuteMinionMovement_Parms
	{
		bool _diceItem;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "CPP_Default__diceItem", "false" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static void NewProp__diceItem_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__diceItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMapMenuCamera_ExecuteMinionMovement_Statics::NewProp__diceItem_SetBit(void* Obj)
{
	((MapMenuCamera_eventExecuteMinionMovement_Parms*)Obj)->_diceItem = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapMenuCamera_ExecuteMinionMovement_Statics::NewProp__diceItem = { "_diceItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapMenuCamera_eventExecuteMinionMovement_Parms), &Z_Construct_UFunction_AMapMenuCamera_ExecuteMinionMovement_Statics::NewProp__diceItem_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapMenuCamera_ExecuteMinionMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_ExecuteMinionMovement_Statics::NewProp__diceItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_ExecuteMinionMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_ExecuteMinionMovement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "ExecuteMinionMovement", Z_Construct_UFunction_AMapMenuCamera_ExecuteMinionMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_ExecuteMinionMovement_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_ExecuteMinionMovement_Statics::MapMenuCamera_eventExecuteMinionMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_ExecuteMinionMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_ExecuteMinionMovement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMapMenuCamera_ExecuteMinionMovement_Statics::MapMenuCamera_eventExecuteMinionMovement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapMenuCamera_ExecuteMinionMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_ExecuteMinionMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execExecuteMinionMovement)
{
	P_GET_UBOOL(Z_Param__diceItem);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExecuteMinionMovement(Z_Param__diceItem);
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function ExecuteMinionMovement ******************************

// ********** Begin Class AMapMenuCamera Function FinishDuel ***************************************
struct Z_Construct_UFunction_AMapMenuCamera_FinishDuel_Statics
{
	struct MapMenuCamera_eventFinishDuel_Parms
	{
		int32 _winner;
		int32 _duelIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__winner;
	static const UECodeGen_Private::FIntPropertyParams NewProp__duelIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapMenuCamera_FinishDuel_Statics::NewProp__winner = { "_winner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMenuCamera_eventFinishDuel_Parms, _winner), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapMenuCamera_FinishDuel_Statics::NewProp__duelIndex = { "_duelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMenuCamera_eventFinishDuel_Parms, _duelIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapMenuCamera_FinishDuel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_FinishDuel_Statics::NewProp__winner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_FinishDuel_Statics::NewProp__duelIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_FinishDuel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_FinishDuel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "FinishDuel", Z_Construct_UFunction_AMapMenuCamera_FinishDuel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_FinishDuel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_FinishDuel_Statics::MapMenuCamera_eventFinishDuel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_FinishDuel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_FinishDuel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMapMenuCamera_FinishDuel_Statics::MapMenuCamera_eventFinishDuel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapMenuCamera_FinishDuel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_FinishDuel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execFinishDuel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__winner);
	P_GET_PROPERTY(FIntProperty,Z_Param__duelIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishDuel(Z_Param__winner,Z_Param__duelIndex);
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function FinishDuel *****************************************

// ********** Begin Class AMapMenuCamera Function FinishFadeTransition *****************************
struct Z_Construct_UFunction_AMapMenuCamera_FinishFadeTransition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_FinishFadeTransition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "FinishFadeTransition", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_FinishFadeTransition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_FinishFadeTransition_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMapMenuCamera_FinishFadeTransition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_FinishFadeTransition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execFinishFadeTransition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishFadeTransition();
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function FinishFadeTransition *******************************

// ********** Begin Class AMapMenuCamera Function FinishMinigame ***********************************
struct Z_Construct_UFunction_AMapMenuCamera_FinishMinigame_Statics
{
	struct MapMenuCamera_eventFinishMinigame_Parms
	{
		TArray<int32> _winners;
		int32 _money;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__winners_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__winners;
	static const UECodeGen_Private::FIntPropertyParams NewProp__money;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapMenuCamera_FinishMinigame_Statics::NewProp__winners_Inner = { "_winners", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMapMenuCamera_FinishMinigame_Statics::NewProp__winners = { "_winners", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMenuCamera_eventFinishMinigame_Parms, _winners), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapMenuCamera_FinishMinigame_Statics::NewProp__money = { "_money", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMenuCamera_eventFinishMinigame_Parms, _money), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapMenuCamera_FinishMinigame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_FinishMinigame_Statics::NewProp__winners_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_FinishMinigame_Statics::NewProp__winners,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_FinishMinigame_Statics::NewProp__money,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_FinishMinigame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_FinishMinigame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "FinishMinigame", Z_Construct_UFunction_AMapMenuCamera_FinishMinigame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_FinishMinigame_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_FinishMinigame_Statics::MapMenuCamera_eventFinishMinigame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_FinishMinigame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_FinishMinigame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMapMenuCamera_FinishMinigame_Statics::MapMenuCamera_eventFinishMinigame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapMenuCamera_FinishMinigame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_FinishMinigame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execFinishMinigame)
{
	P_GET_TARRAY(int32,Z_Param__winners);
	P_GET_PROPERTY(FIntProperty,Z_Param__money);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishMinigame(Z_Param__winners,Z_Param__money);
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function FinishMinigame *************************************

// ********** Begin Class AMapMenuCamera Function FocusNextMinion **********************************
struct Z_Construct_UFunction_AMapMenuCamera_FocusNextMinion_Statics
{
	struct MapMenuCamera_eventFocusNextMinion_Parms
	{
		int32 _direction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__direction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapMenuCamera_FocusNextMinion_Statics::NewProp__direction = { "_direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMenuCamera_eventFocusNextMinion_Parms, _direction), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapMenuCamera_FocusNextMinion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_FocusNextMinion_Statics::NewProp__direction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_FocusNextMinion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_FocusNextMinion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "FocusNextMinion", Z_Construct_UFunction_AMapMenuCamera_FocusNextMinion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_FocusNextMinion_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_FocusNextMinion_Statics::MapMenuCamera_eventFocusNextMinion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_FocusNextMinion_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_FocusNextMinion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMapMenuCamera_FocusNextMinion_Statics::MapMenuCamera_eventFocusNextMinion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapMenuCamera_FocusNextMinion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_FocusNextMinion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execFocusNextMinion)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__direction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FocusNextMinion(Z_Param__direction);
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function FocusNextMinion ************************************

// ********** Begin Class AMapMenuCamera Function FollowMinionMovement *****************************
struct Z_Construct_UFunction_AMapMenuCamera_FollowMinionMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_FollowMinionMovement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "FollowMinionMovement", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_FollowMinionMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_FollowMinionMovement_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMapMenuCamera_FollowMinionMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_FollowMinionMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execFollowMinionMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FollowMinionMovement();
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function FollowMinionMovement *******************************

// ********** Begin Class AMapMenuCamera Function GetMapUI *****************************************
struct Z_Construct_UFunction_AMapMenuCamera_GetMapUI_Statics
{
	struct MapMenuCamera_eventGetMapUI_Parms
	{
		UPlayerMapUI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapMenuCamera_GetMapUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMenuCamera_eventGetMapUI_Parms, ReturnValue), Z_Construct_UClass_UPlayerMapUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapMenuCamera_GetMapUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_GetMapUI_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_GetMapUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_GetMapUI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "GetMapUI", Z_Construct_UFunction_AMapMenuCamera_GetMapUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_GetMapUI_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_GetMapUI_Statics::MapMenuCamera_eventGetMapUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_GetMapUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_GetMapUI_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMapMenuCamera_GetMapUI_Statics::MapMenuCamera_eventGetMapUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapMenuCamera_GetMapUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_GetMapUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execGetMapUI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayerMapUI**)Z_Param__Result=P_THIS->GetMapUI();
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function GetMapUI *******************************************

// ********** Begin Class AMapMenuCamera Function HandleBackInput **********************************
struct Z_Construct_UFunction_AMapMenuCamera_HandleBackInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_HandleBackInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "HandleBackInput", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_HandleBackInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_HandleBackInput_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMapMenuCamera_HandleBackInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_HandleBackInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execHandleBackInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleBackInput();
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function HandleBackInput ************************************

// ********** Begin Class AMapMenuCamera Function HandleConfirmInput *******************************
struct Z_Construct_UFunction_AMapMenuCamera_HandleConfirmInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_HandleConfirmInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "HandleConfirmInput", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_HandleConfirmInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_HandleConfirmInput_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMapMenuCamera_HandleConfirmInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_HandleConfirmInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execHandleConfirmInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleConfirmInput();
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function HandleConfirmInput *********************************

// ********** Begin Class AMapMenuCamera Function HandleEscInput ***********************************
struct Z_Construct_UFunction_AMapMenuCamera_HandleEscInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_HandleEscInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "HandleEscInput", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_HandleEscInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_HandleEscInput_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMapMenuCamera_HandleEscInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_HandleEscInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execHandleEscInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleEscInput();
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function HandleEscInput *************************************

// ********** Begin Class AMapMenuCamera Function HandleLeftJoystickInputX *************************
struct Z_Construct_UFunction_AMapMenuCamera_HandleLeftJoystickInputX_Statics
{
	struct MapMenuCamera_eventHandleLeftJoystickInputX_Parms
	{
		FInputActionValue _value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMapMenuCamera_HandleLeftJoystickInputX_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMenuCamera_eventHandleLeftJoystickInputX_Parms, _value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__value_MetaData), NewProp__value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapMenuCamera_HandleLeftJoystickInputX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_HandleLeftJoystickInputX_Statics::NewProp__value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_HandleLeftJoystickInputX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_HandleLeftJoystickInputX_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "HandleLeftJoystickInputX", Z_Construct_UFunction_AMapMenuCamera_HandleLeftJoystickInputX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_HandleLeftJoystickInputX_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_HandleLeftJoystickInputX_Statics::MapMenuCamera_eventHandleLeftJoystickInputX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_HandleLeftJoystickInputX_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_HandleLeftJoystickInputX_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMapMenuCamera_HandleLeftJoystickInputX_Statics::MapMenuCamera_eventHandleLeftJoystickInputX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapMenuCamera_HandleLeftJoystickInputX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_HandleLeftJoystickInputX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execHandleLeftJoystickInputX)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out__value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleLeftJoystickInputX(Z_Param_Out__value);
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function HandleLeftJoystickInputX ***************************

// ********** Begin Class AMapMenuCamera Function HandleLeftJoystickInputY *************************
struct Z_Construct_UFunction_AMapMenuCamera_HandleLeftJoystickInputY_Statics
{
	struct MapMenuCamera_eventHandleLeftJoystickInputY_Parms
	{
		FInputActionValue _value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMapMenuCamera_HandleLeftJoystickInputY_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMenuCamera_eventHandleLeftJoystickInputY_Parms, _value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__value_MetaData), NewProp__value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapMenuCamera_HandleLeftJoystickInputY_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_HandleLeftJoystickInputY_Statics::NewProp__value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_HandleLeftJoystickInputY_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_HandleLeftJoystickInputY_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "HandleLeftJoystickInputY", Z_Construct_UFunction_AMapMenuCamera_HandleLeftJoystickInputY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_HandleLeftJoystickInputY_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_HandleLeftJoystickInputY_Statics::MapMenuCamera_eventHandleLeftJoystickInputY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_HandleLeftJoystickInputY_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_HandleLeftJoystickInputY_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMapMenuCamera_HandleLeftJoystickInputY_Statics::MapMenuCamera_eventHandleLeftJoystickInputY_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapMenuCamera_HandleLeftJoystickInputY()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_HandleLeftJoystickInputY_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execHandleLeftJoystickInputY)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out__value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleLeftJoystickInputY(Z_Param_Out__value);
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function HandleLeftJoystickInputY ***************************

// ********** Begin Class AMapMenuCamera Function HandleLeftRightInput *****************************
struct Z_Construct_UFunction_AMapMenuCamera_HandleLeftRightInput_Statics
{
	struct MapMenuCamera_eventHandleLeftRightInput_Parms
	{
		FInputActionValue _value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMapMenuCamera_HandleLeftRightInput_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMenuCamera_eventHandleLeftRightInput_Parms, _value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__value_MetaData), NewProp__value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapMenuCamera_HandleLeftRightInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_HandleLeftRightInput_Statics::NewProp__value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_HandleLeftRightInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_HandleLeftRightInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "HandleLeftRightInput", Z_Construct_UFunction_AMapMenuCamera_HandleLeftRightInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_HandleLeftRightInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_HandleLeftRightInput_Statics::MapMenuCamera_eventHandleLeftRightInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_HandleLeftRightInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_HandleLeftRightInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMapMenuCamera_HandleLeftRightInput_Statics::MapMenuCamera_eventHandleLeftRightInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapMenuCamera_HandleLeftRightInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_HandleLeftRightInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execHandleLeftRightInput)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out__value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleLeftRightInput(Z_Param_Out__value);
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function HandleLeftRightInput *******************************

// ********** Begin Class AMapMenuCamera Function HandleYInput *************************************
struct Z_Construct_UFunction_AMapMenuCamera_HandleYInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_HandleYInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "HandleYInput", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_HandleYInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_HandleYInput_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMapMenuCamera_HandleYInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_HandleYInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execHandleYInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleYInput();
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function HandleYInput ***************************************

// ********** Begin Class AMapMenuCamera Function MoveFullMapCamera ********************************
struct MapMenuCamera_eventMoveFullMapCamera_Parms
{
	float _xPos;
	float _yPos;
};
static FName NAME_AMapMenuCamera_MoveFullMapCamera = FName(TEXT("MoveFullMapCamera"));
void AMapMenuCamera::MoveFullMapCamera(float _xPos, float _yPos)
{
	MapMenuCamera_eventMoveFullMapCamera_Parms Parms;
	Parms._xPos=_xPos;
	Parms._yPos=_yPos;
	UFunction* Func = FindFunctionChecked(NAME_AMapMenuCamera_MoveFullMapCamera);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMapMenuCamera_MoveFullMapCamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp__xPos;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__yPos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMapMenuCamera_MoveFullMapCamera_Statics::NewProp__xPos = { "_xPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMenuCamera_eventMoveFullMapCamera_Parms, _xPos), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMapMenuCamera_MoveFullMapCamera_Statics::NewProp__yPos = { "_yPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMenuCamera_eventMoveFullMapCamera_Parms, _yPos), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapMenuCamera_MoveFullMapCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_MoveFullMapCamera_Statics::NewProp__xPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_MoveFullMapCamera_Statics::NewProp__yPos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_MoveFullMapCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_MoveFullMapCamera_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "MoveFullMapCamera", Z_Construct_UFunction_AMapMenuCamera_MoveFullMapCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_MoveFullMapCamera_Statics::PropPointers), sizeof(MapMenuCamera_eventMoveFullMapCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_MoveFullMapCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_MoveFullMapCamera_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(MapMenuCamera_eventMoveFullMapCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapMenuCamera_MoveFullMapCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_MoveFullMapCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AMapMenuCamera Function MoveFullMapCamera **********************************

// ********** Begin Class AMapMenuCamera Function OpenChallengeMenu ********************************
struct Z_Construct_UFunction_AMapMenuCamera_OpenChallengeMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_OpenChallengeMenu_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "OpenChallengeMenu", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_OpenChallengeMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_OpenChallengeMenu_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMapMenuCamera_OpenChallengeMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_OpenChallengeMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execOpenChallengeMenu)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenChallengeMenu();
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function OpenChallengeMenu **********************************

// ********** Begin Class AMapMenuCamera Function RefreshChallengeInfo *****************************
struct Z_Construct_UFunction_AMapMenuCamera_RefreshChallengeInfo_Statics
{
	struct MapMenuCamera_eventRefreshChallengeInfo_Parms
	{
		int32 _direction;
		int32 _team;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__direction;
	static const UECodeGen_Private::FIntPropertyParams NewProp__team;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapMenuCamera_RefreshChallengeInfo_Statics::NewProp__direction = { "_direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMenuCamera_eventRefreshChallengeInfo_Parms, _direction), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapMenuCamera_RefreshChallengeInfo_Statics::NewProp__team = { "_team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMenuCamera_eventRefreshChallengeInfo_Parms, _team), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapMenuCamera_RefreshChallengeInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_RefreshChallengeInfo_Statics::NewProp__direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_RefreshChallengeInfo_Statics::NewProp__team,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_RefreshChallengeInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_RefreshChallengeInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "RefreshChallengeInfo", Z_Construct_UFunction_AMapMenuCamera_RefreshChallengeInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_RefreshChallengeInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_RefreshChallengeInfo_Statics::MapMenuCamera_eventRefreshChallengeInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_RefreshChallengeInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_RefreshChallengeInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMapMenuCamera_RefreshChallengeInfo_Statics::MapMenuCamera_eventRefreshChallengeInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapMenuCamera_RefreshChallengeInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_RefreshChallengeInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execRefreshChallengeInfo)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__direction);
	P_GET_PROPERTY(FIntProperty,Z_Param__team);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshChallengeInfo(Z_Param__direction,Z_Param__team);
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function RefreshChallengeInfo *******************************

// ********** Begin Class AMapMenuCamera Function ResetMapItems ************************************
struct Z_Construct_UFunction_AMapMenuCamera_ResetMapItems_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_ResetMapItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "ResetMapItems", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_ResetMapItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_ResetMapItems_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMapMenuCamera_ResetMapItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_ResetMapItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execResetMapItems)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetMapItems();
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function ResetMapItems **************************************

// ********** Begin Class AMapMenuCamera Function RestoreTurnLogic *********************************
struct Z_Construct_UFunction_AMapMenuCamera_RestoreTurnLogic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_RestoreTurnLogic_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "RestoreTurnLogic", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_RestoreTurnLogic_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_RestoreTurnLogic_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMapMenuCamera_RestoreTurnLogic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_RestoreTurnLogic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execRestoreTurnLogic)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RestoreTurnLogic();
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function RestoreTurnLogic ***********************************

// ********** Begin Class AMapMenuCamera Function RestoreTurnLogicWithAnimation ********************
struct Z_Construct_UFunction_AMapMenuCamera_RestoreTurnLogicWithAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_RestoreTurnLogicWithAnimation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "RestoreTurnLogicWithAnimation", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_RestoreTurnLogicWithAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_RestoreTurnLogicWithAnimation_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMapMenuCamera_RestoreTurnLogicWithAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_RestoreTurnLogicWithAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execRestoreTurnLogicWithAnimation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RestoreTurnLogicWithAnimation();
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function RestoreTurnLogicWithAnimation **********************

// ********** Begin Class AMapMenuCamera Function RollTheDice **************************************
struct Z_Construct_UFunction_AMapMenuCamera_RollTheDice_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_RollTheDice_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "RollTheDice", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_RollTheDice_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_RollTheDice_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMapMenuCamera_RollTheDice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_RollTheDice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execRollTheDice)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RollTheDice();
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function RollTheDice ****************************************

// ********** Begin Class AMapMenuCamera Function SetupPlayerInputComponent ************************
struct Z_Construct_UFunction_AMapMenuCamera_SetupPlayerInputComponent_Statics
{
	struct MapMenuCamera_eventSetupPlayerInputComponent_Parms
	{
		UInputComponent* PlayerInputComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInputComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerInputComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapMenuCamera_SetupPlayerInputComponent_Statics::NewProp_PlayerInputComponent = { "PlayerInputComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMenuCamera_eventSetupPlayerInputComponent_Parms, PlayerInputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerInputComponent_MetaData), NewProp_PlayerInputComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapMenuCamera_SetupPlayerInputComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_SetupPlayerInputComponent_Statics::NewProp_PlayerInputComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SetupPlayerInputComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_SetupPlayerInputComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "SetupPlayerInputComponent", Z_Construct_UFunction_AMapMenuCamera_SetupPlayerInputComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SetupPlayerInputComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_SetupPlayerInputComponent_Statics::MapMenuCamera_eventSetupPlayerInputComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SetupPlayerInputComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_SetupPlayerInputComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMapMenuCamera_SetupPlayerInputComponent_Statics::MapMenuCamera_eventSetupPlayerInputComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapMenuCamera_SetupPlayerInputComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_SetupPlayerInputComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execSetupPlayerInputComponent)
{
	P_GET_OBJECT(UInputComponent,Z_Param_PlayerInputComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupPlayerInputComponent(Z_Param_PlayerInputComponent);
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function SetupPlayerInputComponent **************************

// ********** Begin Class AMapMenuCamera Function SpinWheelEndSequence *****************************
struct Z_Construct_UFunction_AMapMenuCamera_SpinWheelEndSequence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_SpinWheelEndSequence_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "SpinWheelEndSequence", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SpinWheelEndSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_SpinWheelEndSequence_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMapMenuCamera_SpinWheelEndSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_SpinWheelEndSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execSpinWheelEndSequence)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpinWheelEndSequence();
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function SpinWheelEndSequence *******************************

// ********** Begin Class AMapMenuCamera Function StartFadeTransition ******************************
struct Z_Construct_UFunction_AMapMenuCamera_StartFadeTransition_Statics
{
	struct MapMenuCamera_eventStartFadeTransition_Parms
	{
		float _time;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp__time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMapMenuCamera_StartFadeTransition_Statics::NewProp__time = { "_time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMenuCamera_eventStartFadeTransition_Parms, _time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapMenuCamera_StartFadeTransition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_StartFadeTransition_Statics::NewProp__time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_StartFadeTransition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_StartFadeTransition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "StartFadeTransition", Z_Construct_UFunction_AMapMenuCamera_StartFadeTransition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_StartFadeTransition_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_StartFadeTransition_Statics::MapMenuCamera_eventStartFadeTransition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_StartFadeTransition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_StartFadeTransition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMapMenuCamera_StartFadeTransition_Statics::MapMenuCamera_eventStartFadeTransition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapMenuCamera_StartFadeTransition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_StartFadeTransition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execStartFadeTransition)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param__time);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartFadeTransition(Z_Param__time);
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function StartFadeTransition ********************************

// ********** Begin Class AMapMenuCamera Function StartMinigame ************************************
struct Z_Construct_UFunction_AMapMenuCamera_StartMinigame_Statics
{
	struct MapMenuCamera_eventStartMinigame_Parms
	{
		bool _duel;
		int32 _minigame;
		TArray<AMinion*> _minionsPlaying;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static void NewProp__duel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__duel;
	static const UECodeGen_Private::FIntPropertyParams NewProp__minigame;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__minionsPlaying_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__minionsPlaying;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMapMenuCamera_StartMinigame_Statics::NewProp__duel_SetBit(void* Obj)
{
	((MapMenuCamera_eventStartMinigame_Parms*)Obj)->_duel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapMenuCamera_StartMinigame_Statics::NewProp__duel = { "_duel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapMenuCamera_eventStartMinigame_Parms), &Z_Construct_UFunction_AMapMenuCamera_StartMinigame_Statics::NewProp__duel_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapMenuCamera_StartMinigame_Statics::NewProp__minigame = { "_minigame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMenuCamera_eventStartMinigame_Parms, _minigame), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapMenuCamera_StartMinigame_Statics::NewProp__minionsPlaying_Inner = { "_minionsPlaying", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMinion_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMapMenuCamera_StartMinigame_Statics::NewProp__minionsPlaying = { "_minionsPlaying", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMenuCamera_eventStartMinigame_Parms, _minionsPlaying), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapMenuCamera_StartMinigame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_StartMinigame_Statics::NewProp__duel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_StartMinigame_Statics::NewProp__minigame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_StartMinigame_Statics::NewProp__minionsPlaying_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_StartMinigame_Statics::NewProp__minionsPlaying,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_StartMinigame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_StartMinigame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "StartMinigame", Z_Construct_UFunction_AMapMenuCamera_StartMinigame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_StartMinigame_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_StartMinigame_Statics::MapMenuCamera_eventStartMinigame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_StartMinigame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_StartMinigame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMapMenuCamera_StartMinigame_Statics::MapMenuCamera_eventStartMinigame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapMenuCamera_StartMinigame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_StartMinigame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execStartMinigame)
{
	P_GET_UBOOL(Z_Param__duel);
	P_GET_PROPERTY(FIntProperty,Z_Param__minigame);
	P_GET_TARRAY(AMinion*,Z_Param__minionsPlaying);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartMinigame(Z_Param__duel,Z_Param__minigame,Z_Param__minionsPlaying);
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function StartMinigame **************************************

// ********** Begin Class AMapMenuCamera Function StartPlayerTurn **********************************
struct Z_Construct_UFunction_AMapMenuCamera_StartPlayerTurn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_StartPlayerTurn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "StartPlayerTurn", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_StartPlayerTurn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_StartPlayerTurn_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMapMenuCamera_StartPlayerTurn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_StartPlayerTurn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execStartPlayerTurn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartPlayerTurn();
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function StartPlayerTurn ************************************

// ********** Begin Class AMapMenuCamera Function StopMinionForDuel ********************************
struct Z_Construct_UFunction_AMapMenuCamera_StopMinionForDuel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_StopMinionForDuel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "StopMinionForDuel", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_StopMinionForDuel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_StopMinionForDuel_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMapMenuCamera_StopMinionForDuel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_StopMinionForDuel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execStopMinionForDuel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopMinionForDuel();
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function StopMinionForDuel **********************************

// ********** Begin Class AMapMenuCamera Function StoreCrowns **************************************
struct Z_Construct_UFunction_AMapMenuCamera_StoreCrowns_Statics
{
	struct MapMenuCamera_eventStoreCrowns_Parms
	{
		int32 _quantity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapMenuCamera_StoreCrowns_Statics::NewProp__quantity = { "_quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMenuCamera_eventStoreCrowns_Parms, _quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapMenuCamera_StoreCrowns_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_StoreCrowns_Statics::NewProp__quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_StoreCrowns_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_StoreCrowns_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "StoreCrowns", Z_Construct_UFunction_AMapMenuCamera_StoreCrowns_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_StoreCrowns_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_StoreCrowns_Statics::MapMenuCamera_eventStoreCrowns_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_StoreCrowns_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_StoreCrowns_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMapMenuCamera_StoreCrowns_Statics::MapMenuCamera_eventStoreCrowns_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapMenuCamera_StoreCrowns()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_StoreCrowns_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execStoreCrowns)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StoreCrowns(Z_Param__quantity);
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function StoreCrowns ****************************************

// ********** Begin Class AMapMenuCamera Function SwitchCameraTeam *********************************
struct Z_Construct_UFunction_AMapMenuCamera_SwitchCameraTeam_Statics
{
	struct MapMenuCamera_eventSwitchCameraTeam_Parms
	{
		int32 _direction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__direction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapMenuCamera_SwitchCameraTeam_Statics::NewProp__direction = { "_direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMenuCamera_eventSwitchCameraTeam_Parms, _direction), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapMenuCamera_SwitchCameraTeam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_SwitchCameraTeam_Statics::NewProp__direction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchCameraTeam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_SwitchCameraTeam_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "SwitchCameraTeam", Z_Construct_UFunction_AMapMenuCamera_SwitchCameraTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchCameraTeam_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_SwitchCameraTeam_Statics::MapMenuCamera_eventSwitchCameraTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchCameraTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_SwitchCameraTeam_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMapMenuCamera_SwitchCameraTeam_Statics::MapMenuCamera_eventSwitchCameraTeam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapMenuCamera_SwitchCameraTeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_SwitchCameraTeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execSwitchCameraTeam)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__direction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchCameraTeam(Z_Param__direction);
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function SwitchCameraTeam ***********************************

// ********** Begin Class AMapMenuCamera Function SwitchChallengeMenuUI ****************************
struct Z_Construct_UFunction_AMapMenuCamera_SwitchChallengeMenuUI_Statics
{
	struct MapMenuCamera_eventSwitchChallengeMenuUI_Parms
	{
		bool _visibility;
		TArray<AMinion*> _minions;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static void NewProp__visibility_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__visibility;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__minions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__minions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMapMenuCamera_SwitchChallengeMenuUI_Statics::NewProp__visibility_SetBit(void* Obj)
{
	((MapMenuCamera_eventSwitchChallengeMenuUI_Parms*)Obj)->_visibility = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapMenuCamera_SwitchChallengeMenuUI_Statics::NewProp__visibility = { "_visibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapMenuCamera_eventSwitchChallengeMenuUI_Parms), &Z_Construct_UFunction_AMapMenuCamera_SwitchChallengeMenuUI_Statics::NewProp__visibility_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapMenuCamera_SwitchChallengeMenuUI_Statics::NewProp__minions_Inner = { "_minions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMinion_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMapMenuCamera_SwitchChallengeMenuUI_Statics::NewProp__minions = { "_minions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMenuCamera_eventSwitchChallengeMenuUI_Parms, _minions), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapMenuCamera_SwitchChallengeMenuUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_SwitchChallengeMenuUI_Statics::NewProp__visibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_SwitchChallengeMenuUI_Statics::NewProp__minions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_SwitchChallengeMenuUI_Statics::NewProp__minions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchChallengeMenuUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_SwitchChallengeMenuUI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "SwitchChallengeMenuUI", Z_Construct_UFunction_AMapMenuCamera_SwitchChallengeMenuUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchChallengeMenuUI_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_SwitchChallengeMenuUI_Statics::MapMenuCamera_eventSwitchChallengeMenuUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchChallengeMenuUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_SwitchChallengeMenuUI_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMapMenuCamera_SwitchChallengeMenuUI_Statics::MapMenuCamera_eventSwitchChallengeMenuUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapMenuCamera_SwitchChallengeMenuUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_SwitchChallengeMenuUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execSwitchChallengeMenuUI)
{
	P_GET_UBOOL(Z_Param__visibility);
	P_GET_TARRAY(AMinion*,Z_Param__minions);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchChallengeMenuUI(Z_Param__visibility,Z_Param__minions);
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function SwitchChallengeMenuUI ******************************

// ********** Begin Class AMapMenuCamera Function SwitchChallengeUI ********************************
struct Z_Construct_UFunction_AMapMenuCamera_SwitchChallengeUI_Statics
{
	struct MapMenuCamera_eventSwitchChallengeUI_Parms
	{
		bool _visibility;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static void NewProp__visibility_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__visibility;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMapMenuCamera_SwitchChallengeUI_Statics::NewProp__visibility_SetBit(void* Obj)
{
	((MapMenuCamera_eventSwitchChallengeUI_Parms*)Obj)->_visibility = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapMenuCamera_SwitchChallengeUI_Statics::NewProp__visibility = { "_visibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapMenuCamera_eventSwitchChallengeUI_Parms), &Z_Construct_UFunction_AMapMenuCamera_SwitchChallengeUI_Statics::NewProp__visibility_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapMenuCamera_SwitchChallengeUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_SwitchChallengeUI_Statics::NewProp__visibility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchChallengeUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_SwitchChallengeUI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "SwitchChallengeUI", Z_Construct_UFunction_AMapMenuCamera_SwitchChallengeUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchChallengeUI_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_SwitchChallengeUI_Statics::MapMenuCamera_eventSwitchChallengeUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchChallengeUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_SwitchChallengeUI_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMapMenuCamera_SwitchChallengeUI_Statics::MapMenuCamera_eventSwitchChallengeUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapMenuCamera_SwitchChallengeUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_SwitchChallengeUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execSwitchChallengeUI)
{
	P_GET_UBOOL(Z_Param__visibility);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchChallengeUI(Z_Param__visibility);
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function SwitchChallengeUI **********************************

// ********** Begin Class AMapMenuCamera Function SwitchController *********************************
struct Z_Construct_UFunction_AMapMenuCamera_SwitchController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_SwitchController_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "SwitchController", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchController_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_SwitchController_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMapMenuCamera_SwitchController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_SwitchController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execSwitchController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchController();
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function SwitchController ***********************************

// ********** Begin Class AMapMenuCamera Function SwitchCrownsShop *********************************
struct Z_Construct_UFunction_AMapMenuCamera_SwitchCrownsShop_Statics
{
	struct MapMenuCamera_eventSwitchCrownsShop_Parms
	{
		bool _visibility;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static void NewProp__visibility_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__visibility;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMapMenuCamera_SwitchCrownsShop_Statics::NewProp__visibility_SetBit(void* Obj)
{
	((MapMenuCamera_eventSwitchCrownsShop_Parms*)Obj)->_visibility = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapMenuCamera_SwitchCrownsShop_Statics::NewProp__visibility = { "_visibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapMenuCamera_eventSwitchCrownsShop_Parms), &Z_Construct_UFunction_AMapMenuCamera_SwitchCrownsShop_Statics::NewProp__visibility_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapMenuCamera_SwitchCrownsShop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_SwitchCrownsShop_Statics::NewProp__visibility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchCrownsShop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_SwitchCrownsShop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "SwitchCrownsShop", Z_Construct_UFunction_AMapMenuCamera_SwitchCrownsShop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchCrownsShop_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_SwitchCrownsShop_Statics::MapMenuCamera_eventSwitchCrownsShop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchCrownsShop_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_SwitchCrownsShop_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMapMenuCamera_SwitchCrownsShop_Statics::MapMenuCamera_eventSwitchCrownsShop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapMenuCamera_SwitchCrownsShop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_SwitchCrownsShop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execSwitchCrownsShop)
{
	P_GET_UBOOL(Z_Param__visibility);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchCrownsShop(Z_Param__visibility);
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function SwitchCrownsShop ***********************************

// ********** Begin Class AMapMenuCamera Function SwitchFullMapVision ******************************
struct Z_Construct_UFunction_AMapMenuCamera_SwitchFullMapVision_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_SwitchFullMapVision_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "SwitchFullMapVision", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchFullMapVision_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_SwitchFullMapVision_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMapMenuCamera_SwitchFullMapVision()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_SwitchFullMapVision_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execSwitchFullMapVision)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchFullMapVision();
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function SwitchFullMapVision ********************************

// ********** Begin Class AMapMenuCamera Function SwitchInventory **********************************
struct Z_Construct_UFunction_AMapMenuCamera_SwitchInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_SwitchInventory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "SwitchInventory", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_SwitchInventory_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMapMenuCamera_SwitchInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_SwitchInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execSwitchInventory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchInventory();
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function SwitchInventory ************************************

// ********** Begin Class AMapMenuCamera Function SwitchItemThrowPlayerSelector ********************
struct Z_Construct_UFunction_AMapMenuCamera_SwitchItemThrowPlayerSelector_Statics
{
	struct MapMenuCamera_eventSwitchItemThrowPlayerSelector_Parms
	{
		bool _enabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static void NewProp__enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__enabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMapMenuCamera_SwitchItemThrowPlayerSelector_Statics::NewProp__enabled_SetBit(void* Obj)
{
	((MapMenuCamera_eventSwitchItemThrowPlayerSelector_Parms*)Obj)->_enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapMenuCamera_SwitchItemThrowPlayerSelector_Statics::NewProp__enabled = { "_enabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapMenuCamera_eventSwitchItemThrowPlayerSelector_Parms), &Z_Construct_UFunction_AMapMenuCamera_SwitchItemThrowPlayerSelector_Statics::NewProp__enabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapMenuCamera_SwitchItemThrowPlayerSelector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_SwitchItemThrowPlayerSelector_Statics::NewProp__enabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchItemThrowPlayerSelector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_SwitchItemThrowPlayerSelector_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "SwitchItemThrowPlayerSelector", Z_Construct_UFunction_AMapMenuCamera_SwitchItemThrowPlayerSelector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchItemThrowPlayerSelector_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_SwitchItemThrowPlayerSelector_Statics::MapMenuCamera_eventSwitchItemThrowPlayerSelector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchItemThrowPlayerSelector_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_SwitchItemThrowPlayerSelector_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMapMenuCamera_SwitchItemThrowPlayerSelector_Statics::MapMenuCamera_eventSwitchItemThrowPlayerSelector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapMenuCamera_SwitchItemThrowPlayerSelector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_SwitchItemThrowPlayerSelector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execSwitchItemThrowPlayerSelector)
{
	P_GET_UBOOL(Z_Param__enabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchItemThrowPlayerSelector(Z_Param__enabled);
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function SwitchItemThrowPlayerSelector **********************

// ********** Begin Class AMapMenuCamera Function SwitchMainScene **********************************
struct Z_Construct_UFunction_AMapMenuCamera_SwitchMainScene_Statics
{
	struct MapMenuCamera_eventSwitchMainScene_Parms
	{
		bool _isMap;
		EMinigameType _type;
		ETeamsMode _teams;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Scene Toggle" },
		{ "CPP_Default__isMap", "true" },
		{ "CPP_Default__teams", "NOTEAM" },
		{ "CPP_Default__type", "DUEL" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static void NewProp__isMap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__isMap;
	static const UECodeGen_Private::FBytePropertyParams NewProp__type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__type;
	static const UECodeGen_Private::FBytePropertyParams NewProp__teams_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__teams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMapMenuCamera_SwitchMainScene_Statics::NewProp__isMap_SetBit(void* Obj)
{
	((MapMenuCamera_eventSwitchMainScene_Parms*)Obj)->_isMap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapMenuCamera_SwitchMainScene_Statics::NewProp__isMap = { "_isMap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapMenuCamera_eventSwitchMainScene_Parms), &Z_Construct_UFunction_AMapMenuCamera_SwitchMainScene_Statics::NewProp__isMap_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMapMenuCamera_SwitchMainScene_Statics::NewProp__type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMapMenuCamera_SwitchMainScene_Statics::NewProp__type = { "_type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMenuCamera_eventSwitchMainScene_Parms, _type), Z_Construct_UEnum_PartyJungle_EMinigameType, METADATA_PARAMS(0, nullptr) }; // 2530748103
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMapMenuCamera_SwitchMainScene_Statics::NewProp__teams_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMapMenuCamera_SwitchMainScene_Statics::NewProp__teams = { "_teams", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMenuCamera_eventSwitchMainScene_Parms, _teams), Z_Construct_UEnum_PartyJungle_ETeamsMode, METADATA_PARAMS(0, nullptr) }; // 3117846603
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapMenuCamera_SwitchMainScene_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_SwitchMainScene_Statics::NewProp__isMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_SwitchMainScene_Statics::NewProp__type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_SwitchMainScene_Statics::NewProp__type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_SwitchMainScene_Statics::NewProp__teams_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_SwitchMainScene_Statics::NewProp__teams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchMainScene_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_SwitchMainScene_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "SwitchMainScene", Z_Construct_UFunction_AMapMenuCamera_SwitchMainScene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchMainScene_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_SwitchMainScene_Statics::MapMenuCamera_eventSwitchMainScene_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchMainScene_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_SwitchMainScene_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMapMenuCamera_SwitchMainScene_Statics::MapMenuCamera_eventSwitchMainScene_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapMenuCamera_SwitchMainScene()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_SwitchMainScene_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execSwitchMainScene)
{
	P_GET_UBOOL(Z_Param__isMap);
	P_GET_ENUM(EMinigameType,Z_Param__type);
	P_GET_ENUM(ETeamsMode,Z_Param__teams);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchMainScene(Z_Param__isMap,EMinigameType(Z_Param__type),ETeamsMode(Z_Param__teams));
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function SwitchMainScene ************************************

// ********** Begin Class AMapMenuCamera Function SwitchMenuWidget *********************************
struct Z_Construct_UFunction_AMapMenuCamera_SwitchMenuWidget_Statics
{
	struct MapMenuCamera_eventSwitchMenuWidget_Parms
	{
		bool _enabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static void NewProp__enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__enabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMapMenuCamera_SwitchMenuWidget_Statics::NewProp__enabled_SetBit(void* Obj)
{
	((MapMenuCamera_eventSwitchMenuWidget_Parms*)Obj)->_enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapMenuCamera_SwitchMenuWidget_Statics::NewProp__enabled = { "_enabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapMenuCamera_eventSwitchMenuWidget_Parms), &Z_Construct_UFunction_AMapMenuCamera_SwitchMenuWidget_Statics::NewProp__enabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapMenuCamera_SwitchMenuWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_SwitchMenuWidget_Statics::NewProp__enabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchMenuWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_SwitchMenuWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "SwitchMenuWidget", Z_Construct_UFunction_AMapMenuCamera_SwitchMenuWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchMenuWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_SwitchMenuWidget_Statics::MapMenuCamera_eventSwitchMenuWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchMenuWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_SwitchMenuWidget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMapMenuCamera_SwitchMenuWidget_Statics::MapMenuCamera_eventSwitchMenuWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapMenuCamera_SwitchMenuWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_SwitchMenuWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execSwitchMenuWidget)
{
	P_GET_UBOOL(Z_Param__enabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchMenuWidget(Z_Param__enabled);
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function SwitchMenuWidget ***********************************

// ********** Begin Class AMapMenuCamera Function SwitchMinionToSelectForDuel **********************
struct Z_Construct_UFunction_AMapMenuCamera_SwitchMinionToSelectForDuel_Statics
{
	struct MapMenuCamera_eventSwitchMinionToSelectForDuel_Parms
	{
		int32 _team;
		int32 _direction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__team;
	static const UECodeGen_Private::FIntPropertyParams NewProp__direction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapMenuCamera_SwitchMinionToSelectForDuel_Statics::NewProp__team = { "_team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMenuCamera_eventSwitchMinionToSelectForDuel_Parms, _team), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapMenuCamera_SwitchMinionToSelectForDuel_Statics::NewProp__direction = { "_direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMenuCamera_eventSwitchMinionToSelectForDuel_Parms, _direction), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapMenuCamera_SwitchMinionToSelectForDuel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_SwitchMinionToSelectForDuel_Statics::NewProp__team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_SwitchMinionToSelectForDuel_Statics::NewProp__direction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchMinionToSelectForDuel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_SwitchMinionToSelectForDuel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "SwitchMinionToSelectForDuel", Z_Construct_UFunction_AMapMenuCamera_SwitchMinionToSelectForDuel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchMinionToSelectForDuel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_SwitchMinionToSelectForDuel_Statics::MapMenuCamera_eventSwitchMinionToSelectForDuel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchMinionToSelectForDuel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_SwitchMinionToSelectForDuel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMapMenuCamera_SwitchMinionToSelectForDuel_Statics::MapMenuCamera_eventSwitchMinionToSelectForDuel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapMenuCamera_SwitchMinionToSelectForDuel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_SwitchMinionToSelectForDuel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execSwitchMinionToSelectForDuel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__team);
	P_GET_PROPERTY(FIntProperty,Z_Param__direction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchMinionToSelectForDuel(Z_Param__team,Z_Param__direction);
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function SwitchMinionToSelectForDuel ************************

// ********** Begin Class AMapMenuCamera Function SwitchPathMenu ***********************************
struct Z_Construct_UFunction_AMapMenuCamera_SwitchPathMenu_Statics
{
	struct MapMenuCamera_eventSwitchPathMenu_Parms
	{
		bool _enabled;
		TArray<ASquareOptional*> _paths;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static void NewProp__enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__enabled;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__paths_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__paths;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMapMenuCamera_SwitchPathMenu_Statics::NewProp__enabled_SetBit(void* Obj)
{
	((MapMenuCamera_eventSwitchPathMenu_Parms*)Obj)->_enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapMenuCamera_SwitchPathMenu_Statics::NewProp__enabled = { "_enabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapMenuCamera_eventSwitchPathMenu_Parms), &Z_Construct_UFunction_AMapMenuCamera_SwitchPathMenu_Statics::NewProp__enabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapMenuCamera_SwitchPathMenu_Statics::NewProp__paths_Inner = { "_paths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ASquareOptional_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMapMenuCamera_SwitchPathMenu_Statics::NewProp__paths = { "_paths", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMenuCamera_eventSwitchPathMenu_Parms, _paths), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapMenuCamera_SwitchPathMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_SwitchPathMenu_Statics::NewProp__enabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_SwitchPathMenu_Statics::NewProp__paths_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_SwitchPathMenu_Statics::NewProp__paths,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchPathMenu_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_SwitchPathMenu_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "SwitchPathMenu", Z_Construct_UFunction_AMapMenuCamera_SwitchPathMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchPathMenu_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_SwitchPathMenu_Statics::MapMenuCamera_eventSwitchPathMenu_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchPathMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_SwitchPathMenu_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMapMenuCamera_SwitchPathMenu_Statics::MapMenuCamera_eventSwitchPathMenu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapMenuCamera_SwitchPathMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_SwitchPathMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execSwitchPathMenu)
{
	P_GET_UBOOL(Z_Param__enabled);
	P_GET_TARRAY(ASquareOptional*,Z_Param__paths);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchPathMenu(Z_Param__enabled,Z_Param__paths);
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function SwitchPathMenu *************************************

// ********** Begin Class AMapMenuCamera Function SwitchRankingScoreList ***************************
struct Z_Construct_UFunction_AMapMenuCamera_SwitchRankingScoreList_Statics
{
	struct MapMenuCamera_eventSwitchRankingScoreList_Parms
	{
		bool _visibility;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static void NewProp__visibility_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__visibility;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMapMenuCamera_SwitchRankingScoreList_Statics::NewProp__visibility_SetBit(void* Obj)
{
	((MapMenuCamera_eventSwitchRankingScoreList_Parms*)Obj)->_visibility = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapMenuCamera_SwitchRankingScoreList_Statics::NewProp__visibility = { "_visibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapMenuCamera_eventSwitchRankingScoreList_Parms), &Z_Construct_UFunction_AMapMenuCamera_SwitchRankingScoreList_Statics::NewProp__visibility_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapMenuCamera_SwitchRankingScoreList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_SwitchRankingScoreList_Statics::NewProp__visibility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchRankingScoreList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_SwitchRankingScoreList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "SwitchRankingScoreList", Z_Construct_UFunction_AMapMenuCamera_SwitchRankingScoreList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchRankingScoreList_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_SwitchRankingScoreList_Statics::MapMenuCamera_eventSwitchRankingScoreList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchRankingScoreList_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_SwitchRankingScoreList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMapMenuCamera_SwitchRankingScoreList_Statics::MapMenuCamera_eventSwitchRankingScoreList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapMenuCamera_SwitchRankingScoreList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_SwitchRankingScoreList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execSwitchRankingScoreList)
{
	P_GET_UBOOL(Z_Param__visibility);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchRankingScoreList(Z_Param__visibility);
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function SwitchRankingScoreList *****************************

// ********** Begin Class AMapMenuCamera Function SwitchStoreCrownsUI ******************************
struct Z_Construct_UFunction_AMapMenuCamera_SwitchStoreCrownsUI_Statics
{
	struct MapMenuCamera_eventSwitchStoreCrownsUI_Parms
	{
		bool _visibility;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static void NewProp__visibility_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__visibility;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMapMenuCamera_SwitchStoreCrownsUI_Statics::NewProp__visibility_SetBit(void* Obj)
{
	((MapMenuCamera_eventSwitchStoreCrownsUI_Parms*)Obj)->_visibility = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapMenuCamera_SwitchStoreCrownsUI_Statics::NewProp__visibility = { "_visibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapMenuCamera_eventSwitchStoreCrownsUI_Parms), &Z_Construct_UFunction_AMapMenuCamera_SwitchStoreCrownsUI_Statics::NewProp__visibility_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapMenuCamera_SwitchStoreCrownsUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_SwitchStoreCrownsUI_Statics::NewProp__visibility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchStoreCrownsUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_SwitchStoreCrownsUI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "SwitchStoreCrownsUI", Z_Construct_UFunction_AMapMenuCamera_SwitchStoreCrownsUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchStoreCrownsUI_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_SwitchStoreCrownsUI_Statics::MapMenuCamera_eventSwitchStoreCrownsUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchStoreCrownsUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_SwitchStoreCrownsUI_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMapMenuCamera_SwitchStoreCrownsUI_Statics::MapMenuCamera_eventSwitchStoreCrownsUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapMenuCamera_SwitchStoreCrownsUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_SwitchStoreCrownsUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execSwitchStoreCrownsUI)
{
	P_GET_UBOOL(Z_Param__visibility);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchStoreCrownsUI(Z_Param__visibility);
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function SwitchStoreCrownsUI ********************************

// ********** Begin Class AMapMenuCamera Function SwitchToFullMapView ******************************
struct MapMenuCamera_eventSwitchToFullMapView_Parms
{
	bool _enabled;
	FVector _position;
};
static FName NAME_AMapMenuCamera_SwitchToFullMapView = FName(TEXT("SwitchToFullMapView"));
void AMapMenuCamera::SwitchToFullMapView(bool _enabled, FVector _position)
{
	MapMenuCamera_eventSwitchToFullMapView_Parms Parms;
	Parms._enabled=_enabled ? true : false;
	Parms._position=_position;
	UFunction* Func = FindFunctionChecked(NAME_AMapMenuCamera_SwitchToFullMapView);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMapMenuCamera_SwitchToFullMapView_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static void NewProp__enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__enabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp__position;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMapMenuCamera_SwitchToFullMapView_Statics::NewProp__enabled_SetBit(void* Obj)
{
	((MapMenuCamera_eventSwitchToFullMapView_Parms*)Obj)->_enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapMenuCamera_SwitchToFullMapView_Statics::NewProp__enabled = { "_enabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapMenuCamera_eventSwitchToFullMapView_Parms), &Z_Construct_UFunction_AMapMenuCamera_SwitchToFullMapView_Statics::NewProp__enabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMapMenuCamera_SwitchToFullMapView_Statics::NewProp__position = { "_position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMenuCamera_eventSwitchToFullMapView_Parms, _position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapMenuCamera_SwitchToFullMapView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_SwitchToFullMapView_Statics::NewProp__enabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_SwitchToFullMapView_Statics::NewProp__position,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchToFullMapView_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_SwitchToFullMapView_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "SwitchToFullMapView", Z_Construct_UFunction_AMapMenuCamera_SwitchToFullMapView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchToFullMapView_Statics::PropPointers), sizeof(MapMenuCamera_eventSwitchToFullMapView_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchToFullMapView_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_SwitchToFullMapView_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(MapMenuCamera_eventSwitchToFullMapView_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapMenuCamera_SwitchToFullMapView()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_SwitchToFullMapView_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AMapMenuCamera Function SwitchToFullMapView ********************************

// ********** Begin Class AMapMenuCamera Function UpdateDicePosition *******************************
struct Z_Construct_UFunction_AMapMenuCamera_UpdateDicePosition_Statics
{
	struct MapMenuCamera_eventUpdateDicePosition_Parms
	{
		bool _resizeDice;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "CPP_Default__resizeDice", "true" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static void NewProp__resizeDice_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__resizeDice;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMapMenuCamera_UpdateDicePosition_Statics::NewProp__resizeDice_SetBit(void* Obj)
{
	((MapMenuCamera_eventUpdateDicePosition_Parms*)Obj)->_resizeDice = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapMenuCamera_UpdateDicePosition_Statics::NewProp__resizeDice = { "_resizeDice", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapMenuCamera_eventUpdateDicePosition_Parms), &Z_Construct_UFunction_AMapMenuCamera_UpdateDicePosition_Statics::NewProp__resizeDice_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapMenuCamera_UpdateDicePosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_UpdateDicePosition_Statics::NewProp__resizeDice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_UpdateDicePosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_UpdateDicePosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "UpdateDicePosition", Z_Construct_UFunction_AMapMenuCamera_UpdateDicePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_UpdateDicePosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_UpdateDicePosition_Statics::MapMenuCamera_eventUpdateDicePosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_UpdateDicePosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_UpdateDicePosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMapMenuCamera_UpdateDicePosition_Statics::MapMenuCamera_eventUpdateDicePosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapMenuCamera_UpdateDicePosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_UpdateDicePosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execUpdateDicePosition)
{
	P_GET_UBOOL(Z_Param__resizeDice);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateDicePosition(Z_Param__resizeDice);
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function UpdateDicePosition *********************************

// ********** Begin Class AMapMenuCamera Function UpdateMinionEconomy ******************************
struct Z_Construct_UFunction_AMapMenuCamera_UpdateMinionEconomy_Statics
{
	struct MapMenuCamera_eventUpdateMinionEconomy_Parms
	{
		int32 _coins;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "CPP_Default__coins", "0" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__coins;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapMenuCamera_UpdateMinionEconomy_Statics::NewProp__coins = { "_coins", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMenuCamera_eventUpdateMinionEconomy_Parms, _coins), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapMenuCamera_UpdateMinionEconomy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_UpdateMinionEconomy_Statics::NewProp__coins,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_UpdateMinionEconomy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_UpdateMinionEconomy_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "UpdateMinionEconomy", Z_Construct_UFunction_AMapMenuCamera_UpdateMinionEconomy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_UpdateMinionEconomy_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_UpdateMinionEconomy_Statics::MapMenuCamera_eventUpdateMinionEconomy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_UpdateMinionEconomy_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_UpdateMinionEconomy_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMapMenuCamera_UpdateMinionEconomy_Statics::MapMenuCamera_eventUpdateMinionEconomy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapMenuCamera_UpdateMinionEconomy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_UpdateMinionEconomy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execUpdateMinionEconomy)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__coins);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateMinionEconomy(Z_Param__coins);
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function UpdateMinionEconomy ********************************

// ********** Begin Class AMapMenuCamera Function UpdateMinionEconomyWithReference *****************
struct Z_Construct_UFunction_AMapMenuCamera_UpdateMinionEconomyWithReference_Statics
{
	struct MapMenuCamera_eventUpdateMinionEconomyWithReference_Parms
	{
		AMinion* _minion;
		int32 _coins;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__minion;
	static const UECodeGen_Private::FIntPropertyParams NewProp__coins;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapMenuCamera_UpdateMinionEconomyWithReference_Statics::NewProp__minion = { "_minion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMenuCamera_eventUpdateMinionEconomyWithReference_Parms, _minion), Z_Construct_UClass_AMinion_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapMenuCamera_UpdateMinionEconomyWithReference_Statics::NewProp__coins = { "_coins", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMenuCamera_eventUpdateMinionEconomyWithReference_Parms, _coins), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapMenuCamera_UpdateMinionEconomyWithReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_UpdateMinionEconomyWithReference_Statics::NewProp__minion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_UpdateMinionEconomyWithReference_Statics::NewProp__coins,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_UpdateMinionEconomyWithReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_UpdateMinionEconomyWithReference_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "UpdateMinionEconomyWithReference", Z_Construct_UFunction_AMapMenuCamera_UpdateMinionEconomyWithReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_UpdateMinionEconomyWithReference_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_UpdateMinionEconomyWithReference_Statics::MapMenuCamera_eventUpdateMinionEconomyWithReference_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_UpdateMinionEconomyWithReference_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_UpdateMinionEconomyWithReference_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMapMenuCamera_UpdateMinionEconomyWithReference_Statics::MapMenuCamera_eventUpdateMinionEconomyWithReference_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapMenuCamera_UpdateMinionEconomyWithReference()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapMenuCamera_UpdateMinionEconomyWithReference_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapMenuCamera::execUpdateMinionEconomyWithReference)
{
	P_GET_OBJECT(AMinion,Z_Param__minion);
	P_GET_PROPERTY(FIntProperty,Z_Param__coins);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateMinionEconomyWithReference(Z_Param__minion,Z_Param__coins);
	P_NATIVE_END;
}
// ********** End Class AMapMenuCamera Function UpdateMinionEconomyWithReference *******************

// ********** Begin Class AMapMenuCamera ***********************************************************
void AMapMenuCamera::StaticRegisterNativesAMapMenuCamera()
{
	UClass* Class = AMapMenuCamera::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BuyCrowns", &AMapMenuCamera::execBuyCrowns },
		{ "ChangeSelectedPath", &AMapMenuCamera::execChangeSelectedPath },
		{ "CloseChallengeMenu", &AMapMenuCamera::execCloseChallengeMenu },
		{ "CloseDuelMenu", &AMapMenuCamera::execCloseDuelMenu },
		{ "ConfirmMinionToDuel", &AMapMenuCamera::execConfirmMinionToDuel },
		{ "ConfirmPathSelection", &AMapMenuCamera::execConfirmPathSelection },
		{ "DelayedSceneSwitch", &AMapMenuCamera::execDelayedSceneSwitch },
		{ "ExecuteMinionMovement", &AMapMenuCamera::execExecuteMinionMovement },
		{ "FinishDuel", &AMapMenuCamera::execFinishDuel },
		{ "FinishFadeTransition", &AMapMenuCamera::execFinishFadeTransition },
		{ "FinishMinigame", &AMapMenuCamera::execFinishMinigame },
		{ "FocusNextMinion", &AMapMenuCamera::execFocusNextMinion },
		{ "FollowMinionMovement", &AMapMenuCamera::execFollowMinionMovement },
		{ "GetMapUI", &AMapMenuCamera::execGetMapUI },
		{ "HandleBackInput", &AMapMenuCamera::execHandleBackInput },
		{ "HandleConfirmInput", &AMapMenuCamera::execHandleConfirmInput },
		{ "HandleEscInput", &AMapMenuCamera::execHandleEscInput },
		{ "HandleLeftJoystickInputX", &AMapMenuCamera::execHandleLeftJoystickInputX },
		{ "HandleLeftJoystickInputY", &AMapMenuCamera::execHandleLeftJoystickInputY },
		{ "HandleLeftRightInput", &AMapMenuCamera::execHandleLeftRightInput },
		{ "HandleYInput", &AMapMenuCamera::execHandleYInput },
		{ "OpenChallengeMenu", &AMapMenuCamera::execOpenChallengeMenu },
		{ "RefreshChallengeInfo", &AMapMenuCamera::execRefreshChallengeInfo },
		{ "ResetMapItems", &AMapMenuCamera::execResetMapItems },
		{ "RestoreTurnLogic", &AMapMenuCamera::execRestoreTurnLogic },
		{ "RestoreTurnLogicWithAnimation", &AMapMenuCamera::execRestoreTurnLogicWithAnimation },
		{ "RollTheDice", &AMapMenuCamera::execRollTheDice },
		{ "SetupPlayerInputComponent", &AMapMenuCamera::execSetupPlayerInputComponent },
		{ "SpinWheelEndSequence", &AMapMenuCamera::execSpinWheelEndSequence },
		{ "StartFadeTransition", &AMapMenuCamera::execStartFadeTransition },
		{ "StartMinigame", &AMapMenuCamera::execStartMinigame },
		{ "StartPlayerTurn", &AMapMenuCamera::execStartPlayerTurn },
		{ "StopMinionForDuel", &AMapMenuCamera::execStopMinionForDuel },
		{ "StoreCrowns", &AMapMenuCamera::execStoreCrowns },
		{ "SwitchCameraTeam", &AMapMenuCamera::execSwitchCameraTeam },
		{ "SwitchChallengeMenuUI", &AMapMenuCamera::execSwitchChallengeMenuUI },
		{ "SwitchChallengeUI", &AMapMenuCamera::execSwitchChallengeUI },
		{ "SwitchController", &AMapMenuCamera::execSwitchController },
		{ "SwitchCrownsShop", &AMapMenuCamera::execSwitchCrownsShop },
		{ "SwitchFullMapVision", &AMapMenuCamera::execSwitchFullMapVision },
		{ "SwitchInventory", &AMapMenuCamera::execSwitchInventory },
		{ "SwitchItemThrowPlayerSelector", &AMapMenuCamera::execSwitchItemThrowPlayerSelector },
		{ "SwitchMainScene", &AMapMenuCamera::execSwitchMainScene },
		{ "SwitchMenuWidget", &AMapMenuCamera::execSwitchMenuWidget },
		{ "SwitchMinionToSelectForDuel", &AMapMenuCamera::execSwitchMinionToSelectForDuel },
		{ "SwitchPathMenu", &AMapMenuCamera::execSwitchPathMenu },
		{ "SwitchRankingScoreList", &AMapMenuCamera::execSwitchRankingScoreList },
		{ "SwitchStoreCrownsUI", &AMapMenuCamera::execSwitchStoreCrownsUI },
		{ "UpdateDicePosition", &AMapMenuCamera::execUpdateDicePosition },
		{ "UpdateMinionEconomy", &AMapMenuCamera::execUpdateMinionEconomy },
		{ "UpdateMinionEconomyWithReference", &AMapMenuCamera::execUpdateMinionEconomyWithReference },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMapMenuCamera;
UClass* AMapMenuCamera::GetPrivateStaticClass()
{
	using TClass = AMapMenuCamera;
	if (!Z_Registration_Info_UClass_AMapMenuCamera.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MapMenuCamera"),
			Z_Registration_Info_UClass_AMapMenuCamera.InnerSingleton,
			StaticRegisterNativesAMapMenuCamera,
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
	return Z_Registration_Info_UClass_AMapMenuCamera.InnerSingleton;
}
UClass* Z_Construct_UClass_AMapMenuCamera_NoRegister()
{
	return AMapMenuCamera::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMapMenuCamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/Map/MapMenuCamera.h" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisxAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyaAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeybAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeywiAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyEscAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftJoystickActionX_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftJoystickActionY_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraSpeed_MetaData[] = {
		{ "Category", "Camera Parameters" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMinion_MetaData[] = {
		{ "Category", "Minion On Camera" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SquareShopReference_MetaData[] = {
		{ "Category", "Square Shop Reference" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapDb_MetaData[] = {
		{ "Category", "Camera Navigation" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoreDb_MetaData[] = {
		{ "Category", "Score Reference" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMinionPos_MetaData[] = {
		{ "Category", "Camera Navigation" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMinionTeam_MetaData[] = {
		{ "Category", "Camera Navigation" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dice_MetaData[] = {
		{ "Category", "Dice System" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[] = {
		{ "Category", "Inventory System" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoundsSystem_MetaData[] = {
		{ "Category", "Rounds System" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChallengeInformation_MetaData[] = {
		{ "Category", "Challenge System" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldSceneManager_MetaData[] = {
		{ "Category", "Map Manager" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChosenDuelIndex_MetaData[] = {
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MAX_TEAM_NUMBER_MetaData[] = {
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamWithDiceSlowed_MetaData[] = {
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemExecuted_MetaData[] = {
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinigameWheel_MetaData[] = {
		{ "Category", "MapMenuCamera" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DiceRollIndex_MetaData[] = {
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnMovementIndex_MetaData[] = {
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedDiceMovements_MetaData[] = {
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FullMapCameraVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvailablePaths_MetaData[] = {
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapUI_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_MenuWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AxisxAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyaAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeybAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeywiAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyEscAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftJoystickActionX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftJoystickActionY;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentMinion;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SquareShopReference;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapDb;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScoreDb;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentMinionPos;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentMinionTeam;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dice;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoundsSystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChallengeInformation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldSceneManager;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChosenDuelIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MAX_TEAM_NUMBER;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TeamWithDiceSlowed;
	static void NewProp_ItemExecuted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ItemExecuted;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MinigameWheel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DiceRollIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TurnMovementIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SavedDiceMovements;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FullMapCameraVelocity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AvailablePaths_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailablePaths;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapUI;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MenuWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMapMenuCamera_BuyCrowns, "BuyCrowns" }, // 1116947331
		{ &Z_Construct_UFunction_AMapMenuCamera_ChangeSelectedPath, "ChangeSelectedPath" }, // 261382538
		{ &Z_Construct_UFunction_AMapMenuCamera_CloseChallengeMenu, "CloseChallengeMenu" }, // 4146610912
		{ &Z_Construct_UFunction_AMapMenuCamera_CloseDuelMenu, "CloseDuelMenu" }, // 4046247542
		{ &Z_Construct_UFunction_AMapMenuCamera_ConfirmMinionToDuel, "ConfirmMinionToDuel" }, // 2218771679
		{ &Z_Construct_UFunction_AMapMenuCamera_ConfirmPathSelection, "ConfirmPathSelection" }, // 315158212
		{ &Z_Construct_UFunction_AMapMenuCamera_DelayedSceneSwitch, "DelayedSceneSwitch" }, // 1935148968
		{ &Z_Construct_UFunction_AMapMenuCamera_ExecuteMinionMovement, "ExecuteMinionMovement" }, // 3687873720
		{ &Z_Construct_UFunction_AMapMenuCamera_FinishDuel, "FinishDuel" }, // 1054023298
		{ &Z_Construct_UFunction_AMapMenuCamera_FinishFadeTransition, "FinishFadeTransition" }, // 773037478
		{ &Z_Construct_UFunction_AMapMenuCamera_FinishMinigame, "FinishMinigame" }, // 162270426
		{ &Z_Construct_UFunction_AMapMenuCamera_FocusNextMinion, "FocusNextMinion" }, // 2641092475
		{ &Z_Construct_UFunction_AMapMenuCamera_FollowMinionMovement, "FollowMinionMovement" }, // 296374804
		{ &Z_Construct_UFunction_AMapMenuCamera_GetMapUI, "GetMapUI" }, // 768691028
		{ &Z_Construct_UFunction_AMapMenuCamera_HandleBackInput, "HandleBackInput" }, // 2248972550
		{ &Z_Construct_UFunction_AMapMenuCamera_HandleConfirmInput, "HandleConfirmInput" }, // 32894684
		{ &Z_Construct_UFunction_AMapMenuCamera_HandleEscInput, "HandleEscInput" }, // 627037033
		{ &Z_Construct_UFunction_AMapMenuCamera_HandleLeftJoystickInputX, "HandleLeftJoystickInputX" }, // 33508680
		{ &Z_Construct_UFunction_AMapMenuCamera_HandleLeftJoystickInputY, "HandleLeftJoystickInputY" }, // 3091177968
		{ &Z_Construct_UFunction_AMapMenuCamera_HandleLeftRightInput, "HandleLeftRightInput" }, // 2927369344
		{ &Z_Construct_UFunction_AMapMenuCamera_HandleYInput, "HandleYInput" }, // 151101653
		{ &Z_Construct_UFunction_AMapMenuCamera_MoveFullMapCamera, "MoveFullMapCamera" }, // 1285154105
		{ &Z_Construct_UFunction_AMapMenuCamera_OpenChallengeMenu, "OpenChallengeMenu" }, // 4024170478
		{ &Z_Construct_UFunction_AMapMenuCamera_RefreshChallengeInfo, "RefreshChallengeInfo" }, // 2205320196
		{ &Z_Construct_UFunction_AMapMenuCamera_ResetMapItems, "ResetMapItems" }, // 826258746
		{ &Z_Construct_UFunction_AMapMenuCamera_RestoreTurnLogic, "RestoreTurnLogic" }, // 881133045
		{ &Z_Construct_UFunction_AMapMenuCamera_RestoreTurnLogicWithAnimation, "RestoreTurnLogicWithAnimation" }, // 2447711470
		{ &Z_Construct_UFunction_AMapMenuCamera_RollTheDice, "RollTheDice" }, // 3235366422
		{ &Z_Construct_UFunction_AMapMenuCamera_SetupPlayerInputComponent, "SetupPlayerInputComponent" }, // 3255206399
		{ &Z_Construct_UFunction_AMapMenuCamera_SpinWheelEndSequence, "SpinWheelEndSequence" }, // 2696137888
		{ &Z_Construct_UFunction_AMapMenuCamera_StartFadeTransition, "StartFadeTransition" }, // 318122657
		{ &Z_Construct_UFunction_AMapMenuCamera_StartMinigame, "StartMinigame" }, // 2146500280
		{ &Z_Construct_UFunction_AMapMenuCamera_StartPlayerTurn, "StartPlayerTurn" }, // 715828140
		{ &Z_Construct_UFunction_AMapMenuCamera_StopMinionForDuel, "StopMinionForDuel" }, // 2378700612
		{ &Z_Construct_UFunction_AMapMenuCamera_StoreCrowns, "StoreCrowns" }, // 2947720821
		{ &Z_Construct_UFunction_AMapMenuCamera_SwitchCameraTeam, "SwitchCameraTeam" }, // 3643825407
		{ &Z_Construct_UFunction_AMapMenuCamera_SwitchChallengeMenuUI, "SwitchChallengeMenuUI" }, // 2563477385
		{ &Z_Construct_UFunction_AMapMenuCamera_SwitchChallengeUI, "SwitchChallengeUI" }, // 1079546028
		{ &Z_Construct_UFunction_AMapMenuCamera_SwitchController, "SwitchController" }, // 2887006734
		{ &Z_Construct_UFunction_AMapMenuCamera_SwitchCrownsShop, "SwitchCrownsShop" }, // 2713509371
		{ &Z_Construct_UFunction_AMapMenuCamera_SwitchFullMapVision, "SwitchFullMapVision" }, // 83696799
		{ &Z_Construct_UFunction_AMapMenuCamera_SwitchInventory, "SwitchInventory" }, // 1955938641
		{ &Z_Construct_UFunction_AMapMenuCamera_SwitchItemThrowPlayerSelector, "SwitchItemThrowPlayerSelector" }, // 1755286607
		{ &Z_Construct_UFunction_AMapMenuCamera_SwitchMainScene, "SwitchMainScene" }, // 837757064
		{ &Z_Construct_UFunction_AMapMenuCamera_SwitchMenuWidget, "SwitchMenuWidget" }, // 3563137851
		{ &Z_Construct_UFunction_AMapMenuCamera_SwitchMinionToSelectForDuel, "SwitchMinionToSelectForDuel" }, // 2962733435
		{ &Z_Construct_UFunction_AMapMenuCamera_SwitchPathMenu, "SwitchPathMenu" }, // 2369989188
		{ &Z_Construct_UFunction_AMapMenuCamera_SwitchRankingScoreList, "SwitchRankingScoreList" }, // 1582783717
		{ &Z_Construct_UFunction_AMapMenuCamera_SwitchStoreCrownsUI, "SwitchStoreCrownsUI" }, // 3496390430
		{ &Z_Construct_UFunction_AMapMenuCamera_SwitchToFullMapView, "SwitchToFullMapView" }, // 1111404998
		{ &Z_Construct_UFunction_AMapMenuCamera_UpdateDicePosition, "UpdateDicePosition" }, // 3915403318
		{ &Z_Construct_UFunction_AMapMenuCamera_UpdateMinionEconomy, "UpdateMinionEconomy" }, // 3977391865
		{ &Z_Construct_UFunction_AMapMenuCamera_UpdateMinionEconomyWithReference, "UpdateMinionEconomyWithReference" }, // 1101058399
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapMenuCamera>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_MenuWidgetClass = { "MenuWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, MenuWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuWidgetClass_MetaData), NewProp_MenuWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_AxisxAction = { "AxisxAction", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, AxisxAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisxAction_MetaData), NewProp_AxisxAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_KeyaAction = { "KeyaAction", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, KeyaAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyaAction_MetaData), NewProp_KeyaAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_KeybAction = { "KeybAction", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, KeybAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeybAction_MetaData), NewProp_KeybAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_KeywiAction = { "KeywiAction", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, KeywiAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeywiAction_MetaData), NewProp_KeywiAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_KeyEscAction = { "KeyEscAction", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, KeyEscAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyEscAction_MetaData), NewProp_KeyEscAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_LeftJoystickActionX = { "LeftJoystickActionX", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, LeftJoystickActionX), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftJoystickActionX_MetaData), NewProp_LeftJoystickActionX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_LeftJoystickActionY = { "LeftJoystickActionY", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, LeftJoystickActionY), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftJoystickActionY_MetaData), NewProp_LeftJoystickActionY_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_CameraSpeed = { "CameraSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, CameraSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraSpeed_MetaData), NewProp_CameraSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_CurrentMinion = { "CurrentMinion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, CurrentMinion), Z_Construct_UClass_AMinion_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMinion_MetaData), NewProp_CurrentMinion_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_SquareShopReference = { "SquareShopReference", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, SquareShopReference), Z_Construct_UClass_ASquareShop_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SquareShopReference_MetaData), NewProp_SquareShopReference_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_MapDb = { "MapDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, MapDb), Z_Construct_UClass_AMapDatabase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapDb_MetaData), NewProp_MapDb_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_ScoreDb = { "ScoreDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, ScoreDb), Z_Construct_UClass_AScoreDatabase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoreDb_MetaData), NewProp_ScoreDb_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_CurrentMinionPos = { "CurrentMinionPos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, CurrentMinionPos), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMinionPos_MetaData), NewProp_CurrentMinionPos_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_CurrentMinionTeam = { "CurrentMinionTeam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, CurrentMinionTeam), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMinionTeam_MetaData), NewProp_CurrentMinionTeam_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_Dice = { "Dice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, Dice), Z_Construct_UClass_ADice_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dice_MetaData), NewProp_Dice_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, Inventory), Z_Construct_UClass_AInventory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inventory_MetaData), NewProp_Inventory_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_RoundsSystem = { "RoundsSystem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, RoundsSystem), Z_Construct_UClass_ARoundsManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoundsSystem_MetaData), NewProp_RoundsSystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_ChallengeInformation = { "ChallengeInformation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, ChallengeInformation), Z_Construct_UClass_AChallengeInformation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChallengeInformation_MetaData), NewProp_ChallengeInformation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_WorldSceneManager = { "WorldSceneManager", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, WorldSceneManager), Z_Construct_UClass_AWorldManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldSceneManager_MetaData), NewProp_WorldSceneManager_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_ChosenDuelIndex = { "ChosenDuelIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, ChosenDuelIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChosenDuelIndex_MetaData), NewProp_ChosenDuelIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_MAX_TEAM_NUMBER = { "MAX_TEAM_NUMBER", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, MAX_TEAM_NUMBER), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MAX_TEAM_NUMBER_MetaData), NewProp_MAX_TEAM_NUMBER_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_TeamWithDiceSlowed = { "TeamWithDiceSlowed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, TeamWithDiceSlowed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamWithDiceSlowed_MetaData), NewProp_TeamWithDiceSlowed_MetaData) };
void Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_ItemExecuted_SetBit(void* Obj)
{
	((AMapMenuCamera*)Obj)->ItemExecuted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_ItemExecuted = { "ItemExecuted", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMapMenuCamera), &Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_ItemExecuted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemExecuted_MetaData), NewProp_ItemExecuted_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_MinigameWheel = { "MinigameWheel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, MinigameWheel), Z_Construct_UClass_AMinigameWheel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinigameWheel_MetaData), NewProp_MinigameWheel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_DiceRollIndex = { "DiceRollIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, DiceRollIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DiceRollIndex_MetaData), NewProp_DiceRollIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_TurnMovementIndex = { "TurnMovementIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, TurnMovementIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnMovementIndex_MetaData), NewProp_TurnMovementIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_SavedDiceMovements = { "SavedDiceMovements", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, SavedDiceMovements), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedDiceMovements_MetaData), NewProp_SavedDiceMovements_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_FullMapCameraVelocity = { "FullMapCameraVelocity", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, FullMapCameraVelocity), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FullMapCameraVelocity_MetaData), NewProp_FullMapCameraVelocity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_AvailablePaths_Inner = { "AvailablePaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ASquareOptional_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_AvailablePaths = { "AvailablePaths", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, AvailablePaths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailablePaths_MetaData), NewProp_AvailablePaths_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_MapUI = { "MapUI", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, MapUI), Z_Construct_UClass_UPlayerMapUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapUI_MetaData), NewProp_MapUI_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_MenuWidget = { "MenuWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, MenuWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuWidget_MetaData), NewProp_MenuWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMapMenuCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_MenuWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_AxisxAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_KeyaAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_KeybAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_KeywiAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_KeyEscAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_LeftJoystickActionX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_LeftJoystickActionY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_InputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_CameraSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_CurrentMinion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_SquareShopReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_MapDb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_ScoreDb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_CurrentMinionPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_CurrentMinionTeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_Dice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_Inventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_RoundsSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_ChallengeInformation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_WorldSceneManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_ChosenDuelIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_MAX_TEAM_NUMBER,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_TeamWithDiceSlowed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_ItemExecuted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_MinigameWheel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_DiceRollIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_TurnMovementIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_SavedDiceMovements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_FullMapCameraVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_AvailablePaths_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_AvailablePaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_MapUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_MenuWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapMenuCamera_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMapMenuCamera_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapMenuCamera_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMapMenuCamera_Statics::ClassParams = {
	&AMapMenuCamera::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMapMenuCamera_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMapMenuCamera_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMapMenuCamera_Statics::Class_MetaDataParams), Z_Construct_UClass_AMapMenuCamera_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMapMenuCamera()
{
	if (!Z_Registration_Info_UClass_AMapMenuCamera.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMapMenuCamera.OuterSingleton, Z_Construct_UClass_AMapMenuCamera_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMapMenuCamera.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMapMenuCamera);
AMapMenuCamera::~AMapMenuCamera() {}
// ********** End Class AMapMenuCamera *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Map_MapMenuCamera_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMapMenuCamera, AMapMenuCamera::StaticClass, TEXT("AMapMenuCamera"), &Z_Registration_Info_UClass_AMapMenuCamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMapMenuCamera), 461352758U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Map_MapMenuCamera_h__Script_PartyJungle_924477381(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Map_MapMenuCamera_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Map_MapMenuCamera_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
