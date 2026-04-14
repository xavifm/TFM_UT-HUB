// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Controllers/GameLoopControllers/Testing_GameLoopController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTesting_GameLoopController() {}

// ********** Begin Cross Module References ********************************************************
PARTYJUNGLE_API UClass* Z_Construct_UClass_AGameLoopControllerBase();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ATesting_GameLoopController();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ATesting_GameLoopController_NoRegister();
PARTYJUNGLE_API UEnum* Z_Construct_UEnum_PartyJungle_EInputKeys();
PARTYJUNGLE_API UEnum* Z_Construct_UEnum_PartyJungle_ETriggerEvents();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATesting_GameLoopController Function OnTrigger1_Left *********************
struct Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Left_Statics
{
	struct Testing_GameLoopController_eventOnTrigger1_Left_Parms
	{
		EInputKeys a_InputKey;
		ETriggerEvents a_InputEvent;
		int32 a_PlayerId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Method called when the left Trigger 1 is actioned. Testing function to force the CameraMode to change from Focused to FullView and reverse.\n\x09 * @param a_InputKey Id of the pressed Input Key.\n\x09 * @param a_InputEvent Id of the actioned Trigger Event.\n\x09 * @param a_PlayerId Id of the Player that activated the Input Event.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/GameLoopControllers/Testing_GameLoopController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Method called when the left Trigger 1 is actioned. Testing function to force the CameraMode to change from Focused to FullView and reverse.\n@param a_InputKey Id of the pressed Input Key.\n@param a_InputEvent Id of the actioned Trigger Event.\n@param a_PlayerId Id of the Player that activated the Input Event." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_a_InputKey_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_a_InputKey;
	static const UECodeGen_Private::FBytePropertyParams NewProp_a_InputEvent_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_a_InputEvent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_PlayerId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Left_Statics::NewProp_a_InputKey_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Left_Statics::NewProp_a_InputKey = { "a_InputKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Testing_GameLoopController_eventOnTrigger1_Left_Parms, a_InputKey), Z_Construct_UEnum_PartyJungle_EInputKeys, METADATA_PARAMS(0, nullptr) }; // 3280045900
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Left_Statics::NewProp_a_InputEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Left_Statics::NewProp_a_InputEvent = { "a_InputEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Testing_GameLoopController_eventOnTrigger1_Left_Parms, a_InputEvent), Z_Construct_UEnum_PartyJungle_ETriggerEvents, METADATA_PARAMS(0, nullptr) }; // 3990706575
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Left_Statics::NewProp_a_PlayerId = { "a_PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Testing_GameLoopController_eventOnTrigger1_Left_Parms, a_PlayerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Left_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Left_Statics::NewProp_a_InputKey_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Left_Statics::NewProp_a_InputKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Left_Statics::NewProp_a_InputEvent_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Left_Statics::NewProp_a_InputEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Left_Statics::NewProp_a_PlayerId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Left_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Left_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATesting_GameLoopController, nullptr, "OnTrigger1_Left", Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Left_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Left_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Left_Statics::Testing_GameLoopController_eventOnTrigger1_Left_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Left_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Left_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Left_Statics::Testing_GameLoopController_eventOnTrigger1_Left_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Left()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Left_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATesting_GameLoopController::execOnTrigger1_Left)
{
	P_GET_ENUM(EInputKeys,Z_Param_a_InputKey);
	P_GET_ENUM(ETriggerEvents,Z_Param_a_InputEvent);
	P_GET_PROPERTY(FIntProperty,Z_Param_a_PlayerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTrigger1_Left(EInputKeys(Z_Param_a_InputKey),ETriggerEvents(Z_Param_a_InputEvent),Z_Param_a_PlayerId);
	P_NATIVE_END;
}
// ********** End Class ATesting_GameLoopController Function OnTrigger1_Left ***********************

// ********** Begin Class ATesting_GameLoopController Function OnTrigger1_Right ********************
struct Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Right_Statics
{
	struct Testing_GameLoopController_eventOnTrigger1_Right_Parms
	{
		EInputKeys a_InputKey;
		ETriggerEvents a_TriggerEvent;
		int32 a_PlayerId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Method called when the right Trigger 1 is actioned. Testing function to force the current Player to change.\n\x09 * @param a_InputKey Id of the pressed Input Key.\n\x09 * @param a_TriggerEvent Id of the actioned Trigger Event.\n\x09 * @param a_PlayerId Id of the Player that activated the Input Event.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/GameLoopControllers/Testing_GameLoopController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Method called when the right Trigger 1 is actioned. Testing function to force the current Player to change.\n@param a_InputKey Id of the pressed Input Key.\n@param a_TriggerEvent Id of the actioned Trigger Event.\n@param a_PlayerId Id of the Player that activated the Input Event." },
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Right_Statics::NewProp_a_InputKey_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Right_Statics::NewProp_a_InputKey = { "a_InputKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Testing_GameLoopController_eventOnTrigger1_Right_Parms, a_InputKey), Z_Construct_UEnum_PartyJungle_EInputKeys, METADATA_PARAMS(0, nullptr) }; // 3280045900
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Right_Statics::NewProp_a_TriggerEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Right_Statics::NewProp_a_TriggerEvent = { "a_TriggerEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Testing_GameLoopController_eventOnTrigger1_Right_Parms, a_TriggerEvent), Z_Construct_UEnum_PartyJungle_ETriggerEvents, METADATA_PARAMS(0, nullptr) }; // 3990706575
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Right_Statics::NewProp_a_PlayerId = { "a_PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Testing_GameLoopController_eventOnTrigger1_Right_Parms, a_PlayerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Right_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Right_Statics::NewProp_a_InputKey_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Right_Statics::NewProp_a_InputKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Right_Statics::NewProp_a_TriggerEvent_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Right_Statics::NewProp_a_TriggerEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Right_Statics::NewProp_a_PlayerId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Right_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Right_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATesting_GameLoopController, nullptr, "OnTrigger1_Right", Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Right_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Right_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Right_Statics::Testing_GameLoopController_eventOnTrigger1_Right_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Right_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Right_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Right_Statics::Testing_GameLoopController_eventOnTrigger1_Right_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Right()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Right_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATesting_GameLoopController::execOnTrigger1_Right)
{
	P_GET_ENUM(EInputKeys,Z_Param_a_InputKey);
	P_GET_ENUM(ETriggerEvents,Z_Param_a_TriggerEvent);
	P_GET_PROPERTY(FIntProperty,Z_Param_a_PlayerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTrigger1_Right(EInputKeys(Z_Param_a_InputKey),ETriggerEvents(Z_Param_a_TriggerEvent),Z_Param_a_PlayerId);
	P_NATIVE_END;
}
// ********** End Class ATesting_GameLoopController Function OnTrigger1_Right **********************

// ********** Begin Class ATesting_GameLoopController Function OnTrigger2_Right ********************
struct Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger2_Right_Statics
{
	struct Testing_GameLoopController_eventOnTrigger2_Right_Parms
	{
		EInputKeys a_InputKey;
		ETriggerEvents a_InputEvent;
		int32 a_PlayerId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Method called when the right Trigger 2 is actioned. Testing function to force the AirCannon Minigame to Start.\n\x09 * @param a_InputKey Id of the pressed Input Key.\n\x09 * @param a_InputEvent Id of the actioned Trigger Event.\n\x09 * @param a_PlayerId Id of the Player that activated the Input Event.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/GameLoopControllers/Testing_GameLoopController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Method called when the right Trigger 2 is actioned. Testing function to force the AirCannon Minigame to Start.\n@param a_InputKey Id of the pressed Input Key.\n@param a_InputEvent Id of the actioned Trigger Event.\n@param a_PlayerId Id of the Player that activated the Input Event." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_a_InputKey_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_a_InputKey;
	static const UECodeGen_Private::FBytePropertyParams NewProp_a_InputEvent_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_a_InputEvent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_PlayerId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger2_Right_Statics::NewProp_a_InputKey_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger2_Right_Statics::NewProp_a_InputKey = { "a_InputKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Testing_GameLoopController_eventOnTrigger2_Right_Parms, a_InputKey), Z_Construct_UEnum_PartyJungle_EInputKeys, METADATA_PARAMS(0, nullptr) }; // 3280045900
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger2_Right_Statics::NewProp_a_InputEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger2_Right_Statics::NewProp_a_InputEvent = { "a_InputEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Testing_GameLoopController_eventOnTrigger2_Right_Parms, a_InputEvent), Z_Construct_UEnum_PartyJungle_ETriggerEvents, METADATA_PARAMS(0, nullptr) }; // 3990706575
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger2_Right_Statics::NewProp_a_PlayerId = { "a_PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Testing_GameLoopController_eventOnTrigger2_Right_Parms, a_PlayerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger2_Right_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger2_Right_Statics::NewProp_a_InputKey_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger2_Right_Statics::NewProp_a_InputKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger2_Right_Statics::NewProp_a_InputEvent_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger2_Right_Statics::NewProp_a_InputEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger2_Right_Statics::NewProp_a_PlayerId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger2_Right_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger2_Right_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATesting_GameLoopController, nullptr, "OnTrigger2_Right", Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger2_Right_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger2_Right_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger2_Right_Statics::Testing_GameLoopController_eventOnTrigger2_Right_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger2_Right_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger2_Right_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger2_Right_Statics::Testing_GameLoopController_eventOnTrigger2_Right_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger2_Right()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger2_Right_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATesting_GameLoopController::execOnTrigger2_Right)
{
	P_GET_ENUM(EInputKeys,Z_Param_a_InputKey);
	P_GET_ENUM(ETriggerEvents,Z_Param_a_InputEvent);
	P_GET_PROPERTY(FIntProperty,Z_Param_a_PlayerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTrigger2_Right(EInputKeys(Z_Param_a_InputKey),ETriggerEvents(Z_Param_a_InputEvent),Z_Param_a_PlayerId);
	P_NATIVE_END;
}
// ********** End Class ATesting_GameLoopController Function OnTrigger2_Right **********************

// ********** Begin Class ATesting_GameLoopController **********************************************
void ATesting_GameLoopController::StaticRegisterNativesATesting_GameLoopController()
{
	UClass* Class = ATesting_GameLoopController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnTrigger1_Left", &ATesting_GameLoopController::execOnTrigger1_Left },
		{ "OnTrigger1_Right", &ATesting_GameLoopController::execOnTrigger1_Right },
		{ "OnTrigger2_Right", &ATesting_GameLoopController::execOnTrigger2_Right },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATesting_GameLoopController;
UClass* ATesting_GameLoopController::GetPrivateStaticClass()
{
	using TClass = ATesting_GameLoopController;
	if (!Z_Registration_Info_UClass_ATesting_GameLoopController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Testing_GameLoopController"),
			Z_Registration_Info_UClass_ATesting_GameLoopController.InnerSingleton,
			StaticRegisterNativesATesting_GameLoopController,
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
	return Z_Registration_Info_UClass_ATesting_GameLoopController.InnerSingleton;
}
UClass* Z_Construct_UClass_ATesting_GameLoopController_NoRegister()
{
	return ATesting_GameLoopController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATesting_GameLoopController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Controller for the 'Testing' GameLoop. Used only for testing features in progress.\n */" },
#endif
		{ "IncludePath", "Controllers/GameLoopControllers/Testing_GameLoopController.h" },
		{ "ModuleRelativePath", "Controllers/GameLoopControllers/Testing_GameLoopController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controller for the 'Testing' GameLoop. Used only for testing features in progress." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Left, "OnTrigger1_Left" }, // 1773161410
		{ &Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger1_Right, "OnTrigger1_Right" }, // 504481276
		{ &Z_Construct_UFunction_ATesting_GameLoopController_OnTrigger2_Right, "OnTrigger2_Right" }, // 4195278682
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATesting_GameLoopController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATesting_GameLoopController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameLoopControllerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATesting_GameLoopController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATesting_GameLoopController_Statics::ClassParams = {
	&ATesting_GameLoopController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x008001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATesting_GameLoopController_Statics::Class_MetaDataParams), Z_Construct_UClass_ATesting_GameLoopController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATesting_GameLoopController()
{
	if (!Z_Registration_Info_UClass_ATesting_GameLoopController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATesting_GameLoopController.OuterSingleton, Z_Construct_UClass_ATesting_GameLoopController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATesting_GameLoopController.OuterSingleton;
}
ATesting_GameLoopController::ATesting_GameLoopController() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATesting_GameLoopController);
ATesting_GameLoopController::~ATesting_GameLoopController() {}
// ********** End Class ATesting_GameLoopController ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_Testing_GameLoopController_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATesting_GameLoopController, ATesting_GameLoopController::StaticClass, TEXT("ATesting_GameLoopController"), &Z_Registration_Info_UClass_ATesting_GameLoopController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATesting_GameLoopController), 627941581U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_Testing_GameLoopController_h__Script_PartyJungle_733570980(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_Testing_GameLoopController_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_Testing_GameLoopController_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
