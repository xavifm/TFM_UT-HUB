// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controllers/ControllerBase.h"

#ifdef PARTYJUNGLE_ControllerBase_generated_h
#error "ControllerBase.generated.h already included, missing '#pragma once' in ControllerBase.h"
#endif
#define PARTYJUNGLE_ControllerBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AControllerBase **********************************************************
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_ControllerBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execReinitIfMatches); \
	DECLARE_FUNCTION(execCanExitController); \
	DECLARE_FUNCTION(execCanEnterController); \
	DECLARE_FUNCTION(execOnUpdateState); \
	DECLARE_FUNCTION(execOnExit); \
	DECLARE_FUNCTION(execOnStart); \
	DECLARE_FUNCTION(execOnBeginState);


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_ControllerBase_h_14_CALLBACK_WRAPPERS
PARTYJUNGLE_API UClass* Z_Construct_UClass_AControllerBase_NoRegister();

#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_ControllerBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAControllerBase(); \
	friend struct Z_Construct_UClass_AControllerBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_AControllerBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AControllerBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_AControllerBase_NoRegister) \
	DECLARE_SERIALIZER(AControllerBase)


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_ControllerBase_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AControllerBase(AControllerBase&&) = delete; \
	AControllerBase(const AControllerBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AControllerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AControllerBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AControllerBase)


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_ControllerBase_h_11_PROLOG
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_ControllerBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_ControllerBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_ControllerBase_h_14_CALLBACK_WRAPPERS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_ControllerBase_h_14_INCLASS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_ControllerBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AControllerBase;

// ********** End Class AControllerBase ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_ControllerBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
