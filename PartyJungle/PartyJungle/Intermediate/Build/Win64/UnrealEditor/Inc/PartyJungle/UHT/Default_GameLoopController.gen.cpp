// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Controllers/GameLoopControllers/Default_GameLoopController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDefault_GameLoopController() {}

// ********** Begin Cross Module References ********************************************************
PARTYJUNGLE_API UClass* Z_Construct_UClass_ADefault_GameLoopController();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ADefault_GameLoopController_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AGameLoopControllerBase();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ADefault_GameLoopController **********************************************
void ADefault_GameLoopController::StaticRegisterNativesADefault_GameLoopController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADefault_GameLoopController;
UClass* ADefault_GameLoopController::GetPrivateStaticClass()
{
	using TClass = ADefault_GameLoopController;
	if (!Z_Registration_Info_UClass_ADefault_GameLoopController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Default_GameLoopController"),
			Z_Registration_Info_UClass_ADefault_GameLoopController.InnerSingleton,
			StaticRegisterNativesADefault_GameLoopController,
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
	return Z_Registration_Info_UClass_ADefault_GameLoopController.InnerSingleton;
}
UClass* Z_Construct_UClass_ADefault_GameLoopController_NoRegister()
{
	return ADefault_GameLoopController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADefault_GameLoopController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Controller for the main GameLoop.\n */" },
#endif
		{ "IncludePath", "Controllers/GameLoopControllers/Default_GameLoopController.h" },
		{ "ModuleRelativePath", "Controllers/GameLoopControllers/Default_GameLoopController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controller for the main GameLoop." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefault_GameLoopController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADefault_GameLoopController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameLoopControllerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADefault_GameLoopController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADefault_GameLoopController_Statics::ClassParams = {
	&ADefault_GameLoopController::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADefault_GameLoopController_Statics::Class_MetaDataParams), Z_Construct_UClass_ADefault_GameLoopController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADefault_GameLoopController()
{
	if (!Z_Registration_Info_UClass_ADefault_GameLoopController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADefault_GameLoopController.OuterSingleton, Z_Construct_UClass_ADefault_GameLoopController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADefault_GameLoopController.OuterSingleton;
}
ADefault_GameLoopController::ADefault_GameLoopController() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADefault_GameLoopController);
ADefault_GameLoopController::~ADefault_GameLoopController() {}
// ********** End Class ADefault_GameLoopController ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_Default_GameLoopController_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADefault_GameLoopController, ADefault_GameLoopController::StaticClass, TEXT("ADefault_GameLoopController"), &Z_Registration_Info_UClass_ADefault_GameLoopController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADefault_GameLoopController), 3587609566U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_Default_GameLoopController_h__Script_PartyJungle_1109907230(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_Default_GameLoopController_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_Default_GameLoopController_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
