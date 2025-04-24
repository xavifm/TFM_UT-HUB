// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EndGame/Scores/ScoresCalculator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PARTYJUNGLE_ScoresCalculator_generated_h
#error "ScoresCalculator.generated.h already included, missing '#pragma once' in ScoresCalculator.h"
#endif
#define PARTYJUNGLE_ScoresCalculator_generated_h

#define FID_PartyJungle_Source_PartyJungle_EndGame_Scores_ScoresCalculator_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetWinnerTeam); \
	DECLARE_FUNCTION(execCompensationCrown); \
	DECLARE_FUNCTION(execGetWorstDuelingTeam); \
	DECLARE_FUNCTION(execGetBestDuelingTeam); \
	DECLARE_FUNCTION(execInitializeInfo);


#define FID_PartyJungle_Source_PartyJungle_EndGame_Scores_ScoresCalculator_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAScoresCalculator(); \
	friend struct Z_Construct_UClass_AScoresCalculator_Statics; \
public: \
	DECLARE_CLASS(AScoresCalculator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), NO_API) \
	DECLARE_SERIALIZER(AScoresCalculator)


#define FID_PartyJungle_Source_PartyJungle_EndGame_Scores_ScoresCalculator_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AScoresCalculator(AScoresCalculator&&); \
	AScoresCalculator(const AScoresCalculator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AScoresCalculator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScoresCalculator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AScoresCalculator) \
	NO_API virtual ~AScoresCalculator();


#define FID_PartyJungle_Source_PartyJungle_EndGame_Scores_ScoresCalculator_h_10_PROLOG
#define FID_PartyJungle_Source_PartyJungle_EndGame_Scores_ScoresCalculator_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PartyJungle_Source_PartyJungle_EndGame_Scores_ScoresCalculator_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PartyJungle_Source_PartyJungle_EndGame_Scores_ScoresCalculator_h_13_INCLASS_NO_PURE_DECLS \
	FID_PartyJungle_Source_PartyJungle_EndGame_Scores_ScoresCalculator_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARTYJUNGLE_API UClass* StaticClass<class AScoresCalculator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PartyJungle_Source_PartyJungle_EndGame_Scores_ScoresCalculator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
