// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controllers/CameraControllers/CameraControllerBase.h"

#ifdef PARTYJUNGLE_CameraControllerBase_generated_h
#error "CameraControllerBase.generated.h already included, missing '#pragma once' in CameraControllerBase.h"
#endif
#define PARTYJUNGLE_CameraControllerBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class ACameraModeControllerBase;
enum class ECameraModes : uint8;

// ********** Begin Class ACameraControllerBase ****************************************************
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraControllerBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnUpdateState_Implementation); \
	DECLARE_FUNCTION(execCanChangeCameraMode); \
	DECLARE_FUNCTION(execSetCameraTarget); \
	DECLARE_FUNCTION(execGetCurrentCameraData); \
	DECLARE_FUNCTION(execSetCameraMode); \
	DECLARE_FUNCTION(execGetCameraMode);


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraControllerBase_h_20_CALLBACK_WRAPPERS
PARTYJUNGLE_API UClass* Z_Construct_UClass_ACameraControllerBase_NoRegister();

#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraControllerBase_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACameraControllerBase(); \
	friend struct Z_Construct_UClass_ACameraControllerBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_ACameraControllerBase_NoRegister(); \
public: \
	DECLARE_CLASS2(ACameraControllerBase, AControllerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_ACameraControllerBase_NoRegister) \
	DECLARE_SERIALIZER(ACameraControllerBase)


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraControllerBase_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACameraControllerBase(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACameraControllerBase(ACameraControllerBase&&) = delete; \
	ACameraControllerBase(const ACameraControllerBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACameraControllerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACameraControllerBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACameraControllerBase) \
	NO_API virtual ~ACameraControllerBase();


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraControllerBase_h_17_PROLOG
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraControllerBase_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraControllerBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraControllerBase_h_20_CALLBACK_WRAPPERS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraControllerBase_h_20_INCLASS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraControllerBase_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACameraControllerBase;

// ********** End Class ACameraControllerBase ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraControllerBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
