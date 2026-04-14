// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Controllers/CameraControllers/CameraModeControllers/FullView_CameraModeController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFullView_CameraModeController() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ACameraModeControllerBase();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AFullView_CameraModeController();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AFullView_CameraModeController_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFullView_CameraModeController Function OnRightJoystick_X ****************
struct Z_Construct_UFunction_AFullView_CameraModeController_OnRightJoystick_X_Statics
{
	struct FullView_CameraModeController_eventOnRightJoystick_X_Parms
	{
		float a_Axis;
		int32 a_PlayerId;
		bool a_WasActive;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Method called when the Right Joystick's X axis is triggered.\n\x09 * @param a_Axis Axis X of the Right Joystick.\n\x09 * @param a_PlayerId Id of the Player who triggered the Joystick's axis.\n\x09 * @param a_WasActive True if the Joystick's axis was active in the previous frame.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/CameraControllers/CameraModeControllers/FullView_CameraModeController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Method called when the Right Joystick's X axis is triggered.\n@param a_Axis Axis X of the Right Joystick.\n@param a_PlayerId Id of the Player who triggered the Joystick's axis.\n@param a_WasActive True if the Joystick's axis was active in the previous frame." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_a_Axis;
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_PlayerId;
	static void NewProp_a_WasActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_a_WasActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFullView_CameraModeController_OnRightJoystick_X_Statics::NewProp_a_Axis = { "a_Axis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FullView_CameraModeController_eventOnRightJoystick_X_Parms, a_Axis), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFullView_CameraModeController_OnRightJoystick_X_Statics::NewProp_a_PlayerId = { "a_PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FullView_CameraModeController_eventOnRightJoystick_X_Parms, a_PlayerId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AFullView_CameraModeController_OnRightJoystick_X_Statics::NewProp_a_WasActive_SetBit(void* Obj)
{
	((FullView_CameraModeController_eventOnRightJoystick_X_Parms*)Obj)->a_WasActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFullView_CameraModeController_OnRightJoystick_X_Statics::NewProp_a_WasActive = { "a_WasActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FullView_CameraModeController_eventOnRightJoystick_X_Parms), &Z_Construct_UFunction_AFullView_CameraModeController_OnRightJoystick_X_Statics::NewProp_a_WasActive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFullView_CameraModeController_OnRightJoystick_X_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFullView_CameraModeController_OnRightJoystick_X_Statics::NewProp_a_Axis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFullView_CameraModeController_OnRightJoystick_X_Statics::NewProp_a_PlayerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFullView_CameraModeController_OnRightJoystick_X_Statics::NewProp_a_WasActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFullView_CameraModeController_OnRightJoystick_X_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFullView_CameraModeController_OnRightJoystick_X_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFullView_CameraModeController, nullptr, "OnRightJoystick_X", Z_Construct_UFunction_AFullView_CameraModeController_OnRightJoystick_X_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFullView_CameraModeController_OnRightJoystick_X_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFullView_CameraModeController_OnRightJoystick_X_Statics::FullView_CameraModeController_eventOnRightJoystick_X_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFullView_CameraModeController_OnRightJoystick_X_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFullView_CameraModeController_OnRightJoystick_X_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFullView_CameraModeController_OnRightJoystick_X_Statics::FullView_CameraModeController_eventOnRightJoystick_X_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFullView_CameraModeController_OnRightJoystick_X()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFullView_CameraModeController_OnRightJoystick_X_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFullView_CameraModeController::execOnRightJoystick_X)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_a_Axis);
	P_GET_PROPERTY(FIntProperty,Z_Param_a_PlayerId);
	P_GET_UBOOL(Z_Param_a_WasActive);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRightJoystick_X(Z_Param_a_Axis,Z_Param_a_PlayerId,Z_Param_a_WasActive);
	P_NATIVE_END;
}
// ********** End Class AFullView_CameraModeController Function OnRightJoystick_X ******************

// ********** Begin Class AFullView_CameraModeController Function OnRightJoystick_Y ****************
struct Z_Construct_UFunction_AFullView_CameraModeController_OnRightJoystick_Y_Statics
{
	struct FullView_CameraModeController_eventOnRightJoystick_Y_Parms
	{
		float a_Axis;
		int32 a_PlayerId;
		bool a_WasActive;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Method called when the Right Joystick's Y axis is triggered.\n\x09 * @param a_Axis Axis Y of the Right Joystick.\n\x09 * @param a_PlayerId Id of the Player who triggered the Joystick's axis.\n\x09 * @param a_WasActive True if the Joystick's axis was active in the previous frame.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/CameraControllers/CameraModeControllers/FullView_CameraModeController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Method called when the Right Joystick's Y axis is triggered.\n@param a_Axis Axis Y of the Right Joystick.\n@param a_PlayerId Id of the Player who triggered the Joystick's axis.\n@param a_WasActive True if the Joystick's axis was active in the previous frame." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_a_Axis;
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_PlayerId;
	static void NewProp_a_WasActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_a_WasActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFullView_CameraModeController_OnRightJoystick_Y_Statics::NewProp_a_Axis = { "a_Axis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FullView_CameraModeController_eventOnRightJoystick_Y_Parms, a_Axis), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFullView_CameraModeController_OnRightJoystick_Y_Statics::NewProp_a_PlayerId = { "a_PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FullView_CameraModeController_eventOnRightJoystick_Y_Parms, a_PlayerId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AFullView_CameraModeController_OnRightJoystick_Y_Statics::NewProp_a_WasActive_SetBit(void* Obj)
{
	((FullView_CameraModeController_eventOnRightJoystick_Y_Parms*)Obj)->a_WasActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFullView_CameraModeController_OnRightJoystick_Y_Statics::NewProp_a_WasActive = { "a_WasActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FullView_CameraModeController_eventOnRightJoystick_Y_Parms), &Z_Construct_UFunction_AFullView_CameraModeController_OnRightJoystick_Y_Statics::NewProp_a_WasActive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFullView_CameraModeController_OnRightJoystick_Y_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFullView_CameraModeController_OnRightJoystick_Y_Statics::NewProp_a_Axis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFullView_CameraModeController_OnRightJoystick_Y_Statics::NewProp_a_PlayerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFullView_CameraModeController_OnRightJoystick_Y_Statics::NewProp_a_WasActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFullView_CameraModeController_OnRightJoystick_Y_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFullView_CameraModeController_OnRightJoystick_Y_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFullView_CameraModeController, nullptr, "OnRightJoystick_Y", Z_Construct_UFunction_AFullView_CameraModeController_OnRightJoystick_Y_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFullView_CameraModeController_OnRightJoystick_Y_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFullView_CameraModeController_OnRightJoystick_Y_Statics::FullView_CameraModeController_eventOnRightJoystick_Y_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFullView_CameraModeController_OnRightJoystick_Y_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFullView_CameraModeController_OnRightJoystick_Y_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFullView_CameraModeController_OnRightJoystick_Y_Statics::FullView_CameraModeController_eventOnRightJoystick_Y_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFullView_CameraModeController_OnRightJoystick_Y()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFullView_CameraModeController_OnRightJoystick_Y_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFullView_CameraModeController::execOnRightJoystick_Y)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_a_Axis);
	P_GET_PROPERTY(FIntProperty,Z_Param_a_PlayerId);
	P_GET_UBOOL(Z_Param_a_WasActive);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRightJoystick_Y(Z_Param_a_Axis,Z_Param_a_PlayerId,Z_Param_a_WasActive);
	P_NATIVE_END;
}
// ********** End Class AFullView_CameraModeController Function OnRightJoystick_Y ******************

// ********** Begin Class AFullView_CameraModeController Function OnUpdateState_Implementation *****
struct Z_Construct_UFunction_AFullView_CameraModeController_OnUpdateState_Implementation_Statics
{
	struct FullView_CameraModeController_eventOnUpdateState_Implementation_Parms
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
		{ "ModuleRelativePath", "Controllers/CameraControllers/CameraModeControllers/FullView_CameraModeController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function called when the State is updated.\n@param a_DeltaTime Game time elapsed during last frame modified by the time dilation" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_a_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFullView_CameraModeController_OnUpdateState_Implementation_Statics::NewProp_a_DeltaTime = { "a_DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FullView_CameraModeController_eventOnUpdateState_Implementation_Parms, a_DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFullView_CameraModeController_OnUpdateState_Implementation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFullView_CameraModeController_OnUpdateState_Implementation_Statics::NewProp_a_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFullView_CameraModeController_OnUpdateState_Implementation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFullView_CameraModeController_OnUpdateState_Implementation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFullView_CameraModeController, nullptr, "OnUpdateState_Implementation", Z_Construct_UFunction_AFullView_CameraModeController_OnUpdateState_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFullView_CameraModeController_OnUpdateState_Implementation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFullView_CameraModeController_OnUpdateState_Implementation_Statics::FullView_CameraModeController_eventOnUpdateState_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFullView_CameraModeController_OnUpdateState_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFullView_CameraModeController_OnUpdateState_Implementation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFullView_CameraModeController_OnUpdateState_Implementation_Statics::FullView_CameraModeController_eventOnUpdateState_Implementation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFullView_CameraModeController_OnUpdateState_Implementation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFullView_CameraModeController_OnUpdateState_Implementation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFullView_CameraModeController::execOnUpdateState_Implementation)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_a_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnUpdateState_Implementation(Z_Param_a_DeltaTime);
	P_NATIVE_END;
}
// ********** End Class AFullView_CameraModeController Function OnUpdateState_Implementation *******

// ********** Begin Class AFullView_CameraModeController *******************************************
void AFullView_CameraModeController::StaticRegisterNativesAFullView_CameraModeController()
{
	UClass* Class = AFullView_CameraModeController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRightJoystick_X", &AFullView_CameraModeController::execOnRightJoystick_X },
		{ "OnRightJoystick_Y", &AFullView_CameraModeController::execOnRightJoystick_Y },
		{ "OnUpdateState_Implementation", &AFullView_CameraModeController::execOnUpdateState_Implementation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFullView_CameraModeController;
UClass* AFullView_CameraModeController::GetPrivateStaticClass()
{
	using TClass = AFullView_CameraModeController;
	if (!Z_Registration_Info_UClass_AFullView_CameraModeController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FullView_CameraModeController"),
			Z_Registration_Info_UClass_AFullView_CameraModeController.InnerSingleton,
			StaticRegisterNativesAFullView_CameraModeController,
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
	return Z_Registration_Info_UClass_AFullView_CameraModeController.InnerSingleton;
}
UClass* Z_Construct_UClass_AFullView_CameraModeController_NoRegister()
{
	return AFullView_CameraModeController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFullView_CameraModeController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Controller for each Camera in FullView Camera Mode.\n */" },
#endif
		{ "IncludePath", "Controllers/CameraControllers/CameraModeControllers/FullView_CameraModeController.h" },
		{ "ModuleRelativePath", "Controllers/CameraControllers/CameraModeControllers/FullView_CameraModeController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controller for each Camera in FullView Camera Mode." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_MoveSpeed_MetaData[] = {
		{ "Category", "FullViewCamera" },
		{ "ModuleRelativePath", "Controllers/CameraControllers/CameraModeControllers/FullView_CameraModeController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_DistanceToTarget_MetaData[] = {
		{ "Category", "FullViewCamera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Camera movement speed.\n" },
#endif
		{ "ModuleRelativePath", "Controllers/CameraControllers/CameraModeControllers/FullView_CameraModeController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Camera movement speed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_MoveDirection_MetaData[] = {
		{ "ModuleRelativePath", "Controllers/CameraControllers/CameraModeControllers/FullView_CameraModeController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_m_MoveSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_m_DistanceToTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_m_MoveDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFullView_CameraModeController_OnRightJoystick_X, "OnRightJoystick_X" }, // 992445656
		{ &Z_Construct_UFunction_AFullView_CameraModeController_OnRightJoystick_Y, "OnRightJoystick_Y" }, // 1490152172
		{ &Z_Construct_UFunction_AFullView_CameraModeController_OnUpdateState_Implementation, "OnUpdateState_Implementation" }, // 4053740466
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFullView_CameraModeController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFullView_CameraModeController_Statics::NewProp_m_MoveSpeed = { "m_MoveSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFullView_CameraModeController, m_MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_MoveSpeed_MetaData), NewProp_m_MoveSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFullView_CameraModeController_Statics::NewProp_m_DistanceToTarget = { "m_DistanceToTarget", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFullView_CameraModeController, m_DistanceToTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_DistanceToTarget_MetaData), NewProp_m_DistanceToTarget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFullView_CameraModeController_Statics::NewProp_m_MoveDirection = { "m_MoveDirection", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFullView_CameraModeController, m_MoveDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_MoveDirection_MetaData), NewProp_m_MoveDirection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFullView_CameraModeController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFullView_CameraModeController_Statics::NewProp_m_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFullView_CameraModeController_Statics::NewProp_m_DistanceToTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFullView_CameraModeController_Statics::NewProp_m_MoveDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFullView_CameraModeController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFullView_CameraModeController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACameraModeControllerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFullView_CameraModeController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFullView_CameraModeController_Statics::ClassParams = {
	&AFullView_CameraModeController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFullView_CameraModeController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFullView_CameraModeController_Statics::PropPointers),
	0,
	0x008001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFullView_CameraModeController_Statics::Class_MetaDataParams), Z_Construct_UClass_AFullView_CameraModeController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFullView_CameraModeController()
{
	if (!Z_Registration_Info_UClass_AFullView_CameraModeController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFullView_CameraModeController.OuterSingleton, Z_Construct_UClass_AFullView_CameraModeController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFullView_CameraModeController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFullView_CameraModeController);
AFullView_CameraModeController::~AFullView_CameraModeController() {}
// ********** End Class AFullView_CameraModeController *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraModeControllers_FullView_CameraModeController_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFullView_CameraModeController, AFullView_CameraModeController::StaticClass, TEXT("AFullView_CameraModeController"), &Z_Registration_Info_UClass_AFullView_CameraModeController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFullView_CameraModeController), 2408409408U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraModeControllers_FullView_CameraModeController_h__Script_PartyJungle_3161150196(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraModeControllers_FullView_CameraModeController_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraModeControllers_FullView_CameraModeController_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
