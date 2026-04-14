// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Controllers/GameLoopControllers/WinnerSequence_GLController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWinnerSequence_GLController() {}

// ********** Begin Cross Module References ********************************************************
PARTYJUNGLE_API UClass* Z_Construct_UClass_AGameLoopControllerBase();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AWinnerSequence_GLController();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AWinnerSequence_GLController_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AWinnerSequence_GLController Function DelayedSceneSwitch *****************
struct Z_Construct_UFunction_AWinnerSequence_GLController_DelayedSceneSwitch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Switch the scene with the chosen delay.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/GameLoopControllers/WinnerSequence_GLController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Switch the scene with the chosen delay." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWinnerSequence_GLController_DelayedSceneSwitch_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWinnerSequence_GLController, nullptr, "DelayedSceneSwitch", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWinnerSequence_GLController_DelayedSceneSwitch_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWinnerSequence_GLController_DelayedSceneSwitch_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AWinnerSequence_GLController_DelayedSceneSwitch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWinnerSequence_GLController_DelayedSceneSwitch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWinnerSequence_GLController::execDelayedSceneSwitch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DelayedSceneSwitch();
	P_NATIVE_END;
}
// ********** End Class AWinnerSequence_GLController Function DelayedSceneSwitch *******************

// ********** Begin Class AWinnerSequence_GLController *********************************************
void AWinnerSequence_GLController::StaticRegisterNativesAWinnerSequence_GLController()
{
	UClass* Class = AWinnerSequence_GLController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DelayedSceneSwitch", &AWinnerSequence_GLController::execDelayedSceneSwitch },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AWinnerSequence_GLController;
UClass* AWinnerSequence_GLController::GetPrivateStaticClass()
{
	using TClass = AWinnerSequence_GLController;
	if (!Z_Registration_Info_UClass_AWinnerSequence_GLController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WinnerSequence_GLController"),
			Z_Registration_Info_UClass_AWinnerSequence_GLController.InnerSingleton,
			StaticRegisterNativesAWinnerSequence_GLController,
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
	return Z_Registration_Info_UClass_AWinnerSequence_GLController.InnerSingleton;
}
UClass* Z_Construct_UClass_AWinnerSequence_GLController_NoRegister()
{
	return AWinnerSequence_GLController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AWinnerSequence_GLController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Controller for the 'WinnerSequence' GameLoop.\n */" },
#endif
		{ "IncludePath", "Controllers/GameLoopControllers/WinnerSequence_GLController.h" },
		{ "ModuleRelativePath", "Controllers/GameLoopControllers/WinnerSequence_GLController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controller for the 'WinnerSequence' GameLoop." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWinnerSequence_GLController_DelayedSceneSwitch, "DelayedSceneSwitch" }, // 1030171148
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWinnerSequence_GLController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AWinnerSequence_GLController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameLoopControllerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWinnerSequence_GLController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWinnerSequence_GLController_Statics::ClassParams = {
	&AWinnerSequence_GLController::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWinnerSequence_GLController_Statics::Class_MetaDataParams), Z_Construct_UClass_AWinnerSequence_GLController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWinnerSequence_GLController()
{
	if (!Z_Registration_Info_UClass_AWinnerSequence_GLController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWinnerSequence_GLController.OuterSingleton, Z_Construct_UClass_AWinnerSequence_GLController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWinnerSequence_GLController.OuterSingleton;
}
AWinnerSequence_GLController::AWinnerSequence_GLController() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWinnerSequence_GLController);
AWinnerSequence_GLController::~AWinnerSequence_GLController() {}
// ********** End Class AWinnerSequence_GLController ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_WinnerSequence_GLController_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWinnerSequence_GLController, AWinnerSequence_GLController::StaticClass, TEXT("AWinnerSequence_GLController"), &Z_Registration_Info_UClass_AWinnerSequence_GLController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWinnerSequence_GLController), 1730384005U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_WinnerSequence_GLController_h__Script_PartyJungle_1134890980(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_WinnerSequence_GLController_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_WinnerSequence_GLController_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
