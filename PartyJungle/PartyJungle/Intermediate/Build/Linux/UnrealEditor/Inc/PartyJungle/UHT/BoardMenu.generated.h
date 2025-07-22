// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Menu/BoardMenu.h"

#ifdef PARTYJUNGLE_BoardMenu_generated_h
#error "BoardMenu.generated.h already included, missing '#pragma once' in BoardMenu.h"
#endif
#define PARTYJUNGLE_BoardMenu_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ABoardMenu ***************************************************************
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Menu_BoardMenu_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCurrentMenuPosition); \
	DECLARE_FUNCTION(execStartGame); \
	DECLARE_FUNCTION(execPerformPartyAction); \
	DECLARE_FUNCTION(execSwitchPartyValues); \
	DECLARE_FUNCTION(execSwitchPartyMenuPosition); \
	DECLARE_FUNCTION(execSwitchMenuPosition);


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Menu_BoardMenu_h_10_CALLBACK_WRAPPERS
PARTYJUNGLE_API UClass* Z_Construct_UClass_ABoardMenu_NoRegister();

#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Menu_BoardMenu_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABoardMenu(); \
	friend struct Z_Construct_UClass_ABoardMenu_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_ABoardMenu_NoRegister(); \
public: \
	DECLARE_CLASS2(ABoardMenu, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_ABoardMenu_NoRegister) \
	DECLARE_SERIALIZER(ABoardMenu)


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Menu_BoardMenu_h_10_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABoardMenu(ABoardMenu&&) = delete; \
	ABoardMenu(const ABoardMenu&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoardMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoardMenu); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABoardMenu) \
	NO_API virtual ~ABoardMenu();


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Menu_BoardMenu_h_7_PROLOG
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Menu_BoardMenu_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Menu_BoardMenu_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Menu_BoardMenu_h_10_CALLBACK_WRAPPERS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Menu_BoardMenu_h_10_INCLASS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Menu_BoardMenu_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABoardMenu;

// ********** End Class ABoardMenu *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Menu_BoardMenu_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
