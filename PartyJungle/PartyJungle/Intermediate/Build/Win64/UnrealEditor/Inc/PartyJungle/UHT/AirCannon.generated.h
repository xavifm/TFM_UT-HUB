// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Minigame/Minigame1/AirCannon.h"

#ifdef PARTYJUNGLE_AirCannon_generated_h
#error "AirCannon.generated.h already included, missing '#pragma once' in AirCannon.h"
#endif
#define PARTYJUNGLE_AirCannon_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAirCannon ***************************************************************
#define FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame1_AirCannon_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFinishCannonCharge); \
	DECLARE_FUNCTION(execStartCannonCharge); \
	DECLARE_FUNCTION(execShootCannon); \
	DECLARE_FUNCTION(execCalculateCurrentPushStrength); \
	DECLARE_FUNCTION(execIncrementUpForce); \
	DECLARE_FUNCTION(execResetProjectilePosition);


#define FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame1_AirCannon_h_15_CALLBACK_WRAPPERS
PARTYJUNGLE_API UClass* Z_Construct_UClass_AAirCannon_NoRegister();

#define FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame1_AirCannon_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAirCannon(); \
	friend struct Z_Construct_UClass_AAirCannon_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_AAirCannon_NoRegister(); \
public: \
	DECLARE_CLASS2(AAirCannon, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_AAirCannon_NoRegister) \
	DECLARE_SERIALIZER(AAirCannon)


#define FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame1_AirCannon_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAirCannon(AAirCannon&&) = delete; \
	AAirCannon(const AAirCannon&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAirCannon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAirCannon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAirCannon) \
	NO_API virtual ~AAirCannon();


#define FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame1_AirCannon_h_12_PROLOG
#define FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame1_AirCannon_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame1_AirCannon_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame1_AirCannon_h_15_CALLBACK_WRAPPERS \
	FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame1_AirCannon_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame1_AirCannon_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAirCannon;

// ********** End Class AAirCannon *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame1_AirCannon_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
