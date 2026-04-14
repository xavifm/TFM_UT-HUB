// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Controllers/PlayersControllers/Default_PlayersController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDefault_PlayersController() {}

// ********** Begin Cross Module References ********************************************************
PARTYJUNGLE_API UClass* Z_Construct_UClass_ADefault_PlayersController();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ADefault_PlayersController_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_APlayersControllerBase();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ADefault_PlayersController Function OnLeftJoystick_X *********************
struct Z_Construct_UFunction_ADefault_PlayersController_OnLeftJoystick_X_Statics
{
	struct Default_PlayersController_eventOnLeftJoystick_X_Parms
	{
		float a_Axis;
		int32 a_PlayerId;
		bool a_WasActive;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Method called when the left Joystick's axis X is triggered. It manages the Minion selection.\n\x09 * @param a_Axis Value of the triggered axis.\n\x09 * @param a_PlayerId Id of the Player who triggered the axis.\n\x09 * @param a_WasActive Indicates if the axis was active in the previous frame.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/PlayersControllers/Default_PlayersController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Method called when the left Joystick's axis X is triggered. It manages the Minion selection.\n@param a_Axis Value of the triggered axis.\n@param a_PlayerId Id of the Player who triggered the axis.\n@param a_WasActive Indicates if the axis was active in the previous frame." },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADefault_PlayersController_OnLeftJoystick_X_Statics::NewProp_a_Axis = { "a_Axis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Default_PlayersController_eventOnLeftJoystick_X_Parms, a_Axis), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADefault_PlayersController_OnLeftJoystick_X_Statics::NewProp_a_PlayerId = { "a_PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Default_PlayersController_eventOnLeftJoystick_X_Parms, a_PlayerId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ADefault_PlayersController_OnLeftJoystick_X_Statics::NewProp_a_WasActive_SetBit(void* Obj)
{
	((Default_PlayersController_eventOnLeftJoystick_X_Parms*)Obj)->a_WasActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADefault_PlayersController_OnLeftJoystick_X_Statics::NewProp_a_WasActive = { "a_WasActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Default_PlayersController_eventOnLeftJoystick_X_Parms), &Z_Construct_UFunction_ADefault_PlayersController_OnLeftJoystick_X_Statics::NewProp_a_WasActive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefault_PlayersController_OnLeftJoystick_X_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefault_PlayersController_OnLeftJoystick_X_Statics::NewProp_a_Axis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefault_PlayersController_OnLeftJoystick_X_Statics::NewProp_a_PlayerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefault_PlayersController_OnLeftJoystick_X_Statics::NewProp_a_WasActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADefault_PlayersController_OnLeftJoystick_X_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefault_PlayersController_OnLeftJoystick_X_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADefault_PlayersController, nullptr, "OnLeftJoystick_X", Z_Construct_UFunction_ADefault_PlayersController_OnLeftJoystick_X_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefault_PlayersController_OnLeftJoystick_X_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADefault_PlayersController_OnLeftJoystick_X_Statics::Default_PlayersController_eventOnLeftJoystick_X_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADefault_PlayersController_OnLeftJoystick_X_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADefault_PlayersController_OnLeftJoystick_X_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADefault_PlayersController_OnLeftJoystick_X_Statics::Default_PlayersController_eventOnLeftJoystick_X_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADefault_PlayersController_OnLeftJoystick_X()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADefault_PlayersController_OnLeftJoystick_X_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADefault_PlayersController::execOnLeftJoystick_X)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_a_Axis);
	P_GET_PROPERTY(FIntProperty,Z_Param_a_PlayerId);
	P_GET_UBOOL(Z_Param_a_WasActive);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnLeftJoystick_X(Z_Param_a_Axis,Z_Param_a_PlayerId,Z_Param_a_WasActive);
	P_NATIVE_END;
}
// ********** End Class ADefault_PlayersController Function OnLeftJoystick_X ***********************

// ********** Begin Class ADefault_PlayersController Function OnPlayerChanged **********************
struct Z_Construct_UFunction_ADefault_PlayersController_OnPlayerChanged_Statics
{
	struct Default_PlayersController_eventOnPlayerChanged_Parms
	{
		int32 a_OldPlayerId;
		int32 a_NewPlayerId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Method called when the current Player is changed. It manages which player inputs are active.\n\x09 * @param a_OldPlayerId Previous Player Id.\n\x09 * @param a_NewPlayerId Current Player Id.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/PlayersControllers/Default_PlayersController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Method called when the current Player is changed. It manages which player inputs are active.\n@param a_OldPlayerId Previous Player Id.\n@param a_NewPlayerId Current Player Id." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_OldPlayerId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_NewPlayerId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADefault_PlayersController_OnPlayerChanged_Statics::NewProp_a_OldPlayerId = { "a_OldPlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Default_PlayersController_eventOnPlayerChanged_Parms, a_OldPlayerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADefault_PlayersController_OnPlayerChanged_Statics::NewProp_a_NewPlayerId = { "a_NewPlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Default_PlayersController_eventOnPlayerChanged_Parms, a_NewPlayerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefault_PlayersController_OnPlayerChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefault_PlayersController_OnPlayerChanged_Statics::NewProp_a_OldPlayerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefault_PlayersController_OnPlayerChanged_Statics::NewProp_a_NewPlayerId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADefault_PlayersController_OnPlayerChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefault_PlayersController_OnPlayerChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADefault_PlayersController, nullptr, "OnPlayerChanged", Z_Construct_UFunction_ADefault_PlayersController_OnPlayerChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefault_PlayersController_OnPlayerChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADefault_PlayersController_OnPlayerChanged_Statics::Default_PlayersController_eventOnPlayerChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADefault_PlayersController_OnPlayerChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADefault_PlayersController_OnPlayerChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADefault_PlayersController_OnPlayerChanged_Statics::Default_PlayersController_eventOnPlayerChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADefault_PlayersController_OnPlayerChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADefault_PlayersController_OnPlayerChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADefault_PlayersController::execOnPlayerChanged)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_a_OldPlayerId);
	P_GET_PROPERTY(FIntProperty,Z_Param_a_NewPlayerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayerChanged(Z_Param_a_OldPlayerId,Z_Param_a_NewPlayerId);
	P_NATIVE_END;
}
// ********** End Class ADefault_PlayersController Function OnPlayerChanged ************************

// ********** Begin Class ADefault_PlayersController ***********************************************
void ADefault_PlayersController::StaticRegisterNativesADefault_PlayersController()
{
	UClass* Class = ADefault_PlayersController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnLeftJoystick_X", &ADefault_PlayersController::execOnLeftJoystick_X },
		{ "OnPlayerChanged", &ADefault_PlayersController::execOnPlayerChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADefault_PlayersController;
UClass* ADefault_PlayersController::GetPrivateStaticClass()
{
	using TClass = ADefault_PlayersController;
	if (!Z_Registration_Info_UClass_ADefault_PlayersController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Default_PlayersController"),
			Z_Registration_Info_UClass_ADefault_PlayersController.InnerSingleton,
			StaticRegisterNativesADefault_PlayersController,
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
	return Z_Registration_Info_UClass_ADefault_PlayersController.InnerSingleton;
}
UClass* Z_Construct_UClass_ADefault_PlayersController_NoRegister()
{
	return ADefault_PlayersController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADefault_PlayersController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Default Controller for the Data of all Players in the Game.\n */" },
#endif
		{ "IncludePath", "Controllers/PlayersControllers/Default_PlayersController.h" },
		{ "ModuleRelativePath", "Controllers/PlayersControllers/Default_PlayersController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default Controller for the Data of all Players in the Game." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADefault_PlayersController_OnLeftJoystick_X, "OnLeftJoystick_X" }, // 156323524
		{ &Z_Construct_UFunction_ADefault_PlayersController_OnPlayerChanged, "OnPlayerChanged" }, // 3859913279
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefault_PlayersController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADefault_PlayersController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayersControllerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADefault_PlayersController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADefault_PlayersController_Statics::ClassParams = {
	&ADefault_PlayersController::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADefault_PlayersController_Statics::Class_MetaDataParams), Z_Construct_UClass_ADefault_PlayersController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADefault_PlayersController()
{
	if (!Z_Registration_Info_UClass_ADefault_PlayersController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADefault_PlayersController.OuterSingleton, Z_Construct_UClass_ADefault_PlayersController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADefault_PlayersController.OuterSingleton;
}
ADefault_PlayersController::ADefault_PlayersController() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADefault_PlayersController);
ADefault_PlayersController::~ADefault_PlayersController() {}
// ********** End Class ADefault_PlayersController *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_Default_PlayersController_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADefault_PlayersController, ADefault_PlayersController::StaticClass, TEXT("ADefault_PlayersController"), &Z_Registration_Info_UClass_ADefault_PlayersController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADefault_PlayersController), 3590004844U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_Default_PlayersController_h__Script_PartyJungle_1385433627(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_Default_PlayersController_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_Default_PlayersController_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
