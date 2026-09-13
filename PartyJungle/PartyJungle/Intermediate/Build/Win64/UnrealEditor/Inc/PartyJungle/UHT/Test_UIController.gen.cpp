// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Controllers/UIControllers/Test_UIController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTest_UIController() {}

// ********** Begin Cross Module References ********************************************************
PARTYJUNGLE_API UClass* Z_Construct_UClass_ADefault_UIController();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ATest_UIController();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ATest_UIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATest_UIController *******************************************************
void ATest_UIController::StaticRegisterNativesATest_UIController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATest_UIController;
UClass* ATest_UIController::GetPrivateStaticClass()
{
	using TClass = ATest_UIController;
	if (!Z_Registration_Info_UClass_ATest_UIController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Test_UIController"),
			Z_Registration_Info_UClass_ATest_UIController.InnerSingleton,
			StaticRegisterNativesATest_UIController,
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
	return Z_Registration_Info_UClass_ATest_UIController.InnerSingleton;
}
UClass* Z_Construct_UClass_ATest_UIController_NoRegister()
{
	return ATest_UIController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATest_UIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Controllers/UIControllers/Test_UIController.h" },
		{ "ModuleRelativePath", "Controllers/UIControllers/Test_UIController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATest_UIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATest_UIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ADefault_UIController,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATest_UIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATest_UIController_Statics::ClassParams = {
	&ATest_UIController::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATest_UIController_Statics::Class_MetaDataParams), Z_Construct_UClass_ATest_UIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATest_UIController()
{
	if (!Z_Registration_Info_UClass_ATest_UIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATest_UIController.OuterSingleton, Z_Construct_UClass_ATest_UIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATest_UIController.OuterSingleton;
}
ATest_UIController::ATest_UIController() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATest_UIController);
ATest_UIController::~ATest_UIController() {}
// ********** End Class ATest_UIController *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_Test_UIController_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATest_UIController, ATest_UIController::StaticClass, TEXT("ATest_UIController"), &Z_Registration_Info_UClass_ATest_UIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATest_UIController), 2853477264U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_Test_UIController_h__Script_PartyJungle_3977073074(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_Test_UIController_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_Test_UIController_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
