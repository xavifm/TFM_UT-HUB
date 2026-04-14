// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controllers/CameraControllers/CameraModeControllers/Cinematic_CameraModeController.h"

#ifdef PARTYJUNGLE_Cinematic_CameraModeController_generated_h
#error "Cinematic_CameraModeController.generated.h already included, missing '#pragma once' in Cinematic_CameraModeController.h"
#endif
#define PARTYJUNGLE_Cinematic_CameraModeController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACinematic_CameraModeController ******************************************
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraModeControllers_Cinematic_CameraModeController_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnCinematicEnd); \
	DECLARE_FUNCTION(execPlayCinematic); \
	DECLARE_FUNCTION(execTriggerEvent_CinematicEnd);


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraModeControllers_Cinematic_CameraModeController_h_21_CALLBACK_WRAPPERS
PARTYJUNGLE_API UClass* Z_Construct_UClass_ACinematic_CameraModeController_NoRegister();

#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraModeControllers_Cinematic_CameraModeController_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACinematic_CameraModeController(); \
	friend struct Z_Construct_UClass_ACinematic_CameraModeController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_ACinematic_CameraModeController_NoRegister(); \
public: \
	DECLARE_CLASS2(ACinematic_CameraModeController, ACameraModeControllerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_ACinematic_CameraModeController_NoRegister) \
	DECLARE_SERIALIZER(ACinematic_CameraModeController)


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraModeControllers_Cinematic_CameraModeController_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACinematic_CameraModeController(ACinematic_CameraModeController&&) = delete; \
	ACinematic_CameraModeController(const ACinematic_CameraModeController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACinematic_CameraModeController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACinematic_CameraModeController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACinematic_CameraModeController) \
	NO_API virtual ~ACinematic_CameraModeController();


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraModeControllers_Cinematic_CameraModeController_h_18_PROLOG
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraModeControllers_Cinematic_CameraModeController_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraModeControllers_Cinematic_CameraModeController_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraModeControllers_Cinematic_CameraModeController_h_21_CALLBACK_WRAPPERS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraModeControllers_Cinematic_CameraModeController_h_21_INCLASS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraModeControllers_Cinematic_CameraModeController_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACinematic_CameraModeController;

// ********** End Class ACinematic_CameraModeController ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraModeControllers_Cinematic_CameraModeController_h

// ********** Begin Enum ECinematicEndMode *********************************************************
#define FOREACH_ENUM_ECINEMATICENDMODE(op) \
	op(ECinematicEndMode::Time) \
	op(ECinematicEndMode::Event) 

enum class ECinematicEndMode;
template<> struct TIsUEnumClass<ECinematicEndMode> { enum { Value = true }; };
template<> PARTYJUNGLE_API UEnum* StaticEnum<ECinematicEndMode>();
// ********** End Enum ECinematicEndMode ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
