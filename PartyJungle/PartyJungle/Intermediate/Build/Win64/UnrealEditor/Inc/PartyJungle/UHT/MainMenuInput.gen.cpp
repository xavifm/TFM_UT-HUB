// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Player/Menu/MainMenuInput.h"
#include "InputActionValue.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMainMenuInput() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMainMenuInput();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMainMenuInput_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMainMenuInput Function HandleBackInput **********************************
static FName NAME_AMainMenuInput_HandleBackInput = FName(TEXT("HandleBackInput"));
void AMainMenuInput::HandleBackInput()
{
	UFunction* Func = FindFunctionChecked(NAME_AMainMenuInput_HandleBackInput);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMainMenuInput_HandleBackInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Menu/MainMenuInput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainMenuInput_HandleBackInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMainMenuInput, nullptr, "HandleBackInput", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainMenuInput_HandleBackInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainMenuInput_HandleBackInput_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMainMenuInput_HandleBackInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainMenuInput_HandleBackInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AMainMenuInput Function HandleBackInput ************************************

// ********** Begin Class AMainMenuInput Function HandleConfirmInput *******************************
static FName NAME_AMainMenuInput_HandleConfirmInput = FName(TEXT("HandleConfirmInput"));
void AMainMenuInput::HandleConfirmInput()
{
	UFunction* Func = FindFunctionChecked(NAME_AMainMenuInput_HandleConfirmInput);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMainMenuInput_HandleConfirmInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Menu/MainMenuInput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainMenuInput_HandleConfirmInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMainMenuInput, nullptr, "HandleConfirmInput", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainMenuInput_HandleConfirmInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainMenuInput_HandleConfirmInput_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMainMenuInput_HandleConfirmInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainMenuInput_HandleConfirmInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AMainMenuInput Function HandleConfirmInput *********************************

// ********** Begin Class AMainMenuInput Function HandleLeftRightInput *****************************
struct MainMenuInput_eventHandleLeftRightInput_Parms
{
	FInputActionValue _value;
};
static FName NAME_AMainMenuInput_HandleLeftRightInput = FName(TEXT("HandleLeftRightInput"));
void AMainMenuInput::HandleLeftRightInput(FInputActionValue const& _value)
{
	MainMenuInput_eventHandleLeftRightInput_Parms Parms;
	Parms._value=_value;
	UFunction* Func = FindFunctionChecked(NAME_AMainMenuInput_HandleLeftRightInput);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMainMenuInput_HandleLeftRightInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Menu/MainMenuInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMainMenuInput_HandleLeftRightInput_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainMenuInput_eventHandleLeftRightInput_Parms, _value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__value_MetaData), NewProp__value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainMenuInput_HandleLeftRightInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainMenuInput_HandleLeftRightInput_Statics::NewProp__value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainMenuInput_HandleLeftRightInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainMenuInput_HandleLeftRightInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMainMenuInput, nullptr, "HandleLeftRightInput", Z_Construct_UFunction_AMainMenuInput_HandleLeftRightInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainMenuInput_HandleLeftRightInput_Statics::PropPointers), sizeof(MainMenuInput_eventHandleLeftRightInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainMenuInput_HandleLeftRightInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainMenuInput_HandleLeftRightInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(MainMenuInput_eventHandleLeftRightInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMainMenuInput_HandleLeftRightInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainMenuInput_HandleLeftRightInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AMainMenuInput Function HandleLeftRightInput *******************************

// ********** Begin Class AMainMenuInput Function HandleStartInput *********************************
static FName NAME_AMainMenuInput_HandleStartInput = FName(TEXT("HandleStartInput"));
void AMainMenuInput::HandleStartInput()
{
	UFunction* Func = FindFunctionChecked(NAME_AMainMenuInput_HandleStartInput);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMainMenuInput_HandleStartInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Menu/MainMenuInput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainMenuInput_HandleStartInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMainMenuInput, nullptr, "HandleStartInput", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainMenuInput_HandleStartInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainMenuInput_HandleStartInput_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMainMenuInput_HandleStartInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainMenuInput_HandleStartInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AMainMenuInput Function HandleStartInput ***********************************

// ********** Begin Class AMainMenuInput Function HandleUpDownInput ********************************
struct Z_Construct_UFunction_AMainMenuInput_HandleUpDownInput_Statics
{
	struct MainMenuInput_eventHandleUpDownInput_Parms
	{
		FInputActionValue _value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Menu/MainMenuInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMainMenuInput_HandleUpDownInput_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainMenuInput_eventHandleUpDownInput_Parms, _value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__value_MetaData), NewProp__value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainMenuInput_HandleUpDownInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainMenuInput_HandleUpDownInput_Statics::NewProp__value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainMenuInput_HandleUpDownInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainMenuInput_HandleUpDownInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMainMenuInput, nullptr, "HandleUpDownInput", Z_Construct_UFunction_AMainMenuInput_HandleUpDownInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainMenuInput_HandleUpDownInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainMenuInput_HandleUpDownInput_Statics::MainMenuInput_eventHandleUpDownInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainMenuInput_HandleUpDownInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainMenuInput_HandleUpDownInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMainMenuInput_HandleUpDownInput_Statics::MainMenuInput_eventHandleUpDownInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMainMenuInput_HandleUpDownInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainMenuInput_HandleUpDownInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainMenuInput::execHandleUpDownInput)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out__value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleUpDownInput(Z_Param_Out__value);
	P_NATIVE_END;
}
// ********** End Class AMainMenuInput Function HandleUpDownInput **********************************

// ********** Begin Class AMainMenuInput Function HandleVerticalAxis *******************************
struct MainMenuInput_eventHandleVerticalAxis_Parms
{
	int32 _direction;
};
static FName NAME_AMainMenuInput_HandleVerticalAxis = FName(TEXT("HandleVerticalAxis"));
void AMainMenuInput::HandleVerticalAxis(int32 _direction)
{
	MainMenuInput_eventHandleVerticalAxis_Parms Parms;
	Parms._direction=_direction;
	UFunction* Func = FindFunctionChecked(NAME_AMainMenuInput_HandleVerticalAxis);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMainMenuInput_HandleVerticalAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Menu/MainMenuInput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__direction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMainMenuInput_HandleVerticalAxis_Statics::NewProp__direction = { "_direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainMenuInput_eventHandleVerticalAxis_Parms, _direction), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainMenuInput_HandleVerticalAxis_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainMenuInput_HandleVerticalAxis_Statics::NewProp__direction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainMenuInput_HandleVerticalAxis_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainMenuInput_HandleVerticalAxis_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMainMenuInput, nullptr, "HandleVerticalAxis", Z_Construct_UFunction_AMainMenuInput_HandleVerticalAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainMenuInput_HandleVerticalAxis_Statics::PropPointers), sizeof(MainMenuInput_eventHandleVerticalAxis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainMenuInput_HandleVerticalAxis_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainMenuInput_HandleVerticalAxis_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(MainMenuInput_eventHandleVerticalAxis_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMainMenuInput_HandleVerticalAxis()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainMenuInput_HandleVerticalAxis_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AMainMenuInput Function HandleVerticalAxis *********************************

// ********** Begin Class AMainMenuInput Function SetupPlayerInputComponent ************************
struct Z_Construct_UFunction_AMainMenuInput_SetupPlayerInputComponent_Statics
{
	struct MainMenuInput_eventSetupPlayerInputComponent_Parms
	{
		UInputComponent* PlayerInputComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Player/Menu/MainMenuInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInputComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerInputComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMainMenuInput_SetupPlayerInputComponent_Statics::NewProp_PlayerInputComponent = { "PlayerInputComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainMenuInput_eventSetupPlayerInputComponent_Parms, PlayerInputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerInputComponent_MetaData), NewProp_PlayerInputComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainMenuInput_SetupPlayerInputComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainMenuInput_SetupPlayerInputComponent_Statics::NewProp_PlayerInputComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainMenuInput_SetupPlayerInputComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainMenuInput_SetupPlayerInputComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMainMenuInput, nullptr, "SetupPlayerInputComponent", Z_Construct_UFunction_AMainMenuInput_SetupPlayerInputComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainMenuInput_SetupPlayerInputComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainMenuInput_SetupPlayerInputComponent_Statics::MainMenuInput_eventSetupPlayerInputComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainMenuInput_SetupPlayerInputComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainMenuInput_SetupPlayerInputComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMainMenuInput_SetupPlayerInputComponent_Statics::MainMenuInput_eventSetupPlayerInputComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMainMenuInput_SetupPlayerInputComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainMenuInput_SetupPlayerInputComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainMenuInput::execSetupPlayerInputComponent)
{
	P_GET_OBJECT(UInputComponent,Z_Param_PlayerInputComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupPlayerInputComponent(Z_Param_PlayerInputComponent);
	P_NATIVE_END;
}
// ********** End Class AMainMenuInput Function SetupPlayerInputComponent **************************

// ********** Begin Class AMainMenuInput ***********************************************************
void AMainMenuInput::StaticRegisterNativesAMainMenuInput()
{
	UClass* Class = AMainMenuInput::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleUpDownInput", &AMainMenuInput::execHandleUpDownInput },
		{ "SetupPlayerInputComponent", &AMainMenuInput::execSetupPlayerInputComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMainMenuInput;
UClass* AMainMenuInput::GetPrivateStaticClass()
{
	using TClass = AMainMenuInput;
	if (!Z_Registration_Info_UClass_AMainMenuInput.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MainMenuInput"),
			Z_Registration_Info_UClass_AMainMenuInput.InnerSingleton,
			StaticRegisterNativesAMainMenuInput,
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
	return Z_Registration_Info_UClass_AMainMenuInput.InnerSingleton;
}
UClass* Z_Construct_UClass_AMainMenuInput_NoRegister()
{
	return AMainMenuInput::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMainMenuInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/Menu/MainMenuInput.h" },
		{ "ModuleRelativePath", "Player/Menu/MainMenuInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisxAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Player/Menu/MainMenuInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisyAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Player/Menu/MainMenuInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyaAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Player/Menu/MainMenuInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeybAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Player/Menu/MainMenuInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyStartAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Player/Menu/MainMenuInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Player/Menu/MainMenuInput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AxisxAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AxisyAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyaAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeybAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyStartAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMainMenuInput_HandleBackInput, "HandleBackInput" }, // 2275945802
		{ &Z_Construct_UFunction_AMainMenuInput_HandleConfirmInput, "HandleConfirmInput" }, // 3494874203
		{ &Z_Construct_UFunction_AMainMenuInput_HandleLeftRightInput, "HandleLeftRightInput" }, // 2399025078
		{ &Z_Construct_UFunction_AMainMenuInput_HandleStartInput, "HandleStartInput" }, // 1272957301
		{ &Z_Construct_UFunction_AMainMenuInput_HandleUpDownInput, "HandleUpDownInput" }, // 1431819574
		{ &Z_Construct_UFunction_AMainMenuInput_HandleVerticalAxis, "HandleVerticalAxis" }, // 1402819466
		{ &Z_Construct_UFunction_AMainMenuInput_SetupPlayerInputComponent, "SetupPlayerInputComponent" }, // 1024208403
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainMenuInput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainMenuInput_Statics::NewProp_AxisxAction = { "AxisxAction", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainMenuInput, AxisxAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisxAction_MetaData), NewProp_AxisxAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainMenuInput_Statics::NewProp_AxisyAction = { "AxisyAction", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainMenuInput, AxisyAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisyAction_MetaData), NewProp_AxisyAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainMenuInput_Statics::NewProp_KeyaAction = { "KeyaAction", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainMenuInput, KeyaAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyaAction_MetaData), NewProp_KeyaAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainMenuInput_Statics::NewProp_KeybAction = { "KeybAction", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainMenuInput, KeybAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeybAction_MetaData), NewProp_KeybAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainMenuInput_Statics::NewProp_KeyStartAction = { "KeyStartAction", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainMenuInput, KeyStartAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyStartAction_MetaData), NewProp_KeyStartAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainMenuInput_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainMenuInput, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainMenuInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainMenuInput_Statics::NewProp_AxisxAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainMenuInput_Statics::NewProp_AxisyAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainMenuInput_Statics::NewProp_KeyaAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainMenuInput_Statics::NewProp_KeybAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainMenuInput_Statics::NewProp_KeyStartAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainMenuInput_Statics::NewProp_InputMappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuInput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMainMenuInput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuInput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainMenuInput_Statics::ClassParams = {
	&AMainMenuInput::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMainMenuInput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuInput_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuInput_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainMenuInput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainMenuInput()
{
	if (!Z_Registration_Info_UClass_AMainMenuInput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainMenuInput.OuterSingleton, Z_Construct_UClass_AMainMenuInput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainMenuInput.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainMenuInput);
AMainMenuInput::~AMainMenuInput() {}
// ********** End Class AMainMenuInput *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Menu_MainMenuInput_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainMenuInput, AMainMenuInput::StaticClass, TEXT("AMainMenuInput"), &Z_Registration_Info_UClass_AMainMenuInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainMenuInput), 2066645083U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Menu_MainMenuInput_h__Script_PartyJungle_1378584353(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Menu_MainMenuInput_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Menu_MainMenuInput_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
