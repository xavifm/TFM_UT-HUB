// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Challenge/ChallengeInformation.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMinion;
enum class EDuelType : uint8;
#ifdef PARTYJUNGLE_ChallengeInformation_generated_h
#error "ChallengeInformation.generated.h already included, missing '#pragma once' in ChallengeInformation.h"
#endif
#define PARTYJUNGLE_ChallengeInformation_generated_h

#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Challenge_ChallengeInformation_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBetCrownsQuantity); \
	DECLARE_FUNCTION(execGetBetCoinsQuantity); \
	DECLARE_FUNCTION(execSwitchDuelType); \
	DECLARE_FUNCTION(execGetDuelType); \
	DECLARE_FUNCTION(execSaveDuelToRegistry); \
	DECLARE_FUNCTION(execSetUpDuelInfo);


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Challenge_ChallengeInformation_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAChallengeInformation(); \
	friend struct Z_Construct_UClass_AChallengeInformation_Statics; \
public: \
	DECLARE_CLASS(AChallengeInformation, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), NO_API) \
	DECLARE_SERIALIZER(AChallengeInformation)


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Challenge_ChallengeInformation_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AChallengeInformation(AChallengeInformation&&); \
	AChallengeInformation(const AChallengeInformation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChallengeInformation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChallengeInformation); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AChallengeInformation) \
	NO_API virtual ~AChallengeInformation();


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Challenge_ChallengeInformation_h_17_PROLOG
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Challenge_ChallengeInformation_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Challenge_ChallengeInformation_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Challenge_ChallengeInformation_h_20_INCLASS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Challenge_ChallengeInformation_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARTYJUNGLE_API UClass* StaticClass<class AChallengeInformation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Challenge_ChallengeInformation_h


#define FOREACH_ENUM_EDUELTYPE(op) \
	op(EDuelType::HALF_COINS) \
	op(EDuelType::ALL_IN_COINS) \
	op(EDuelType::ALL_IN_VS_ST) 

enum class EDuelType : uint8;
template<> struct TIsUEnumClass<EDuelType> { enum { Value = true }; };
template<> PARTYJUNGLE_API UEnum* StaticEnum<EDuelType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
