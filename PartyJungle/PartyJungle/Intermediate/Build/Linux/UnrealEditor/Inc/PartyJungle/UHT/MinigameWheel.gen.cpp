// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/UIManager/MInigames/MinigameWheel.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMinigameWheel() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinigameWheel();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinigameWheel_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMinigameWheel ***********************************************************
void AMinigameWheel::StaticRegisterNativesAMinigameWheel()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMinigameWheel;
UClass* AMinigameWheel::GetPrivateStaticClass()
{
	using TClass = AMinigameWheel;
	if (!Z_Registration_Info_UClass_AMinigameWheel.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MinigameWheel"),
			Z_Registration_Info_UClass_AMinigameWheel.InnerSingleton,
			StaticRegisterNativesAMinigameWheel,
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
	return Z_Registration_Info_UClass_AMinigameWheel.InnerSingleton;
}
UClass* Z_Construct_UClass_AMinigameWheel_NoRegister()
{
	return AMinigameWheel::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMinigameWheel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UIManager/MInigames/MinigameWheel.h" },
		{ "ModuleRelativePath", "UIManager/MInigames/MinigameWheel.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinigameWheel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMinigameWheel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinigameWheel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMinigameWheel_Statics::ClassParams = {
	&AMinigameWheel::StaticClass,
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
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinigameWheel_Statics::Class_MetaDataParams), Z_Construct_UClass_AMinigameWheel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMinigameWheel()
{
	if (!Z_Registration_Info_UClass_AMinigameWheel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMinigameWheel.OuterSingleton, Z_Construct_UClass_AMinigameWheel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMinigameWheel.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMinigameWheel);
AMinigameWheel::~AMinigameWheel() {}
// ********** End Class AMinigameWheel *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_UIManager_MInigames_MinigameWheel_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMinigameWheel, AMinigameWheel::StaticClass, TEXT("AMinigameWheel"), &Z_Registration_Info_UClass_AMinigameWheel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMinigameWheel), 1230475341U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_UIManager_MInigames_MinigameWheel_h__Script_PartyJungle_2057918967(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_UIManager_MInigames_MinigameWheel_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_UIManager_MInigames_MinigameWheel_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
