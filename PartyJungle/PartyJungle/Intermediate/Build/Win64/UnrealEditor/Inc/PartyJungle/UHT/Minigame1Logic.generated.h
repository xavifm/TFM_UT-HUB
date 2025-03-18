// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Minigame/Minigame1/Minigame1Logic.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PARTYJUNGLE_Minigame1Logic_generated_h
#error "Minigame1Logic.generated.h already included, missing '#pragma once' in Minigame1Logic.h"
#endif
#define PARTYJUNGLE_Minigame1Logic_generated_h

#define FID_PartyJungle_Source_PartyJungle_Minigame_Minigame1_Minigame1Logic_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStartCannonsCharge); \
	DECLARE_FUNCTION(execSetupAirCannonsInfo);


#define FID_PartyJungle_Source_PartyJungle_Minigame_Minigame1_Minigame1Logic_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMinigame1Logic(); \
	friend struct Z_Construct_UClass_AMinigame1Logic_Statics; \
public: \
	DECLARE_CLASS(AMinigame1Logic, AMinigameLogic, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), NO_API) \
	DECLARE_SERIALIZER(AMinigame1Logic)


#define FID_PartyJungle_Source_PartyJungle_Minigame_Minigame1_Minigame1Logic_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMinigame1Logic(AMinigame1Logic&&); \
	AMinigame1Logic(const AMinigame1Logic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMinigame1Logic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMinigame1Logic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMinigame1Logic) \
	NO_API virtual ~AMinigame1Logic();


#define FID_PartyJungle_Source_PartyJungle_Minigame_Minigame1_Minigame1Logic_h_8_PROLOG
#define FID_PartyJungle_Source_PartyJungle_Minigame_Minigame1_Minigame1Logic_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PartyJungle_Source_PartyJungle_Minigame_Minigame1_Minigame1Logic_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PartyJungle_Source_PartyJungle_Minigame_Minigame1_Minigame1Logic_h_11_INCLASS_NO_PURE_DECLS \
	FID_PartyJungle_Source_PartyJungle_Minigame_Minigame1_Minigame1Logic_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARTYJUNGLE_API UClass* StaticClass<class AMinigame1Logic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PartyJungle_Source_PartyJungle_Minigame_Minigame1_Minigame1Logic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
