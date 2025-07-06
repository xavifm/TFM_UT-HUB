// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rounds/RoundsManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPlayerMapUI;
#ifdef PARTYJUNGLE_RoundsManager_generated_h
#error "RoundsManager.generated.h already included, missing '#pragma once' in RoundsManager.h"
#endif
#define PARTYJUNGLE_RoundsManager_generated_h

#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Rounds_RoundsManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAssignMapUI); \
	DECLARE_FUNCTION(execCheckForEndRoundMinigame); \
	DECLARE_FUNCTION(execFinishGame); \
	DECLARE_FUNCTION(execGetRoundsLeft); \
	DECLARE_FUNCTION(execStartNextRound); \
	DECLARE_FUNCTION(execHandleEndRound); \
	DECLARE_FUNCTION(execGetCurrentRound);


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Rounds_RoundsManager_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARoundsManager(); \
	friend struct Z_Construct_UClass_ARoundsManager_Statics; \
public: \
	DECLARE_CLASS(ARoundsManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), NO_API) \
	DECLARE_SERIALIZER(ARoundsManager)


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Rounds_RoundsManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARoundsManager(ARoundsManager&&); \
	ARoundsManager(const ARoundsManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARoundsManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARoundsManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARoundsManager) \
	NO_API virtual ~ARoundsManager();


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Rounds_RoundsManager_h_9_PROLOG
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Rounds_RoundsManager_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Rounds_RoundsManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Rounds_RoundsManager_h_12_INCLASS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Rounds_RoundsManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARTYJUNGLE_API UClass* StaticClass<class ARoundsManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Rounds_RoundsManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
