// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Player/Map/MapMenuCamera.h"
#include "EnhancedInput/Public/InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapMenuCamera() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AChallengeInformation_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ADice_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMapDatabase_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMapMenuCamera();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMapMenuCamera_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinion_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AScoreDatabase_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ASquareOptional_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AWorldManager_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_UPlayerMapUI_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// End Cross Module References

// Begin Class AMapMenuCamera Function BuyCrowns
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_BuyCrowns_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "BuyCrowns", nullptr, nullptr, Z_Construct_UFunction_AMapMenuCamera_BuyCrowns_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_BuyCrowns_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_BuyCrowns_Statics::MapMenuCamera_eventBuyCrowns_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_BuyCrowns_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_BuyCrowns_Statics::Function_MetaDataParams) };
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
// End Class AMapMenuCamera Function BuyCrowns

// Begin Class AMapMenuCamera Function ChangeSelectedPath
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_ChangeSelectedPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "ChangeSelectedPath", nullptr, nullptr, Z_Construct_UFunction_AMapMenuCamera_ChangeSelectedPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_ChangeSelectedPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_ChangeSelectedPath_Statics::MapMenuCamera_eventChangeSelectedPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_ChangeSelectedPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_ChangeSelectedPath_Statics::Function_MetaDataParams) };
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
// End Class AMapMenuCamera Function ChangeSelectedPath

// Begin Class AMapMenuCamera Function CloseChallengeMenu
struct Z_Construct_UFunction_AMapMenuCamera_CloseChallengeMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_CloseChallengeMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "CloseChallengeMenu", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_CloseChallengeMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_CloseChallengeMenu_Statics::Function_MetaDataParams) };
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
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CloseChallengeMenu();
	P_NATIVE_END;
}
// End Class AMapMenuCamera Function CloseChallengeMenu

// Begin Class AMapMenuCamera Function ConfirmPathSelection
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_ConfirmPathSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "ConfirmPathSelection", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_ConfirmPathSelection_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_ConfirmPathSelection_Statics::Function_MetaDataParams) };
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
// End Class AMapMenuCamera Function ConfirmPathSelection

// Begin Class AMapMenuCamera Function FinishDuel
struct Z_Construct_UFunction_AMapMenuCamera_FinishDuel_Statics
{
	struct MapMenuCamera_eventFinishDuel_Parms
	{
		int32 _winner;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__winner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapMenuCamera_FinishDuel_Statics::NewProp__winner = { "_winner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMenuCamera_eventFinishDuel_Parms, _winner), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapMenuCamera_FinishDuel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_FinishDuel_Statics::NewProp__winner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_FinishDuel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_FinishDuel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "FinishDuel", nullptr, nullptr, Z_Construct_UFunction_AMapMenuCamera_FinishDuel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_FinishDuel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_FinishDuel_Statics::MapMenuCamera_eventFinishDuel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_FinishDuel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_FinishDuel_Statics::Function_MetaDataParams) };
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
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishDuel(Z_Param__winner);
	P_NATIVE_END;
}
// End Class AMapMenuCamera Function FinishDuel

// Begin Class AMapMenuCamera Function FocusNextMinion
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_FocusNextMinion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "FocusNextMinion", nullptr, nullptr, Z_Construct_UFunction_AMapMenuCamera_FocusNextMinion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_FocusNextMinion_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_FocusNextMinion_Statics::MapMenuCamera_eventFocusNextMinion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_FocusNextMinion_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_FocusNextMinion_Statics::Function_MetaDataParams) };
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
// End Class AMapMenuCamera Function FocusNextMinion

// Begin Class AMapMenuCamera Function HandleBackInput
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_HandleBackInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "HandleBackInput", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_HandleBackInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_HandleBackInput_Statics::Function_MetaDataParams) };
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
// End Class AMapMenuCamera Function HandleBackInput

// Begin Class AMapMenuCamera Function HandleConfirmInput
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_HandleConfirmInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "HandleConfirmInput", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_HandleConfirmInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_HandleConfirmInput_Statics::Function_MetaDataParams) };
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
// End Class AMapMenuCamera Function HandleConfirmInput

