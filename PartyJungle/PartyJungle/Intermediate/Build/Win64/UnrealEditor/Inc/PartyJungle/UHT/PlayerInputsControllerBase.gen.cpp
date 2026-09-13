// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Controllers/PlayersControllers/PlayerInputsControllers/PlayerInputsControllerBase.h"
#include "PartyJungle/Controllers/PlayersControllers/ControllerAuxs/InputAxisData.h"
#include "PartyJungle/Controllers/PlayersControllers/ControllerAuxs/InputKeyData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePlayerInputsControllerBase() {}

// ********** Begin Cross Module References ********************************************************
PARTYJUNGLE_API UClass* Z_Construct_UClass_AControllerBase();
PARTYJUNGLE_API UClass* Z_Construct_UClass_APlayerInputsControllerBase();
PARTYJUNGLE_API UClass* Z_Construct_UClass_APlayerInputsControllerBase_NoRegister();
PARTYJUNGLE_API UEnum* Z_Construct_UEnum_PartyJungle_EInputKeys();
PARTYJUNGLE_API UEnum* Z_Construct_UEnum_PartyJungle_ETriggerEvents();
PARTYJUNGLE_API UFunction* Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputKey__DelegateSignature();
PARTYJUNGLE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAxisData();
PARTYJUNGLE_API UScriptStruct* Z_Construct_UScriptStruct_FInputKeyData();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APlayerInputsControllerBase Function OnAxis_LeftJoystickX ****************
struct Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_LeftJoystickX_Statics
{
	struct PlayerInputsControllerBase_eventOnAxis_LeftJoystickX_Parms
	{
		float a_Axis;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Method called when an Input Axis Event from the X Axis of the Left Joystick is received.\n\x09 * @param a_Axis Value of the received Axis.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/PlayersControllers/PlayerInputsControllers/PlayerInputsControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Method called when an Input Axis Event from the X Axis of the Left Joystick is received.\n@param a_Axis Value of the received Axis." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_a_Axis;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_LeftJoystickX_Statics::NewProp_a_Axis = { "a_Axis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInputsControllerBase_eventOnAxis_LeftJoystickX_Parms, a_Axis), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_LeftJoystickX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_LeftJoystickX_Statics::NewProp_a_Axis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_LeftJoystickX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_LeftJoystickX_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerInputsControllerBase, nullptr, "OnAxis_LeftJoystickX", Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_LeftJoystickX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_LeftJoystickX_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_LeftJoystickX_Statics::PlayerInputsControllerBase_eventOnAxis_LeftJoystickX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_LeftJoystickX_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_LeftJoystickX_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_LeftJoystickX_Statics::PlayerInputsControllerBase_eventOnAxis_LeftJoystickX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_LeftJoystickX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_LeftJoystickX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerInputsControllerBase::execOnAxis_LeftJoystickX)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_a_Axis);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAxis_LeftJoystickX(Z_Param_a_Axis);
	P_NATIVE_END;
}
// ********** End Class APlayerInputsControllerBase Function OnAxis_LeftJoystickX ******************

// ********** Begin Class APlayerInputsControllerBase Function OnAxis_LeftJoystickY ****************
struct Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_LeftJoystickY_Statics
{
	struct PlayerInputsControllerBase_eventOnAxis_LeftJoystickY_Parms
	{
		float a_Axis;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Method called when an Input Axis Event from the Y Axis of the Left Joystick is received.\n\x09 * @param a_Axis Value of the received Axis.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/PlayersControllers/PlayerInputsControllers/PlayerInputsControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Method called when an Input Axis Event from the Y Axis of the Left Joystick is received.\n@param a_Axis Value of the received Axis." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_a_Axis;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_LeftJoystickY_Statics::NewProp_a_Axis = { "a_Axis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInputsControllerBase_eventOnAxis_LeftJoystickY_Parms, a_Axis), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_LeftJoystickY_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_LeftJoystickY_Statics::NewProp_a_Axis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_LeftJoystickY_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_LeftJoystickY_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerInputsControllerBase, nullptr, "OnAxis_LeftJoystickY", Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_LeftJoystickY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_LeftJoystickY_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_LeftJoystickY_Statics::PlayerInputsControllerBase_eventOnAxis_LeftJoystickY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_LeftJoystickY_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_LeftJoystickY_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_LeftJoystickY_Statics::PlayerInputsControllerBase_eventOnAxis_LeftJoystickY_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_LeftJoystickY()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_LeftJoystickY_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerInputsControllerBase::execOnAxis_LeftJoystickY)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_a_Axis);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAxis_LeftJoystickY(Z_Param_a_Axis);
	P_NATIVE_END;
}
// ********** End Class APlayerInputsControllerBase Function OnAxis_LeftJoystickY ******************

