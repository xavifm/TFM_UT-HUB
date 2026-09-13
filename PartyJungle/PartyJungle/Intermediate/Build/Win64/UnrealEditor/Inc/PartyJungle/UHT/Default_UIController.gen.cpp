// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Controllers/UIControllers/Default_UIController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDefault_UIController() {}

// ********** Begin Cross Module References ********************************************************
PARTYJUNGLE_API UClass* Z_Construct_UClass_ADefault_UIController();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ADefault_UIController_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AUIControllerBase();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ADefault_UIController ****************************************************
void ADefault_UIController::StaticRegisterNativesADefault_UIController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADefault_UIController;
UClass* ADefault_UIController::GetPrivateStaticClass()
{
	using TClass = ADefault_UIController;
	if (!Z_Registration_Info_UClass_ADefault_UIController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Default_UIController"),
			Z_Registration_Info_UClass_ADefault_UIController.InnerSingleton,
			StaticRegisterNativesADefault_UIController,
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
	return Z_Registration_Info_UClass_ADefault_UIController.InnerSingleton;
}
UClass* Z_Construct_UClass_ADefault_UIController_NoRegister()
{
	return ADefault_UIController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADefault_UIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Controllers/UIControllers/Default_UIController.h" },
		{ "ModuleRelativePath", "Controllers/UIControllers/Default_UIController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefault_UIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADefault_UIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AUIControllerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADefault_UIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADefault_UIController_Statics::ClassParams = {
	&ADefault_UIController::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADefault_UIController_Statics::Class_MetaDataParams), Z_Construct_UClass_ADefault_UIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADefault_UIController()
{
	if (!Z_Registration_Info_UClass_ADefault_UIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADefault_UIController.OuterSingleton, Z_Construct_UClass_ADefault_UIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADefault_UIController.OuterSingleton;
}
ADefault_UIController::ADefault_UIController() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADefault_UIController);
ADefault_UIController::~ADefault_UIController() {}
// ********** End Class ADefault_UIController ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_Default_UIController_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADefault_UIController, ADefault_UIController::StaticClass, TEXT("ADefault_UIController"), &Z_Registration_Info_UClass_ADefault_UIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADefault_UIController), 1207947916U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_Default_UIController_h__Script_PartyJungle_1190077676(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_Default_UIController_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_Default_UIController_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
