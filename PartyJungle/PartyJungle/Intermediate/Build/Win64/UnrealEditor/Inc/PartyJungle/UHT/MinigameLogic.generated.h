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

class AMinion;

// ********** Begin Class AMinigameLogic ***********************************************************
#define FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameLogic_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStartMinigameScoresAndReadyInfo); \
	DECLARE_FUNCTION(execInitializeMinigameInfoForTeam); \
	DECLARE_FUNCTION(execInitializeMinigameInfoForDuel); \
	DECLARE_FUNCTION(execResetMinigameScene); \
	DECLARE_FUNCTION(execDelayedSceneSwitch); \
	DECLARE_FUNCTION(execBeginMinigame); \
	DECLARE_FUNCTION(execSetTeamReady); \
	DECLARE_FUNCTION(execSetTeamScore); \
	DECLARE_FUNCTION(execFinishMinigame); \
	DECLARE_FUNCTION(execShowWinnerScene); \
	DECLARE_FUNCTION(execCalculateTeamMinigameWinners); \
	DECLARE_FUNCTION(execCheckIfTheMinigameHasFinished); \
	DECLARE_FUNCTION(execStartMinigame);


#define FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameLogic_h_27_CALLBACK_WRAPPERS
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinigameLogic_NoRegister();

#define FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameLogic_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMinigameLogic(); \
	friend struct Z_Construct_UClass_AMinigameLogic_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinigameLogic_NoRegister(); \
public: \
	DECLARE_CLASS2(AMinigameLogic, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_AMinigameLogic_NoRegister) \
	DECLARE_SERIALIZER(AMinigameLogic)


#define FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameLogic_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMinigameLogic(AMinigameLogic&&) = delete; \
	AMinigameLogic(const AMinigameLogic&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMinigameLogic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMinigameLogic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMinigameLogic) \
	NO_API virtual ~AMinigameLogic();


#define FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameLogic_h_24_PROLOG
#define FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameLogic_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameLogic_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameLogic_h_27_CALLBACK_WRAPPERS \
	FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameLogic_h_27_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameLogic_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMinigameLogic;

// ********** End Class AMinigameLogic *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_CrossInfo_MinigameLogic_h

// ********** Begin Enum EMinigameType *************************************************************
#define FOREACH_ENUM_EMINIGAMETYPE(op) \
	op(EMinigameType::DUEL) \
	op(EMinigameType::TEAM_MINIGAME) 

enum class EMinigameType : uint8;
template<> struct TIsUEnumClass<EMinigameType> { enum { Value = true }; };
template<> PARTYJUNGLE_API UEnum* StaticEnum<EMinigameType>();
// ********** End Enum EMinigameType ***************************************************************

// ********** Begin Enum ETeamsMode ****************************************************************
#define FOREACH_ENUM_ETEAMSMODE(op) \
	op(ETeamsMode::NOTEAM) \
	op(ETeamsMode::TWO_VS_TWO) \
	op(ETeamsMode::ONE_VS_THREE) 

enum class ETeamsMode : uint8;
template<> struct TIsUEnumClass<ETeamsMode> { enum { Value = true }; };
template<> PARTYJUNGLE_API UEnum* StaticEnum<ETeamsMode>();
// ********** End Enum ETeamsMode ******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
