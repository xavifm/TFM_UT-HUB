// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/UI/PlayerMapUI.h"

#ifdef PARTYJUNGLE_PlayerMapUI_generated_h
#error "PlayerMapUI.generated.h already included, missing '#pragma once' in PlayerMapUI.h"
#endif
#define PARTYJUNGLE_PlayerMapUI_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AMapDatabase;
class AScoreDatabase;

// ********** Begin Class UPlayerMapUI *************************************************************
#define FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_UI_PlayerMapUI_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSpinWheel); \
	DECLARE_FUNCTION(execUpdateCrowns); \
	DECLARE_FUNCTION(execUpdateCoins);


#define FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_UI_PlayerMapUI_h_14_CALLBACK_WRAPPERS
PARTYJUNGLE_API UClass* Z_Construct_UClass_UPlayerMapUI_NoRegister();

#define FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_UI_PlayerMapUI_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerMapUI(); \
	friend struct Z_Construct_UClass_UPlayerMapUI_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_UPlayerMapUI_NoRegister(); \
public: \
	DECLARE_CLASS2(UPlayerMapUI, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_UPlayerMapUI_NoRegister) \
	DECLARE_SERIALIZER(UPlayerMapUI)


#define FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_UI_PlayerMapUI_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerMapUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPlayerMapUI(UPlayerMapUI&&) = delete; \
	UPlayerMapUI(const UPlayerMapUI&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerMapUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerMapUI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerMapUI) \
	NO_API virtual ~UPlayerMapUI();


#define FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_UI_PlayerMapUI_h_11_PROLOG
#define FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_UI_PlayerMapUI_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_UI_PlayerMapUI_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_UI_PlayerMapUI_h_14_CALLBACK_WRAPPERS \
	FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_UI_PlayerMapUI_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_UI_PlayerMapUI_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPlayerMapUI;

// ********** End Class UPlayerMapUI ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_UI_PlayerMapUI_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
