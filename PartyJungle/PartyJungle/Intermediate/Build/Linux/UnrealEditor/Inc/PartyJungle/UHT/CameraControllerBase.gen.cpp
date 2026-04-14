// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Controllers/CameraControllers/CameraControllerBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCameraControllerBase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ACameraControllerBase();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ACameraControllerBase_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ACameraModeControllerBase_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AControllerBase();
PARTYJUNGLE_API UEnum* Z_Construct_UEnum_PartyJungle_ECameraModes();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACameraControllerBase Function CanChangeCameraMode ***********************
struct Z_Construct_UFunction_ACameraControllerBase_CanChangeCameraMode_Statics
{
	struct CameraControllerBase_eventCanChangeCameraMode_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CameraCtr Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets if the CameraMode can be changed.\n\x09 * @return True if the CameraMode is ready to be changed.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/CameraControllers/CameraControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets if the CameraMode can be changed.\n@return True if the CameraMode is ready to be changed." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACameraControllerBase_CanChangeCameraMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CameraControllerBase_eventCanChangeCameraMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACameraControllerBase_CanChangeCameraMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CameraControllerBase_eventCanChangeCameraMode_Parms), &Z_Construct_UFunction_ACameraControllerBase_CanChangeCameraMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACameraControllerBase_CanChangeCameraMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraControllerBase_CanChangeCameraMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraControllerBase_CanChangeCameraMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACameraControllerBase_CanChangeCameraMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACameraControllerBase, nullptr, "CanChangeCameraMode", Z_Construct_UFunction_ACameraControllerBase_CanChangeCameraMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraControllerBase_CanChangeCameraMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACameraControllerBase_CanChangeCameraMode_Statics::CameraControllerBase_eventCanChangeCameraMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraControllerBase_CanChangeCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACameraControllerBase_CanChangeCameraMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACameraControllerBase_CanChangeCameraMode_Statics::CameraControllerBase_eventCanChangeCameraMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACameraControllerBase_CanChangeCameraMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACameraControllerBase_CanChangeCameraMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACameraControllerBase::execCanChangeCameraMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanChangeCameraMode();
	P_NATIVE_END;
}
// ********** End Class ACameraControllerBase Function CanChangeCameraMode *************************

