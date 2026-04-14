// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Controllers/ControllerBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeControllerBase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AControllerBase();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AControllerBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AControllerBase Function CanEnterController ******************************
struct ControllerBase_eventCanEnterController_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	ControllerBase_eventCanEnterController_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_AControllerBase_CanEnterController = FName(TEXT("CanEnterController"));
bool AControllerBase::CanEnterController()
{
	ControllerBase_eventCanEnterController_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_AControllerBase_CanEnterController);
	ProcessEvent(Func,&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_AControllerBase_CanEnterController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "StateData_Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets whether the controller can be entered or not.\n\x09 * @return True if the controller can be entered.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/ControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets whether the controller can be entered or not.\n@return True if the controller can be entered." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AControllerBase_CanEnterController_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ControllerBase_eventCanEnterController_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AControllerBase_CanEnterController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ControllerBase_eventCanEnterController_Parms), &Z_Construct_UFunction_AControllerBase_CanEnterController_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AControllerBase_CanEnterController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControllerBase_CanEnterController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AControllerBase_CanEnterController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AControllerBase_CanEnterController_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AControllerBase, nullptr, "CanEnterController", Z_Construct_UFunction_AControllerBase_CanEnterController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AControllerBase_CanEnterController_Statics::PropPointers), sizeof(ControllerBase_eventCanEnterController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AControllerBase_CanEnterController_Statics::Function_MetaDataParams), Z_Construct_UFunction_AControllerBase_CanEnterController_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ControllerBase_eventCanEnterController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AControllerBase_CanEnterController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AControllerBase_CanEnterController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AControllerBase::execCanEnterController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanEnterController_Implementation();
	P_NATIVE_END;
}
// ********** End Class AControllerBase Function CanEnterController ********************************

// ********** Begin Class AControllerBase Function CanExitController *******************************
struct ControllerBase_eventCanExitController_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	ControllerBase_eventCanExitController_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_AControllerBase_CanExitController = FName(TEXT("CanExitController"));
bool AControllerBase::CanExitController()
{
	ControllerBase_eventCanExitController_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_AControllerBase_CanExitController);
	ProcessEvent(Func,&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_AControllerBase_CanExitController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "StateData_Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets whether the controller can be exited or not.\n\x09 * @return True if the controller can be exited.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/ControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets whether the controller can be exited or not.\n@return True if the controller can be exited." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AControllerBase_CanExitController_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ControllerBase_eventCanExitController_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AControllerBase_CanExitController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ControllerBase_eventCanExitController_Parms), &Z_Construct_UFunction_AControllerBase_CanExitController_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AControllerBase_CanExitController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControllerBase_CanExitController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AControllerBase_CanExitController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AControllerBase_CanExitController_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AControllerBase, nullptr, "CanExitController", Z_Construct_UFunction_AControllerBase_CanExitController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AControllerBase_CanExitController_Statics::PropPointers), sizeof(ControllerBase_eventCanExitController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AControllerBase_CanExitController_Statics::Function_MetaDataParams), Z_Construct_UFunction_AControllerBase_CanExitController_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ControllerBase_eventCanExitController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AControllerBase_CanExitController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AControllerBase_CanExitController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AControllerBase::execCanExitController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanExitController_Implementation();
	P_NATIVE_END;
}
// ********** End Class AControllerBase Function CanExitController *********************************

// ********** Begin Class AControllerBase Function OnBeginState ************************************
static FName NAME_AControllerBase_OnBeginState = FName(TEXT("OnBeginState"));
void AControllerBase::OnBeginState()
{
	UFunction* Func = FindFunctionChecked(NAME_AControllerBase_OnBeginState);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AControllerBase_OnBeginState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "StateData_Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Method called when the State and the StateManager are ready. Call instead of BeginPlay().\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/ControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Method called when the State and the StateManager are ready. Call instead of BeginPlay()." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AControllerBase_OnBeginState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AControllerBase, nullptr, "OnBeginState", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AControllerBase_OnBeginState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AControllerBase_OnBeginState_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AControllerBase_OnBeginState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AControllerBase_OnBeginState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AControllerBase::execOnBeginState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBeginState_Implementation();
	P_NATIVE_END;
}
// ********** End Class AControllerBase Function OnBeginState **************************************

