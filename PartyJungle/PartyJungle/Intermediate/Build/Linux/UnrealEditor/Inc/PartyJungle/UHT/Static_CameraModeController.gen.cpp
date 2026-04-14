// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Controllers/CameraControllers/CameraModeControllers/Static_CameraModeController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeStatic_CameraModeController() {}

// ********** Begin Cross Module References ********************************************************
PARTYJUNGLE_API UClass* Z_Construct_UClass_ACameraModeControllerBase();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AStatic_CameraModeController();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AStatic_CameraModeController_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AStatic_CameraModeController *********************************************
void AStatic_CameraModeController::StaticRegisterNativesAStatic_CameraModeController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AStatic_CameraModeController;
UClass* AStatic_CameraModeController::GetPrivateStaticClass()
{
	using TClass = AStatic_CameraModeController;
	if (!Z_Registration_Info_UClass_AStatic_CameraModeController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Static_CameraModeController"),
			Z_Registration_Info_UClass_AStatic_CameraModeController.InnerSingleton,
			StaticRegisterNativesAStatic_CameraModeController,
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
	return Z_Registration_Info_UClass_AStatic_CameraModeController.InnerSingleton;
}
UClass* Z_Construct_UClass_AStatic_CameraModeController_NoRegister()
{
	return AStatic_CameraModeController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AStatic_CameraModeController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Controller for each Camera in Static Camera Mode.\n */" },
#endif
		{ "IncludePath", "Controllers/CameraControllers/CameraModeControllers/Static_CameraModeController.h" },
		{ "ModuleRelativePath", "Controllers/CameraControllers/CameraModeControllers/Static_CameraModeController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controller for each Camera in Static Camera Mode." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStatic_CameraModeController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AStatic_CameraModeController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACameraModeControllerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStatic_CameraModeController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AStatic_CameraModeController_Statics::ClassParams = {
	&AStatic_CameraModeController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStatic_CameraModeController_Statics::Class_MetaDataParams), Z_Construct_UClass_AStatic_CameraModeController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AStatic_CameraModeController()
{
	if (!Z_Registration_Info_UClass_AStatic_CameraModeController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStatic_CameraModeController.OuterSingleton, Z_Construct_UClass_AStatic_CameraModeController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AStatic_CameraModeController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AStatic_CameraModeController);
AStatic_CameraModeController::~AStatic_CameraModeController() {}
// ********** End Class AStatic_CameraModeController ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraModeControllers_Static_CameraModeController_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AStatic_CameraModeController, AStatic_CameraModeController::StaticClass, TEXT("AStatic_CameraModeController"), &Z_Registration_Info_UClass_AStatic_CameraModeController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStatic_CameraModeController), 4205385651U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraModeControllers_Static_CameraModeController_h__Script_PartyJungle_3844171325(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraModeControllers_Static_CameraModeController_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraModeControllers_Static_CameraModeController_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
