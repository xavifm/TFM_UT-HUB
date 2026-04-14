// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Minigame/Minigame1/AirCannon.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAirCannon() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AAirCannon();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AAirCannon_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AAudioManager_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AGameLoopControllerBase_NoRegister();
PARTYJUNGLE_API UEnum* Z_Construct_UEnum_PartyJungle_EInputKeys();
PARTYJUNGLE_API UEnum* Z_Construct_UEnum_PartyJungle_ETriggerEvents();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAirCannon Function CalculateCurrentPushStrength *************************
struct Z_Construct_UFunction_AAirCannon_CalculateCurrentPushStrength_Statics
{
	struct AirCannon_eventCalculateCurrentPushStrength_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Calculates the current shoot strength of the Air Cannon.\n     * @return Current shoot strength.\n     */" },
#endif
		{ "ModuleRelativePath", "Minigame/Minigame1/AirCannon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calculates the current shoot strength of the Air Cannon.\n@return Current shoot strength." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAirCannon_CalculateCurrentPushStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirCannon_eventCalculateCurrentPushStrength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAirCannon_CalculateCurrentPushStrength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAirCannon_CalculateCurrentPushStrength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAirCannon_CalculateCurrentPushStrength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAirCannon_CalculateCurrentPushStrength_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAirCannon, nullptr, "CalculateCurrentPushStrength", Z_Construct_UFunction_AAirCannon_CalculateCurrentPushStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAirCannon_CalculateCurrentPushStrength_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAirCannon_CalculateCurrentPushStrength_Statics::AirCannon_eventCalculateCurrentPushStrength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAirCannon_CalculateCurrentPushStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAirCannon_CalculateCurrentPushStrength_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAirCannon_CalculateCurrentPushStrength_Statics::AirCannon_eventCalculateCurrentPushStrength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAirCannon_CalculateCurrentPushStrength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAirCannon_CalculateCurrentPushStrength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAirCannon::execCalculateCurrentPushStrength)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->CalculateCurrentPushStrength();
	P_NATIVE_END;
}
// ********** End Class AAirCannon Function CalculateCurrentPushStrength ***************************

// ********** Begin Class AAirCannon Function FinishCannonCharge ***********************************
struct Z_Construct_UFunction_AAirCannon_FinishCannonCharge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Finishes the Air Cannon charge.\n     */" },
#endif
		{ "ModuleRelativePath", "Minigame/Minigame1/AirCannon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finishes the Air Cannon charge." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAirCannon_FinishCannonCharge_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAirCannon, nullptr, "FinishCannonCharge", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAirCannon_FinishCannonCharge_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAirCannon_FinishCannonCharge_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AAirCannon_FinishCannonCharge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAirCannon_FinishCannonCharge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAirCannon::execFinishCannonCharge)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishCannonCharge();
	P_NATIVE_END;
}
// ********** End Class AAirCannon Function FinishCannonCharge *************************************

// ********** Begin Class AAirCannon Function IncrementUpForce *************************************
struct Z_Construct_UFunction_AAirCannon_IncrementUpForce_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Increments the shoot force of the Air Cannon.\n     */" },
#endif
		{ "ModuleRelativePath", "Minigame/Minigame1/AirCannon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Increments the shoot force of the Air Cannon." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAirCannon_IncrementUpForce_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAirCannon, nullptr, "IncrementUpForce", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAirCannon_IncrementUpForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAirCannon_IncrementUpForce_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AAirCannon_IncrementUpForce()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAirCannon_IncrementUpForce_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAirCannon::execIncrementUpForce)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncrementUpForce();
	P_NATIVE_END;
}
// ********** End Class AAirCannon Function IncrementUpForce ***************************************