// ********** Begin Class AControllerBase Function OnExit ******************************************
static FName NAME_AControllerBase_OnExit = FName(TEXT("OnExit"));
void AControllerBase::OnExit()
{
	UFunction* Func = FindFunctionChecked(NAME_AControllerBase_OnExit);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AControllerBase_OnExit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "StateData_Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Function called when the State is changed for exiting the controller.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/ControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function called when the State is changed for exiting the controller." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AControllerBase_OnExit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AControllerBase, nullptr, "OnExit", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AControllerBase_OnExit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AControllerBase_OnExit_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AControllerBase_OnExit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AControllerBase_OnExit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AControllerBase::execOnExit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnExit_Implementation();
	P_NATIVE_END;
}
// ********** End Class AControllerBase Function OnExit ********************************************

// ********** Begin Class AControllerBase Function OnStart *****************************************
static FName NAME_AControllerBase_OnStart = FName(TEXT("OnStart"));
void AControllerBase::OnStart()
{
	UFunction* Func = FindFunctionChecked(NAME_AControllerBase_OnStart);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AControllerBase_OnStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "StateData_Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Function called when the State is changed for starting the controller.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/ControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function called when the State is changed for starting the controller." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AControllerBase_OnStart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AControllerBase, nullptr, "OnStart", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AControllerBase_OnStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_AControllerBase_OnStart_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AControllerBase_OnStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AControllerBase_OnStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AControllerBase::execOnStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStart_Implementation();
	P_NATIVE_END;
}
// ********** End Class AControllerBase Function OnStart *******************************************

// ********** Begin Class AControllerBase Function OnUpdateState ***********************************
struct ControllerBase_eventOnUpdateState_Parms
{
	float a_DeltaTime;
};
static FName NAME_AControllerBase_OnUpdateState = FName(TEXT("OnUpdateState"));
void AControllerBase::OnUpdateState(float a_DeltaTime)
{
	ControllerBase_eventOnUpdateState_Parms Parms;
	Parms.a_DeltaTime=a_DeltaTime;
	UFunction* Func = FindFunctionChecked(NAME_AControllerBase_OnUpdateState);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AControllerBase_OnUpdateState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "StateData_Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Function called when the State is updated.\n\x09 * @param a_DeltaTime Game time elapsed during last frame modified by the time dilation\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/ControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function called when the State is updated.\n@param a_DeltaTime Game time elapsed during last frame modified by the time dilation" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_a_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AControllerBase_OnUpdateState_Statics::NewProp_a_DeltaTime = { "a_DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControllerBase_eventOnUpdateState_Parms, a_DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AControllerBase_OnUpdateState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControllerBase_OnUpdateState_Statics::NewProp_a_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AControllerBase_OnUpdateState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AControllerBase_OnUpdateState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AControllerBase, nullptr, "OnUpdateState", Z_Construct_UFunction_AControllerBase_OnUpdateState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AControllerBase_OnUpdateState_Statics::PropPointers), sizeof(ControllerBase_eventOnUpdateState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AControllerBase_OnUpdateState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AControllerBase_OnUpdateState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ControllerBase_eventOnUpdateState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AControllerBase_OnUpdateState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AControllerBase_OnUpdateState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AControllerBase::execOnUpdateState)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_a_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnUpdateState_Implementation(Z_Param_a_DeltaTime);
	P_NATIVE_END;
}
// ********** End Class AControllerBase Function OnUpdateState *************************************

// ********** Begin Class AControllerBase Function ReinitIfMatches *********************************
struct ControllerBase_eventReinitIfMatches_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	ControllerBase_eventReinitIfMatches_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_AControllerBase_ReinitIfMatches = FName(TEXT("ReinitIfMatches"));
bool AControllerBase::ReinitIfMatches()
{
	ControllerBase_eventReinitIfMatches_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_AControllerBase_ReinitIfMatches);
	ProcessEvent(Func,&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_AControllerBase_ReinitIfMatches_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "StateData_Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets whether the controller must reinitialize when changed the state if the controller hasn't changed.\n\x09 * @return True if must reinitialize the controller when the state is changed, even if the controller is the same.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/ControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets whether the controller must reinitialize when changed the state if the controller hasn't changed.\n@return True if must reinitialize the controller when the state is changed, even if the controller is the same." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AControllerBase_ReinitIfMatches_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ControllerBase_eventReinitIfMatches_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AControllerBase_ReinitIfMatches_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ControllerBase_eventReinitIfMatches_Parms), &Z_Construct_UFunction_AControllerBase_ReinitIfMatches_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AControllerBase_ReinitIfMatches_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControllerBase_ReinitIfMatches_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AControllerBase_ReinitIfMatches_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AControllerBase_ReinitIfMatches_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AControllerBase, nullptr, "ReinitIfMatches", Z_Construct_UFunction_AControllerBase_ReinitIfMatches_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AControllerBase_ReinitIfMatches_Statics::PropPointers), sizeof(ControllerBase_eventReinitIfMatches_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AControllerBase_ReinitIfMatches_Statics::Function_MetaDataParams), Z_Construct_UFunction_AControllerBase_ReinitIfMatches_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ControllerBase_eventReinitIfMatches_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AControllerBase_ReinitIfMatches()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AControllerBase_ReinitIfMatches_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AControllerBase::execReinitIfMatches)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ReinitIfMatches_Implementation();
	P_NATIVE_END;
}
// ********** End Class AControllerBase Function ReinitIfMatches ***********************************

