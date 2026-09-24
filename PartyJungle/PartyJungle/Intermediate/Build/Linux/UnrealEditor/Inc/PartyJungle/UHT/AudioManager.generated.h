// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundManager/AudioManager.h"

#ifdef PARTYJUNGLE_AudioManager_generated_h
#error "AudioManager.generated.h already included, missing '#pragma once' in AudioManager.h"
#endif
#define PARTYJUNGLE_AudioManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class USoundBase;

// ********** Begin Class AAudioManager ************************************************************
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_SoundManager_AudioManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAudioTrack); \
	DECLARE_FUNCTION(execStopSong); \
	DECLARE_FUNCTION(execStopSFX); \
	DECLARE_FUNCTION(execPlaySFX); \
	DECLARE_FUNCTION(execPlaySong); \
	DECLARE_FUNCTION(execSetSongVolume); \
	DECLARE_FUNCTION(execSetSFXVolume);


PARTYJUNGLE_API UClass* Z_Construct_UClass_AAudioManager_NoRegister();

#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_SoundManager_AudioManager_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAudioManager(); \
	friend struct Z_Construct_UClass_AAudioManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_AAudioManager_NoRegister(); \
public: \
	DECLARE_CLASS2(AAudioManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_AAudioManager_NoRegister) \
	DECLARE_SERIALIZER(AAudioManager)


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_SoundManager_AudioManager_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAudioManager(AAudioManager&&) = delete; \
	AAudioManager(const AAudioManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAudioManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAudioManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAudioManager) \
	NO_API virtual ~AAudioManager();


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_SoundManager_AudioManager_h_10_PROLOG
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_SoundManager_AudioManager_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_SoundManager_AudioManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_SoundManager_AudioManager_h_13_INCLASS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_SoundManager_AudioManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAudioManager;

// ********** End Class AAudioManager **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_SoundManager_AudioManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
