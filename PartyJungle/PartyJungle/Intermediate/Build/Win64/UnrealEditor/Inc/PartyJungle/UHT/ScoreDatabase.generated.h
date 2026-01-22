// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/Scores/ScoreDatabase.h"

#ifdef PARTYJUNGLE_ScoreDatabase_generated_h
#error "ScoreDatabase.generated.h already included, missing '#pragma once' in ScoreDatabase.h"
#endif
#define PARTYJUNGLE_ScoreDatabase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UScoreDto;

// ********** Begin Class AScoreDatabase ***********************************************************
#define FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Scores_ScoreDatabase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateCrowns); \
	DECLARE_FUNCTION(execUpdateTotalCoins); \
	DECLARE_FUNCTION(execUpdateGlobalPositions); \
	DECLARE_FUNCTION(execGetScore); \
	DECLARE_FUNCTION(execSendTransactionsAndScoresToInstance); \
	DECLARE_FUNCTION(execAddTransactionToRegistry); \
	DECLARE_FUNCTION(execGetScoresArray);


PARTYJUNGLE_API UClass* Z_Construct_UClass_AScoreDatabase_NoRegister();

#define FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Scores_ScoreDatabase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAScoreDatabase(); \
	friend struct Z_Construct_UClass_AScoreDatabase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_AScoreDatabase_NoRegister(); \
public: \
	DECLARE_CLASS2(AScoreDatabase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_AScoreDatabase_NoRegister) \
	DECLARE_SERIALIZER(AScoreDatabase)


#define FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Scores_ScoreDatabase_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AScoreDatabase(AScoreDatabase&&) = delete; \
	AScoreDatabase(const AScoreDatabase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AScoreDatabase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScoreDatabase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AScoreDatabase) \
	NO_API virtual ~AScoreDatabase();


#define FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Scores_ScoreDatabase_h_9_PROLOG
#define FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Scores_ScoreDatabase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Scores_ScoreDatabase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Scores_ScoreDatabase_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Scores_ScoreDatabase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AScoreDatabase;

// ********** End Class AScoreDatabase *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Scores_ScoreDatabase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
