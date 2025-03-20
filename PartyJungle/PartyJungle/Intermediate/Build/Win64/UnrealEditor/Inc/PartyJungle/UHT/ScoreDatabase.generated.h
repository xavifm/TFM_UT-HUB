// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/Scores/ScoreDatabase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 class UScoreDto;
class UScoreDto;
#ifdef PARTYJUNGLE_ScoreDatabase_generated_h
#error "ScoreDatabase.generated.h already included, missing '#pragma once' in ScoreDatabase.h"
#endif
#define PARTYJUNGLE_ScoreDatabase_generated_h

#define FID_PartyJungle_Source_PartyJungle_Player_Scores_ScoreDatabase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateCrowns); \
	DECLARE_FUNCTION(execUpdateTotalCoins); \
	DECLARE_FUNCTION(execUpdateGlobalPositions); \
	DECLARE_FUNCTION(execGetScore); \
	DECLARE_FUNCTION(execGetScoreList);


#define FID_PartyJungle_Source_PartyJungle_Player_Scores_ScoreDatabase_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAScoreDatabase(); \
	friend struct Z_Construct_UClass_AScoreDatabase_Statics; \
public: \
	DECLARE_CLASS(AScoreDatabase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), NO_API) \
	DECLARE_SERIALIZER(AScoreDatabase)


#define FID_PartyJungle_Source_PartyJungle_Player_Scores_ScoreDatabase_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AScoreDatabase(AScoreDatabase&&); \
	AScoreDatabase(const AScoreDatabase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AScoreDatabase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScoreDatabase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AScoreDatabase) \
	NO_API virtual ~AScoreDatabase();


#define FID_PartyJungle_Source_PartyJungle_Player_Scores_ScoreDatabase_h_8_PROLOG
#define FID_PartyJungle_Source_PartyJungle_Player_Scores_ScoreDatabase_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PartyJungle_Source_PartyJungle_Player_Scores_ScoreDatabase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PartyJungle_Source_PartyJungle_Player_Scores_ScoreDatabase_h_11_INCLASS_NO_PURE_DECLS \
	FID_PartyJungle_Source_PartyJungle_Player_Scores_ScoreDatabase_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARTYJUNGLE_API UClass* StaticClass<class AScoreDatabase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PartyJungle_Source_PartyJungle_Player_Scores_ScoreDatabase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
