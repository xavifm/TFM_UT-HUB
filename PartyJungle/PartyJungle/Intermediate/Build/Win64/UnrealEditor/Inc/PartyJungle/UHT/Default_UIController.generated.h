// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controllers/UIControllers/Default_UIController.h"

#ifdef PARTYJUNGLE_Default_UIController_generated_h
#error "Default_UIController.generated.h already included, missing '#pragma once' in Default_UIController.h"
#endif
#define PARTYJUNGLE_Default_UIController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ADefault_UIController ****************************************************
PARTYJUNGLE_API UClass* Z_Construct_UClass_ADefault_UIController_NoRegister();

#define FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_Default_UIController_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADefault_UIController(); \
	friend struct Z_Construct_UClass_ADefault_UIController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_ADefault_UIController_NoRegister(); \
public: \
	DECLARE_CLASS2(ADefault_UIController, AUIControllerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_ADefault_UIController_NoRegister) \
	DECLARE_SERIALIZER(ADefault_UIController)


#define FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_Default_UIController_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADefault_UIController(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADefault_UIController(ADefault_UIController&&) = delete; \
	ADefault_UIController(const ADefault_UIController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADefault_UIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefault_UIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADefault_UIController) \
	NO_API virtual ~ADefault_UIController();


#define FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_Default_UIController_h_8_PROLOG
#define FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_Default_UIController_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_Default_UIController_h_11_INCLASS_NO_PURE_DECLS \
	FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_Default_UIController_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADefault_UIController;

// ********** End Class ADefault_UIController ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_Default_UIController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
