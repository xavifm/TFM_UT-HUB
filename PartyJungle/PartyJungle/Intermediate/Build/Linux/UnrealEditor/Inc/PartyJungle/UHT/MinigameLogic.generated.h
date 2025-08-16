// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Minigame/CrossInfo/MinigameLogic.h"

#ifdef PARTYJUNGLE_MinigameLogic_generated_h
#error "MinigameLogic.generated.h already included, missing '#pragma once' in MinigameLogic.h"
#endif
#define PARTYJUNGLE_MinigameLogic_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMinigameLogic ***********************************************************
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameLogic_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInitializeMinigameInfoForDuel); \
	DECLARE_FUNCTION(execResetMinigameScene); \
	DECLARE_FUNCTION(execDelayedSceneSwitch); \
	DECLARE_FUNCTION(execBeginMinigame); \
	DECLARE_FUNCTION(execSetTeamReady); \
	DECLARE_FUNCTION(execSetTeamScore); \
	DECLARE_FUNCTION(execFinishMinigame); \
	DECLARE_FUNCTION(execShowWinnerScene); \
	DECLARE_FUNCTION(execCalculateWinner); \
	DECLARE_FUNCTION(execCheckIfTheMinigameHasFinished); \
	DECLARE_FUNCTION(execStartMinigame);


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameLogic_h_11_CALLBACK_WRAPPERS
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinigameLogic_NoRegister();

#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameLogic_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMinigameLogic(); \
	friend struct Z_Construct_UClass_AMinigameLogic_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinigameLogic_NoRegister(); \
public: \
	DECLARE_CLASS2(AMinigameLogic, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_AMinigameLogic_NoRegister) \
	DECLARE_SERIALIZER(AMinigameLogic)


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameLogic_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMinigameLogic(AMinigameLogic&&) = delete; \
	AMinigameLogic(const AMinigameLogic&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMinigameLogic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMinigameLogic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMinigameLogic) \
	NO_API virtual ~AMinigameLogic();


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameLogic_h_8_PROLOG
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameLogic_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameLogic_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameLogic_h_11_CALLBACK_WRAPPERS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameLogic_h_11_INCLASS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameLogic_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMinigameLogic;

// ********** End Class AMinigameLogic *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameLogic_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
