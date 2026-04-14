// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controllers/CameraControllers/CameraModeControllers/CameraModeControllerBase.h"

#ifdef PARTYJUNGLE_CameraModeControllerBase_generated_h
#error "CameraModeControllerBase.generated.h already included, missing '#pragma once' in CameraModeControllerBase.h"
#endif
#define PARTYJUNGLE_CameraModeControllerBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACameraModeControllerBase ************************************************
PARTYJUNGLE_API UClass* Z_Construct_UClass_ACameraModeControllerBase_NoRegister();

#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraModeControllers_CameraModeControllerBase_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACameraModeControllerBase(); \
	friend struct Z_Construct_UClass_ACameraModeControllerBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_ACameraModeControllerBase_NoRegister(); \
public: \
	DECLARE_CLASS2(ACameraModeControllerBase, AControllerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_ACameraModeControllerBase_NoRegister) \
	DECLARE_SERIALIZER(ACameraModeControllerBase)


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraModeControllers_CameraModeControllerBase_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACameraModeControllerBase(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACameraModeControllerBase(ACameraModeControllerBase&&) = delete; \
	ACameraModeControllerBase(const ACameraModeControllerBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACameraModeControllerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACameraModeControllerBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACameraModeControllerBase) \
	NO_API virtual ~ACameraModeControllerBase();


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraModeControllers_CameraModeControllerBase_h_24_PROLOG
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraModeControllers_CameraModeControllerBase_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraModeControllers_CameraModeControllerBase_h_27_INCLASS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraModeControllers_CameraModeControllerBase_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACameraModeControllerBase;

// ********** End Class ACameraModeControllerBase **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraModeControllers_CameraModeControllerBase_h

// ********** Begin Enum ECameraModes **************************************************************
#define FOREACH_ENUM_ECAMERAMODES(op) \
	op(ECameraModes::FullView) \
	op(ECameraModes::Focused) \
	op(ECameraModes::Cinematic) \
	op(ECameraModes::Static) 

enum class ECameraModes : uint8;
template<> struct TIsUEnumClass<ECameraModes> { enum { Value = true }; };
template<> PARTYJUNGLE_API UEnum* StaticEnum<ECameraModes>();
// ********** End Enum ECameraModes ****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
