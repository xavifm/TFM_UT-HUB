// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controllers/UIControllers/Test_UIController.h"

#ifdef PARTYJUNGLE_Test_UIController_generated_h
#error "Test_UIController.generated.h already included, missing '#pragma once' in Test_UIController.h"
#endif
#define PARTYJUNGLE_Test_UIController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATest_UIController *******************************************************
PARTYJUNGLE_API UClass* Z_Construct_UClass_ATest_UIController_NoRegister();

#define FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_Test_UIController_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATest_UIController(); \
	friend struct Z_Construct_UClass_ATest_UIController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_ATest_UIController_NoRegister(); \
public: \
	DECLARE_CLASS2(ATest_UIController, ADefault_UIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_ATest_UIController_NoRegister) \
	DECLARE_SERIALIZER(ATest_UIController)


#define FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_Test_UIController_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATest_UIController(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATest_UIController(ATest_UIController&&) = delete; \
	ATest_UIController(const ATest_UIController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATest_UIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATest_UIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATest_UIController) \
	NO_API virtual ~ATest_UIController();


#define FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_Test_UIController_h_8_PROLOG
#define FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_Test_UIController_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_Test_UIController_h_11_INCLASS_NO_PURE_DECLS \
	FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_Test_UIController_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATest_UIController;

// ********** End Class ATest_UIController *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_Test_UIController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