// Begin Class AMapMenuCamera Function HandleLeftRightInput
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMapMenuCamera_HandleLeftRightInput_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMenuCamera_eventHandleLeftRightInput_Parms, _value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__value_MetaData), NewProp__value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapMenuCamera_HandleLeftRightInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_HandleLeftRightInput_Statics::NewProp__value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_HandleLeftRightInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_HandleLeftRightInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "HandleLeftRightInput", nullptr, nullptr, Z_Construct_UFunction_AMapMenuCamera_HandleLeftRightInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_HandleLeftRightInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_HandleLeftRightInput_Statics::MapMenuCamera_eventHandleLeftRightInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_HandleLeftRightInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_HandleLeftRightInput_Statics::Function_MetaDataParams) };
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
// End Class AMapMenuCamera Function HandleLeftRightInput

// Begin Class AMapMenuCamera Function OpenChallengeMenu
struct Z_Construct_UFunction_AMapMenuCamera_OpenChallengeMenu_Statics
{
	struct MapMenuCamera_eventOpenChallengeMenu_Parms
	{
		AMinion* _challenger;
		AMinion* _victim;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__challenger;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__victim;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapMenuCamera_OpenChallengeMenu_Statics::NewProp__challenger = { "_challenger", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMenuCamera_eventOpenChallengeMenu_Parms, _challenger), Z_Construct_UClass_AMinion_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapMenuCamera_OpenChallengeMenu_Statics::NewProp__victim = { "_victim", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMenuCamera_eventOpenChallengeMenu_Parms, _victim), Z_Construct_UClass_AMinion_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapMenuCamera_OpenChallengeMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_OpenChallengeMenu_Statics::NewProp__challenger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_OpenChallengeMenu_Statics::NewProp__victim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_OpenChallengeMenu_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_OpenChallengeMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "OpenChallengeMenu", nullptr, nullptr, Z_Construct_UFunction_AMapMenuCamera_OpenChallengeMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_OpenChallengeMenu_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_OpenChallengeMenu_Statics::MapMenuCamera_eventOpenChallengeMenu_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_OpenChallengeMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_OpenChallengeMenu_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapMenuCamera_OpenChallengeMenu_Statics::MapMenuCamera_eventOpenChallengeMenu_Parms) < MAX_uint16);
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
	P_GET_OBJECT(AMinion,Z_Param__challenger);
	P_GET_OBJECT(AMinion,Z_Param__victim);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenChallengeMenu(Z_Param__challenger,Z_Param__victim);
	P_NATIVE_END;
}
// End Class AMapMenuCamera Function OpenChallengeMenu

// Begin Class AMapMenuCamera Function RefreshChallengeInfo
struct Z_Construct_UFunction_AMapMenuCamera_RefreshChallengeInfo_Statics
{
	struct MapMenuCamera_eventRefreshChallengeInfo_Parms
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
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapMenuCamera_RefreshChallengeInfo_Statics::NewProp__direction = { "_direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMenuCamera_eventRefreshChallengeInfo_Parms, _direction), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapMenuCamera_RefreshChallengeInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_RefreshChallengeInfo_Statics::NewProp__direction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_RefreshChallengeInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_RefreshChallengeInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "RefreshChallengeInfo", nullptr, nullptr, Z_Construct_UFunction_AMapMenuCamera_RefreshChallengeInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_RefreshChallengeInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_RefreshChallengeInfo_Statics::MapMenuCamera_eventRefreshChallengeInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_RefreshChallengeInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_RefreshChallengeInfo_Statics::Function_MetaDataParams) };
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
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshChallengeInfo(Z_Param__direction);
	P_NATIVE_END;
}
// End Class AMapMenuCamera Function RefreshChallengeInfo

// Begin Class AMapMenuCamera Function RestoreTurnLogic
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_RestoreTurnLogic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "RestoreTurnLogic", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_RestoreTurnLogic_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_RestoreTurnLogic_Statics::Function_MetaDataParams) };
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
// End Class AMapMenuCamera Function RestoreTurnLogic

// Begin Class AMapMenuCamera Function RollTheDice
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_RollTheDice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "RollTheDice", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_RollTheDice_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_RollTheDice_Statics::Function_MetaDataParams) };
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
// End Class AMapMenuCamera Function RollTheDice

