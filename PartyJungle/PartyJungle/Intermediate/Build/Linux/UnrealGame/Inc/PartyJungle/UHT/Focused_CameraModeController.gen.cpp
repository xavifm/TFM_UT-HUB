// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Controllers/CameraControllers/CameraModeControllers/Focused_CameraModeController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFocused_CameraModeController() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ACameraModeControllerBase();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AFocused_CameraModeController();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AFocused_CameraModeController_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFocused_CameraModeController Function OnMinionChanged *******************
struct Z_Construct_UFunction_AFocused_CameraModeController_OnMinionChanged_Statics
{
	struct Focused_CameraModeController_eventOnMinionChanged_Parms
	{
		int32 a_PlayerId;
		int32 a_OldMinionId;
		int32 a_NewMinionId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Method called when the Minion changes.\n\x09 * @param a_PlayerId Id of the Current Player.\n\x09 * @param a_OldMinionId Id of the Old Minion.\n\x09 * @param a_NewMinionId Id of the New Minion.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/CameraControllers/CameraModeControllers/Focused_CameraModeController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Method called when the Minion changes.\n@param a_PlayerId Id of the Current Player.\n@param a_OldMinionId Id of the Old Minion.\n@param a_NewMinionId Id of the New Minion." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_PlayerId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_OldMinionId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_NewMinionId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFocused_CameraModeController_OnMinionChanged_Statics::NewProp_a_PlayerId = { "a_PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Focused_CameraModeController_eventOnMinionChanged_Parms, a_PlayerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFocused_CameraModeController_OnMinionChanged_Statics::NewProp_a_OldMinionId = { "a_OldMinionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Focused_CameraModeController_eventOnMinionChanged_Parms, a_OldMinionId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFocused_CameraModeController_OnMinionChanged_Statics::NewProp_a_NewMinionId = { "a_NewMinionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Focused_CameraModeController_eventOnMinionChanged_Parms, a_NewMinionId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFocused_CameraModeController_OnMinionChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFocused_CameraModeController_OnMinionChanged_Statics::NewProp_a_PlayerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFocused_CameraModeController_OnMinionChanged_Statics::NewProp_a_OldMinionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFocused_CameraModeController_OnMinionChanged_Statics::NewProp_a_NewMinionId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFocused_CameraModeController_OnMinionChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFocused_CameraModeController_OnMinionChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFocused_CameraModeController, nullptr, "OnMinionChanged", Z_Construct_UFunction_AFocused_CameraModeController_OnMinionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFocused_CameraModeController_OnMinionChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFocused_CameraModeController_OnMinionChanged_Statics::Focused_CameraModeController_eventOnMinionChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFocused_CameraModeController_OnMinionChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFocused_CameraModeController_OnMinionChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFocused_CameraModeController_OnMinionChanged_Statics::Focused_CameraModeController_eventOnMinionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFocused_CameraModeController_OnMinionChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFocused_CameraModeController_OnMinionChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFocused_CameraModeController::execOnMinionChanged)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_a_PlayerId);
	P_GET_PROPERTY(FIntProperty,Z_Param_a_OldMinionId);
	P_GET_PROPERTY(FIntProperty,Z_Param_a_NewMinionId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMinionChanged(Z_Param_a_PlayerId,Z_Param_a_OldMinionId,Z_Param_a_NewMinionId);
	P_NATIVE_END;
}
// ********** End Class AFocused_CameraModeController Function OnMinionChanged *********************

// ********** Begin Class AFocused_CameraModeController Function OnPlayerChanged *******************
struct Z_Construct_UFunction_AFocused_CameraModeController_OnPlayerChanged_Statics
{
	struct Focused_CameraModeController_eventOnPlayerChanged_Parms
	{
		int32 a_OldPlayerId;
		int32 a_NewPlayerId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Method called when the Player changes.\n\x09 * @param a_OldPlayerId Id of the Old Player.\n\x09 * @param a_NewPlayerId Id of the New Player.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/CameraControllers/CameraModeControllers/Focused_CameraModeController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Method called when the Player changes.\n@param a_OldPlayerId Id of the Old Player.\n@param a_NewPlayerId Id of the New Player." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_OldPlayerId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_NewPlayerId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFocused_CameraModeController_OnPlayerChanged_Statics::NewProp_a_OldPlayerId = { "a_OldPlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Focused_CameraModeController_eventOnPlayerChanged_Parms, a_OldPlayerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFocused_CameraModeController_OnPlayerChanged_Statics::NewProp_a_NewPlayerId = { "a_NewPlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Focused_CameraModeController_eventOnPlayerChanged_Parms, a_NewPlayerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFocused_CameraModeController_OnPlayerChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFocused_CameraModeController_OnPlayerChanged_Statics::NewProp_a_OldPlayerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFocused_CameraModeController_OnPlayerChanged_Statics::NewProp_a_NewPlayerId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFocused_CameraModeController_OnPlayerChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFocused_CameraModeController_OnPlayerChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFocused_CameraModeController, nullptr, "OnPlayerChanged", Z_Construct_UFunction_AFocused_CameraModeController_OnPlayerChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFocused_CameraModeController_OnPlayerChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFocused_CameraModeController_OnPlayerChanged_Statics::Focused_CameraModeController_eventOnPlayerChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFocused_CameraModeController_OnPlayerChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFocused_CameraModeController_OnPlayerChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFocused_CameraModeController_OnPlayerChanged_Statics::Focused_CameraModeController_eventOnPlayerChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFocused_CameraModeController_OnPlayerChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFocused_CameraModeController_OnPlayerChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFocused_CameraModeController::execOnPlayerChanged)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_a_OldPlayerId);
	P_GET_PROPERTY(FIntProperty,Z_Param_a_NewPlayerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayerChanged(Z_Param_a_OldPlayerId,Z_Param_a_NewPlayerId);
	P_NATIVE_END;
}
// ********** End Class AFocused_CameraModeController Function OnPlayerChanged *********************

// ********** Begin Class AFocused_CameraModeController Function OnUpdateState_Implementation ******
struct Z_Construct_UFunction_AFocused_CameraModeController_OnUpdateState_Implementation_Statics
{
	struct Focused_CameraModeController_eventOnUpdateState_Implementation_Parms
	{
		float a_DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "FocusedCamera_Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Function called when the State is updated.\n\x09 * @param a_DeltaTime Game time elapsed during last frame modified by the time dilation\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/CameraControllers/CameraModeControllers/Focused_CameraModeController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function called when the State is updated.\n@param a_DeltaTime Game time elapsed during last frame modified by the time dilation" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_a_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFocused_CameraModeController_OnUpdateState_Implementation_Statics::NewProp_a_DeltaTime = { "a_DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Focused_CameraModeController_eventOnUpdateState_Implementation_Parms, a_DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFocused_CameraModeController_OnUpdateState_Implementation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFocused_CameraModeController_OnUpdateState_Implementation_Statics::NewProp_a_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFocused_CameraModeController_OnUpdateState_Implementation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFocused_CameraModeController_OnUpdateState_Implementation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFocused_CameraModeController, nullptr, "OnUpdateState_Implementation", Z_Construct_UFunction_AFocused_CameraModeController_OnUpdateState_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFocused_CameraModeController_OnUpdateState_Implementation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFocused_CameraModeController_OnUpdateState_Implementation_Statics::Focused_CameraModeController_eventOnUpdateState_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFocused_CameraModeController_OnUpdateState_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFocused_CameraModeController_OnUpdateState_Implementation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFocused_CameraModeController_OnUpdateState_Implementation_Statics::Focused_CameraModeController_eventOnUpdateState_Implementation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFocused_CameraModeController_OnUpdateState_Implementation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFocused_CameraModeController_OnUpdateState_Implementation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFocused_CameraModeController::execOnUpdateState_Implementation)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_a_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnUpdateState_Implementation(Z_Param_a_DeltaTime);
	P_NATIVE_END;
}
// ********** End Class AFocused_CameraModeController Function OnUpdateState_Implementation ********

// ********** Begin Class AFocused_CameraModeController ********************************************
void AFocused_CameraModeController::StaticRegisterNativesAFocused_CameraModeController()
{
	UClass* Class = AFocused_CameraModeController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnMinionChanged", &AFocused_CameraModeController::execOnMinionChanged },
		{ "OnPlayerChanged", &AFocused_CameraModeController::execOnPlayerChanged },
		{ "OnUpdateState_Implementation", &AFocused_CameraModeController::execOnUpdateState_Implementation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFocused_CameraModeController;
UClass* AFocused_CameraModeController::GetPrivateStaticClass()
{
	using TClass = AFocused_CameraModeController;
	if (!Z_Registration_Info_UClass_AFocused_CameraModeController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Focused_CameraModeController"),
			Z_Registration_Info_UClass_AFocused_CameraModeController.InnerSingleton,
			StaticRegisterNativesAFocused_CameraModeController,
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
	return Z_Registration_Info_UClass_AFocused_CameraModeController.InnerSingleton;
}
UClass* Z_Construct_UClass_AFocused_CameraModeController_NoRegister()
{
	return AFocused_CameraModeController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFocused_CameraModeController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Controller for each Camera in Focused Camera Mode.\n */" },
#endif
		{ "IncludePath", "Controllers/CameraControllers/CameraModeControllers/Focused_CameraModeController.h" },
		{ "ModuleRelativePath", "Controllers/CameraControllers/CameraModeControllers/Focused_CameraModeController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controller for each Camera in Focused Camera Mode." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_DistanceToTarget_MetaData[] = {
		{ "Category", "CameraData" },
		{ "ModuleRelativePath", "Controllers/CameraControllers/CameraModeControllers/Focused_CameraModeController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_m_DistanceToTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFocused_CameraModeController_OnMinionChanged, "OnMinionChanged" }, // 617041373
		{ &Z_Construct_UFunction_AFocused_CameraModeController_OnPlayerChanged, "OnPlayerChanged" }, // 2604705489
		{ &Z_Construct_UFunction_AFocused_CameraModeController_OnUpdateState_Implementation, "OnUpdateState_Implementation" }, // 4217182607
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFocused_CameraModeController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFocused_CameraModeController_Statics::NewProp_m_DistanceToTarget = { "m_DistanceToTarget", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFocused_CameraModeController, m_DistanceToTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_DistanceToTarget_MetaData), NewProp_m_DistanceToTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFocused_CameraModeController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFocused_CameraModeController_Statics::NewProp_m_DistanceToTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFocused_CameraModeController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFocused_CameraModeController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACameraModeControllerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFocused_CameraModeController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFocused_CameraModeController_Statics::ClassParams = {
	&AFocused_CameraModeController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFocused_CameraModeController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFocused_CameraModeController_Statics::PropPointers),
	0,
	0x008001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFocused_CameraModeController_Statics::Class_MetaDataParams), Z_Construct_UClass_AFocused_CameraModeController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFocused_CameraModeController()
{
	if (!Z_Registration_Info_UClass_AFocused_CameraModeController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFocused_CameraModeController.OuterSingleton, Z_Construct_UClass_AFocused_CameraModeController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFocused_CameraModeController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFocused_CameraModeController);
AFocused_CameraModeController::~AFocused_CameraModeController() {}
// ********** End Class AFocused_CameraModeController **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraModeControllers_Focused_CameraModeController_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFocused_CameraModeController, AFocused_CameraModeController::StaticClass, TEXT("AFocused_CameraModeController"), &Z_Registration_Info_UClass_AFocused_CameraModeController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFocused_CameraModeController), 17427923U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraModeControllers_Focused_CameraModeController_h__Script_PartyJungle_4256051114(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraModeControllers_Focused_CameraModeController_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraModeControllers_Focused_CameraModeController_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
