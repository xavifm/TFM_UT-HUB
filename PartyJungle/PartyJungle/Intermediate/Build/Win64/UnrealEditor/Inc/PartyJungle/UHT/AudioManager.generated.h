// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundManager/AudioManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTrack;
#ifdef PARTYJUNGLE_AudioManager_generated_h
#error "AudioManager.generated.h already included, missing '#pragma once' in AudioManager.h"
#endif
#define PARTYJUNGLE_AudioManager_generated_h

#define FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_SoundManager_AudioManager_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTrack_Statics; \
	PARTYJUNGLE_API static class UScriptStruct* StaticStruct();


template<> PARTYJUNGLE_API UScriptStruct* StaticStruct<struct FTrack>();

#define FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_SoundManager_AudioManager_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAudioTrack); \
	DECLARE_FUNCTION(execPlaySFX); \
	DECLARE_FUNCTION(execPlaySong);


#define FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_SoundManager_AudioManager_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAudioManager(); \
	friend struct Z_Construct_UClass_AAudioManager_Statics; \
public: \
	DECLARE_CLASS(AAudioManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), NO_API) \
	DECLARE_SERIALIZER(AAudioManager)


#define FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_SoundManager_AudioManager_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAudioManager(AAudioManager&&); \
	AAudioManager(const AAudioManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAudioManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAudioManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAudioManager) \
	NO_API virtual ~AAudioManager();


#define FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_SoundManager_AudioManager_h_24_PROLOG
#define FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_SoundManager_AudioManager_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_SoundManager_AudioManager_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_SoundManager_AudioManager_h_27_INCLASS_NO_PURE_DECLS \
	FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_SoundManager_AudioManager_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARTYJUNGLE_API UClass* StaticClass<class AAudioManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_SoundManager_AudioManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
