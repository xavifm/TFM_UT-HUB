// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controllers/GameLoopControllers/Testing_GameLoopController.h"

#ifdef PARTYJUNGLE_Testing_GameLoopController_generated_h
#error "Testing_GameLoopController.generated.h already included, missing '#pragma once' in Testing_GameLoopController.h"
#endif
#define PARTYJUNGLE_Testing_GameLoopController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EInputKeys : uint8;
enum class ETriggerEvents : uint8;

// ********** Begin Class ATesting_GameLoopController **********************************************
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_Testing_GameLoopController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnTrigger1_Right); \
	DECLARE_FUNCTION(execOnTrigger2_Right); \
	DECLARE_FUNCTION(execOnTrigger1_Left);


PARTYJUNGLE_API UClass* Z_Construct_UClass_ATesting_GameLoopController_NoRegister();

#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_Testing_GameLoopController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATesting_GameLoopController(); \
	friend struct Z_Construct_UClass_ATesting_GameLoopController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_ATesting_GameLoopController_NoRegister(); \
public: \
	DECLARE_CLASS2(ATesting_GameLoopController, AGameLoopControllerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_ATesting_GameLoopController_NoRegister) \
	DECLARE_SERIALIZER(ATesting_GameLoopController)


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_Testing_GameLoopController_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATesting_GameLoopController(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATesting_GameLoopController(ATesting_GameLoopController&&) = delete; \
	ATesting_GameLoopController(const ATesting_GameLoopController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATesting_GameLoopController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATesting_GameLoopController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATesting_GameLoopController) \
	NO_API virtual ~ATesting_GameLoopController();


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_Testing_GameLoopController_h_14_PROLOG
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_Testing_GameLoopController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_Testing_GameLoopController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_Testing_GameLoopController_h_17_INCLASS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_Testing_GameLoopController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATesting_GameLoopController;

// ********** End Class ATesting_GameLoopController ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_Testing_GameLoopController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