// ********** Begin Class AAirCannon Function OnButtonRight_Pressed ********************************
struct Z_Construct_UFunction_AAirCannon_OnButtonRight_Pressed_Statics
{
	struct AirCannon_eventOnButtonRight_Pressed_Parms
	{
		EInputKeys a_InputKey;
		ETriggerEvents a_InputEvent;
		int32 a_PlayerId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Method triggered when the right button is pressed. It increases the shooting force of the Air Cannon.\n     * @param a_InputKey Id of the pressed Input Key.\n     * @param a_InputEvent Id of the actioned Trigger Event.\n     * @param a_PlayerId Id of the Player that activated the Input Event.\n     */" },
#endif
		{ "ModuleRelativePath", "Minigame/Minigame1/AirCannon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Method triggered when the right button is pressed. It increases the shooting force of the Air Cannon.\n@param a_InputKey Id of the pressed Input Key.\n@param a_InputEvent Id of the actioned Trigger Event.\n@param a_PlayerId Id of the Player that activated the Input Event." },
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAirCannon_OnButtonRight_Pressed_Statics::NewProp_a_InputKey_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAirCannon_OnButtonRight_Pressed_Statics::NewProp_a_InputKey = { "a_InputKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirCannon_eventOnButtonRight_Pressed_Parms, a_InputKey), Z_Construct_UEnum_PartyJungle_EInputKeys, METADATA_PARAMS(0, nullptr) }; // 3280045900
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAirCannon_OnButtonRight_Pressed_Statics::NewProp_a_InputEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAirCannon_OnButtonRight_Pressed_Statics::NewProp_a_InputEvent = { "a_InputEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirCannon_eventOnButtonRight_Pressed_Parms, a_InputEvent), Z_Construct_UEnum_PartyJungle_ETriggerEvents, METADATA_PARAMS(0, nullptr) }; // 3990706575
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAirCannon_OnButtonRight_Pressed_Statics::NewProp_a_PlayerId = { "a_PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirCannon_eventOnButtonRight_Pressed_Parms, a_PlayerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAirCannon_OnButtonRight_Pressed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAirCannon_OnButtonRight_Pressed_Statics::NewProp_a_InputKey_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAirCannon_OnButtonRight_Pressed_Statics::NewProp_a_InputKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAirCannon_OnButtonRight_Pressed_Statics::NewProp_a_InputEvent_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAirCannon_OnButtonRight_Pressed_Statics::NewProp_a_InputEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAirCannon_OnButtonRight_Pressed_Statics::NewProp_a_PlayerId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAirCannon_OnButtonRight_Pressed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAirCannon_OnButtonRight_Pressed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAirCannon, nullptr, "OnButtonRight_Pressed", Z_Construct_UFunction_AAirCannon_OnButtonRight_Pressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAirCannon_OnButtonRight_Pressed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAirCannon_OnButtonRight_Pressed_Statics::AirCannon_eventOnButtonRight_Pressed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAirCannon_OnButtonRight_Pressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAirCannon_OnButtonRight_Pressed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAirCannon_OnButtonRight_Pressed_Statics::AirCannon_eventOnButtonRight_Pressed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAirCannon_OnButtonRight_Pressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAirCannon_OnButtonRight_Pressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAirCannon::execOnButtonRight_Pressed)
{
	P_GET_ENUM(EInputKeys,Z_Param_a_InputKey);
	P_GET_ENUM(ETriggerEvents,Z_Param_a_InputEvent);
	P_GET_PROPERTY(FIntProperty,Z_Param_a_PlayerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnButtonRight_Pressed(EInputKeys(Z_Param_a_InputKey),ETriggerEvents(Z_Param_a_InputEvent),Z_Param_a_PlayerId);
	P_NATIVE_END;
}
// ********** End Class AAirCannon Function OnButtonRight_Pressed **********************************

// ********** Begin Class AAirCannon Function ResetAirCannon ***************************************
struct Z_Construct_UFunction_AAirCannon_ResetAirCannon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Resets the Air Cannon.\n     */" },
#endif
		{ "ModuleRelativePath", "Minigame/Minigame1/AirCannon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resets the Air Cannon." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAirCannon_ResetAirCannon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAirCannon, nullptr, "ResetAirCannon", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAirCannon_ResetAirCannon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAirCannon_ResetAirCannon_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AAirCannon_ResetAirCannon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAirCannon_ResetAirCannon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAirCannon::execResetAirCannon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetAirCannon();
	P_NATIVE_END;
}
// ********** End Class AAirCannon Function ResetAirCannon *****************************************

// ********** Begin Class AAirCannon Function SetTickleStrengthCannon ******************************
struct AirCannon_eventSetTickleStrengthCannon_Parms
{
	float a_Force;
};
static FName NAME_AAirCannon_SetTickleStrengthCannon = FName(TEXT("SetTickleStrengthCannon"));
void AAirCannon::SetTickleStrengthCannon(float a_Force)
{
	AirCannon_eventSetTickleStrengthCannon_Parms Parms;
	Parms.a_Force=a_Force;
	UFunction* Func = FindFunctionChecked(NAME_AAirCannon_SetTickleStrengthCannon);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AAirCannon_SetTickleStrengthCannon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Sets the tickle strength for the Air Cannon.\n     * @param a_Force Selected tickle strength for the Air Cannon.\n     */" },
#endif
		{ "ModuleRelativePath", "Minigame/Minigame1/AirCannon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the tickle strength for the Air Cannon.\n@param a_Force Selected tickle strength for the Air Cannon." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_a_Force;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAirCannon_SetTickleStrengthCannon_Statics::NewProp_a_Force = { "a_Force", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirCannon_eventSetTickleStrengthCannon_Parms, a_Force), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAirCannon_SetTickleStrengthCannon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAirCannon_SetTickleStrengthCannon_Statics::NewProp_a_Force,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAirCannon_SetTickleStrengthCannon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAirCannon_SetTickleStrengthCannon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAirCannon, nullptr, "SetTickleStrengthCannon", Z_Construct_UFunction_AAirCannon_SetTickleStrengthCannon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAirCannon_SetTickleStrengthCannon_Statics::PropPointers), sizeof(AirCannon_eventSetTickleStrengthCannon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAirCannon_SetTickleStrengthCannon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAirCannon_SetTickleStrengthCannon_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AirCannon_eventSetTickleStrengthCannon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAirCannon_SetTickleStrengthCannon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAirCannon_SetTickleStrengthCannon_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AAirCannon Function SetTickleStrengthCannon ********************************

// ********** Begin Class AAirCannon Function ShootCannon ******************************************
struct Z_Construct_UFunction_AAirCannon_ShootCannon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Shoots the Air Cannon.\n     */" },
#endif
		{ "ModuleRelativePath", "Minigame/Minigame1/AirCannon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shoots the Air Cannon." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAirCannon_ShootCannon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAirCannon, nullptr, "ShootCannon", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAirCannon_ShootCannon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAirCannon_ShootCannon_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AAirCannon_ShootCannon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAirCannon_ShootCannon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAirCannon::execShootCannon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShootCannon();
	P_NATIVE_END;
}
// ********** End Class AAirCannon Function ShootCannon ********************************************

// ********** Begin Class AAirCannon Function StartCannonCharge ************************************
struct Z_Construct_UFunction_AAirCannon_StartCannonCharge_Statics
{
	struct AirCannon_eventStartCannonCharge_Parms
	{
		float a_Time;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Starts the Air Cannon charge.\n     * @param a_Time Time needed for the Air Cannon to charge.\n     */" },
#endif
		{ "ModuleRelativePath", "Minigame/Minigame1/AirCannon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Starts the Air Cannon charge.\n@param a_Time Time needed for the Air Cannon to charge." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_a_Time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAirCannon_StartCannonCharge_Statics::NewProp_a_Time = { "a_Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirCannon_eventStartCannonCharge_Parms, a_Time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAirCannon_StartCannonCharge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAirCannon_StartCannonCharge_Statics::NewProp_a_Time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAirCannon_StartCannonCharge_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAirCannon_StartCannonCharge_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAirCannon, nullptr, "StartCannonCharge", Z_Construct_UFunction_AAirCannon_StartCannonCharge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAirCannon_StartCannonCharge_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAirCannon_StartCannonCharge_Statics::AirCannon_eventStartCannonCharge_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAirCannon_StartCannonCharge_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAirCannon_StartCannonCharge_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAirCannon_StartCannonCharge_Statics::AirCannon_eventStartCannonCharge_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAirCannon_StartCannonCharge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAirCannon_StartCannonCharge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAirCannon::execStartCannonCharge)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_a_Time);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartCannonCharge(Z_Param_a_Time);
	P_NATIVE_END;
}
// ********** End Class AAirCannon Function StartCannonCharge **************************************

// ********** Begin Class AAirCannon ***************************************************************
void AAirCannon::StaticRegisterNativesAAirCannon()
{
	UClass* Class = AAirCannon::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalculateCurrentPushStrength", &AAirCannon::execCalculateCurrentPushStrength },
		{ "FinishCannonCharge", &AAirCannon::execFinishCannonCharge },
		{ "IncrementUpForce", &AAirCannon::execIncrementUpForce },
		{ "OnButtonRight_Pressed", &AAirCannon::execOnButtonRight_Pressed },
		{ "ResetAirCannon", &AAirCannon::execResetAirCannon },
		{ "ShootCannon", &AAirCannon::execShootCannon },
		{ "StartCannonCharge", &AAirCannon::execStartCannonCharge },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAirCannon;
UClass* AAirCannon::GetPrivateStaticClass()
{
	using TClass = AAirCannon;
	if (!Z_Registration_Info_UClass_AAirCannon.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AirCannon"),
			Z_Registration_Info_UClass_AAirCannon.InnerSingleton,
			StaticRegisterNativesAAirCannon,
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
	return Z_Registration_Info_UClass_AAirCannon.InnerSingleton;
}
UClass* Z_Construct_UClass_AAirCannon_NoRegister()
{
	return AAirCannon::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAirCannon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Actor used to control the Air Cannons for the 'AirCannon' Minigame.\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Minigame/Minigame1/AirCannon.h" },
		{ "ModuleRelativePath", "Minigame/Minigame1/AirCannon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor used to control the Air Cannons for the 'AirCannon' Minigame." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_TeamId_MetaData[] = {
		{ "ModuleRelativePath", "Minigame/Minigame1/AirCannon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_GameLoopCtr_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Air Cannon's Team Id.\n" },
#endif
		{ "ModuleRelativePath", "Minigame/Minigame1/AirCannon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Air Cannon's Team Id." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_AudioManager_MetaData[] = {
		{ "Category", "AirCannon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Pointer to the Air Cannon's GameLoop Controller.\n" },
#endif
		{ "ModuleRelativePath", "Minigame/Minigame1/AirCannon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Pointer to the Air Cannon's GameLoop Controller." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_PlayerController_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Pointer to the AudioManager.\n" },
#endif
		{ "ModuleRelativePath", "Minigame/Minigame1/AirCannon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Pointer to the AudioManager." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_ProjectileReference_MetaData[] = {
		{ "Category", "AirCannon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Pointer to the PlayerController.\n" },
#endif
		{ "ModuleRelativePath", "Minigame/Minigame1/AirCannon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Pointer to the PlayerController." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_ProjectilePhysics_MetaData[] = {
		{ "Category", "AirCannon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Pointer to the projectile to shoot.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Minigame/Minigame1/AirCannon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Pointer to the projectile to shoot." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_CannonFinished_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Pointer to the Projectile Physics component.\n" },
#endif
		{ "ModuleRelativePath", "Minigame/Minigame1/AirCannon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Pointer to the Projectile Physics component." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_CannonCharging_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Indicates if the Cannon has finished.\n" },
#endif
		{ "ModuleRelativePath", "Minigame/Minigame1/AirCannon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Indicates if the Cannon has finished." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_UpForce_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Indicates if the Cannon is charging.\n" },
#endif
		{ "ModuleRelativePath", "Minigame/Minigame1/AirCannon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Indicates if the Cannon is charging." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_RamrodPressed_MetaData[] = {
		{ "Category", "AirCannon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Shooting force of the Cannon.\n" },
#endif
		{ "ModuleRelativePath", "Minigame/Minigame1/AirCannon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Shooting force of the Cannon." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_IsCannonCharging_MetaData[] = {
		{ "Category", "AirCannon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Indicates if the Ramrod is pressed.\n" },
#endif
		{ "ModuleRelativePath", "Minigame/Minigame1/AirCannon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Indicates if the Ramrod is pressed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_PushTimestamps_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Timer used for the Air Cannon delays.\n" },
#endif
		{ "ModuleRelativePath", "Minigame/Minigame1/AirCannon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Timer used for the Air Cannon delays." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_m_TeamId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_GameLoopCtr;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_AudioManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_ProjectileReference;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_ProjectilePhysics;
	static void NewProp_m_CannonFinished_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_m_CannonFinished;
	static void NewProp_m_CannonCharging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_m_CannonCharging;
	static const UECodeGen_Private::FIntPropertyParams NewProp_m_UpForce;
	static void NewProp_m_RamrodPressed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_m_RamrodPressed;
	static void NewProp_m_IsCannonCharging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_m_IsCannonCharging;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_m_PushTimestamps_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_m_PushTimestamps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAirCannon_CalculateCurrentPushStrength, "CalculateCurrentPushStrength" }, // 3653250409
		{ &Z_Construct_UFunction_AAirCannon_FinishCannonCharge, "FinishCannonCharge" }, // 2215428366
		{ &Z_Construct_UFunction_AAirCannon_IncrementUpForce, "IncrementUpForce" }, // 1995631558
		{ &Z_Construct_UFunction_AAirCannon_OnButtonRight_Pressed, "OnButtonRight_Pressed" }, // 3153282196
		{ &Z_Construct_UFunction_AAirCannon_ResetAirCannon, "ResetAirCannon" }, // 309245454
		{ &Z_Construct_UFunction_AAirCannon_SetTickleStrengthCannon, "SetTickleStrengthCannon" }, // 2202925133
		{ &Z_Construct_UFunction_AAirCannon_ShootCannon, "ShootCannon" }, // 4055506900
		{ &Z_Construct_UFunction_AAirCannon_StartCannonCharge, "StartCannonCharge" }, // 2514550190
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAirCannon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAirCannon_Statics::NewProp_m_TeamId = { "m_TeamId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAirCannon, m_TeamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_TeamId_MetaData), NewProp_m_TeamId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAirCannon_Statics::NewProp_m_GameLoopCtr = { "m_GameLoopCtr", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAirCannon, m_GameLoopCtr), Z_Construct_UClass_AGameLoopControllerBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_GameLoopCtr_MetaData), NewProp_m_GameLoopCtr_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAirCannon_Statics::NewProp_m_AudioManager = { "m_AudioManager", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAirCannon, m_AudioManager), Z_Construct_UClass_AAudioManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_AudioManager_MetaData), NewProp_m_AudioManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAirCannon_Statics::NewProp_m_PlayerController = { "m_PlayerController", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAirCannon, m_PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_PlayerController_MetaData), NewProp_m_PlayerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAirCannon_Statics::NewProp_m_ProjectileReference = { "m_ProjectileReference", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAirCannon, m_ProjectileReference), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_ProjectileReference_MetaData), NewProp_m_ProjectileReference_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAirCannon_Statics::NewProp_m_ProjectilePhysics = { "m_ProjectilePhysics", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAirCannon, m_ProjectilePhysics), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_ProjectilePhysics_MetaData), NewProp_m_ProjectilePhysics_MetaData) };
void Z_Construct_UClass_AAirCannon_Statics::NewProp_m_CannonFinished_SetBit(void* Obj)
{
	((AAirCannon*)Obj)->m_CannonFinished = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAirCannon_Statics::NewProp_m_CannonFinished = { "m_CannonFinished", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAirCannon), &Z_Construct_UClass_AAirCannon_Statics::NewProp_m_CannonFinished_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_CannonFinished_MetaData), NewProp_m_CannonFinished_MetaData) };
void Z_Construct_UClass_AAirCannon_Statics::NewProp_m_CannonCharging_SetBit(void* Obj)
{
	((AAirCannon*)Obj)->m_CannonCharging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAirCannon_Statics::NewProp_m_CannonCharging = { "m_CannonCharging", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAirCannon), &Z_Construct_UClass_AAirCannon_Statics::NewProp_m_CannonCharging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_CannonCharging_MetaData), NewProp_m_CannonCharging_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAirCannon_Statics::NewProp_m_UpForce = { "m_UpForce", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAirCannon, m_UpForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_UpForce_MetaData), NewProp_m_UpForce_MetaData) };
void Z_Construct_UClass_AAirCannon_Statics::NewProp_m_RamrodPressed_SetBit(void* Obj)
{
	((AAirCannon*)Obj)->m_RamrodPressed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAirCannon_Statics::NewProp_m_RamrodPressed = { "m_RamrodPressed", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAirCannon), &Z_Construct_UClass_AAirCannon_Statics::NewProp_m_RamrodPressed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_RamrodPressed_MetaData), NewProp_m_RamrodPressed_MetaData) };
void Z_Construct_UClass_AAirCannon_Statics::NewProp_m_IsCannonCharging_SetBit(void* Obj)
{
	((AAirCannon*)Obj)->m_IsCannonCharging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAirCannon_Statics::NewProp_m_IsCannonCharging = { "m_IsCannonCharging", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAirCannon), &Z_Construct_UClass_AAirCannon_Statics::NewProp_m_IsCannonCharging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_IsCannonCharging_MetaData), NewProp_m_IsCannonCharging_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAirCannon_Statics::NewProp_m_PushTimestamps_Inner = { "m_PushTimestamps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAirCannon_Statics::NewProp_m_PushTimestamps = { "m_PushTimestamps", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAirCannon, m_PushTimestamps), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_PushTimestamps_MetaData), NewProp_m_PushTimestamps_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAirCannon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirCannon_Statics::NewProp_m_TeamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirCannon_Statics::NewProp_m_GameLoopCtr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirCannon_Statics::NewProp_m_AudioManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirCannon_Statics::NewProp_m_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirCannon_Statics::NewProp_m_ProjectileReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirCannon_Statics::NewProp_m_ProjectilePhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirCannon_Statics::NewProp_m_CannonFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirCannon_Statics::NewProp_m_CannonCharging,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirCannon_Statics::NewProp_m_UpForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirCannon_Statics::NewProp_m_RamrodPressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirCannon_Statics::NewProp_m_IsCannonCharging,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirCannon_Statics::NewProp_m_PushTimestamps_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirCannon_Statics::NewProp_m_PushTimestamps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAirCannon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAirCannon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAirCannon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAirCannon_Statics::ClassParams = {
	&AAirCannon::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAirCannon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAirCannon_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAirCannon_Statics::Class_MetaDataParams), Z_Construct_UClass_AAirCannon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAirCannon()
{
	if (!Z_Registration_Info_UClass_AAirCannon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAirCannon.OuterSingleton, Z_Construct_UClass_AAirCannon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAirCannon.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAirCannon);
AAirCannon::~AAirCannon() {}
// ********** End Class AAirCannon *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame1_AirCannon_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAirCannon, AAirCannon::StaticClass, TEXT("AAirCannon"), &Z_Registration_Info_UClass_AAirCannon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAirCannon), 348318U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame1_AirCannon_h__Script_PartyJungle_1648772958(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame1_AirCannon_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame1_AirCannon_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
