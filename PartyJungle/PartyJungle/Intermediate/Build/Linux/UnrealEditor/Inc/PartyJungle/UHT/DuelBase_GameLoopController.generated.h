// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controllers/GameLoopControllers/DuelBase_GameLoopController.h"

#ifdef PARTYJUNGLE_DuelBase_GameLoopController_generated_h
#error "DuelBase_GameLoopController.generated.h already included, missing '#pragma once' in DuelBase_GameLoopController.h"
#endif
#define PARTYJUNGLE_DuelBase_GameLoopController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ADuelBase_GameLoopController *********************************************
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_DuelBase_GameLoopController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCloseDuelMenu); \
	DECLARE_FUNCTION(execFinishDuel);


PARTYJUNGLE_API UClass* Z_Construct_UClass_ADuelBase_GameLoopController_NoRegister();

#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_DuelBase_GameLoopController_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADuelBase_GameLoopController(); \
	friend struct Z_Construct_UClass_ADuelBase_GameLoopController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_ADuelBase_GameLoopController_NoRegister(); \
public: \
	DECLARE_CLASS2(ADuelBase_GameLoopController, AGameLoopControllerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_ADuelBase_GameLoopController_NoRegister) \
	DECLARE_SERIALIZER(ADuelBase_GameLoopController)


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_DuelBase_GameLoopController_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADuelBase_GameLoopController(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADuelBase_GameLoopController(ADuelBase_GameLoopController&&) = delete; \
	ADuelBase_GameLoopController(const ADuelBase_GameLoopController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADuelBase_GameLoopController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADuelBase_GameLoopController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADuelBase_GameLoopController) \
	NO_API virtual ~ADuelBase_GameLoopController();


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_DuelBase_GameLoopController_h_11_PROLOG
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_DuelBase_GameLoopController_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_DuelBase_GameLoopController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_DuelBase_GameLoopController_h_14_INCLASS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_DuelBase_GameLoopController_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADuelBase_GameLoopController;

// ********** End Class ADuelBase_GameLoopController ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_DuelBase_GameLoopController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
