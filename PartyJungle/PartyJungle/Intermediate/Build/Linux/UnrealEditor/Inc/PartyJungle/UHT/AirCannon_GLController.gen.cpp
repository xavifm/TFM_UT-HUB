// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Controllers/GameLoopControllers/AirCannon_GLController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAirCannon_GLController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AAirCannon_GLController();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AAirCannon_GLController_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AAirCannon_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ADuelBase_GameLoopController();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAirCannon_GLController Function SetCameraTarget *************************
struct Z_Construct_UFunction_AAirCannon_GLController_SetCameraTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minigame_functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the Camera Target.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/GameLoopControllers/AirCannon_GLController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the Camera Target." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAirCannon_GLController_SetCameraTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAirCannon_GLController, nullptr, "SetCameraTarget", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAirCannon_GLController_SetCameraTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAirCannon_GLController_SetCameraTarget_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AAirCannon_GLController_SetCameraTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAirCannon_GLController_SetCameraTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAirCannon_GLController::execSetCameraTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCameraTarget();
	P_NATIVE_END;
}
// ********** End Class AAirCannon_GLController Function SetCameraTarget ***************************

// ********** Begin Class AAirCannon_GLController Function SetupAirCannonsInfo *********************
struct Z_Construct_UFunction_AAirCannon_GLController_SetupAirCannonsInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cannons_functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Initializes the Air Cannons Info.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/GameLoopControllers/AirCannon_GLController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initializes the Air Cannons Info." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAirCannon_GLController_SetupAirCannonsInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAirCannon_GLController, nullptr, "SetupAirCannonsInfo", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAirCannon_GLController_SetupAirCannonsInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAirCannon_GLController_SetupAirCannonsInfo_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AAirCannon_GLController_SetupAirCannonsInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAirCannon_GLController_SetupAirCannonsInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAirCannon_GLController::execSetupAirCannonsInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupAirCannonsInfo();
	P_NATIVE_END;
}
// ********** End Class AAirCannon_GLController Function SetupAirCannonsInfo ***********************

// ********** Begin Class AAirCannon_GLController Function StartCannonsCharge **********************
struct Z_Construct_UFunction_AAirCannon_GLController_StartCannonsCharge_Statics
{
	struct AirCannon_GLController_eventStartCannonsCharge_Parms
	{
		float a_Time;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cannons_functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Starts to charge the AirCannons.\n\x09 * @param a_Time Time to charge the AirCannons.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/GameLoopControllers/AirCannon_GLController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Starts to charge the AirCannons.\n@param a_Time Time to charge the AirCannons." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_a_Time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAirCannon_GLController_StartCannonsCharge_Statics::NewProp_a_Time = { "a_Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirCannon_GLController_eventStartCannonsCharge_Parms, a_Time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAirCannon_GLController_StartCannonsCharge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAirCannon_GLController_StartCannonsCharge_Statics::NewProp_a_Time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAirCannon_GLController_StartCannonsCharge_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAirCannon_GLController_StartCannonsCharge_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAirCannon_GLController, nullptr, "StartCannonsCharge", Z_Construct_UFunction_AAirCannon_GLController_StartCannonsCharge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAirCannon_GLController_StartCannonsCharge_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAirCannon_GLController_StartCannonsCharge_Statics::AirCannon_GLController_eventStartCannonsCharge_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAirCannon_GLController_StartCannonsCharge_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAirCannon_GLController_StartCannonsCharge_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAirCannon_GLController_StartCannonsCharge_Statics::AirCannon_GLController_eventStartCannonsCharge_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAirCannon_GLController_StartCannonsCharge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAirCannon_GLController_StartCannonsCharge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAirCannon_GLController::execStartCannonsCharge)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_a_Time);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartCannonsCharge(Z_Param_a_Time);
	P_NATIVE_END;
}
// ********** End Class AAirCannon_GLController Function StartCannonsCharge ************************

