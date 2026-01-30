// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Minigame/CrossInfo/TeamsGenerator.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTeamsGenerator() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ATeamsGenerator();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ATeamsGenerator_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATeamsGenerator **********************************************************
void ATeamsGenerator::StaticRegisterNativesATeamsGenerator()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATeamsGenerator;
UClass* ATeamsGenerator::GetPrivateStaticClass()
{
	using TClass = ATeamsGenerator;
	if (!Z_Registration_Info_UClass_ATeamsGenerator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TeamsGenerator"),
			Z_Registration_Info_UClass_ATeamsGenerator.InnerSingleton,
			StaticRegisterNativesATeamsGenerator,
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
	return Z_Registration_Info_UClass_ATeamsGenerator.InnerSingleton;
}
UClass* Z_Construct_UClass_ATeamsGenerator_NoRegister()
{
	return ATeamsGenerator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATeamsGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Minigame/CrossInfo/TeamsGenerator.h" },
		{ "ModuleRelativePath", "Minigame/CrossInfo/TeamsGenerator.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeamsGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATeamsGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATeamsGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATeamsGenerator_Statics::ClassParams = {
	&ATeamsGenerator::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATeamsGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_ATeamsGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATeamsGenerator()
{
	if (!Z_Registration_Info_UClass_ATeamsGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATeamsGenerator.OuterSingleton, Z_Construct_UClass_ATeamsGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATeamsGenerator.OuterSingleton;
}
ATeamsGenerator::ATeamsGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATeamsGenerator);
ATeamsGenerator::~ATeamsGenerator() {}
// ********** End Class ATeamsGenerator ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_TeamsGenerator_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATeamsGenerator, ATeamsGenerator::StaticClass, TEXT("ATeamsGenerator"), &Z_Registration_Info_UClass_ATeamsGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATeamsGenerator), 602925839U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_TeamsGenerator_h__Script_PartyJungle_264499524(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_TeamsGenerator_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_TeamsGenerator_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
