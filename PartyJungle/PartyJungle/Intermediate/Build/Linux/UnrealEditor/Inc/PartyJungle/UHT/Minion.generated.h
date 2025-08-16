// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/Minion/Minion.h"

#ifdef PARTYJUNGLE_Minion_generated_h
#error "Minion.generated.h already included, missing '#pragma once' in Minion.h"
#endif
#define PARTYJUNGLE_Minion_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ASquare;
enum class EMinionState : uint8;

// ********** Begin Class AMinion ******************************************************************
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Minion_Minion_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDelayedPlayerCheck); \
	DECLARE_FUNCTION(execGetNextSquare); \
	DECLARE_FUNCTION(execGetCrowns); \
	DECLARE_FUNCTION(execGetCoins); \
	DECLARE_FUNCTION(execUpdateCrowns); \
	DECLARE_FUNCTION(execUpdateCoins); \
	DECLARE_FUNCTION(execMoveToSquare); \
	DECLARE_FUNCTION(execGetMinionsMovements); \
	DECLARE_FUNCTION(execSetMinionsMovements);


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Minion_Minion_h_28_CALLBACK_WRAPPERS
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinion_NoRegister();

#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Minion_Minion_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMinion(); \
	friend struct Z_Construct_UClass_AMinion_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinion_NoRegister(); \
public: \
	DECLARE_CLASS2(AMinion, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_AMinion_NoRegister) \
	DECLARE_SERIALIZER(AMinion)


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Minion_Minion_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMinion(AMinion&&) = delete; \
	AMinion(const AMinion&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMinion); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMinion); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMinion) \
	NO_API virtual ~AMinion();


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Minion_Minion_h_25_PROLOG
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Minion_Minion_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Minion_Minion_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Minion_Minion_h_28_CALLBACK_WRAPPERS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Minion_Minion_h_28_INCLASS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Minion_Minion_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMinion;

// ********** End Class AMinion ********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Minion_Minion_h

// ********** Begin Enum ETeam *********************************************************************
#define FOREACH_ENUM_ETEAM(op) \
	op(ETeam::TEAM_ONE) \
	op(ETeam::TEAM_TWO) \
	op(ETeam::TEAM_THREE) \
	op(ETeam::TEAM_FOUR) 

enum class ETeam : uint8;
template<> struct TIsUEnumClass<ETeam> { enum { Value = true }; };
template<> PARTYJUNGLE_API UEnum* StaticEnum<ETeam>();
// ********** End Enum ETeam ***********************************************************************

// ********** Begin Enum EMinionState **************************************************************
#define FOREACH_ENUM_EMINIONSTATE(op) \
	op(EMinionState::IDLE) \
	op(EMinionState::WALK) 

enum class EMinionState : uint8;
template<> struct TIsUEnumClass<EMinionState> { enum { Value = true }; };
template<> PARTYJUNGLE_API UEnum* StaticEnum<EMinionState>();
// ********** End Enum EMinionState ****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