// Begin Class AMapMenuCamera Function SetupPlayerInputComponent
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_SetupPlayerInputComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "SetupPlayerInputComponent", nullptr, nullptr, Z_Construct_UFunction_AMapMenuCamera_SetupPlayerInputComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SetupPlayerInputComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_SetupPlayerInputComponent_Statics::MapMenuCamera_eventSetupPlayerInputComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SetupPlayerInputComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_SetupPlayerInputComponent_Statics::Function_MetaDataParams) };
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
// End Class AMapMenuCamera Function SetupPlayerInputComponent

// Begin Class AMapMenuCamera Function StartMinigame
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_StartMinigame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "StartMinigame", nullptr, nullptr, Z_Construct_UFunction_AMapMenuCamera_StartMinigame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_StartMinigame_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_StartMinigame_Statics::MapMenuCamera_eventStartMinigame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_StartMinigame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_StartMinigame_Statics::Function_MetaDataParams) };
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
// End Class AMapMenuCamera Function StartMinigame

// Begin Class AMapMenuCamera Function StoreCrowns
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_StoreCrowns_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "StoreCrowns", nullptr, nullptr, Z_Construct_UFunction_AMapMenuCamera_StoreCrowns_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_StoreCrowns_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_StoreCrowns_Statics::MapMenuCamera_eventStoreCrowns_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_StoreCrowns_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_StoreCrowns_Statics::Function_MetaDataParams) };
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
// End Class AMapMenuCamera Function StoreCrowns

// Begin Class AMapMenuCamera Function SwitchCameraTeam
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_SwitchCameraTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "SwitchCameraTeam", nullptr, nullptr, Z_Construct_UFunction_AMapMenuCamera_SwitchCameraTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchCameraTeam_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_SwitchCameraTeam_Statics::MapMenuCamera_eventSwitchCameraTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchCameraTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_SwitchCameraTeam_Statics::Function_MetaDataParams) };
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
// End Class AMapMenuCamera Function SwitchCameraTeam

// Begin Class AMapMenuCamera Function SwitchChallengeUI
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_SwitchChallengeUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "SwitchChallengeUI", nullptr, nullptr, Z_Construct_UFunction_AMapMenuCamera_SwitchChallengeUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchChallengeUI_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_SwitchChallengeUI_Statics::MapMenuCamera_eventSwitchChallengeUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchChallengeUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_SwitchChallengeUI_Statics::Function_MetaDataParams) };
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
// End Class AMapMenuCamera Function SwitchChallengeUI

// Begin Class AMapMenuCamera Function SwitchController
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_SwitchController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "SwitchController", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchController_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_SwitchController_Statics::Function_MetaDataParams) };
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
// End Class AMapMenuCamera Function SwitchController

// Begin Class AMapMenuCamera Function SwitchCrownsShop
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_SwitchCrownsShop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "SwitchCrownsShop", nullptr, nullptr, Z_Construct_UFunction_AMapMenuCamera_SwitchCrownsShop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchCrownsShop_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_SwitchCrownsShop_Statics::MapMenuCamera_eventSwitchCrownsShop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchCrownsShop_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_SwitchCrownsShop_Statics::Function_MetaDataParams) };
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
// End Class AMapMenuCamera Function SwitchCrownsShop

