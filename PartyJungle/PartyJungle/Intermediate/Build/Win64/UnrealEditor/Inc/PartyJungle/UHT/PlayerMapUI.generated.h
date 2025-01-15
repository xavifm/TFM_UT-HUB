// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/UI/PlayerMapUI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMinion;
#ifdef PARTYJUNGLE_PlayerMapUI_generated_h
#error "PlayerMapUI.generated.h already included, missing '#pragma once' in PlayerMapUI.h"
#endif
#define PARTYJUNGLE_PlayerMapUI_generated_h

#define FID_PartyJungle_Source_PartyJungle_Player_UI_PlayerMapUI_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAssignMinionMovements); \
	DECLARE_FUNCTION(execRollAction);


#define FID_PartyJungle_Source_PartyJungle_Player_UI_PlayerMapUI_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerMapUI(); \
	friend struct Z_Construct_UClass_UPlayerMapUI_Statics; \
public: \
	DECLARE_CLASS(UPlayerMapUI, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PartyJungle"), NO_API) \
	DECLARE_SERIALIZER(UPlayerMapUI)


#define FID_PartyJungle_Source_PartyJungle_Player_UI_PlayerMapUI_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerMapUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayerMapUI(UPlayerMapUI&&); \
	UPlayerMapUI(const UPlayerMapUI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerMapUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerMapUI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerMapUI) \
	NO_API virtual ~UPlayerMapUI();


#define FID_PartyJungle_Source_PartyJungle_Player_UI_PlayerMapUI_h_8_PROLOG
#define FID_PartyJungle_Source_PartyJungle_Player_UI_PlayerMapUI_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PartyJungle_Source_PartyJungle_Player_UI_PlayerMapUI_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PartyJungle_Source_PartyJungle_Player_UI_PlayerMapUI_h_11_INCLASS_NO_PURE_DECLS \
	FID_PartyJungle_Source_PartyJungle_Player_UI_PlayerMapUI_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARTYJUNGLE_API UClass* StaticClass<class UPlayerMapUI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PartyJungle_Source_PartyJungle_Player_UI_PlayerMapUI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
