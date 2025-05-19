// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "World/WorldManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACameraActor;
#ifdef PARTYJUNGLE_WorldManager_generated_h
#error "WorldManager.generated.h already included, missing '#pragma once' in WorldManager.h"
#endif
#define PARTYJUNGLE_WorldManager_generated_h

#define FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_World_WorldManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDisableAllStars); \
	DECLARE_FUNCTION(execEnableStarAtRandomLocation); \
	DECLARE_FUNCTION(execLoadPortion); \
	DECLARE_FUNCTION(execUnloadEntireWorld); \
	DECLARE_FUNCTION(execGetMinigameCameraByIndex); \
	DECLARE_FUNCTION(execGetLevelByIndex); \
	DECLARE_FUNCTION(execAsssignCameraActors); \
	DECLARE_FUNCTION(execInitializeCameras);


#define FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_World_WorldManager_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWorldManager(); \
	friend struct Z_Construct_UClass_AWorldManager_Statics; \
public: \
	DECLARE_CLASS(AWorldManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), NO_API) \
	DECLARE_SERIALIZER(AWorldManager)


#define FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_World_WorldManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWorldManager(AWorldManager&&); \
	AWorldManager(const AWorldManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorldManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWorldManager) \
	NO_API virtual ~AWorldManager();


#define FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_World_WorldManager_h_11_PROLOG
#define FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_World_WorldManager_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_World_WorldManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_World_WorldManager_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_World_WorldManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARTYJUNGLE_API UClass* StaticClass<class AWorldManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_World_WorldManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
