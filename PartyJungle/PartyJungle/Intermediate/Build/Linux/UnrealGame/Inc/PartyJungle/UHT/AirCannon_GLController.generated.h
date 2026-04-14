// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controllers/GameLoopControllers/AirCannon_GLController.h"

#ifdef PARTYJUNGLE_AirCannon_GLController_generated_h
#error "AirCannon_GLController.generated.h already included, missing '#pragma once' in AirCannon_GLController.h"
#endif
#define PARTYJUNGLE_AirCannon_GLController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAirCannon_GLController **************************************************
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_AirCannon_GLController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStartCannonsCharge); \
	DECLARE_FUNCTION(execSetupAirCannonsInfo); \
	DECLARE_FUNCTION(execSetCameraTarget);


PARTYJUNGLE_API UClass* Z_Construct_UClass_AAirCannon_GLController_NoRegister();

#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_AirCannon_GLController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAirCannon_GLController(); \
	friend struct Z_Construct_UClass_AAirCannon_GLController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_AAirCannon_GLController_NoRegister(); \
public: \
	DECLARE_CLASS2(AAirCannon_GLController, ADuelBase_GameLoopController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_AAirCannon_GLController_NoRegister) \
	DECLARE_SERIALIZER(AAirCannon_GLController)


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_AirCannon_GLController_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAirCannon_GLController(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAirCannon_GLController(AAirCannon_GLController&&) = delete; \
	AAirCannon_GLController(const AAirCannon_GLController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAirCannon_GLController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAirCannon_GLController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAirCannon_GLController) \
	NO_API virtual ~AAirCannon_GLController();


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_AirCannon_GLController_h_14_PROLOG
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_AirCannon_GLController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_AirCannon_GLController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_AirCannon_GLController_h_17_INCLASS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_AirCannon_GLController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAirCannon_GLController;

// ********** End Class AAirCannon_GLController ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_AirCannon_GLController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