// ********** Begin Class APlayerInputsControllerBase Function OnAxis_RightJoystickX ***************
struct Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_RightJoystickX_Statics
{
	struct PlayerInputsControllerBase_eventOnAxis_RightJoystickX_Parms
	{
		float a_Axis;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Method called when an Input Axis Event from the X Axis of the Right Joystick is received.\n\x09 * @param a_Axis Value of the received Axis.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/PlayersControllers/PlayerInputsControllers/PlayerInputsControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Method called when an Input Axis Event from the X Axis of the Right Joystick is received.\n@param a_Axis Value of the received Axis." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_a_Axis;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_RightJoystickX_Statics::NewProp_a_Axis = { "a_Axis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInputsControllerBase_eventOnAxis_RightJoystickX_Parms, a_Axis), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_RightJoystickX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_RightJoystickX_Statics::NewProp_a_Axis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_RightJoystickX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_RightJoystickX_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerInputsControllerBase, nullptr, "OnAxis_RightJoystickX", Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_RightJoystickX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_RightJoystickX_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_RightJoystickX_Statics::PlayerInputsControllerBase_eventOnAxis_RightJoystickX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_RightJoystickX_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_RightJoystickX_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_RightJoystickX_Statics::PlayerInputsControllerBase_eventOnAxis_RightJoystickX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_RightJoystickX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_RightJoystickX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerInputsControllerBase::execOnAxis_RightJoystickX)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_a_Axis);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAxis_RightJoystickX(Z_Param_a_Axis);
	P_NATIVE_END;
}
// ********** End Class APlayerInputsControllerBase Function OnAxis_RightJoystickX *****************

// ********** Begin Class APlayerInputsControllerBase Function OnAxis_RightJoystickY ***************
struct Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_RightJoystickY_Statics
{
	struct PlayerInputsControllerBase_eventOnAxis_RightJoystickY_Parms
	{
		float a_Axis;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Method called when an Input Axis Event from the Y Axis of the Right Joystick is received.\n\x09 * @param a_Axis Value of the received Axis.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/PlayersControllers/PlayerInputsControllers/PlayerInputsControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Method called when an Input Axis Event from the Y Axis of the Right Joystick is received.\n@param a_Axis Value of the received Axis." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_a_Axis;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_RightJoystickY_Statics::NewProp_a_Axis = { "a_Axis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInputsControllerBase_eventOnAxis_RightJoystickY_Parms, a_Axis), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_RightJoystickY_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_RightJoystickY_Statics::NewProp_a_Axis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_RightJoystickY_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_RightJoystickY_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerInputsControllerBase, nullptr, "OnAxis_RightJoystickY", Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_RightJoystickY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_RightJoystickY_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_RightJoystickY_Statics::PlayerInputsControllerBase_eventOnAxis_RightJoystickY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_RightJoystickY_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_RightJoystickY_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_RightJoystickY_Statics::PlayerInputsControllerBase_eventOnAxis_RightJoystickY_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_RightJoystickY()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_RightJoystickY_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerInputsControllerBase::execOnAxis_RightJoystickY)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_a_Axis);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAxis_RightJoystickY(Z_Param_a_Axis);
	P_NATIVE_END;
}
// ********** End Class APlayerInputsControllerBase Function OnAxis_RightJoystickY *****************

