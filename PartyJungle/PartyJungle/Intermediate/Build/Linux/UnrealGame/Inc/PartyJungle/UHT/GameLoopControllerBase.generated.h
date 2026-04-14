// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controllers/GameLoopControllers/GameLoopControllerBase.h"

#ifdef PARTYJUNGLE_GameLoopControllerBase_generated_h
#error "GameLoopControllerBase.generated.h already included, missing '#pragma once' in GameLoopControllerBase.h"
#endif
#define PARTYJUNGLE_GameLoopControllerBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGameLoopControllerBase **************************************************
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_GameLoopControllerBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateDuelsData); \
	DECLARE_FUNCTION(execResetGameLoop); \
	DECLARE_FUNCTION(execSetTeamReady); \
	DECLARE_FUNCTION(execSetTeamScore); \
	DECLARE_FUNCTION(execCalculateWinner); \
	DECLARE_FUNCTION(execIsGameLoopFinished);


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_GameLoopControllerBase_h_18_CALLBACK_WRAPPERS
PARTYJUNGLE_API UClass* Z_Construct_UClass_AGameLoopControllerBase_NoRegister();

#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_GameLoopControllerBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameLoopControllerBase(); \
	friend struct Z_Construct_UClass_AGameLoopControllerBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_AGameLoopControllerBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AGameLoopControllerBase, AControllerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_AGameLoopControllerBase_NoRegister) \
	DECLARE_SERIALIZER(AGameLoopControllerBase)


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_GameLoopControllerBase_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameLoopControllerBase(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGameLoopControllerBase(AGameLoopControllerBase&&) = delete; \
	AGameLoopControllerBase(const AGameLoopControllerBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameLoopControllerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameLoopControllerBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameLoopControllerBase) \
	NO_API virtual ~AGameLoopControllerBase();


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_GameLoopControllerBase_h_15_PROLOG
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_GameLoopControllerBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_GameLoopControllerBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_GameLoopControllerBase_h_18_CALLBACK_WRAPPERS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_GameLoopControllerBase_h_18_INCLASS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_GameLoopControllerBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGameLoopControllerBase;

// ********** End Class AGameLoopControllerBase ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_GameLoopControllerBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
