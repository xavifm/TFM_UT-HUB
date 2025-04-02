// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/Map/MapMenuCamera.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMinion;
class ASquareOptional;
class UInputComponent;
struct FInputActionValue;
#ifdef PARTYJUNGLE_MapMenuCamera_generated_h
#error "MapMenuCamera.generated.h already included, missing '#pragma once' in MapMenuCamera.h"
#endif
#define PARTYJUNGLE_MapMenuCamera_generated_h

#define FID_PartyJungle_Source_PartyJungle_Player_Map_MapMenuCamera_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRestoreTurnLogic); \
	DECLARE_FUNCTION(execUpdateMinionEconomy); \
	DECLARE_FUNCTION(execUpdateDicePosition); \
	DECLARE_FUNCTION(execBuyCrowns); \
	DECLARE_FUNCTION(execStoreCrowns); \
	DECLARE_FUNCTION(execConfirmPathSelection); \
	DECLARE_FUNCTION(execChangeSelectedPath); \
	DECLARE_FUNCTION(execRollTheDice); \
	DECLARE_FUNCTION(execFocusNextMinion); \
	DECLARE_FUNCTION(execSwitchCameraTeam); \
	DECLARE_FUNCTION(execSwitchPathMenu); \
	DECLARE_FUNCTION(execSwitchMenuWidget); \
	DECLARE_FUNCTION(execSwitchChallengeUI); \
	DECLARE_FUNCTION(execSwitchCrownsShop); \
	DECLARE_FUNCTION(execSwitchStoreCrownsUI); \
	DECLARE_FUNCTION(execFinishDuel); \
	DECLARE_FUNCTION(execRefreshChallengeInfo); \
	DECLARE_FUNCTION(execOpenChallengeMenu); \
	DECLARE_FUNCTION(execCloseChallengeMenu); \
	DECLARE_FUNCTION(execHandleBackInput); \
	DECLARE_FUNCTION(execStartMinigame); \
	DECLARE_FUNCTION(execHandleConfirmInput); \
	DECLARE_FUNCTION(execHandleLeftRightInput); \
	DECLARE_FUNCTION(execSetupPlayerInputComponent); \
	DECLARE_FUNCTION(execSwitchController); \
	DECLARE_FUNCTION(execSwitchMainScene);


#define FID_PartyJungle_Source_PartyJungle_Player_Map_MapMenuCamera_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMapMenuCamera(); \
	friend struct Z_Construct_UClass_AMapMenuCamera_Statics; \
public: \
	DECLARE_CLASS(AMapMenuCamera, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), NO_API) \
	DECLARE_SERIALIZER(AMapMenuCamera)


#define FID_PartyJungle_Source_PartyJungle_Player_Map_MapMenuCamera_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMapMenuCamera(AMapMenuCamera&&); \
	AMapMenuCamera(const AMapMenuCamera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapMenuCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapMenuCamera); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMapMenuCamera) \
	NO_API virtual ~AMapMenuCamera();


#define FID_PartyJungle_Source_PartyJungle_Player_Map_MapMenuCamera_h_18_PROLOG
#define FID_PartyJungle_Source_PartyJungle_Player_Map_MapMenuCamera_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PartyJungle_Source_PartyJungle_Player_Map_MapMenuCamera_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PartyJungle_Source_PartyJungle_Player_Map_MapMenuCamera_h_21_INCLASS_NO_PURE_DECLS \
	FID_PartyJungle_Source_PartyJungle_Player_Map_MapMenuCamera_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARTYJUNGLE_API UClass* StaticClass<class AMapMenuCamera>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PartyJungle_Source_PartyJungle_Player_Map_MapMenuCamera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
