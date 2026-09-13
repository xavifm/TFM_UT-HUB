// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controllers/GameLoopControllers/Default_GameLoopController.h"

#ifdef PARTYJUNGLE_Default_GameLoopController_generated_h
#error "Default_GameLoopController.generated.h already included, missing '#pragma once' in Default_GameLoopController.h"
#endif
#define PARTYJUNGLE_Default_GameLoopController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ADefault_GameLoopController **********************************************
PARTYJUNGLE_API UClass* Z_Construct_UClass_ADefault_GameLoopController_NoRegister();

#define FID_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_Default_GameLoopController_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADefault_GameLoopController(); \
	friend struct Z_Construct_UClass_ADefault_GameLoopController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_ADefault_GameLoopController_NoRegister(); \
public: \
	DECLARE_CLASS2(ADefault_GameLoopController, AGameLoopControllerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_ADefault_GameLoopController_NoRegister) \
	DECLARE_SERIALIZER(ADefault_GameLoopController)


#define FID_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_Default_GameLoopController_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADefault_GameLoopController(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADefault_GameLoopController(ADefault_GameLoopController&&) = delete; \
	ADefault_GameLoopController(const ADefault_GameLoopController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADefault_GameLoopController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefault_GameLoopController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADefault_GameLoopController) \
	NO_API virtual ~ADefault_GameLoopController();


#define FID_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_Default_GameLoopController_h_11_PROLOG
#define FID_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_Default_GameLoopController_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_Default_GameLoopController_h_14_INCLASS_NO_PURE_DECLS \
	FID_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_Default_GameLoopController_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADefault_GameLoopController;

// ********** End Class ADefault_GameLoopController ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PartyJungle_Source_PartyJungle_Controllers_GameLoopControllers_Default_GameLoopController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
