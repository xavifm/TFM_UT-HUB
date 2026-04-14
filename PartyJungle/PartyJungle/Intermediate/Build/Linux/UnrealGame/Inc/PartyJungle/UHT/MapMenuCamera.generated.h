// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/Map/MapMenuCamera.h"

#ifdef PARTYJUNGLE_MapMenuCamera_generated_h
#error "MapMenuCamera.generated.h already included, missing '#pragma once' in MapMenuCamera.h"
#endif
#define PARTYJUNGLE_MapMenuCamera_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AMinion;
class ASquareOptional;
class UInputComponent;
class UPlayerMapUI;
struct FInputActionValue;

// ********** Begin Class AMapMenuCamera ***********************************************************
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Map_MapMenuCamera_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRestoreTurnLogic); \
	DECLARE_FUNCTION(execStartPlayerTurn); \
	DECLARE_FUNCTION(execUpdateMinionEconomyWithReference); \
	DECLARE_FUNCTION(execUpdateMinionEconomy); \
	DECLARE_FUNCTION(execFinishFadeTransition); \
	DECLARE_FUNCTION(execStartFadeTransition); \
	DECLARE_FUNCTION(execRestoreTurnLogicWithAnimation); \
	DECLARE_FUNCTION(execUpdateDicePosition); \
	DECLARE_FUNCTION(execGetMapUI); \
	DECLARE_FUNCTION(execBuyCrowns); \
	DECLARE_FUNCTION(execStoreEconomy); \
	DECLARE_FUNCTION(execConfirmPathSelection); \
	DECLARE_FUNCTION(execChangeSelectedPath); \
	DECLARE_FUNCTION(execExecuteMinionMovement); \
	DECLARE_FUNCTION(execRollTheDice); \
	DECLARE_FUNCTION(execFocusNextMinion); \
	DECLARE_FUNCTION(execResetMapItems); \
	DECLARE_FUNCTION(execSwitchRankingScoreList); \
	DECLARE_FUNCTION(execSwitchCameraTeam); \
	DECLARE_FUNCTION(execSwitchPathMenu); \
	DECLARE_FUNCTION(execSwitchMenuWidget); \
	DECLARE_FUNCTION(execSwitchChallengeMenuUI); \
	DECLARE_FUNCTION(execSwitchChallengeUI); \
	DECLARE_FUNCTION(execSwitchCrownsShop); \
	DECLARE_FUNCTION(execSwitchStoreCrownsUI); \
	DECLARE_FUNCTION(execFinishMinigame); \
	DECLARE_FUNCTION(execFinishDuel); \
	DECLARE_FUNCTION(execRefreshChallengeInfo); \
	DECLARE_FUNCTION(execOpenChallengeMenu); \
	DECLARE_FUNCTION(execSwitchItemThrowPlayerSelector); \
	DECLARE_FUNCTION(execSwitchInventory); \
	DECLARE_FUNCTION(execCloseChallengeMenu); \
	DECLARE_FUNCTION(execHandleBackInput); \
	DECLARE_FUNCTION(execConfirmMinionToDuel); \
	DECLARE_FUNCTION(execSwitchMinionToSelectForDuel); \
	DECLARE_FUNCTION(execStopMinionForDuel); \
	DECLARE_FUNCTION(execSwitchFullMapVision); \
	DECLARE_FUNCTION(execHandleEscInput); \
	DECLARE_FUNCTION(execHandleYInput); \
	DECLARE_FUNCTION(execDelayedSceneSwitch); \
	DECLARE_FUNCTION(execSpinWheelEndSequence); \
	DECLARE_FUNCTION(execCloseDuelMenu); \
	DECLARE_FUNCTION(execFollowMinionMovement); \
	DECLARE_FUNCTION(execHandleConfirmInput); \
	DECLARE_FUNCTION(execHandleLeftRightInput); \
	DECLARE_FUNCTION(execHandleLeftJoystickInputY); \
	DECLARE_FUNCTION(execHandleLeftJoystickInputX); \
	DECLARE_FUNCTION(execSetupPlayerInputComponent); \
	DECLARE_FUNCTION(execSwitchController); \
	DECLARE_FUNCTION(execSwitchMainScene);


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Map_MapMenuCamera_h_29_CALLBACK_WRAPPERS
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMapMenuCamera_NoRegister();

#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Map_MapMenuCamera_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMapMenuCamera(); \
	friend struct Z_Construct_UClass_AMapMenuCamera_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_AMapMenuCamera_NoRegister(); \
public: \
	DECLARE_CLASS2(AMapMenuCamera, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_AMapMenuCamera_NoRegister) \
	DECLARE_SERIALIZER(AMapMenuCamera)


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Map_MapMenuCamera_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMapMenuCamera(AMapMenuCamera&&) = delete; \
	AMapMenuCamera(const AMapMenuCamera&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapMenuCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapMenuCamera); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMapMenuCamera) \
	NO_API virtual ~AMapMenuCamera();


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Map_MapMenuCamera_h_26_PROLOG
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Map_MapMenuCamera_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Map_MapMenuCamera_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Map_MapMenuCamera_h_29_CALLBACK_WRAPPERS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Map_MapMenuCamera_h_29_INCLASS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Map_MapMenuCamera_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMapMenuCamera;

// ********** End Class AMapMenuCamera *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Map_MapMenuCamera_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
