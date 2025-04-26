// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/EndGame/Scores/ScoresCalculator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScoresCalculator() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AScoresCalculator();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AScoresCalculator_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_UChallengeDto_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_UScoreDto_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_UTransactionDto_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// End Cross Module References

// Begin Class AScoresCalculator Function AddCrownToTeam
struct Z_Construct_UFunction_AScoresCalculator_AddCrownToTeam_Statics
{
	struct ScoresCalculator_eventAddCrownToTeam_Parms
	{
		int32 _team;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EndGame/Scores/ScoresCalculator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__team;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AScoresCalculator_AddCrownToTeam_Statics::NewProp__team = { "_team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScoresCalculator_eventAddCrownToTeam_Parms, _team), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScoresCalculator_AddCrownToTeam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScoresCalculator_AddCrownToTeam_Statics::NewProp__team,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoresCalculator_AddCrownToTeam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScoresCalculator_AddCrownToTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScoresCalculator, nullptr, "AddCrownToTeam", nullptr, nullptr, Z_Construct_UFunction_AScoresCalculator_AddCrownToTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AScoresCalculator_AddCrownToTeam_Statics::PropPointers), sizeof(Z_Construct_UFunction_AScoresCalculator_AddCrownToTeam_Statics::ScoresCalculator_eventAddCrownToTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoresCalculator_AddCrownToTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_AScoresCalculator_AddCrownToTeam_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AScoresCalculator_AddCrownToTeam_Statics::ScoresCalculator_eventAddCrownToTeam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AScoresCalculator_AddCrownToTeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScoresCalculator_AddCrownToTeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AScoresCalculator::execAddCrownToTeam)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__team);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddCrownToTeam(Z_Param__team);
	P_NATIVE_END;
}
// End Class AScoresCalculator Function AddCrownToTeam

// Begin Class AScoresCalculator Function CompensationCrown
struct Z_Construct_UFunction_AScoresCalculator_CompensationCrown_Statics
{
	struct ScoresCalculator_eventCompensationCrown_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EndGame/Scores/ScoresCalculator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AScoresCalculator_CompensationCrown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScoresCalculator_eventCompensationCrown_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScoresCalculator_CompensationCrown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScoresCalculator_CompensationCrown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoresCalculator_CompensationCrown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScoresCalculator_CompensationCrown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScoresCalculator, nullptr, "CompensationCrown", nullptr, nullptr, Z_Construct_UFunction_AScoresCalculator_CompensationCrown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AScoresCalculator_CompensationCrown_Statics::PropPointers), sizeof(Z_Construct_UFunction_AScoresCalculator_CompensationCrown_Statics::ScoresCalculator_eventCompensationCrown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoresCalculator_CompensationCrown_Statics::Function_MetaDataParams), Z_Construct_UFunction_AScoresCalculator_CompensationCrown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AScoresCalculator_CompensationCrown_Statics::ScoresCalculator_eventCompensationCrown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AScoresCalculator_CompensationCrown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScoresCalculator_CompensationCrown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AScoresCalculator::execCompensationCrown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->CompensationCrown();
	P_NATIVE_END;
}
// End Class AScoresCalculator Function CompensationCrown

// Begin Class AScoresCalculator Function GetBestDuelingTeam
struct Z_Construct_UFunction_AScoresCalculator_GetBestDuelingTeam_Statics
{
	struct ScoresCalculator_eventGetBestDuelingTeam_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EndGame/Scores/ScoresCalculator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AScoresCalculator_GetBestDuelingTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScoresCalculator_eventGetBestDuelingTeam_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScoresCalculator_GetBestDuelingTeam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScoresCalculator_GetBestDuelingTeam_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoresCalculator_GetBestDuelingTeam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScoresCalculator_GetBestDuelingTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScoresCalculator, nullptr, "GetBestDuelingTeam", nullptr, nullptr, Z_Construct_UFunction_AScoresCalculator_GetBestDuelingTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AScoresCalculator_GetBestDuelingTeam_Statics::PropPointers), sizeof(Z_Construct_UFunction_AScoresCalculator_GetBestDuelingTeam_Statics::ScoresCalculator_eventGetBestDuelingTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoresCalculator_GetBestDuelingTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_AScoresCalculator_GetBestDuelingTeam_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AScoresCalculator_GetBestDuelingTeam_Statics::ScoresCalculator_eventGetBestDuelingTeam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AScoresCalculator_GetBestDuelingTeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScoresCalculator_GetBestDuelingTeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AScoresCalculator::execGetBestDuelingTeam)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetBestDuelingTeam();
	P_NATIVE_END;
}
// End Class AScoresCalculator Function GetBestDuelingTeam

