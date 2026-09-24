// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Minigame/Minigame2/VictimCharacter.h"

#ifdef PARTYJUNGLE_VictimCharacter_generated_h
#error "VictimCharacter.generated.h already included, missing '#pragma once' in VictimCharacter.h"
#endif
#define PARTYJUNGLE_VictimCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AVictimCharacter *********************************************************
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame2_VictimCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetCharacterPosition); \
	DECLARE_FUNCTION(execPossessMovement); \
	DECLARE_FUNCTION(execBeginPlay);


PARTYJUNGLE_API UClass* Z_Construct_UClass_AVictimCharacter_NoRegister();

#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame2_VictimCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVictimCharacter(); \
	friend struct Z_Construct_UClass_AVictimCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_AVictimCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AVictimCharacter, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_AVictimCharacter_NoRegister) \
	DECLARE_SERIALIZER(AVictimCharacter)


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame2_VictimCharacter_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AVictimCharacter(AVictimCharacter&&) = delete; \
	AVictimCharacter(const AVictimCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVictimCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVictimCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVictimCharacter) \
	NO_API virtual ~AVictimCharacter();


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame2_VictimCharacter_h_11_PROLOG
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame2_VictimCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame2_VictimCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame2_VictimCharacter_h_14_INCLASS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame2_VictimCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AVictimCharacter;

// ********** End Class AVictimCharacter ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame2_VictimCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
