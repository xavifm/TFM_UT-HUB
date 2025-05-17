// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Map/SquareKeepCrowns.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSquareKeepCrowns() {}

// Begin Cross Module References
PARTYJUNGLE_API UClass* Z_Construct_UClass_ASquare();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ASquareKeepCrowns();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ASquareKeepCrowns_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// End Cross Module References

// Begin Class ASquareKeepCrowns
void ASquareKeepCrowns::StaticRegisterNativesASquareKeepCrowns()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASquareKeepCrowns);
UClass* Z_Construct_UClass_ASquareKeepCrowns_NoRegister()
{
	return ASquareKeepCrowns::StaticClass();
}
struct Z_Construct_UClass_ASquareKeepCrowns_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Map/SquareKeepCrowns.h" },
		{ "ModuleRelativePath", "Map/SquareKeepCrowns.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Team_MetaData[] = {
		{ "Category", "SquareProperties" },
		{ "ModuleRelativePath", "Map/SquareKeepCrowns.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Team;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASquareKeepCrowns>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASquareKeepCrowns_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASquareKeepCrowns, Team), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Team_MetaData), NewProp_Team_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASquareKeepCrowns_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquareKeepCrowns_Statics::NewProp_Team,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASquareKeepCrowns_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASquareKeepCrowns_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ASquare,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASquareKeepCrowns_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASquareKeepCrowns_Statics::ClassParams = {
	&ASquareKeepCrowns::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASquareKeepCrowns_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASquareKeepCrowns_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASquareKeepCrowns_Statics::Class_MetaDataParams), Z_Construct_UClass_ASquareKeepCrowns_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASquareKeepCrowns()
{
	if (!Z_Registration_Info_UClass_ASquareKeepCrowns.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASquareKeepCrowns.OuterSingleton, Z_Construct_UClass_ASquareKeepCrowns_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASquareKeepCrowns.OuterSingleton;
}
template<> PARTYJUNGLE_API UClass* StaticClass<ASquareKeepCrowns>()
{
	return ASquareKeepCrowns::StaticClass();
}
ASquareKeepCrowns::ASquareKeepCrowns() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASquareKeepCrowns);
ASquareKeepCrowns::~ASquareKeepCrowns() {}
// End Class ASquareKeepCrowns

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_SquareKeepCrowns_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASquareKeepCrowns, ASquareKeepCrowns::StaticClass, TEXT("ASquareKeepCrowns"), &Z_Registration_Info_UClass_ASquareKeepCrowns, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASquareKeepCrowns), 3376400615U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_SquareKeepCrowns_h_3885595321(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_SquareKeepCrowns_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_SquareKeepCrowns_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
