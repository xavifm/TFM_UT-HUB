// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/Minion/Minion.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASquare;
#ifdef PARTYJUNGLE_Minion_generated_h
#error "Minion.generated.h already included, missing '#pragma once' in Minion.h"
#endif
#define PARTYJUNGLE_Minion_generated_h

#define FID_PartyJungle_Source_PartyJungle_Player_Minion_Minion_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetNextSquare); \
	DECLARE_FUNCTION(execMoveToSquare); \
	DECLARE_FUNCTION(execSetMinionsMovements);


#define FID_PartyJungle_Source_PartyJungle_Player_Minion_Minion_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMinion(); \
	friend struct Z_Construct_UClass_AMinion_Statics; \
public: \
	DECLARE_CLASS(AMinion, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), NO_API) \
	DECLARE_SERIALIZER(AMinion)


#define FID_PartyJungle_Source_PartyJungle_Player_Minion_Minion_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMinion(AMinion&&); \
	AMinion(const AMinion&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMinion); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMinion); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMinion) \
	NO_API virtual ~AMinion();


#define FID_PartyJungle_Source_PartyJungle_Player_Minion_Minion_h_16_PROLOG
#define FID_PartyJungle_Source_PartyJungle_Player_Minion_Minion_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PartyJungle_Source_PartyJungle_Player_Minion_Minion_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PartyJungle_Source_PartyJungle_Player_Minion_Minion_h_19_INCLASS_NO_PURE_DECLS \
	FID_PartyJungle_Source_PartyJungle_Player_Minion_Minion_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARTYJUNGLE_API UClass* StaticClass<class AMinion>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PartyJungle_Source_PartyJungle_Player_Minion_Minion_h


#define FOREACH_ENUM_ETEAM(op) \
	op(ETeam::TEAM_ONE) \
	op(ETeam::TEAM_TWO) \
	op(ETeam::TEAM_THREE) \
	op(ETeam::TEAM_FOUR) 

enum class ETeam : uint8;
template<> struct TIsUEnumClass<ETeam> { enum { Value = true }; };
template<> PARTYJUNGLE_API UEnum* StaticEnum<ETeam>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