// ********** Begin Class APlayerInputsControllerBase Function OnKeyInput **************************
struct Z_Construct_UFunction_APlayerInputsControllerBase_OnKeyInput_Statics
{
	struct PlayerInputsControllerBase_eventOnKeyInput_Parms
	{
		EInputKeys a_InputKey;
		ETriggerEvents a_TriggerEvent;
		int32 a_PlayerId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Method called when an Input Key Event is received.\n\x09 * @param a_InputKey Input Key of the received Input Event.\n\x09 * @param a_TriggerEvent Trigger Event of the received Input Event.\n\x09 * @param a_PlayerId Id of the Player who triggered the Input Event.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/PlayersControllers/PlayerInputsControllers/PlayerInputsControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Method called when an Input Key Event is received.\n@param a_InputKey Input Key of the received Input Event.\n@param a_TriggerEvent Trigger Event of the received Input Event.\n@param a_PlayerId Id of the Player who triggered the Input Event." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_a_InputKey_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_a_InputKey;
	static const UECodeGen_Private::FBytePropertyParams NewProp_a_TriggerEvent_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_a_TriggerEvent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_PlayerId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerInputsControllerBase_OnKeyInput_Statics::NewProp_a_InputKey_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APlayerInputsControllerBase_OnKeyInput_Statics::NewProp_a_InputKey = { "a_InputKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInputsControllerBase_eventOnKeyInput_Parms, a_InputKey), Z_Construct_UEnum_PartyJungle_EInputKeys, METADATA_PARAMS(0, nullptr) }; // 3280045900
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerInputsControllerBase_OnKeyInput_Statics::NewProp_a_TriggerEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APlayerInputsControllerBase_OnKeyInput_Statics::NewProp_a_TriggerEvent = { "a_TriggerEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInputsControllerBase_eventOnKeyInput_Parms, a_TriggerEvent), Z_Construct_UEnum_PartyJungle_ETriggerEvents, METADATA_PARAMS(0, nullptr) }; // 3990706575
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerInputsControllerBase_OnKeyInput_Statics::NewProp_a_PlayerId = { "a_PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInputsControllerBase_eventOnKeyInput_Parms, a_PlayerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerInputsControllerBase_OnKeyInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerInputsControllerBase_OnKeyInput_Statics::NewProp_a_InputKey_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerInputsControllerBase_OnKeyInput_Statics::NewProp_a_InputKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerInputsControllerBase_OnKeyInput_Statics::NewProp_a_TriggerEvent_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerInputsControllerBase_OnKeyInput_Statics::NewProp_a_TriggerEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerInputsControllerBase_OnKeyInput_Statics::NewProp_a_PlayerId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerInputsControllerBase_OnKeyInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerInputsControllerBase_OnKeyInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerInputsControllerBase, nullptr, "OnKeyInput", Z_Construct_UFunction_APlayerInputsControllerBase_OnKeyInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerInputsControllerBase_OnKeyInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerInputsControllerBase_OnKeyInput_Statics::PlayerInputsControllerBase_eventOnKeyInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerInputsControllerBase_OnKeyInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerInputsControllerBase_OnKeyInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayerInputsControllerBase_OnKeyInput_Statics::PlayerInputsControllerBase_eventOnKeyInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerInputsControllerBase_OnKeyInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerInputsControllerBase_OnKeyInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerInputsControllerBase::execOnKeyInput)
{
	P_GET_ENUM(EInputKeys,Z_Param_a_InputKey);
	P_GET_ENUM(ETriggerEvents,Z_Param_a_TriggerEvent);
	P_GET_PROPERTY(FIntProperty,Z_Param_a_PlayerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnKeyInput(EInputKeys(Z_Param_a_InputKey),ETriggerEvents(Z_Param_a_TriggerEvent),Z_Param_a_PlayerId);
	P_NATIVE_END;
}
// ********** End Class APlayerInputsControllerBase Function OnKeyInput ****************************

// ********** Begin Class APlayerInputsControllerBase **********************************************
void APlayerInputsControllerBase::StaticRegisterNativesAPlayerInputsControllerBase()
{
	UClass* Class = APlayerInputsControllerBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnAxis_LeftJoystickX", &APlayerInputsControllerBase::execOnAxis_LeftJoystickX },
		{ "OnAxis_LeftJoystickY", &APlayerInputsControllerBase::execOnAxis_LeftJoystickY },
		{ "OnAxis_RightJoystickX", &APlayerInputsControllerBase::execOnAxis_RightJoystickX },
		{ "OnAxis_RightJoystickY", &APlayerInputsControllerBase::execOnAxis_RightJoystickY },
		{ "OnKeyInput", &APlayerInputsControllerBase::execOnKeyInput },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_APlayerInputsControllerBase;
UClass* APlayerInputsControllerBase::GetPrivateStaticClass()
{
	using TClass = APlayerInputsControllerBase;
	if (!Z_Registration_Info_UClass_APlayerInputsControllerBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlayerInputsControllerBase"),
			Z_Registration_Info_UClass_APlayerInputsControllerBase.InnerSingleton,
			StaticRegisterNativesAPlayerInputsControllerBase,
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
	return Z_Registration_Info_UClass_APlayerInputsControllerBase.InnerSingleton;
}
UClass* Z_Construct_UClass_APlayerInputsControllerBase_NoRegister()
{
	return APlayerInputsControllerBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APlayerInputsControllerBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Input Controller for each specific Player.\n*/" },
#endif
		{ "IncludePath", "Controllers/PlayersControllers/PlayerInputsControllers/PlayerInputsControllerBase.h" },
		{ "ModuleRelativePath", "Controllers/PlayersControllers/PlayerInputsControllers/PlayerInputsControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Controller for each specific Player." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AXIS_THRESHOLD_MetaData[] = {
		{ "ModuleRelativePath", "Controllers/PlayersControllers/PlayerInputsControllers/PlayerInputsControllerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_KeyMap_MetaData[] = {
		{ "Category", "PlayerInputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Threshold for an Axis to be considered valid.\n" },
#endif
		{ "ModuleRelativePath", "Controllers/PlayersControllers/PlayerInputsControllers/PlayerInputsControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Threshold for an Axis to be considered valid." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_KeyEvents_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< All the combinations of Input Keys and Trigger Events needed by the Player Inputs Controller in the current State.\n" },
#endif
		{ "ModuleRelativePath", "Controllers/PlayersControllers/PlayerInputsControllers/PlayerInputsControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< All the combinations of Input Keys and Trigger Events needed by the Player Inputs Controller in the current State." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_AxisEvents_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Map with all the Input Key Events active in the current state, and their Ids.\n" },
#endif
		{ "ModuleRelativePath", "Controllers/PlayersControllers/PlayerInputsControllers/PlayerInputsControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Map with all the Input Key Events active in the current state, and their Ids." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AXIS_THRESHOLD;
	static const UECodeGen_Private::FStructPropertyParams NewProp_m_KeyMap_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_m_KeyMap;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_KeyEvents_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_m_KeyEvents_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_m_KeyEvents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_m_AxisEvents_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_m_AxisEvents_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_m_AxisEvents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_LeftJoystickX, "OnAxis_LeftJoystickX" }, // 506750953
		{ &Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_LeftJoystickY, "OnAxis_LeftJoystickY" }, // 3994165330
		{ &Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_RightJoystickX, "OnAxis_RightJoystickX" }, // 2190794189
		{ &Z_Construct_UFunction_APlayerInputsControllerBase_OnAxis_RightJoystickY, "OnAxis_RightJoystickY" }, // 2778637942
		{ &Z_Construct_UFunction_APlayerInputsControllerBase_OnKeyInput, "OnKeyInput" }, // 784379401
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerInputsControllerBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerInputsControllerBase_Statics::NewProp_AXIS_THRESHOLD = { "AXIS_THRESHOLD", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerInputsControllerBase, AXIS_THRESHOLD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AXIS_THRESHOLD_MetaData), NewProp_AXIS_THRESHOLD_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerInputsControllerBase_Statics::NewProp_m_KeyMap_Inner = { "m_KeyMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputKeyData, METADATA_PARAMS(0, nullptr) }; // 2910492042
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayerInputsControllerBase_Statics::NewProp_m_KeyMap = { "m_KeyMap", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerInputsControllerBase, m_KeyMap), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_KeyMap_MetaData), NewProp_m_KeyMap_MetaData) }; // 2910492042
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APlayerInputsControllerBase_Statics::NewProp_m_KeyEvents_ValueProp = { "m_KeyEvents", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputKey__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1455493997
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_APlayerInputsControllerBase_Statics::NewProp_m_KeyEvents_Key_KeyProp = { "m_KeyEvents_Key", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_APlayerInputsControllerBase_Statics::NewProp_m_KeyEvents = { "m_KeyEvents", nullptr, (EPropertyFlags)0x0020088000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerInputsControllerBase, m_KeyEvents), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_KeyEvents_MetaData), NewProp_m_KeyEvents_MetaData) }; // 1455493997
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerInputsControllerBase_Statics::NewProp_m_AxisEvents_ValueProp = { "m_AxisEvents", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FInputAxisData, METADATA_PARAMS(0, nullptr) }; // 1515854337
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlayerInputsControllerBase_Statics::NewProp_m_AxisEvents_Key_KeyProp = { "m_AxisEvents_Key", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_APlayerInputsControllerBase_Statics::NewProp_m_AxisEvents = { "m_AxisEvents", nullptr, (EPropertyFlags)0x0020088000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerInputsControllerBase, m_AxisEvents), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_AxisEvents_MetaData), NewProp_m_AxisEvents_MetaData) }; // 1515854337
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerInputsControllerBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerInputsControllerBase_Statics::NewProp_AXIS_THRESHOLD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerInputsControllerBase_Statics::NewProp_m_KeyMap_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerInputsControllerBase_Statics::NewProp_m_KeyMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerInputsControllerBase_Statics::NewProp_m_KeyEvents_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerInputsControllerBase_Statics::NewProp_m_KeyEvents_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerInputsControllerBase_Statics::NewProp_m_KeyEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerInputsControllerBase_Statics::NewProp_m_AxisEvents_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerInputsControllerBase_Statics::NewProp_m_AxisEvents_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerInputsControllerBase_Statics::NewProp_m_AxisEvents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerInputsControllerBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlayerInputsControllerBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AControllerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerInputsControllerBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerInputsControllerBase_Statics::ClassParams = {
	&APlayerInputsControllerBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APlayerInputsControllerBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayerInputsControllerBase_Statics::PropPointers),
	0,
	0x008001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerInputsControllerBase_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerInputsControllerBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerInputsControllerBase()
{
	if (!Z_Registration_Info_UClass_APlayerInputsControllerBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerInputsControllerBase.OuterSingleton, Z_Construct_UClass_APlayerInputsControllerBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerInputsControllerBase.OuterSingleton;
}
APlayerInputsControllerBase::APlayerInputsControllerBase() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerInputsControllerBase);
APlayerInputsControllerBase::~APlayerInputsControllerBase() {}
// ********** End Class APlayerInputsControllerBase ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_PlayerInputsControllers_PlayerInputsControllerBase_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerInputsControllerBase, APlayerInputsControllerBase::StaticClass, TEXT("APlayerInputsControllerBase"), &Z_Registration_Info_UClass_APlayerInputsControllerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerInputsControllerBase), 409413722U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_PlayerInputsControllers_PlayerInputsControllerBase_h__Script_PartyJungle_471055329(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_PlayerInputsControllers_PlayerInputsControllerBase_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_PlayerInputsControllers_PlayerInputsControllerBase_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
