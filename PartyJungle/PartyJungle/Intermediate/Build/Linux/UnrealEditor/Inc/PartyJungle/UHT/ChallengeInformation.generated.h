// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Challenge/ChallengeInformation.h"

#ifdef PARTYJUNGLE_ChallengeInformation_generated_h
#error "ChallengeInformation.generated.h already included, missing '#pragma once' in ChallengeInformation.h"
#endif
#define PARTYJUNGLE_ChallengeInformation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AMinion;

// ********** Begin Class AChallengeInformation ****************************************************
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Challenge_ChallengeInformation_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetDuels); \
	DECLARE_FUNCTION(execCheckIfThereAreCrownsInDuel); \
	DECLARE_FUNCTION(execGetBetCrownsQuantity); \
	DECLARE_FUNCTION(execUpdateCurrentPot); \
	DECLARE_FUNCTION(execResetSavedPot); \
	DECLARE_FUNCTION(execAddSavedPot); \
	DECLARE_FUNCTION(execGetSavedPotStars); \
	DECLARE_FUNCTION(execGetSavedPot); \
	DECLARE_FUNCTION(execGetCalculatedPot); \
	DECLARE_FUNCTION(execGetPotQuantity); \
	DECLARE_FUNCTION(execGetBetCoinsQuantity); \
	DECLARE_FUNCTION(execSwitchDuelType); \
	DECLARE_FUNCTION(execGetDuelType); \
	DECLARE_FUNCTION(execSaveDuelToRegistry); \
	DECLARE_FUNCTION(execSafeDuelChoice); \
	DECLARE_FUNCTION(execSetUpDuelInfo);


PARTYJUNGLE_API UClass* Z_Construct_UClass_AChallengeInformation_NoRegister();

#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Challenge_ChallengeInformation_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAChallengeInformation(); \
	friend struct Z_Construct_UClass_AChallengeInformation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_AChallengeInformation_NoRegister(); \
public: \
	DECLARE_CLASS2(AChallengeInformation, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_AChallengeInformation_NoRegister) \
	DECLARE_SERIALIZER(AChallengeInformation)


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Challenge_ChallengeInformation_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AChallengeInformation(AChallengeInformation&&) = delete; \
	AChallengeInformation(const AChallengeInformation&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChallengeInformation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChallengeInformation); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AChallengeInformation) \
	NO_API virtual ~AChallengeInformation();


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Challenge_ChallengeInformation_h_14_PROLOG
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Challenge_ChallengeInformation_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Challenge_ChallengeInformation_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Challenge_ChallengeInformation_h_17_INCLASS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Challenge_ChallengeInformation_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AChallengeInformation;

// ********** End Class AChallengeInformation ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Challenge_ChallengeInformation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
