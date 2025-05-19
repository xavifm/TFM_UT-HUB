// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Minigame/CrossInfo/MinigameLogic.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PARTYJUNGLE_MinigameLogic_generated_h
#error "MinigameLogic.generated.h already included, missing '#pragma once' in MinigameLogic.h"
#endif
#define PARTYJUNGLE_MinigameLogic_generated_h

#define FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameLogic_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetMinigameScene); \
	DECLARE_FUNCTION(execBeginMinigame); \
	DECLARE_FUNCTION(execSetTeamReady); \
	DECLARE_FUNCTION(execSetTeamScore); \
	DECLARE_FUNCTION(execDelayedSceneSwitch); \
	DECLARE_FUNCTION(execFinishMinigame); \
	DECLARE_FUNCTION(execShowWinnerScene); \
	DECLARE_FUNCTION(execCalculateWinner); \
	DECLARE_FUNCTION(execCheckIfTheMinigameHasFinished); \
	DECLARE_FUNCTION(execStartMinigame);


#define FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameLogic_h_11_CALLBACK_WRAPPERS
#define FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameLogic_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMinigameLogic(); \
	friend struct Z_Construct_UClass_AMinigameLogic_Statics; \
public: \
	DECLARE_CLASS(AMinigameLogic, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), NO_API) \
	DECLARE_SERIALIZER(AMinigameLogic)


#define FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameLogic_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMinigameLogic(AMinigameLogic&&); \
	AMinigameLogic(const AMinigameLogic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMinigameLogic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMinigameLogic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMinigameLogic) \
	NO_API virtual ~AMinigameLogic();


#define FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameLogic_h_8_PROLOG
#define FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameLogic_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameLogic_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameLogic_h_11_CALLBACK_WRAPPERS \
	FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameLogic_h_11_INCLASS_NO_PURE_DECLS \
	FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameLogic_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARTYJUNGLE_API UClass* StaticClass<class AMinigameLogic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameLogic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
