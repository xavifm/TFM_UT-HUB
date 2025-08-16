// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Map/Square.h"

#ifdef PARTYJUNGLE_Square_generated_h
#error "Square.generated.h already included, missing '#pragma once' in Square.h"
#endif
#define PARTYJUNGLE_Square_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AMinion;
class ASquare;

// ********** Begin Class ASquare ******************************************************************
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_Square_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetSquare); \
	DECLARE_FUNCTION(execGetNextSquare); \
	DECLARE_FUNCTION(execRemoveMinion); \
	DECLARE_FUNCTION(execAddMinion); \
	DECLARE_FUNCTION(execCloseChooseMenu); \
	DECLARE_FUNCTION(execOpenChooseMenu); \
	DECLARE_FUNCTION(execSwitchDuelSquare); \
	DECLARE_FUNCTION(execCheckIfSquareIsBlocked); \
	DECLARE_FUNCTION(execGetNextNode);


PARTYJUNGLE_API UClass* Z_Construct_UClass_ASquare_NoRegister();

#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_Square_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASquare(); \
	friend struct Z_Construct_UClass_ASquare_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_ASquare_NoRegister(); \
public: \
	DECLARE_CLASS2(ASquare, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_ASquare_NoRegister) \
	DECLARE_SERIALIZER(ASquare)


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_Square_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASquare(ASquare&&) = delete; \
	ASquare(const ASquare&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASquare); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASquare); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASquare) \
	NO_API virtual ~ASquare();


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_Square_h_19_PROLOG
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_Square_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_Square_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_Square_h_22_INCLASS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_Square_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASquare;

// ********** End Class ASquare ********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_Square_h

// ********** Begin Enum ESquareType ***************************************************************
#define FOREACH_ENUM_ESQUARETYPE(op) \
	op(ESquareType::NORMAL) \
	op(ESquareType::TRAP) \
	op(ESquareType::SAFE_ZONE) 

enum class ESquareType : uint8;
template<> struct TIsUEnumClass<ESquareType> { enum { Value = true }; };
template<> PARTYJUNGLE_API UEnum* StaticEnum<ESquareType>();
// ********** End Enum ESquareType *****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
