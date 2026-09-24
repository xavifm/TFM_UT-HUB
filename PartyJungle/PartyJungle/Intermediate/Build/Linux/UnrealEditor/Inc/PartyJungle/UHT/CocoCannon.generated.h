// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Minigame/Minigame2/CocoCannon.h"

#ifdef PARTYJUNGLE_CocoCannon_generated_h
#error "CocoCannon.generated.h already included, missing '#pragma once' in CocoCannon.h"
#endif
#define PARTYJUNGLE_CocoCannon_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACocoCannon **************************************************************
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame2_CocoCannon_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPossessMovement); \
	DECLARE_FUNCTION(execShootCannon);


PARTYJUNGLE_API UClass* Z_Construct_UClass_ACocoCannon_NoRegister();

#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame2_CocoCannon_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACocoCannon(); \
	friend struct Z_Construct_UClass_ACocoCannon_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_ACocoCannon_NoRegister(); \
public: \
	DECLARE_CLASS2(ACocoCannon, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_ACocoCannon_NoRegister) \
	DECLARE_SERIALIZER(ACocoCannon)


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame2_CocoCannon_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACocoCannon(ACocoCannon&&) = delete; \
	ACocoCannon(const ACocoCannon&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACocoCannon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACocoCannon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACocoCannon) \
	NO_API virtual ~ACocoCannon();


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame2_CocoCannon_h_12_PROLOG
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame2_CocoCannon_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame2_CocoCannon_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame2_CocoCannon_h_15_INCLASS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame2_CocoCannon_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACocoCannon;

// ********** End Class ACocoCannon ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame2_CocoCannon_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