// ********** Begin Class ACameraControllerBase Function EnterCameraCinematic **********************
static FName NAME_ACameraControllerBase_EnterCameraCinematic = FName(TEXT("EnterCameraCinematic"));
void ACameraControllerBase::EnterCameraCinematic()
{
	UFunction* Func = FindFunctionChecked(NAME_ACameraControllerBase_EnterCameraCinematic);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ACameraControllerBase_EnterCameraCinematic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CameraController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Cinematic triggered when entering a CameraMode.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/CameraControllers/CameraControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cinematic triggered when entering a CameraMode." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACameraControllerBase_EnterCameraCinematic_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACameraControllerBase, nullptr, "EnterCameraCinematic", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraControllerBase_EnterCameraCinematic_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACameraControllerBase_EnterCameraCinematic_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACameraControllerBase_EnterCameraCinematic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACameraControllerBase_EnterCameraCinematic_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ACameraControllerBase Function EnterCameraCinematic ************************

// ********** Begin Class ACameraControllerBase Function ExitCameraCinematic ***********************
static FName NAME_ACameraControllerBase_ExitCameraCinematic = FName(TEXT("ExitCameraCinematic"));
void ACameraControllerBase::ExitCameraCinematic()
{
	UFunction* Func = FindFunctionChecked(NAME_ACameraControllerBase_ExitCameraCinematic);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ACameraControllerBase_ExitCameraCinematic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CameraController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Cinematic triggered when exiting a CameraMode.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/CameraControllers/CameraControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cinematic triggered when exiting a CameraMode." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACameraControllerBase_ExitCameraCinematic_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACameraControllerBase, nullptr, "ExitCameraCinematic", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraControllerBase_ExitCameraCinematic_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACameraControllerBase_ExitCameraCinematic_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACameraControllerBase_ExitCameraCinematic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACameraControllerBase_ExitCameraCinematic_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ACameraControllerBase Function ExitCameraCinematic *************************

// ********** Begin Class ACameraControllerBase Function GetCameraMode *****************************
struct Z_Construct_UFunction_ACameraControllerBase_GetCameraMode_Statics
{
	struct CameraControllerBase_eventGetCameraMode_Parms
	{
		ECameraModes ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CameraCtr Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the current Camera Mode\n\x09 * @return Current Camera Mode.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/CameraControllers/CameraControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current Camera Mode\n@return Current Camera Mode." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACameraControllerBase_GetCameraMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACameraControllerBase_GetCameraMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraControllerBase_eventGetCameraMode_Parms, ReturnValue), Z_Construct_UEnum_PartyJungle_ECameraModes, METADATA_PARAMS(0, nullptr) }; // 682944729
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACameraControllerBase_GetCameraMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraControllerBase_GetCameraMode_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraControllerBase_GetCameraMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraControllerBase_GetCameraMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACameraControllerBase_GetCameraMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACameraControllerBase, nullptr, "GetCameraMode", Z_Construct_UFunction_ACameraControllerBase_GetCameraMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraControllerBase_GetCameraMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACameraControllerBase_GetCameraMode_Statics::CameraControllerBase_eventGetCameraMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraControllerBase_GetCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACameraControllerBase_GetCameraMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACameraControllerBase_GetCameraMode_Statics::CameraControllerBase_eventGetCameraMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACameraControllerBase_GetCameraMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACameraControllerBase_GetCameraMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACameraControllerBase::execGetCameraMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ECameraModes*)Z_Param__Result=P_THIS->GetCameraMode();
	P_NATIVE_END;
}
// ********** End Class ACameraControllerBase Function GetCameraMode *******************************

// ********** Begin Class ACameraControllerBase Function GetCurrentCameraData **********************
struct Z_Construct_UFunction_ACameraControllerBase_GetCurrentCameraData_Statics
{
	struct CameraControllerBase_eventGetCurrentCameraData_Parms
	{
		const ACameraModeControllerBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CameraCtr Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets a pointer to the current Camera Data.\n\x09 * @return Pointer to the current Camera Data.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/CameraControllers/CameraControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a pointer to the current Camera Data.\n@return Pointer to the current Camera Data." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACameraControllerBase_GetCurrentCameraData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraControllerBase_eventGetCurrentCameraData_Parms, ReturnValue), Z_Construct_UClass_ACameraModeControllerBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACameraControllerBase_GetCurrentCameraData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraControllerBase_GetCurrentCameraData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraControllerBase_GetCurrentCameraData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACameraControllerBase_GetCurrentCameraData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACameraControllerBase, nullptr, "GetCurrentCameraData", Z_Construct_UFunction_ACameraControllerBase_GetCurrentCameraData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraControllerBase_GetCurrentCameraData_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACameraControllerBase_GetCurrentCameraData_Statics::CameraControllerBase_eventGetCurrentCameraData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraControllerBase_GetCurrentCameraData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACameraControllerBase_GetCurrentCameraData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACameraControllerBase_GetCurrentCameraData_Statics::CameraControllerBase_eventGetCurrentCameraData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACameraControllerBase_GetCurrentCameraData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACameraControllerBase_GetCurrentCameraData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACameraControllerBase::execGetCurrentCameraData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const ACameraModeControllerBase**)Z_Param__Result=P_THIS->GetCurrentCameraData();
	P_NATIVE_END;
}
// ********** End Class ACameraControllerBase Function GetCurrentCameraData ************************

// ********** Begin Class ACameraControllerBase Function OnUpdateState_Implementation **************
struct Z_Construct_UFunction_ACameraControllerBase_OnUpdateState_Implementation_Statics
{
	struct CameraControllerBase_eventOnUpdateState_Implementation_Parms
	{
		float a_DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "FullViewCamera_Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Function called when the State is updated.\n\x09 * @param a_DeltaTime Game time elapsed during last frame modified by the time dilation\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/CameraControllers/CameraControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function called when the State is updated.\n@param a_DeltaTime Game time elapsed during last frame modified by the time dilation" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_a_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACameraControllerBase_OnUpdateState_Implementation_Statics::NewProp_a_DeltaTime = { "a_DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraControllerBase_eventOnUpdateState_Implementation_Parms, a_DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACameraControllerBase_OnUpdateState_Implementation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraControllerBase_OnUpdateState_Implementation_Statics::NewProp_a_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraControllerBase_OnUpdateState_Implementation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACameraControllerBase_OnUpdateState_Implementation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACameraControllerBase, nullptr, "OnUpdateState_Implementation", Z_Construct_UFunction_ACameraControllerBase_OnUpdateState_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraControllerBase_OnUpdateState_Implementation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACameraControllerBase_OnUpdateState_Implementation_Statics::CameraControllerBase_eventOnUpdateState_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraControllerBase_OnUpdateState_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACameraControllerBase_OnUpdateState_Implementation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACameraControllerBase_OnUpdateState_Implementation_Statics::CameraControllerBase_eventOnUpdateState_Implementation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACameraControllerBase_OnUpdateState_Implementation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACameraControllerBase_OnUpdateState_Implementation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACameraControllerBase::execOnUpdateState_Implementation)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_a_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnUpdateState_Implementation(Z_Param_a_DeltaTime);
	P_NATIVE_END;
}
// ********** End Class ACameraControllerBase Function OnUpdateState_Implementation ****************

// ********** Begin Class ACameraControllerBase Function SetCameraMode *****************************
struct Z_Construct_UFunction_ACameraControllerBase_SetCameraMode_Statics
{
	struct CameraControllerBase_eventSetCameraMode_Parms
	{
		ECameraModes a_CameraMode;
		float a_ExitDelay;
		float a_EnterDelay;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CameraCtr Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the current Camera Mode.\n\x09 * @param a_CameraMode Target Camera Mode.\n\x09 * @param a_ExitDelay Delay for Exiting the original Camera.\n\x09 * @param a_EnterDelay Delay for Entering the target Camera.\n\x09 */" },
#endif
		{ "CPP_Default_a_EnterDelay", "-1.000000" },
		{ "CPP_Default_a_ExitDelay", "-1.000000" },
		{ "ModuleRelativePath", "Controllers/CameraControllers/CameraControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the current Camera Mode.\n@param a_CameraMode Target Camera Mode.\n@param a_ExitDelay Delay for Exiting the original Camera.\n@param a_EnterDelay Delay for Entering the target Camera." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_a_CameraMode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_a_ExitDelay_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_a_EnterDelay_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_a_CameraMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_a_CameraMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_a_ExitDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_a_EnterDelay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACameraControllerBase_SetCameraMode_Statics::NewProp_a_CameraMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACameraControllerBase_SetCameraMode_Statics::NewProp_a_CameraMode = { "a_CameraMode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraControllerBase_eventSetCameraMode_Parms, a_CameraMode), Z_Construct_UEnum_PartyJungle_ECameraModes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_a_CameraMode_MetaData), NewProp_a_CameraMode_MetaData) }; // 682944729
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACameraControllerBase_SetCameraMode_Statics::NewProp_a_ExitDelay = { "a_ExitDelay", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraControllerBase_eventSetCameraMode_Parms, a_ExitDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_a_ExitDelay_MetaData), NewProp_a_ExitDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACameraControllerBase_SetCameraMode_Statics::NewProp_a_EnterDelay = { "a_EnterDelay", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraControllerBase_eventSetCameraMode_Parms, a_EnterDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_a_EnterDelay_MetaData), NewProp_a_EnterDelay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACameraControllerBase_SetCameraMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraControllerBase_SetCameraMode_Statics::NewProp_a_CameraMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraControllerBase_SetCameraMode_Statics::NewProp_a_CameraMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraControllerBase_SetCameraMode_Statics::NewProp_a_ExitDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraControllerBase_SetCameraMode_Statics::NewProp_a_EnterDelay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraControllerBase_SetCameraMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACameraControllerBase_SetCameraMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACameraControllerBase, nullptr, "SetCameraMode", Z_Construct_UFunction_ACameraControllerBase_SetCameraMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraControllerBase_SetCameraMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACameraControllerBase_SetCameraMode_Statics::CameraControllerBase_eventSetCameraMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraControllerBase_SetCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACameraControllerBase_SetCameraMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACameraControllerBase_SetCameraMode_Statics::CameraControllerBase_eventSetCameraMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACameraControllerBase_SetCameraMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACameraControllerBase_SetCameraMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACameraControllerBase::execSetCameraMode)
{
	P_GET_ENUM(ECameraModes,Z_Param_a_CameraMode);
	P_GET_PROPERTY(FFloatProperty,Z_Param_a_ExitDelay);
	P_GET_PROPERTY(FFloatProperty,Z_Param_a_EnterDelay);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCameraMode(ECameraModes(Z_Param_a_CameraMode),Z_Param_a_ExitDelay,Z_Param_a_EnterDelay);
	P_NATIVE_END;
}
// ********** End Class ACameraControllerBase Function SetCameraMode *******************************

// ********** Begin Class ACameraControllerBase Function SetCameraTarget ***************************
struct Z_Construct_UFunction_ACameraControllerBase_SetCameraTarget_Statics
{
	struct CameraControllerBase_eventSetCameraTarget_Parms
	{
		const AActor* a_CameraTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CameraCtr Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the Camera follow Target.\n\x09 * @param a_Target Target to follow.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/CameraControllers/CameraControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the Camera follow Target.\n@param a_Target Target to follow." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_a_CameraTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_a_CameraTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACameraControllerBase_SetCameraTarget_Statics::NewProp_a_CameraTarget = { "a_CameraTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraControllerBase_eventSetCameraTarget_Parms, a_CameraTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_a_CameraTarget_MetaData), NewProp_a_CameraTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACameraControllerBase_SetCameraTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraControllerBase_SetCameraTarget_Statics::NewProp_a_CameraTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraControllerBase_SetCameraTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACameraControllerBase_SetCameraTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACameraControllerBase, nullptr, "SetCameraTarget", Z_Construct_UFunction_ACameraControllerBase_SetCameraTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraControllerBase_SetCameraTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACameraControllerBase_SetCameraTarget_Statics::CameraControllerBase_eventSetCameraTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraControllerBase_SetCameraTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACameraControllerBase_SetCameraTarget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACameraControllerBase_SetCameraTarget_Statics::CameraControllerBase_eventSetCameraTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACameraControllerBase_SetCameraTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACameraControllerBase_SetCameraTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACameraControllerBase::execSetCameraTarget)
{
	P_GET_OBJECT(AActor,Z_Param_a_CameraTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCameraTarget(Z_Param_a_CameraTarget);
	P_NATIVE_END;
}
// ********** End Class ACameraControllerBase Function SetCameraTarget *****************************

// ********** Begin Class ACameraControllerBase ****************************************************
void ACameraControllerBase::StaticRegisterNativesACameraControllerBase()
{
	UClass* Class = ACameraControllerBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanChangeCameraMode", &ACameraControllerBase::execCanChangeCameraMode },
		{ "GetCameraMode", &ACameraControllerBase::execGetCameraMode },
		{ "GetCurrentCameraData", &ACameraControllerBase::execGetCurrentCameraData },
		{ "OnUpdateState_Implementation", &ACameraControllerBase::execOnUpdateState_Implementation },
		{ "SetCameraMode", &ACameraControllerBase::execSetCameraMode },
		{ "SetCameraTarget", &ACameraControllerBase::execSetCameraTarget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACameraControllerBase;
UClass* ACameraControllerBase::GetPrivateStaticClass()
{
	using TClass = ACameraControllerBase;
	if (!Z_Registration_Info_UClass_ACameraControllerBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CameraControllerBase"),
			Z_Registration_Info_UClass_ACameraControllerBase.InnerSingleton,
			StaticRegisterNativesACameraControllerBase,
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
	return Z_Registration_Info_UClass_ACameraControllerBase.InnerSingleton;
}
UClass* Z_Construct_UClass_ACameraControllerBase_NoRegister()
{
	return ACameraControllerBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACameraControllerBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base for the Camera Controller Actors.\n */" },
#endif
		{ "IncludePath", "Controllers/CameraControllers/CameraControllerBase.h" },
		{ "ModuleRelativePath", "Controllers/CameraControllers/CameraControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base for the Camera Controller Actors." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_Cameras_MetaData[] = {
		{ "Category", "CameraController" },
		{ "ModuleRelativePath", "Controllers/CameraControllers/CameraControllerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_CurrentCameraMode_MetaData[] = {
		{ "Category", "CameraController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Cameras ordered by their Camera Mode.\n" },
#endif
		{ "ModuleRelativePath", "Controllers/CameraControllers/CameraControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Cameras ordered by their Camera Mode." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_Cameras_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_m_Cameras_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_m_Cameras_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_m_Cameras;
	static const UECodeGen_Private::FBytePropertyParams NewProp_m_CurrentCameraMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_m_CurrentCameraMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACameraControllerBase_CanChangeCameraMode, "CanChangeCameraMode" }, // 2388928648
		{ &Z_Construct_UFunction_ACameraControllerBase_EnterCameraCinematic, "EnterCameraCinematic" }, // 1819493233
		{ &Z_Construct_UFunction_ACameraControllerBase_ExitCameraCinematic, "ExitCameraCinematic" }, // 2964402107
		{ &Z_Construct_UFunction_ACameraControllerBase_GetCameraMode, "GetCameraMode" }, // 3184388937
		{ &Z_Construct_UFunction_ACameraControllerBase_GetCurrentCameraData, "GetCurrentCameraData" }, // 3675377408
		{ &Z_Construct_UFunction_ACameraControllerBase_OnUpdateState_Implementation, "OnUpdateState_Implementation" }, // 141531996
		{ &Z_Construct_UFunction_ACameraControllerBase_SetCameraMode, "SetCameraMode" }, // 660778712
		{ &Z_Construct_UFunction_ACameraControllerBase_SetCameraTarget, "SetCameraTarget" }, // 894994078
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraControllerBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraControllerBase_Statics::NewProp_m_Cameras_ValueProp = { "m_Cameras", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_ACameraModeControllerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACameraControllerBase_Statics::NewProp_m_Cameras_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACameraControllerBase_Statics::NewProp_m_Cameras_Key_KeyProp = { "m_Cameras_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_PartyJungle_ECameraModes, METADATA_PARAMS(0, nullptr) }; // 682944729
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ACameraControllerBase_Statics::NewProp_m_Cameras = { "m_Cameras", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraControllerBase, m_Cameras), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_Cameras_MetaData), NewProp_m_Cameras_MetaData) }; // 682944729
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACameraControllerBase_Statics::NewProp_m_CurrentCameraMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACameraControllerBase_Statics::NewProp_m_CurrentCameraMode = { "m_CurrentCameraMode", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraControllerBase, m_CurrentCameraMode), Z_Construct_UEnum_PartyJungle_ECameraModes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_CurrentCameraMode_MetaData), NewProp_m_CurrentCameraMode_MetaData) }; // 682944729
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACameraControllerBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraControllerBase_Statics::NewProp_m_Cameras_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraControllerBase_Statics::NewProp_m_Cameras_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraControllerBase_Statics::NewProp_m_Cameras_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraControllerBase_Statics::NewProp_m_Cameras,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraControllerBase_Statics::NewProp_m_CurrentCameraMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraControllerBase_Statics::NewProp_m_CurrentCameraMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACameraControllerBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACameraControllerBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AControllerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACameraControllerBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACameraControllerBase_Statics::ClassParams = {
	&ACameraControllerBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACameraControllerBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACameraControllerBase_Statics::PropPointers),
	0,
	0x008001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACameraControllerBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ACameraControllerBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACameraControllerBase()
{
	if (!Z_Registration_Info_UClass_ACameraControllerBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACameraControllerBase.OuterSingleton, Z_Construct_UClass_ACameraControllerBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACameraControllerBase.OuterSingleton;
}
ACameraControllerBase::ACameraControllerBase() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraControllerBase);
ACameraControllerBase::~ACameraControllerBase() {}
// ********** End Class ACameraControllerBase ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraControllerBase_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACameraControllerBase, ACameraControllerBase::StaticClass, TEXT("ACameraControllerBase"), &Z_Registration_Info_UClass_ACameraControllerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACameraControllerBase), 80184373U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraControllerBase_h__Script_PartyJungle_2023067702(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraControllerBase_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraControllerBase_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
