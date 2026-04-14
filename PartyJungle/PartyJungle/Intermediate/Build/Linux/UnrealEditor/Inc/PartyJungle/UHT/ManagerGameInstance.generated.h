// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameInstance/ManagerGameInstance.h"

#ifdef PARTYJUNGLE_ManagerGameInstance_generated_h
#error "ManagerGameInstance.generated.h already included, missing '#pragma once' in ManagerGameInstance.h"
#endif
#define PARTYJUNGLE_ManagerGameInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ADuelManager;
class AInputManager;
class ASceneManager;
class AStateManager;
class UManagerGameInstance;
struct FGameData;

// ********** Begin Delegate FEvent_GameManagerLoaded **********************************************
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_GameInstance_ManagerGameInstance_h_21_DELEGATE \
PARTYJUNGLE_API void FEvent_GameManagerLoaded_DelegateWrapper(const FMulticastScriptDelegate& Event_GameManagerLoaded, const UManagerGameInstance* a_GameManager);


// ********** End Delegate FEvent_GameManagerLoaded ************************************************

// ********** Begin Class UManagerGameInstance *****************************************************
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_GameInstance_ManagerGameInstance_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execCheckGameManagerLoaded); \
	DECLARE_FUNCTION(execGetSceneManager); \
	DECLARE_FUNCTION(execGetDuelManager); \
	DECLARE_FUNCTION(execGetInputManager); \
	DECLARE_FUNCTION(execGetStateManager); \
	DECLARE_FUNCTION(execGetGameDataManager);


PARTYJUNGLE_API UClass* Z_Construct_UClass_UManagerGameInstance_NoRegister();

#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_GameInstance_ManagerGameInstance_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUManagerGameInstance(); \
	friend struct Z_Construct_UClass_UManagerGameInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_UManagerGameInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UManagerGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_UManagerGameInstance_NoRegister) \
	DECLARE_SERIALIZER(UManagerGameInstance)


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_GameInstance_ManagerGameInstance_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UManagerGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UManagerGameInstance(UManagerGameInstance&&) = delete; \
	UManagerGameInstance(const UManagerGameInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UManagerGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManagerGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UManagerGameInstance) \
	NO_API virtual ~UManagerGameInstance();


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_GameInstance_ManagerGameInstance_h_27_PROLOG
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_GameInstance_ManagerGameInstance_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_GameInstance_ManagerGameInstance_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_GameInstance_ManagerGameInstance_h_30_INCLASS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_GameInstance_ManagerGameInstance_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UManagerGameInstance;

// ********** End Class UManagerGameInstance *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_GameInstance_ManagerGameInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
