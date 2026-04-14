// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Managers/SceneManager.h"

#ifdef PARTYJUNGLE_SceneManager_generated_h
#error "SceneManager.generated.h already included, missing '#pragma once' in SceneManager.h"
#endif
#define PARTYJUNGLE_SceneManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UManagerGameInstance;

// ********** Begin Delegate FEvent_SceneChanged ***************************************************
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_SceneManager_h_17_DELEGATE \
PARTYJUNGLE_API void FEvent_SceneChanged_DelegateWrapper(const FMulticastScriptDelegate& Event_SceneChanged, const FString& a_PreviousState, const FString& a_CurrentState);


// ********** End Delegate FEvent_SceneChanged *****************************************************

// ********** Begin Class ASceneManager ************************************************************
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_SceneManager_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnGameManagerLoaded); \
	DECLARE_FUNCTION(execIsSceneChanging); \
	DECLARE_FUNCTION(execChangeScene);


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_SceneManager_h_26_CALLBACK_WRAPPERS
PARTYJUNGLE_API UClass* Z_Construct_UClass_ASceneManager_NoRegister();

#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_SceneManager_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASceneManager(); \
	friend struct Z_Construct_UClass_ASceneManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_ASceneManager_NoRegister(); \
public: \
	DECLARE_CLASS2(ASceneManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_ASceneManager_NoRegister) \
	DECLARE_SERIALIZER(ASceneManager)


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_SceneManager_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASceneManager(ASceneManager&&) = delete; \
	ASceneManager(const ASceneManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASceneManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASceneManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASceneManager) \
	NO_API virtual ~ASceneManager();


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_SceneManager_h_23_PROLOG
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_SceneManager_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_SceneManager_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_SceneManager_h_26_CALLBACK_WRAPPERS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_SceneManager_h_26_INCLASS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_SceneManager_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASceneManager;

// ********** End Class ASceneManager **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_SceneManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
