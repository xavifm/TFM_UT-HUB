// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controllers/PlayersControllers/Default_PlayersController.h"

#ifdef PARTYJUNGLE_Default_PlayersController_generated_h
#error "Default_PlayersController.generated.h already included, missing '#pragma once' in Default_PlayersController.h"
#endif
#define PARTYJUNGLE_Default_PlayersController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ADefault_PlayersController ***********************************************
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_Default_PlayersController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPlayerChanged); \
	DECLARE_FUNCTION(execOnLeftJoystick_X);


PARTYJUNGLE_API UClass* Z_Construct_UClass_ADefault_PlayersController_NoRegister();

#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_Default_PlayersController_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADefault_PlayersController(); \
	friend struct Z_Construct_UClass_ADefault_PlayersController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_ADefault_PlayersController_NoRegister(); \
public: \
	DECLARE_CLASS2(ADefault_PlayersController, APlayersControllerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_ADefault_PlayersController_NoRegister) \
	DECLARE_SERIALIZER(ADefault_PlayersController)


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_Default_PlayersController_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADefault_PlayersController(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADefault_PlayersController(ADefault_PlayersController&&) = delete; \
	ADefault_PlayersController(const ADefault_PlayersController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADefault_PlayersController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefault_PlayersController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADefault_PlayersController) \
	NO_API virtual ~ADefault_PlayersController();


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_Default_PlayersController_h_11_PROLOG
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_Default_PlayersController_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_Default_PlayersController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_Default_PlayersController_h_14_INCLASS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_Default_PlayersController_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADefault_PlayersController;

// ********** End Class ADefault_PlayersController *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_Default_PlayersController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