// Begin Class AMapMenuCamera Function SwitchMainScene
struct Z_Construct_UFunction_AMapMenuCamera_SwitchMainScene_Statics
{
	struct MapMenuCamera_eventSwitchMainScene_Parms
	{
		int32 _minigameIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Scene Toggle" },
		{ "CPP_Default__minigameIndex", "-1" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__minigameIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapMenuCamera_SwitchMainScene_Statics::NewProp__minigameIndex = { "_minigameIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMenuCamera_eventSwitchMainScene_Parms, _minigameIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapMenuCamera_SwitchMainScene_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapMenuCamera_SwitchMainScene_Statics::NewProp__minigameIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchMainScene_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_SwitchMainScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "SwitchMainScene", nullptr, nullptr, Z_Construct_UFunction_AMapMenuCamera_SwitchMainScene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchMainScene_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_SwitchMainScene_Statics::MapMenuCamera_eventSwitchMainScene_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchMainScene_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_SwitchMainScene_Statics::Function_MetaDataParams) };
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
	P_GET_PROPERTY(FIntProperty,Z_Param__minigameIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchMainScene(Z_Param__minigameIndex);
	P_NATIVE_END;
}
// End Class AMapMenuCamera Function SwitchMainScene

// Begin Class AMapMenuCamera Function SwitchMenuWidget
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_SwitchMenuWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "SwitchMenuWidget", nullptr, nullptr, Z_Construct_UFunction_AMapMenuCamera_SwitchMenuWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchMenuWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_SwitchMenuWidget_Statics::MapMenuCamera_eventSwitchMenuWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchMenuWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_SwitchMenuWidget_Statics::Function_MetaDataParams) };
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
// End Class AMapMenuCamera Function SwitchMenuWidget

// Begin Class AMapMenuCamera Function SwitchPathMenu
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_SwitchPathMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "SwitchPathMenu", nullptr, nullptr, Z_Construct_UFunction_AMapMenuCamera_SwitchPathMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchPathMenu_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_SwitchPathMenu_Statics::MapMenuCamera_eventSwitchPathMenu_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchPathMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_SwitchPathMenu_Statics::Function_MetaDataParams) };
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
// End Class AMapMenuCamera Function SwitchPathMenu

// Begin Class AMapMenuCamera Function SwitchStoreCrownsUI
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_SwitchStoreCrownsUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "SwitchStoreCrownsUI", nullptr, nullptr, Z_Construct_UFunction_AMapMenuCamera_SwitchStoreCrownsUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchStoreCrownsUI_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_SwitchStoreCrownsUI_Statics::MapMenuCamera_eventSwitchStoreCrownsUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_SwitchStoreCrownsUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_SwitchStoreCrownsUI_Statics::Function_MetaDataParams) };
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
// End Class AMapMenuCamera Function SwitchStoreCrownsUI

// Begin Class AMapMenuCamera Function UpdateDicePosition
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_UpdateDicePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "UpdateDicePosition", nullptr, nullptr, Z_Construct_UFunction_AMapMenuCamera_UpdateDicePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_UpdateDicePosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_UpdateDicePosition_Statics::MapMenuCamera_eventUpdateDicePosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_UpdateDicePosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_UpdateDicePosition_Statics::Function_MetaDataParams) };
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
// End Class AMapMenuCamera Function UpdateDicePosition

// Begin Class AMapMenuCamera Function UpdateMinionEconomy
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapMenuCamera_UpdateMinionEconomy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapMenuCamera, nullptr, "UpdateMinionEconomy", nullptr, nullptr, Z_Construct_UFunction_AMapMenuCamera_UpdateMinionEconomy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_UpdateMinionEconomy_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapMenuCamera_UpdateMinionEconomy_Statics::MapMenuCamera_eventUpdateMinionEconomy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapMenuCamera_UpdateMinionEconomy_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapMenuCamera_UpdateMinionEconomy_Statics::Function_MetaDataParams) };
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
// End Class AMapMenuCamera Function UpdateMinionEconomy

