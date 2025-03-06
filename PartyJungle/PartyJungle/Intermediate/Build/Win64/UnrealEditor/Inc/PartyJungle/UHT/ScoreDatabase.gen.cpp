// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Player/Scores/ScoreDatabase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScoreDatabase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AScoreDatabase();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AScoreDatabase_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_UScoreDto_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// End Cross Module References

// Begin Class AScoreDatabase Function GetScore
struct Z_Construct_UFunction_AScoreDatabase_GetScore_Statics
{
	struct ScoreDatabase_eventGetScore_Parms
	{
		int32 PlayerID;
		UScoreDto* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Player/Scores/ScoreDatabase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AScoreDatabase_GetScore_Statics::NewProp_PlayerID = { "PlayerID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScoreDatabase_eventGetScore_Parms, PlayerID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AScoreDatabase_GetScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScoreDatabase_eventGetScore_Parms, ReturnValue), Z_Construct_UClass_UScoreDto_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScoreDatabase_GetScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScoreDatabase_GetScore_Statics::NewProp_PlayerID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScoreDatabase_GetScore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreDatabase_GetScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScoreDatabase_GetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScoreDatabase, nullptr, "GetScore", nullptr, nullptr, Z_Construct_UFunction_AScoreDatabase_GetScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreDatabase_GetScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_AScoreDatabase_GetScore_Statics::ScoreDatabase_eventGetScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreDatabase_GetScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_AScoreDatabase_GetScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AScoreDatabase_GetScore_Statics::ScoreDatabase_eventGetScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AScoreDatabase_GetScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScoreDatabase_GetScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AScoreDatabase::execGetScore)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UScoreDto**)Z_Param__Result=P_THIS->GetScore(Z_Param_PlayerID);
	P_NATIVE_END;
}
// End Class AScoreDatabase Function GetScore

// Begin Class AScoreDatabase Function GetScoreList
struct Z_Construct_UFunction_AScoreDatabase_GetScoreList_Statics
{
	struct ScoreDatabase_eventGetScoreList_Parms
	{
		TMap<int32,UScoreDto*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Player/Scores/ScoreDatabase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AScoreDatabase_GetScoreList_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UScoreDto_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AScoreDatabase_GetScoreList_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AScoreDatabase_GetScoreList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScoreDatabase_eventGetScoreList_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScoreDatabase_GetScoreList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScoreDatabase_GetScoreList_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScoreDatabase_GetScoreList_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScoreDatabase_GetScoreList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreDatabase_GetScoreList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScoreDatabase_GetScoreList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScoreDatabase, nullptr, "GetScoreList", nullptr, nullptr, Z_Construct_UFunction_AScoreDatabase_GetScoreList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreDatabase_GetScoreList_Statics::PropPointers), sizeof(Z_Construct_UFunction_AScoreDatabase_GetScoreList_Statics::ScoreDatabase_eventGetScoreList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreDatabase_GetScoreList_Statics::Function_MetaDataParams), Z_Construct_UFunction_AScoreDatabase_GetScoreList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AScoreDatabase_GetScoreList_Statics::ScoreDatabase_eventGetScoreList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AScoreDatabase_GetScoreList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScoreDatabase_GetScoreList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AScoreDatabase::execGetScoreList)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<int32,UScoreDto*>*)Z_Param__Result=P_THIS->GetScoreList();
	P_NATIVE_END;
}
// End Class AScoreDatabase Function GetScoreList

// Begin Class AScoreDatabase Function UpdateCrowns
struct Z_Construct_UFunction_AScoreDatabase_UpdateCrowns_Statics
{
	struct ScoreDatabase_eventUpdateCrowns_Parms
	{
		int32 PlayerID;
		int32 Quantity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Player/Scores/ScoreDatabase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AScoreDatabase_UpdateCrowns_Statics::NewProp_PlayerID = { "PlayerID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScoreDatabase_eventUpdateCrowns_Parms, PlayerID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AScoreDatabase_UpdateCrowns_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScoreDatabase_eventUpdateCrowns_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScoreDatabase_UpdateCrowns_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScoreDatabase_UpdateCrowns_Statics::NewProp_PlayerID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScoreDatabase_UpdateCrowns_Statics::NewProp_Quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreDatabase_UpdateCrowns_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScoreDatabase_UpdateCrowns_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScoreDatabase, nullptr, "UpdateCrowns", nullptr, nullptr, Z_Construct_UFunction_AScoreDatabase_UpdateCrowns_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreDatabase_UpdateCrowns_Statics::PropPointers), sizeof(Z_Construct_UFunction_AScoreDatabase_UpdateCrowns_Statics::ScoreDatabase_eventUpdateCrowns_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreDatabase_UpdateCrowns_Statics::Function_MetaDataParams), Z_Construct_UFunction_AScoreDatabase_UpdateCrowns_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AScoreDatabase_UpdateCrowns_Statics::ScoreDatabase_eventUpdateCrowns_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AScoreDatabase_UpdateCrowns()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScoreDatabase_UpdateCrowns_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AScoreDatabase::execUpdateCrowns)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerID);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateCrowns(Z_Param_PlayerID,Z_Param_Quantity);
	P_NATIVE_END;
}
// End Class AScoreDatabase Function UpdateCrowns

// Begin Class AScoreDatabase Function UpdateGlobalPositions
struct Z_Construct_UFunction_AScoreDatabase_UpdateGlobalPositions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Player/Scores/ScoreDatabase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScoreDatabase_UpdateGlobalPositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScoreDatabase, nullptr, "UpdateGlobalPositions", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreDatabase_UpdateGlobalPositions_Statics::Function_MetaDataParams), Z_Construct_UFunction_AScoreDatabase_UpdateGlobalPositions_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AScoreDatabase_UpdateGlobalPositions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScoreDatabase_UpdateGlobalPositions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AScoreDatabase::execUpdateGlobalPositions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateGlobalPositions();
	P_NATIVE_END;
}
// End Class AScoreDatabase Function UpdateGlobalPositions

