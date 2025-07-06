// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Player/Scores/TransactionDto.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransactionDto() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PARTYJUNGLE_API UClass* Z_Construct_UClass_UTransactionDto();
PARTYJUNGLE_API UClass* Z_Construct_UClass_UTransactionDto_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// End Cross Module References

// Begin Class UTransactionDto
void UTransactionDto::StaticRegisterNativesUTransactionDto()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTransactionDto);
UClass* Z_Construct_UClass_UTransactionDto_NoRegister()
{
	return UTransactionDto::StaticClass();
}
struct Z_Construct_UClass_UTransactionDto_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Player/Scores/TransactionDto.h" },
		{ "ModuleRelativePath", "Player/Scores/TransactionDto.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Team_MetaData[] = {
		{ "Category", "Transaction" },
		{ "ModuleRelativePath", "Player/Scores/TransactionDto.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Coins_MetaData[] = {
		{ "Category", "Transaction" },
		{ "ModuleRelativePath", "Player/Scores/TransactionDto.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Crowns_MetaData[] = {
		{ "Category", "Transaction" },
		{ "ModuleRelativePath", "Player/Scores/TransactionDto.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Team;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Coins;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Crowns;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTransactionDto>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTransactionDto_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransactionDto, Team), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Team_MetaData), NewProp_Team_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTransactionDto_Statics::NewProp_Coins = { "Coins", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransactionDto, Coins), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Coins_MetaData), NewProp_Coins_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTransactionDto_Statics::NewProp_Crowns = { "Crowns", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransactionDto, Crowns), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Crowns_MetaData), NewProp_Crowns_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTransactionDto_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransactionDto_Statics::NewProp_Team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransactionDto_Statics::NewProp_Coins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransactionDto_Statics::NewProp_Crowns,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTransactionDto_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTransactionDto_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTransactionDto_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTransactionDto_Statics::ClassParams = {
	&UTransactionDto::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTransactionDto_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTransactionDto_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTransactionDto_Statics::Class_MetaDataParams), Z_Construct_UClass_UTransactionDto_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTransactionDto()
{
	if (!Z_Registration_Info_UClass_UTransactionDto.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTransactionDto.OuterSingleton, Z_Construct_UClass_UTransactionDto_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTransactionDto.OuterSingleton;
}
template<> PARTYJUNGLE_API UClass* StaticClass<UTransactionDto>()
{
	return UTransactionDto::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTransactionDto);
UTransactionDto::~UTransactionDto() {}
// End Class UTransactionDto

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Scores_TransactionDto_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTransactionDto, UTransactionDto::StaticClass, TEXT("UTransactionDto"), &Z_Registration_Info_UClass_UTransactionDto, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTransactionDto), 1230244348U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Scores_TransactionDto_h_878253166(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Scores_TransactionDto_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Scores_TransactionDto_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