// Begin Class AMapMenuCamera
void AMapMenuCamera::StaticRegisterNativesAMapMenuCamera()
{
	UClass* Class = AMapMenuCamera::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BuyCrowns", &AMapMenuCamera::execBuyCrowns },
		{ "ChangeSelectedPath", &AMapMenuCamera::execChangeSelectedPath },
		{ "CloseChallengeMenu", &AMapMenuCamera::execCloseChallengeMenu },
		{ "ConfirmPathSelection", &AMapMenuCamera::execConfirmPathSelection },
		{ "FinishDuel", &AMapMenuCamera::execFinishDuel },
		{ "FocusNextMinion", &AMapMenuCamera::execFocusNextMinion },
		{ "HandleBackInput", &AMapMenuCamera::execHandleBackInput },
		{ "HandleConfirmInput", &AMapMenuCamera::execHandleConfirmInput },
		{ "HandleLeftRightInput", &AMapMenuCamera::execHandleLeftRightInput },
		{ "OpenChallengeMenu", &AMapMenuCamera::execOpenChallengeMenu },
		{ "RefreshChallengeInfo", &AMapMenuCamera::execRefreshChallengeInfo },
		{ "RestoreTurnLogic", &AMapMenuCamera::execRestoreTurnLogic },
		{ "RollTheDice", &AMapMenuCamera::execRollTheDice },
		{ "SetupPlayerInputComponent", &AMapMenuCamera::execSetupPlayerInputComponent },
		{ "StartMinigame", &AMapMenuCamera::execStartMinigame },
		{ "StoreCrowns", &AMapMenuCamera::execStoreCrowns },
		{ "SwitchCameraTeam", &AMapMenuCamera::execSwitchCameraTeam },
		{ "SwitchChallengeUI", &AMapMenuCamera::execSwitchChallengeUI },
		{ "SwitchController", &AMapMenuCamera::execSwitchController },
		{ "SwitchCrownsShop", &AMapMenuCamera::execSwitchCrownsShop },
		{ "SwitchMainScene", &AMapMenuCamera::execSwitchMainScene },
		{ "SwitchMenuWidget", &AMapMenuCamera::execSwitchMenuWidget },
		{ "SwitchPathMenu", &AMapMenuCamera::execSwitchPathMenu },
		{ "SwitchStoreCrownsUI", &AMapMenuCamera::execSwitchStoreCrownsUI },
		{ "UpdateDicePosition", &AMapMenuCamera::execUpdateDicePosition },
		{ "UpdateMinionEconomy", &AMapMenuCamera::execUpdateMinionEconomy },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMapMenuCamera);
