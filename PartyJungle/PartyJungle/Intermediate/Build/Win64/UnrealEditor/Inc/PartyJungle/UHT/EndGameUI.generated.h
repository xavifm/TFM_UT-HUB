// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/UI/EndGameUI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UChallengeDto;
class UScoreDto;
class UTransactionDto;
#ifdef PARTYJUNGLE_EndGameUI_generated_h
#error "EndGameUI.generated.h already included, missing '#pragma once' in EndGameUI.h"
#endif
#define PARTYJUNGLE_EndGameUI_generated_h

#define FID_PartyJungle_Source_PartyJungle_Player_UI_EndGameUI_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetChallengesRegistry); \
	DECLARE_FUNCTION(execGetTransactionRegistry); \
	DECLARE_FUNCTION(execGetPlayerScores);


#define FID_PartyJungle_Source_PartyJungle_Player_UI_EndGameUI_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEndGameUI(); \
	friend struct Z_Construct_UClass_UEndGameUI_Statics; \
public: \
	DECLARE_CLASS(UEndGameUI, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PartyJungle"), NO_API) \
	DECLARE_SERIALIZER(UEndGameUI)


#define FID_PartyJungle_Source_PartyJungle_Player_UI_EndGameUI_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEndGameUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEndGameUI(UEndGameUI&&); \
	UEndGameUI(const UEndGameUI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEndGameUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEndGameUI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEndGameUI) \
	NO_API virtual ~UEndGameUI();


#define FID_PartyJungle_Source_PartyJungle_Player_UI_EndGameUI_h_11_PROLOG
#define FID_PartyJungle_Source_PartyJungle_Player_UI_EndGameUI_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PartyJungle_Source_PartyJungle_Player_UI_EndGameUI_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PartyJungle_Source_PartyJungle_Player_UI_EndGameUI_h_14_INCLASS_NO_PURE_DECLS \
	FID_PartyJungle_Source_PartyJungle_Player_UI_EndGameUI_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARTYJUNGLE_API UClass* StaticClass<class UEndGameUI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PartyJungle_Source_PartyJungle_Player_UI_EndGameUI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
