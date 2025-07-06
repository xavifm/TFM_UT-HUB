// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Challenge/ChallengeDatabase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PARTYJUNGLE_ChallengeDatabase_generated_h
#error "ChallengeDatabase.generated.h already included, missing '#pragma once' in ChallengeDatabase.h"
#endif
#define PARTYJUNGLE_ChallengeDatabase_generated_h

#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Challenge_ChallengeDatabase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSendRegistryToInstance); \
	DECLARE_FUNCTION(execRegisterDuel);


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Challenge_ChallengeDatabase_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAChallengeDatabase(); \
	friend struct Z_Construct_UClass_AChallengeDatabase_Statics; \
public: \
	DECLARE_CLASS(AChallengeDatabase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), NO_API) \
	DECLARE_SERIALIZER(AChallengeDatabase)


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Challenge_ChallengeDatabase_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AChallengeDatabase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AChallengeDatabase(AChallengeDatabase&&); \
	AChallengeDatabase(const AChallengeDatabase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChallengeDatabase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChallengeDatabase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AChallengeDatabase) \
	NO_API virtual ~AChallengeDatabase();


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Challenge_ChallengeDatabase_h_8_PROLOG
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Challenge_ChallengeDatabase_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Challenge_ChallengeDatabase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Challenge_ChallengeDatabase_h_11_INCLASS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Challenge_ChallengeDatabase_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARTYJUNGLE_API UClass* StaticClass<class AChallengeDatabase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Challenge_ChallengeDatabase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
