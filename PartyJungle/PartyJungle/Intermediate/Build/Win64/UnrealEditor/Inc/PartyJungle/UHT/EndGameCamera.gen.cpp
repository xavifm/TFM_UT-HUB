// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/EndGame/Camera/EndGameCamera.h"
#include "EnhancedInput/Public/InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndGameCamera() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AEndGameCamera();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AEndGameCamera_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// End Cross Module References

// Begin Class AEndGameCamera Function HandleLeftRightInput
struct Z_Construct_UFunction_AEndGameCamera_HandleLeftRightInput_Statics
{
	struct EndGameCamera_eventHandleLeftRightInput_Parms
	{
		FInputActionValue _value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EndGame/Camera/EndGameCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEndGameCamera_HandleLeftRightInput_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EndGameCamera_eventHandleLeftRightInput_Parms, _value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__value_MetaData), NewProp__value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEndGameCamera_HandleLeftRightInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEndGameCamera_HandleLeftRightInput_Statics::NewProp__value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEndGameCamera_HandleLeftRightInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEndGameCamera_HandleLeftRightInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEndGameCamera, nullptr, "HandleLeftRightInput", nullptr, nullptr, Z_Construct_UFunction_AEndGameCamera_HandleLeftRightInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEndGameCamera_HandleLeftRightInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEndGameCamera_HandleLeftRightInput_Statics::EndGameCamera_eventHandleLeftRightInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEndGameCamera_HandleLeftRightInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEndGameCamera_HandleLeftRightInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEndGameCamera_HandleLeftRightInput_Statics::EndGameCamera_eventHandleLeftRightInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEndGameCamera_HandleLeftRightInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEndGameCamera_HandleLeftRightInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEndGameCamera::execHandleLeftRightInput)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out__value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleLeftRightInput(Z_Param_Out__value);
	P_NATIVE_END;
}
// End Class AEndGameCamera Function HandleLeftRightInput

// Begin Class AEndGameCamera Function SwitchScoreDirection
struct EndGameCamera_eventSwitchScoreDirection_Parms
{
	int32 _direction;
};
static FName NAME_AEndGameCamera_SwitchScoreDirection = FName(TEXT("SwitchScoreDirection"));
void AEndGameCamera::SwitchScoreDirection(int32 _direction)
{
	EndGameCamera_eventSwitchScoreDirection_Parms Parms;
	Parms._direction=_direction;
	ProcessEvent(FindFunctionChecked(NAME_AEndGameCamera_SwitchScoreDirection),&Parms);
}
struct Z_Construct_UFunction_AEndGameCamera_SwitchScoreDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EndGame/Camera/EndGameCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__direction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AEndGameCamera_SwitchScoreDirection_Statics::NewProp__direction = { "_direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EndGameCamera_eventSwitchScoreDirection_Parms, _direction), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEndGameCamera_SwitchScoreDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEndGameCamera_SwitchScoreDirection_Statics::NewProp__direction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEndGameCamera_SwitchScoreDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEndGameCamera_SwitchScoreDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEndGameCamera, nullptr, "SwitchScoreDirection", nullptr, nullptr, Z_Construct_UFunction_AEndGameCamera_SwitchScoreDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEndGameCamera_SwitchScoreDirection_Statics::PropPointers), sizeof(EndGameCamera_eventSwitchScoreDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEndGameCamera_SwitchScoreDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEndGameCamera_SwitchScoreDirection_Statics::Function_MetaDataParams) };
static_assert(sizeof(EndGameCamera_eventSwitchScoreDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEndGameCamera_SwitchScoreDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEndGameCamera_SwitchScoreDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AEndGameCamera Function SwitchScoreDirection

// Begin Class AEndGameCamera
void AEndGameCamera::StaticRegisterNativesAEndGameCamera()
{
	UClass* Class = AEndGameCamera::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleLeftRightInput", &AEndGameCamera::execHandleLeftRightInput },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEndGameCamera);
UClass* Z_Construct_UClass_AEndGameCamera_NoRegister()
{
	return AEndGameCamera::StaticClass();
}
struct Z_Construct_UClass_AEndGameCamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EndGame/Camera/EndGameCamera.h" },
		{ "ModuleRelativePath", "EndGame/Camera/EndGameCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "EndGame/Camera/EndGameCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisxAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "EndGame/Camera/EndGameCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AxisxAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEndGameCamera_HandleLeftRightInput, "HandleLeftRightInput" }, // 963015984
		{ &Z_Construct_UFunction_AEndGameCamera_SwitchScoreDirection, "SwitchScoreDirection" }, // 112951394
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEndGameCamera>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEndGameCamera_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEndGameCamera, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEndGameCamera_Statics::NewProp_AxisxAction = { "AxisxAction", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEndGameCamera, AxisxAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisxAction_MetaData), NewProp_AxisxAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEndGameCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEndGameCamera_Statics::NewProp_InputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEndGameCamera_Statics::NewProp_AxisxAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEndGameCamera_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEndGameCamera_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEndGameCamera_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEndGameCamera_Statics::ClassParams = {
	&AEndGameCamera::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AEndGameCamera_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AEndGameCamera_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEndGameCamera_Statics::Class_MetaDataParams), Z_Construct_UClass_AEndGameCamera_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEndGameCamera()
{
	if (!Z_Registration_Info_UClass_AEndGameCamera.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEndGameCamera.OuterSingleton, Z_Construct_UClass_AEndGameCamera_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEndGameCamera.OuterSingleton;
}
template<> PARTYJUNGLE_API UClass* StaticClass<AEndGameCamera>()
{
	return AEndGameCamera::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEndGameCamera);
AEndGameCamera::~AEndGameCamera() {}
// End Class AEndGameCamera

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_EndGame_Camera_EndGameCamera_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEndGameCamera, AEndGameCamera::StaticClass, TEXT("AEndGameCamera"), &Z_Registration_Info_UClass_AEndGameCamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEndGameCamera), 2167017209U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_EndGame_Camera_EndGameCamera_h_3504881192(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_EndGame_Camera_EndGameCamera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_EndGame_Camera_EndGameCamera_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