UClass* Z_Construct_UClass_AMapMenuCamera_NoRegister()
{
	return AMapMenuCamera::StaticClass();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChallengeInformation_MetaData[] = {
		{ "Category", "Challenge System" },
		{ "ModuleRelativePath", "Player/Map/MapMenuCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldSceneManager_MetaData[] = {
		{ "Category", "Map Manager" },
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentMinion;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapDb;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScoreDb;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentMinionPos;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentMinionTeam;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dice;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChallengeInformation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldSceneManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AvailablePaths_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailablePaths;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapUI;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MenuWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMapMenuCamera_BuyCrowns, "BuyCrowns" }, // 1642173731
		{ &Z_Construct_UFunction_AMapMenuCamera_ChangeSelectedPath, "ChangeSelectedPath" }, // 390084385
		{ &Z_Construct_UFunction_AMapMenuCamera_CloseChallengeMenu, "CloseChallengeMenu" }, // 1119505372
		{ &Z_Construct_UFunction_AMapMenuCamera_ConfirmPathSelection, "ConfirmPathSelection" }, // 2747763901
		{ &Z_Construct_UFunction_AMapMenuCamera_FinishDuel, "FinishDuel" }, // 2725032225
		{ &Z_Construct_UFunction_AMapMenuCamera_FocusNextMinion, "FocusNextMinion" }, // 2936244957
		{ &Z_Construct_UFunction_AMapMenuCamera_HandleBackInput, "HandleBackInput" }, // 229676118
		{ &Z_Construct_UFunction_AMapMenuCamera_HandleConfirmInput, "HandleConfirmInput" }, // 55423153
		{ &Z_Construct_UFunction_AMapMenuCamera_HandleLeftRightInput, "HandleLeftRightInput" }, // 1471737810
		{ &Z_Construct_UFunction_AMapMenuCamera_OpenChallengeMenu, "OpenChallengeMenu" }, // 1674312757
		{ &Z_Construct_UFunction_AMapMenuCamera_RefreshChallengeInfo, "RefreshChallengeInfo" }, // 879373997
		{ &Z_Construct_UFunction_AMapMenuCamera_RestoreTurnLogic, "RestoreTurnLogic" }, // 110122867
		{ &Z_Construct_UFunction_AMapMenuCamera_RollTheDice, "RollTheDice" }, // 197272818
		{ &Z_Construct_UFunction_AMapMenuCamera_SetupPlayerInputComponent, "SetupPlayerInputComponent" }, // 476219084
		{ &Z_Construct_UFunction_AMapMenuCamera_StartMinigame, "StartMinigame" }, // 414702047
		{ &Z_Construct_UFunction_AMapMenuCamera_StoreCrowns, "StoreCrowns" }, // 1192048640
		{ &Z_Construct_UFunction_AMapMenuCamera_SwitchCameraTeam, "SwitchCameraTeam" }, // 3251726099
		{ &Z_Construct_UFunction_AMapMenuCamera_SwitchChallengeUI, "SwitchChallengeUI" }, // 384721050
		{ &Z_Construct_UFunction_AMapMenuCamera_SwitchController, "SwitchController" }, // 443897426
		{ &Z_Construct_UFunction_AMapMenuCamera_SwitchCrownsShop, "SwitchCrownsShop" }, // 1885612681
		{ &Z_Construct_UFunction_AMapMenuCamera_SwitchMainScene, "SwitchMainScene" }, // 2042623275
		{ &Z_Construct_UFunction_AMapMenuCamera_SwitchMenuWidget, "SwitchMenuWidget" }, // 1711073329
		{ &Z_Construct_UFunction_AMapMenuCamera_SwitchPathMenu, "SwitchPathMenu" }, // 193039075
		{ &Z_Construct_UFunction_AMapMenuCamera_SwitchStoreCrownsUI, "SwitchStoreCrownsUI" }, // 4188990515
		{ &Z_Construct_UFunction_AMapMenuCamera_UpdateDicePosition, "UpdateDicePosition" }, // 1066126508
		{ &Z_Construct_UFunction_AMapMenuCamera_UpdateMinionEconomy, "UpdateMinionEconomy" }, // 3992167828
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_CameraSpeed = { "CameraSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, CameraSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraSpeed_MetaData), NewProp_CameraSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_CurrentMinion = { "CurrentMinion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, CurrentMinion), Z_Construct_UClass_AMinion_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMinion_MetaData), NewProp_CurrentMinion_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_MapDb = { "MapDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, MapDb), Z_Construct_UClass_AMapDatabase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapDb_MetaData), NewProp_MapDb_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_ScoreDb = { "ScoreDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, ScoreDb), Z_Construct_UClass_AScoreDatabase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoreDb_MetaData), NewProp_ScoreDb_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_CurrentMinionPos = { "CurrentMinionPos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, CurrentMinionPos), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMinionPos_MetaData), NewProp_CurrentMinionPos_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_CurrentMinionTeam = { "CurrentMinionTeam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, CurrentMinionTeam), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMinionTeam_MetaData), NewProp_CurrentMinionTeam_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_Dice = { "Dice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, Dice), Z_Construct_UClass_ADice_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dice_MetaData), NewProp_Dice_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_ChallengeInformation = { "ChallengeInformation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, ChallengeInformation), Z_Construct_UClass_AChallengeInformation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChallengeInformation_MetaData), NewProp_ChallengeInformation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_WorldSceneManager = { "WorldSceneManager", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, WorldSceneManager), Z_Construct_UClass_AWorldManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldSceneManager_MetaData), NewProp_WorldSceneManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_AvailablePaths_Inner = { "AvailablePaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ASquareOptional_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_AvailablePaths = { "AvailablePaths", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, AvailablePaths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailablePaths_MetaData), NewProp_AvailablePaths_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_MapUI = { "MapUI", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, MapUI), Z_Construct_UClass_UPlayerMapUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapUI_MetaData), NewProp_MapUI_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_MenuWidget = { "MenuWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMenuCamera, MenuWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuWidget_MetaData), NewProp_MenuWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMapMenuCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_MenuWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_AxisxAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_KeyaAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_KeybAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_InputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_CameraSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_CurrentMinion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_MapDb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_ScoreDb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_CurrentMinionPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_CurrentMinionTeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_Dice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_ChallengeInformation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMenuCamera_Statics::NewProp_WorldSceneManager,
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
	0x009000A4u,
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
template<> PARTYJUNGLE_API UClass* StaticClass<AMapMenuCamera>()
{
	return AMapMenuCamera::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMapMenuCamera);
AMapMenuCamera::~AMapMenuCamera() {}
// End Class AMapMenuCamera

// Begin Registration
struct Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Player_Map_MapMenuCamera_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMapMenuCamera, AMapMenuCamera::StaticClass, TEXT("AMapMenuCamera"), &Z_Registration_Info_UClass_AMapMenuCamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMapMenuCamera), 39290745U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Player_Map_MapMenuCamera_h_3989634605(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Player_Map_MapMenuCamera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Player_Map_MapMenuCamera_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
