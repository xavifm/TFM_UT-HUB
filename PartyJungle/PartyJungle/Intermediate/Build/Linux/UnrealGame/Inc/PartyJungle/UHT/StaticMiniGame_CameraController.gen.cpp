// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Controllers/CameraControllers/StaticMiniGame_CameraController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeStaticMiniGame_CameraController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ACameraControllerBase();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AStaticMiniGame_CameraController();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AStaticMiniGame_CameraController_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AStaticMiniGame_CameraController *****************************************
void AStaticMiniGame_CameraController::StaticRegisterNativesAStaticMiniGame_CameraController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AStaticMiniGame_CameraController;
UClass* AStaticMiniGame_CameraController::GetPrivateStaticClass()
{
	using TClass = AStaticMiniGame_CameraController;
	if (!Z_Registration_Info_UClass_AStaticMiniGame_CameraController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("StaticMiniGame_CameraController"),
			Z_Registration_Info_UClass_AStaticMiniGame_CameraController.InnerSingleton,
			StaticRegisterNativesAStaticMiniGame_CameraController,
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
	return Z_Registration_Info_UClass_AStaticMiniGame_CameraController.InnerSingleton;
}
UClass* Z_Construct_UClass_AStaticMiniGame_CameraController_NoRegister()
{
	return AStaticMiniGame_CameraController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AStaticMiniGame_CameraController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base for the Camera Controller Actors.\n */" },
#endif
		{ "IncludePath", "Controllers/CameraControllers/StaticMiniGame_CameraController.h" },
		{ "ModuleRelativePath", "Controllers/CameraControllers/StaticMiniGame_CameraController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base for the Camera Controller Actors." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_DefaultCameraTarget_MetaData[] = {
		{ "Category", "CameraData" },
		{ "ModuleRelativePath", "Controllers/CameraControllers/StaticMiniGame_CameraController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_DefaultCameraTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStaticMiniGame_CameraController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStaticMiniGame_CameraController_Statics::NewProp_m_DefaultCameraTarget = { "m_DefaultCameraTarget", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStaticMiniGame_CameraController, m_DefaultCameraTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_DefaultCameraTarget_MetaData), NewProp_m_DefaultCameraTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStaticMiniGame_CameraController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStaticMiniGame_CameraController_Statics::NewProp_m_DefaultCameraTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStaticMiniGame_CameraController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AStaticMiniGame_CameraController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACameraControllerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStaticMiniGame_CameraController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AStaticMiniGame_CameraController_Statics::ClassParams = {
	&AStaticMiniGame_CameraController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AStaticMiniGame_CameraController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AStaticMiniGame_CameraController_Statics::PropPointers),
	0,
	0x008001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStaticMiniGame_CameraController_Statics::Class_MetaDataParams), Z_Construct_UClass_AStaticMiniGame_CameraController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AStaticMiniGame_CameraController()
{
	if (!Z_Registration_Info_UClass_AStaticMiniGame_CameraController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStaticMiniGame_CameraController.OuterSingleton, Z_Construct_UClass_AStaticMiniGame_CameraController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AStaticMiniGame_CameraController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AStaticMiniGame_CameraController);
AStaticMiniGame_CameraController::~AStaticMiniGame_CameraController() {}
// ********** End Class AStaticMiniGame_CameraController *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_StaticMiniGame_CameraController_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AStaticMiniGame_CameraController, AStaticMiniGame_CameraController::StaticClass, TEXT("AStaticMiniGame_CameraController"), &Z_Registration_Info_UClass_AStaticMiniGame_CameraController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStaticMiniGame_CameraController), 2726847688U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_StaticMiniGame_CameraController_h__Script_PartyJungle_4034144911(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_StaticMiniGame_CameraController_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_StaticMiniGame_CameraController_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
