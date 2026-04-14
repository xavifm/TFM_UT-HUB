// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Managers/StateManager.h"

#ifdef PARTYJUNGLE_StateManager_generated_h
#error "StateManager.generated.h already included, missing '#pragma once' in StateManager.h"
#endif
#define PARTYJUNGLE_StateManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AGameStateData;

// ********** Begin Delegate FEvent_GameStateChanged ***********************************************
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_StateManager_h_23_DELEGATE \
PARTYJUNGLE_API void FEvent_GameStateChanged_DelegateWrapper(const FMulticastScriptDelegate& Event_GameStateChanged, const AGameStateData* a_PreviousState, const AGameStateData* a_CurrentState);


// ********** End Delegate FEvent_GameStateChanged *************************************************

// ********** Begin Class AStateManager ************************************************************
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_StateManager_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execChangeState);


PARTYJUNGLE_API UClass* Z_Construct_UClass_AStateManager_NoRegister();

#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_StateManager_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStateManager(); \
	friend struct Z_Construct_UClass_AStateManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_AStateManager_NoRegister(); \
public: \
	DECLARE_CLASS2(AStateManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_AStateManager_NoRegister) \
	DECLARE_SERIALIZER(AStateManager)


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_StateManager_h_32_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AStateManager(AStateManager&&) = delete; \
	AStateManager(const AStateManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStateManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStateManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStateManager) \
	NO_API virtual ~AStateManager();


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_StateManager_h_29_PROLOG
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_StateManager_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_StateManager_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_StateManager_h_32_INCLASS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_StateManager_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AStateManager;

// ********** End Class AStateManager **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_StateManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