// Begin Class AScoresCalculator Function GetWinnerTeam
struct Z_Construct_UFunction_AScoresCalculator_GetWinnerTeam_Statics
{
	struct ScoresCalculator_eventGetWinnerTeam_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EndGame/Scores/ScoresCalculator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AScoresCalculator_GetWinnerTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScoresCalculator_eventGetWinnerTeam_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScoresCalculator_GetWinnerTeam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScoresCalculator_GetWinnerTeam_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoresCalculator_GetWinnerTeam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScoresCalculator_GetWinnerTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScoresCalculator, nullptr, "GetWinnerTeam", nullptr, nullptr, Z_Construct_UFunction_AScoresCalculator_GetWinnerTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AScoresCalculator_GetWinnerTeam_Statics::PropPointers), sizeof(Z_Construct_UFunction_AScoresCalculator_GetWinnerTeam_Statics::ScoresCalculator_eventGetWinnerTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoresCalculator_GetWinnerTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_AScoresCalculator_GetWinnerTeam_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AScoresCalculator_GetWinnerTeam_Statics::ScoresCalculator_eventGetWinnerTeam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AScoresCalculator_GetWinnerTeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScoresCalculator_GetWinnerTeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AScoresCalculator::execGetWinnerTeam)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetWinnerTeam();
	P_NATIVE_END;
}
// End Class AScoresCalculator Function GetWinnerTeam

// Begin Class AScoresCalculator Function GetWorstDuelingTeam
struct Z_Construct_UFunction_AScoresCalculator_GetWorstDuelingTeam_Statics
{
	struct ScoresCalculator_eventGetWorstDuelingTeam_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EndGame/Scores/ScoresCalculator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AScoresCalculator_GetWorstDuelingTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScoresCalculator_eventGetWorstDuelingTeam_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScoresCalculator_GetWorstDuelingTeam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScoresCalculator_GetWorstDuelingTeam_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoresCalculator_GetWorstDuelingTeam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScoresCalculator_GetWorstDuelingTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScoresCalculator, nullptr, "GetWorstDuelingTeam", nullptr, nullptr, Z_Construct_UFunction_AScoresCalculator_GetWorstDuelingTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AScoresCalculator_GetWorstDuelingTeam_Statics::PropPointers), sizeof(Z_Construct_UFunction_AScoresCalculator_GetWorstDuelingTeam_Statics::ScoresCalculator_eventGetWorstDuelingTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoresCalculator_GetWorstDuelingTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_AScoresCalculator_GetWorstDuelingTeam_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AScoresCalculator_GetWorstDuelingTeam_Statics::ScoresCalculator_eventGetWorstDuelingTeam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AScoresCalculator_GetWorstDuelingTeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScoresCalculator_GetWorstDuelingTeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AScoresCalculator::execGetWorstDuelingTeam)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetWorstDuelingTeam();
	P_NATIVE_END;
}
// End Class AScoresCalculator Function GetWorstDuelingTeam

// Begin Class AScoresCalculator Function InitializeInfo
struct Z_Construct_UFunction_AScoresCalculator_InitializeInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EndGame/Scores/ScoresCalculator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScoresCalculator_InitializeInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScoresCalculator, nullptr, "InitializeInfo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoresCalculator_InitializeInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AScoresCalculator_InitializeInfo_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AScoresCalculator_InitializeInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScoresCalculator_InitializeInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AScoresCalculator::execInitializeInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeInfo();
	P_NATIVE_END;
}
// End Class AScoresCalculator Function InitializeInfo