// ********** Begin Class AControllerBase **********************************************************
void AControllerBase::StaticRegisterNativesAControllerBase()
{
	UClass* Class = AControllerBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanEnterController", &AControllerBase::execCanEnterController },
		{ "CanExitController", &AControllerBase::execCanExitController },
		{ "OnBeginState", &AControllerBase::execOnBeginState },
		{ "OnExit", &AControllerBase::execOnExit },
		{ "OnStart", &AControllerBase::execOnStart },
		{ "OnUpdateState", &AControllerBase::execOnUpdateState },
		{ "ReinitIfMatches", &AControllerBase::execReinitIfMatches },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AControllerBase;
UClass* AControllerBase::GetPrivateStaticClass()
{
	using TClass = AControllerBase;
	if (!Z_Registration_Info_UClass_AControllerBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ControllerBase"),
			Z_Registration_Info_UClass_AControllerBase.InnerSingleton,
			StaticRegisterNativesAControllerBase,
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
	return Z_Registration_Info_UClass_AControllerBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AControllerBase_NoRegister()
{
	return AControllerBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AControllerBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base for all Controllers.\n */" },
#endif
		{ "IncludePath", "Controllers/ControllerBase.h" },
		{ "ModuleRelativePath", "Controllers/ControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base for all Controllers." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_ReinitIfMatchesTargetController_MetaData[] = {
		{ "Category", "Controller" },
		{ "ModuleRelativePath", "Controllers/ControllerBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_m_ReinitIfMatchesTargetController_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_m_ReinitIfMatchesTargetController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AControllerBase_CanEnterController, "CanEnterController" }, // 3395041655
		{ &Z_Construct_UFunction_AControllerBase_CanExitController, "CanExitController" }, // 1851129532
		{ &Z_Construct_UFunction_AControllerBase_OnBeginState, "OnBeginState" }, // 583090742
		{ &Z_Construct_UFunction_AControllerBase_OnExit, "OnExit" }, // 376482150
		{ &Z_Construct_UFunction_AControllerBase_OnStart, "OnStart" }, // 1262461130
		{ &Z_Construct_UFunction_AControllerBase_OnUpdateState, "OnUpdateState" }, // 1079474360
		{ &Z_Construct_UFunction_AControllerBase_ReinitIfMatches, "ReinitIfMatches" }, // 4208079380
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AControllerBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AControllerBase_Statics::NewProp_m_ReinitIfMatchesTargetController_SetBit(void* Obj)
{
	((AControllerBase*)Obj)->m_ReinitIfMatchesTargetController = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AControllerBase_Statics::NewProp_m_ReinitIfMatchesTargetController = { "m_ReinitIfMatchesTargetController", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AControllerBase), &Z_Construct_UClass_AControllerBase_Statics::NewProp_m_ReinitIfMatchesTargetController_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_ReinitIfMatchesTargetController_MetaData), NewProp_m_ReinitIfMatchesTargetController_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AControllerBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControllerBase_Statics::NewProp_m_ReinitIfMatchesTargetController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AControllerBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AControllerBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AControllerBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AControllerBase_Statics::ClassParams = {
	&AControllerBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AControllerBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AControllerBase_Statics::PropPointers),
	0,
	0x008001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AControllerBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AControllerBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AControllerBase()
{
	if (!Z_Registration_Info_UClass_AControllerBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AControllerBase.OuterSingleton, Z_Construct_UClass_AControllerBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AControllerBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AControllerBase);
// ********** End Class AControllerBase ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_ControllerBase_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AControllerBase, AControllerBase::StaticClass, TEXT("AControllerBase"), &Z_Registration_Info_UClass_AControllerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AControllerBase), 372756643U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_ControllerBase_h__Script_PartyJungle_2046279271(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_ControllerBase_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_ControllerBase_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
