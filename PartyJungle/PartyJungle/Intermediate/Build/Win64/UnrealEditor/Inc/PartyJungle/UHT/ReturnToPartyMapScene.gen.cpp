// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Testing/ReturnToPartyMapScene.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeReturnToPartyMapScene() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AReturnToPartyMapScene();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AReturnToPartyMapScene_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AReturnToPartyMapScene ***************************************************
void AReturnToPartyMapScene::StaticRegisterNativesAReturnToPartyMapScene()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AReturnToPartyMapScene;
UClass* AReturnToPartyMapScene::GetPrivateStaticClass()
{
	using TClass = AReturnToPartyMapScene;
	if (!Z_Registration_Info_UClass_AReturnToPartyMapScene.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ReturnToPartyMapScene"),
			Z_Registration_Info_UClass_AReturnToPartyMapScene.InnerSingleton,
			StaticRegisterNativesAReturnToPartyMapScene,
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
	return Z_Registration_Info_UClass_AReturnToPartyMapScene.InnerSingleton;
}
UClass* Z_Construct_UClass_AReturnToPartyMapScene_NoRegister()
{
	return AReturnToPartyMapScene::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AReturnToPartyMapScene_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Testing/ReturnToPartyMapScene.h" },
		{ "ModuleRelativePath", "Testing/ReturnToPartyMapScene.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AReturnToPartyMapScene>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AReturnToPartyMapScene_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AReturnToPartyMapScene_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AReturnToPartyMapScene_Statics::ClassParams = {
	&AReturnToPartyMapScene::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AReturnToPartyMapScene_Statics::Class_MetaDataParams), Z_Construct_UClass_AReturnToPartyMapScene_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AReturnToPartyMapScene()
{
	if (!Z_Registration_Info_UClass_AReturnToPartyMapScene.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AReturnToPartyMapScene.OuterSingleton, Z_Construct_UClass_AReturnToPartyMapScene_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AReturnToPartyMapScene.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AReturnToPartyMapScene);
AReturnToPartyMapScene::~AReturnToPartyMapScene() {}
// ********** End Class AReturnToPartyMapScene *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Testing_ReturnToPartyMapScene_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AReturnToPartyMapScene, AReturnToPartyMapScene::StaticClass, TEXT("AReturnToPartyMapScene"), &Z_Registration_Info_UClass_AReturnToPartyMapScene, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AReturnToPartyMapScene), 1420207131U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Testing_ReturnToPartyMapScene_h__Script_PartyJungle_3588665408(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Testing_ReturnToPartyMapScene_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Testing_ReturnToPartyMapScene_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