// Begin Class AScoresCalculator
void AScoresCalculator::StaticRegisterNativesAScoresCalculator()
{
	UClass* Class = AScoresCalculator::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddCrownToTeam", &AScoresCalculator::execAddCrownToTeam },
		{ "CompensationCrown", &AScoresCalculator::execCompensationCrown },
		{ "GetBestDuelingTeam", &AScoresCalculator::execGetBestDuelingTeam },
		{ "GetWinnerTeam", &AScoresCalculator::execGetWinnerTeam },
		{ "GetWorstDuelingTeam", &AScoresCalculator::execGetWorstDuelingTeam },
		{ "InitializeInfo", &AScoresCalculator::execInitializeInfo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AScoresCalculator);
UClass* Z_Construct_UClass_AScoresCalculator_NoRegister()
{
	return AScoresCalculator::StaticClass();
}
struct Z_Construct_UClass_AScoresCalculator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EndGame/Scores/ScoresCalculator.h" },
		{ "ModuleRelativePath", "EndGame/Scores/ScoresCalculator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scores_MetaData[] = {
		{ "Category", "ScoresCalculator" },
		{ "ModuleRelativePath", "EndGame/Scores/ScoresCalculator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransactionsRegistry_MetaData[] = {
		{ "Category", "ScoresCalculator" },
		{ "ModuleRelativePath", "EndGame/Scores/ScoresCalculator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChallengesRegistry_MetaData[] = {
		{ "Category", "ScoresCalculator" },
		{ "ModuleRelativePath", "EndGame/Scores/ScoresCalculator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Scores_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Scores;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TransactionsRegistry_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TransactionsRegistry;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChallengesRegistry_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChallengesRegistry;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AScoresCalculator_AddCrownToTeam, "AddCrownToTeam" }, // 4267701548
		{ &Z_Construct_UFunction_AScoresCalculator_CompensationCrown, "CompensationCrown" }, // 2676698787
		{ &Z_Construct_UFunction_AScoresCalculator_GetBestDuelingTeam, "GetBestDuelingTeam" }, // 2885734977
		{ &Z_Construct_UFunction_AScoresCalculator_GetWinnerTeam, "GetWinnerTeam" }, // 2207523300
		{ &Z_Construct_UFunction_AScoresCalculator_GetWorstDuelingTeam, "GetWorstDuelingTeam" }, // 975867790
		{ &Z_Construct_UFunction_AScoresCalculator_InitializeInfo, "InitializeInfo" }, // 2978383654
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScoresCalculator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScoresCalculator_Statics::NewProp_Scores_Inner = { "Scores", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UScoreDto_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AScoresCalculator_Statics::NewProp_Scores = { "Scores", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScoresCalculator, Scores), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scores_MetaData), NewProp_Scores_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScoresCalculator_Statics::NewProp_TransactionsRegistry_Inner = { "TransactionsRegistry", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTransactionDto_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AScoresCalculator_Statics::NewProp_TransactionsRegistry = { "TransactionsRegistry", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScoresCalculator, TransactionsRegistry), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransactionsRegistry_MetaData), NewProp_TransactionsRegistry_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScoresCalculator_Statics::NewProp_ChallengesRegistry_Inner = { "ChallengesRegistry", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UChallengeDto_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AScoresCalculator_Statics::NewProp_ChallengesRegistry = { "ChallengesRegistry", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScoresCalculator, ChallengesRegistry), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChallengesRegistry_MetaData), NewProp_ChallengesRegistry_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AScoresCalculator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScoresCalculator_Statics::NewProp_Scores_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScoresCalculator_Statics::NewProp_Scores,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScoresCalculator_Statics::NewProp_TransactionsRegistry_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScoresCalculator_Statics::NewProp_TransactionsRegistry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScoresCalculator_Statics::NewProp_ChallengesRegistry_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScoresCalculator_Statics::NewProp_ChallengesRegistry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AScoresCalculator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AScoresCalculator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AScoresCalculator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AScoresCalculator_Statics::ClassParams = {
	&AScoresCalculator::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AScoresCalculator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AScoresCalculator_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AScoresCalculator_Statics::Class_MetaDataParams), Z_Construct_UClass_AScoresCalculator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AScoresCalculator()
{
	if (!Z_Registration_Info_UClass_AScoresCalculator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AScoresCalculator.OuterSingleton, Z_Construct_UClass_AScoresCalculator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AScoresCalculator.OuterSingleton;
}
template<> PARTYJUNGLE_API UClass* StaticClass<AScoresCalculator>()
{
	return AScoresCalculator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AScoresCalculator);
AScoresCalculator::~AScoresCalculator() {}
// End Class AScoresCalculator

// Begin Registration
struct Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_EndGame_Scores_ScoresCalculator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AScoresCalculator, AScoresCalculator::StaticClass, TEXT("AScoresCalculator"), &Z_Registration_Info_UClass_AScoresCalculator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AScoresCalculator), 848108438U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_EndGame_Scores_ScoresCalculator_h_1339583003(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_EndGame_Scores_ScoresCalculator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_EndGame_Scores_ScoresCalculator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
