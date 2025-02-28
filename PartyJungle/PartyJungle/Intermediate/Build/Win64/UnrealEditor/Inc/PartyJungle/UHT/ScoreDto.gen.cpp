// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Player/Scores/ScoreDto.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScoreDto() {}

// Begin Cross Module References
PARTYJUNGLE_API UScriptStruct* Z_Construct_UScriptStruct_FScoreDto();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// End Cross Module References

// Begin ScriptStruct FScoreDto
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScoreDto;
class UScriptStruct* FScoreDto::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScoreDto.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScoreDto.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScoreDto, (UObject*)Z_Construct_UPackage__Script_PartyJungle(), TEXT("ScoreDto"));
	}
	return Z_Registration_Info_UScriptStruct_ScoreDto.OuterSingleton;
}
template<> PARTYJUNGLE_API UScriptStruct* StaticStruct<FScoreDto>()
{
	return FScoreDto::StaticStruct();
}
struct Z_Construct_UScriptStruct_FScoreDto_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Player/Scores/ScoreDto.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Team_MetaData[] = {
		{ "Category", "ScoreDto" },
		{ "ModuleRelativePath", "Player/Scores/ScoreDto.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalPosition_MetaData[] = {
		{ "Category", "ScoreDto" },
		{ "ModuleRelativePath", "Player/Scores/ScoreDto.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalCoins_MetaData[] = {
		{ "Category", "ScoreDto" },
		{ "ModuleRelativePath", "Player/Scores/ScoreDto.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StoredCrowns_MetaData[] = {
		{ "Category", "ScoreDto" },
		{ "ModuleRelativePath", "Player/Scores/ScoreDto.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Team;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GlobalPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalCoins;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StoredCrowns;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScoreDto>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScoreDto_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScoreDto, Team), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Team_MetaData), NewProp_Team_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScoreDto_Statics::NewProp_GlobalPosition = { "GlobalPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScoreDto, GlobalPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalPosition_MetaData), NewProp_GlobalPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScoreDto_Statics::NewProp_TotalCoins = { "TotalCoins", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScoreDto, TotalCoins), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalCoins_MetaData), NewProp_TotalCoins_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScoreDto_Statics::NewProp_StoredCrowns = { "StoredCrowns", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScoreDto, StoredCrowns), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StoredCrowns_MetaData), NewProp_StoredCrowns_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScoreDto_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreDto_Statics::NewProp_Team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreDto_Statics::NewProp_GlobalPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreDto_Statics::NewProp_TotalCoins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreDto_Statics::NewProp_StoredCrowns,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreDto_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScoreDto_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
	nullptr,
	&NewStructOps,
	"ScoreDto",
	Z_Construct_UScriptStruct_FScoreDto_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreDto_Statics::PropPointers),
	sizeof(FScoreDto),
	alignof(FScoreDto),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreDto_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScoreDto_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FScoreDto()
{
	if (!Z_Registration_Info_UScriptStruct_ScoreDto.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScoreDto.InnerSingleton, Z_Construct_UScriptStruct_FScoreDto_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ScoreDto.InnerSingleton;
}
// End ScriptStruct FScoreDto

// Begin Registration
struct Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Player_Scores_ScoreDto_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FScoreDto::StaticStruct, Z_Construct_UScriptStruct_FScoreDto_Statics::NewStructOps, TEXT("ScoreDto"), &Z_Registration_Info_UScriptStruct_ScoreDto, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScoreDto), 112499376U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Player_Scores_ScoreDto_h_439203471(TEXT("/Script/PartyJungle"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Player_Scores_ScoreDto_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Player_Scores_ScoreDto_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
