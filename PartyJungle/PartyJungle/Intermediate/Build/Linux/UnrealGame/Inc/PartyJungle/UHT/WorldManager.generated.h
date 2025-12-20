// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "World/WorldManager.h"

#ifdef PARTYJUNGLE_WorldManager_generated_h
#error "WorldManager.generated.h already included, missing '#pragma once' in WorldManager.h"
#endif
#define PARTYJUNGLE_WorldManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class AMinigameLogic;
class UCameraComponent;

// ********** Begin Class AWorldManager ************************************************************
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_World_WorldManager_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDisableAllStars); \
	DECLARE_FUNCTION(execEnableStarAtRandomLocation); \
	DECLARE_FUNCTION(execLoadPortion); \
	DECLARE_FUNCTION(execUnloadEntireWorld); \
	DECLARE_FUNCTION(execGetMinigameCameraByIndex); \
	DECLARE_FUNCTION(execGetLevelByIndex); \
	DECLARE_FUNCTION(execAsssignCameraActors); \
	DECLARE_FUNCTION(execInitializeCameras);


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_World_WorldManager_h_22_CALLBACK_WRAPPERS
PARTYJUNGLE_API UClass* Z_Construct_UClass_AWorldManager_NoRegister();

#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_World_WorldManager_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWorldManager(); \
	friend struct Z_Construct_UClass_AWorldManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_AWorldManager_NoRegister(); \
public: \
	DECLARE_CLASS2(AWorldManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_AWorldManager_NoRegister) \
	DECLARE_SERIALIZER(AWorldManager)


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_World_WorldManager_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AWorldManager(AWorldManager&&) = delete; \
	AWorldManager(const AWorldManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorldManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWorldManager) \
	NO_API virtual ~AWorldManager();


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_World_WorldManager_h_19_PROLOG
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_World_WorldManager_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_World_WorldManager_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_World_WorldManager_h_22_CALLBACK_WRAPPERS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_World_WorldManager_h_22_INCLASS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_World_WorldManager_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AWorldManager;

// ********** End Class AWorldManager **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_World_WorldManager_h

// ********** Begin Enum E *************************************************************************
#define FOREACH_ENUM_E(op) \
	op(E::DUEL) \
	op(E::TEAM_MINIGAME) 

enum class E : uint8;
template<> struct TIsUEnumClass<E> { enum { Value = true }; };
template<> PARTYJUNGLE_API UEnum* StaticEnum<E>();
// ********** End Enum E ***************************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