// Begin Class AScoreDatabase Function UpdateTotalCoins
struct Z_Construct_UFunction_AScoreDatabase_UpdateTotalCoins_Statics
{
	struct ScoreDatabase_eventUpdateTotalCoins_Parms
	{
		int32 PlayerID;
		int32 Quantity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Player/Scores/ScoreDatabase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AScoreDatabase_UpdateTotalCoins_Statics::NewProp_PlayerID = { "PlayerID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScoreDatabase_eventUpdateTotalCoins_Parms, PlayerID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AScoreDatabase_UpdateTotalCoins_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScoreDatabase_eventUpdateTotalCoins_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScoreDatabase_UpdateTotalCoins_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScoreDatabase_UpdateTotalCoins_Statics::NewProp_PlayerID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScoreDatabase_UpdateTotalCoins_Statics::NewProp_Quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreDatabase_UpdateTotalCoins_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScoreDatabase_UpdateTotalCoins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScoreDatabase, nullptr, "UpdateTotalCoins", nullptr, nullptr, Z_Construct_UFunction_AScoreDatabase_UpdateTotalCoins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreDatabase_UpdateTotalCoins_Statics::PropPointers), sizeof(Z_Construct_UFunction_AScoreDatabase_UpdateTotalCoins_Statics::ScoreDatabase_eventUpdateTotalCoins_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreDatabase_UpdateTotalCoins_Statics::Function_MetaDataParams), Z_Construct_UFunction_AScoreDatabase_UpdateTotalCoins_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AScoreDatabase_UpdateTotalCoins_Statics::ScoreDatabase_eventUpdateTotalCoins_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AScoreDatabase_UpdateTotalCoins()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScoreDatabase_UpdateTotalCoins_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AScoreDatabase::execUpdateTotalCoins)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerID);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateTotalCoins(Z_Param_PlayerID,Z_Param_Quantity);
	P_NATIVE_END;
}
// End Class AScoreDatabase Function UpdateTotalCoins

// Begin Class AScoreDatabase
void AScoreDatabase::StaticRegisterNativesAScoreDatabase()
{
	UClass* Class = AScoreDatabase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetScore", &AScoreDatabase::execGetScore },
		{ "GetScoreList", &AScoreDatabase::execGetScoreList },
		{ "UpdateCrowns", &AScoreDatabase::execUpdateCrowns },
		{ "UpdateGlobalPositions", &AScoreDatabase::execUpdateGlobalPositions },
		{ "UpdateTotalCoins", &AScoreDatabase::execUpdateTotalCoins },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AScoreDatabase);
UClass* Z_Construct_UClass_AScoreDatabase_NoRegister()
{
	return AScoreDatabase::StaticClass();
}
struct Z_Construct_UClass_AScoreDatabase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Player/Scores/ScoreDatabase.h" },
		{ "ModuleRelativePath", "Player/Scores/ScoreDatabase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AScoreDatabase_GetScore, "GetScore" }, // 3601885371
		{ &Z_Construct_UFunction_AScoreDatabase_GetScoreList, "GetScoreList" }, // 3515459381
		{ &Z_Construct_UFunction_AScoreDatabase_UpdateCrowns, "UpdateCrowns" }, // 1180231647
		{ &Z_Construct_UFunction_AScoreDatabase_UpdateGlobalPositions, "UpdateGlobalPositions" }, // 1910635123
		{ &Z_Construct_UFunction_AScoreDatabase_UpdateTotalCoins, "UpdateTotalCoins" }, // 404980849
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScoreDatabase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AScoreDatabase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AScoreDatabase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AScoreDatabase_Statics::ClassParams = {
	&AScoreDatabase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AScoreDatabase_Statics::Class_MetaDataParams), Z_Construct_UClass_AScoreDatabase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AScoreDatabase()
{
	if (!Z_Registration_Info_UClass_AScoreDatabase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AScoreDatabase.OuterSingleton, Z_Construct_UClass_AScoreDatabase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AScoreDatabase.OuterSingleton;
}
template<> PARTYJUNGLE_API UClass* StaticClass<AScoreDatabase>()
{
	return AScoreDatabase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AScoreDatabase);
AScoreDatabase::~AScoreDatabase() {}
// End Class AScoreDatabase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Scores_ScoreDatabase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AScoreDatabase, AScoreDatabase::StaticClass, TEXT("AScoreDatabase"), &Z_Registration_Info_UClass_AScoreDatabase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AScoreDatabase), 778683154U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Scores_ScoreDatabase_h_1187867798(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Scores_ScoreDatabase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Scores_ScoreDatabase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
