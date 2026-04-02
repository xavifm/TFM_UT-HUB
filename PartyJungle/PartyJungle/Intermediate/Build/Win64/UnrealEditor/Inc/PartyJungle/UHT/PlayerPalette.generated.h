// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Minigame/Minigame3/PlayerPalette.h"

#ifdef PARTYJUNGLE_PlayerPalette_generated_h
#error "PlayerPalette.generated.h already included, missing '#pragma once' in PlayerPalette.h"
#endif
#define PARTYJUNGLE_PlayerPalette_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FInputActionValue;

// ********** Begin Class APlayerPalette ***********************************************************
#define FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame3_PlayerPalette_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPossessMovement); \
	DECLARE_FUNCTION(execMovePallette);


PARTYJUNGLE_API UClass* Z_Construct_UClass_APlayerPalette_NoRegister();

#define FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame3_PlayerPalette_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerPalette(); \
	friend struct Z_Construct_UClass_APlayerPalette_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_APlayerPalette_NoRegister(); \
public: \
	DECLARE_CLASS2(APlayerPalette, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_APlayerPalette_NoRegister) \
	DECLARE_SERIALIZER(APlayerPalette)


#define FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame3_PlayerPalette_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APlayerPalette(APlayerPalette&&) = delete; \
	APlayerPalette(const APlayerPalette&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPalette); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPalette); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerPalette) \
	NO_API virtual ~APlayerPalette();


#define FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame3_PlayerPalette_h_10_PROLOG
#define FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame3_PlayerPalette_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame3_PlayerPalette_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame3_PlayerPalette_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame3_PlayerPalette_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APlayerPalette;

// ********** End Class APlayerPalette *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame3_PlayerPalette_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
