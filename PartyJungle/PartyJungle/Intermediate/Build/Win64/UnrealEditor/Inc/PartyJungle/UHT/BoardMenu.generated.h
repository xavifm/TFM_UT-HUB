// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Menu/BoardMenu.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PARTYJUNGLE_BoardMenu_generated_h
#error "BoardMenu.generated.h already included, missing '#pragma once' in BoardMenu.h"
#endif
#define PARTYJUNGLE_BoardMenu_generated_h

#define FID_PartyJungle_Source_PartyJungle_Menu_BoardMenu_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCurrentMenuPosition); \
	DECLARE_FUNCTION(execStartGame); \
	DECLARE_FUNCTION(execPerformPartyAction); \
	DECLARE_FUNCTION(execSwitchPartyValues); \
	DECLARE_FUNCTION(execSwitchPartyMenuPosition); \
	DECLARE_FUNCTION(execSwitchMenuPosition);


#define FID_PartyJungle_Source_PartyJungle_Menu_BoardMenu_h_10_CALLBACK_WRAPPERS
#define FID_PartyJungle_Source_PartyJungle_Menu_BoardMenu_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABoardMenu(); \
	friend struct Z_Construct_UClass_ABoardMenu_Statics; \
public: \
	DECLARE_CLASS(ABoardMenu, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), NO_API) \
	DECLARE_SERIALIZER(ABoardMenu)


#define FID_PartyJungle_Source_PartyJungle_Menu_BoardMenu_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABoardMenu(ABoardMenu&&); \
	ABoardMenu(const ABoardMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoardMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoardMenu); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABoardMenu) \
	NO_API virtual ~ABoardMenu();


#define FID_PartyJungle_Source_PartyJungle_Menu_BoardMenu_h_7_PROLOG
#define FID_PartyJungle_Source_PartyJungle_Menu_BoardMenu_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PartyJungle_Source_PartyJungle_Menu_BoardMenu_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PartyJungle_Source_PartyJungle_Menu_BoardMenu_h_10_CALLBACK_WRAPPERS \
	FID_PartyJungle_Source_PartyJungle_Menu_BoardMenu_h_10_INCLASS_NO_PURE_DECLS \
	FID_PartyJungle_Source_PartyJungle_Menu_BoardMenu_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARTYJUNGLE_API UClass* StaticClass<class ABoardMenu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PartyJungle_Source_PartyJungle_Menu_BoardMenu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
