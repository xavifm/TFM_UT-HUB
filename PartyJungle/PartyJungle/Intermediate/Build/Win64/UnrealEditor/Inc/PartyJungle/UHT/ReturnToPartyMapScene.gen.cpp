// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Testing/ReturnToPartyMapScene.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReturnToPartyMapScene() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AReturnToPartyMapScene();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AReturnToPartyMapScene_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// End Cross Module References

// Begin Class AReturnToPartyMapScene
void AReturnToPartyMapScene::StaticRegisterNativesAReturnToPartyMapScene()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AReturnToPartyMapScene);
UClass* Z_Construct_UClass_AReturnToPartyMapScene_NoRegister()
{
	return AReturnToPartyMapScene::StaticClass();
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
	0x009000A4u,
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
template<> PARTYJUNGLE_API UClass* StaticClass<AReturnToPartyMapScene>()
{
	return AReturnToPartyMapScene::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AReturnToPartyMapScene);
AReturnToPartyMapScene::~AReturnToPartyMapScene() {}
// End Class AReturnToPartyMapScene

// Begin Registration
struct Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Testing_ReturnToPartyMapScene_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AReturnToPartyMapScene, AReturnToPartyMapScene::StaticClass, TEXT("AReturnToPartyMapScene"), &Z_Registration_Info_UClass_AReturnToPartyMapScene, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AReturnToPartyMapScene), 3341368520U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Testing_ReturnToPartyMapScene_h_2266084505(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Testing_ReturnToPartyMapScene_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Testing_ReturnToPartyMapScene_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
