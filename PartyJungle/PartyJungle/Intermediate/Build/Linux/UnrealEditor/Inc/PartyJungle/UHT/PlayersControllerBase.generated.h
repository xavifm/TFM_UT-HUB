// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controllers/PlayersControllers/PlayersControllerBase.h"

#ifdef PARTYJUNGLE_PlayersControllerBase_generated_h
#error "PlayersControllerBase.generated.h already included, missing '#pragma once' in PlayersControllerBase.h"
#endif
#define PARTYJUNGLE_PlayersControllerBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AMinion;
struct FPlayerData;

// ********** Begin Delegate FEvent_PlayerChanged **************************************************
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_PlayersControllerBase_h_23_DELEGATE \
PARTYJUNGLE_API void FEvent_PlayerChanged_DelegateWrapper(const FMulticastScriptDelegate& Event_PlayerChanged, int32 a_OldPlayerId, int32 a_NewPlayerId);


// ********** End Delegate FEvent_PlayerChanged ****************************************************

// ********** Begin Delegate FEvent_MinionChanged **************************************************
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_PlayersControllerBase_h_34_DELEGATE \
PARTYJUNGLE_API void FEvent_MinionChanged_DelegateWrapper(const FMulticastScriptDelegate& Event_MinionChanged, int32 a_PlayerId, int32 a_OldMinionId, int32 a_NewMinionId);


// ********** End Delegate FEvent_MinionChanged ****************************************************

// ********** Begin Class APlayersControllerBase ***************************************************
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_PlayersControllerBase_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetEventsEnabled); \
	DECLARE_FUNCTION(execSetInputsEnabled); \
	DECLARE_FUNCTION(execAssignPlayerToTeam); \
	DECLARE_FUNCTION(execSetAllPlayersInputsEnabled); \
	DECLARE_FUNCTION(execSetPlayerInputsEnabled); \
	DECLARE_FUNCTION(execGetPlayersAmount); \
	DECLARE_FUNCTION(execGetPlayersByTeamId); \
	DECLARE_FUNCTION(execGetPlayerById); \
	DECLARE_FUNCTION(execGetMinionById); \
	DECLARE_FUNCTION(execGetCurrentMinion); \
	DECLARE_FUNCTION(execGetCurrentMinionId); \
	DECLARE_FUNCTION(execGetCurrentPlayer); \
	DECLARE_FUNCTION(execGetCurrentPlayerId); \
	DECLARE_FUNCTION(execPreviousMinion); \
	DECLARE_FUNCTION(execNextMinion); \
	DECLARE_FUNCTION(execSetMinionById); \
	DECLARE_FUNCTION(execNextPlayer); \
	DECLARE_FUNCTION(execSetPlayerById);


PARTYJUNGLE_API UClass* Z_Construct_UClass_APlayersControllerBase_NoRegister();

#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_PlayersControllerBase_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayersControllerBase(); \
	friend struct Z_Construct_UClass_APlayersControllerBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_APlayersControllerBase_NoRegister(); \
public: \
	DECLARE_CLASS2(APlayersControllerBase, AControllerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_APlayersControllerBase_NoRegister) \
	DECLARE_SERIALIZER(APlayersControllerBase)


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_PlayersControllerBase_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayersControllerBase(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	APlayersControllerBase(APlayersControllerBase&&) = delete; \
	APlayersControllerBase(const APlayersControllerBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayersControllerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayersControllerBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayersControllerBase) \
	NO_API virtual ~APlayersControllerBase();


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_PlayersControllerBase_h_40_PROLOG
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_PlayersControllerBase_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_PlayersControllerBase_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_PlayersControllerBase_h_43_INCLASS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_PlayersControllerBase_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APlayersControllerBase;

// ********** End Class APlayersControllerBase *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_PlayersControllerBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
