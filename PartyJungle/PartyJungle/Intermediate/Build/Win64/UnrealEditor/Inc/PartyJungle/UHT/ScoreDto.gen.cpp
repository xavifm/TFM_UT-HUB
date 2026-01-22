// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Player/Scores/ScoreDto.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeScoreDto() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PARTYJUNGLE_API UClass* Z_Construct_UClass_UScoreDto();
PARTYJUNGLE_API UClass* Z_Construct_UClass_UScoreDto_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UScoreDto ****************************************************************
void UScoreDto::StaticRegisterNativesUScoreDto()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UScoreDto;
UClass* UScoreDto::GetPrivateStaticClass()
{
	using TClass = UScoreDto;
	if (!Z_Registration_Info_UClass_UScoreDto.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ScoreDto"),
			Z_Registration_Info_UClass_UScoreDto.InnerSingleton,
			StaticRegisterNativesUScoreDto,
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
	return Z_Registration_Info_UClass_UScoreDto.InnerSingleton;
}
UClass* Z_Construct_UClass_UScoreDto_NoRegister()
{
	return UScoreDto::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UScoreDto_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Player/Scores/ScoreDto.h" },
		{ "ModuleRelativePath", "Player/Scores/ScoreDto.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Team_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Player/Scores/ScoreDto.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalPosition_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Player/Scores/ScoreDto.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalCoins_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Player/Scores/ScoreDto.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StoredCrowns_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Player/Scores/ScoreDto.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Team;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GlobalPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalCoins;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StoredCrowns;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScoreDto>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UScoreDto_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScoreDto, Team), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Team_MetaData), NewProp_Team_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UScoreDto_Statics::NewProp_GlobalPosition = { "GlobalPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScoreDto, GlobalPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalPosition_MetaData), NewProp_GlobalPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UScoreDto_Statics::NewProp_TotalCoins = { "TotalCoins", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScoreDto, TotalCoins), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalCoins_MetaData), NewProp_TotalCoins_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UScoreDto_Statics::NewProp_StoredCrowns = { "StoredCrowns", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScoreDto, StoredCrowns), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StoredCrowns_MetaData), NewProp_StoredCrowns_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScoreDto_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScoreDto_Statics::NewProp_Team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScoreDto_Statics::NewProp_GlobalPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScoreDto_Statics::NewProp_TotalCoins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScoreDto_Statics::NewProp_StoredCrowns,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScoreDto_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UScoreDto_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScoreDto_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UScoreDto_Statics::ClassParams = {
	&UScoreDto::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UScoreDto_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UScoreDto_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UScoreDto_Statics::Class_MetaDataParams), Z_Construct_UClass_UScoreDto_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UScoreDto()
{
	if (!Z_Registration_Info_UClass_UScoreDto.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScoreDto.OuterSingleton, Z_Construct_UClass_UScoreDto_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UScoreDto.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UScoreDto);
UScoreDto::~UScoreDto() {}
// ********** End Class UScoreDto ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Scores_ScoreDto_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UScoreDto, UScoreDto::StaticClass, TEXT("UScoreDto"), &Z_Registration_Info_UClass_UScoreDto, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScoreDto), 2749638242U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Scores_ScoreDto_h__Script_PartyJungle_3505292727(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Scores_ScoreDto_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Scores_ScoreDto_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