// ********** Begin Class AAirCannon_GLController **************************************************
void AAirCannon_GLController::StaticRegisterNativesAAirCannon_GLController()
{
	UClass* Class = AAirCannon_GLController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetCameraTarget", &AAirCannon_GLController::execSetCameraTarget },
		{ "SetupAirCannonsInfo", &AAirCannon_GLController::execSetupAirCannonsInfo },
		{ "StartCannonsCharge", &AAirCannon_GLController::execStartCannonsCharge },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAirCannon_GLController;
UClass* AAirCannon_GLController::GetPrivateStaticClass()
{
	using TClass = AAirCannon_GLController;
	if (!Z_Registration_Info_UClass_AAirCannon_GLController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AirCannon_GLController"),
			Z_Registration_Info_UClass_AAirCannon_GLController.InnerSingleton,
			StaticRegisterNativesAAirCannon_GLController,
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
	return Z_Registration_Info_UClass_AAirCannon_GLController.InnerSingleton;
}
UClass* Z_Construct_UClass_AAirCannon_GLController_NoRegister()
{
	return AAirCannon_GLController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAirCannon_GLController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Controller for the 'AirCannon' GameLoop.\n */" },
#endif
		{ "IncludePath", "Controllers/GameLoopControllers/AirCannon_GLController.h" },
		{ "ModuleRelativePath", "Controllers/GameLoopControllers/AirCannon_GLController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controller for the 'AirCannon' GameLoop." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_OriginalCameraTarget_MetaData[] = {
		{ "Category", "Cannons_camera" },
		{ "ModuleRelativePath", "Controllers/GameLoopControllers/AirCannon_GLController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_AirCannons_MetaData[] = {
		{ "Category", "Cannons" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Original Target of the Camera.\n" },
#endif
		{ "ModuleRelativePath", "Controllers/GameLoopControllers/AirCannon_GLController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Original Target of the Camera." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_CannonChargeTime_MetaData[] = {
		{ "Category", "Cannons_parameters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Array with all the AirCannons.\n" },
#endif
		{ "ModuleRelativePath", "Controllers/GameLoopControllers/AirCannon_GLController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Array with all the AirCannons." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_OriginalCameraTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_AirCannons_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_m_AirCannons;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_m_CannonChargeTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAirCannon_GLController_SetCameraTarget, "SetCameraTarget" }, // 1758457614
		{ &Z_Construct_UFunction_AAirCannon_GLController_SetupAirCannonsInfo, "SetupAirCannonsInfo" }, // 1063592911
		{ &Z_Construct_UFunction_AAirCannon_GLController_StartCannonsCharge, "StartCannonsCharge" }, // 2683406285
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAirCannon_GLController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAirCannon_GLController_Statics::NewProp_m_OriginalCameraTarget = { "m_OriginalCameraTarget", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAirCannon_GLController, m_OriginalCameraTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_OriginalCameraTarget_MetaData), NewProp_m_OriginalCameraTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAirCannon_GLController_Statics::NewProp_m_AirCannons_Inner = { "m_AirCannons", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AAirCannon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAirCannon_GLController_Statics::NewProp_m_AirCannons = { "m_AirCannons", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAirCannon_GLController, m_AirCannons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_AirCannons_MetaData), NewProp_m_AirCannons_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAirCannon_GLController_Statics::NewProp_m_CannonChargeTime = { "m_CannonChargeTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAirCannon_GLController, m_CannonChargeTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_CannonChargeTime_MetaData), NewProp_m_CannonChargeTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAirCannon_GLController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirCannon_GLController_Statics::NewProp_m_OriginalCameraTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirCannon_GLController_Statics::NewProp_m_AirCannons_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirCannon_GLController_Statics::NewProp_m_AirCannons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirCannon_GLController_Statics::NewProp_m_CannonChargeTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAirCannon_GLController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAirCannon_GLController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ADuelBase_GameLoopController,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAirCannon_GLController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAirCannon_GLController_Statics::ClassParams = {
	&AAirCannon_GLController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAirCannon_GLController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAirCannon_GLController_Statics::PropPointers),
	0,
	0x008001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAirCannon_GLController_Statics::Class_MetaDataParams), Z_Construct_UClass_AAirCannon_GLController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAirCannon_GLController()
{
	if (!Z_Registration_Info_UClass_AAirCannon_GLController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAirCannon_GLController.OuterSingleton, Z_Construct_UClass_AAirCannon_GLController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAirCannon_GLController.OuterSingleton;
}
AAirCannon_GLController::AAirCannon_GLController() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAirCannon_GLController);
AAirCannon_GLController::~AAirCannon_GLController() {}
// ********** End Class AAirCannon_GLController ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_AirCannon_GLController_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAirCannon_GLController, AAirCannon_GLController::StaticClass, TEXT("AAirCannon_GLController"), &Z_Registration_Info_UClass_AAirCannon_GLController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAirCannon_GLController), 94341745U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_AirCannon_GLController_h__Script_PartyJungle_2208396112(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_AirCannon_GLController_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_AirCannon_GLController_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
