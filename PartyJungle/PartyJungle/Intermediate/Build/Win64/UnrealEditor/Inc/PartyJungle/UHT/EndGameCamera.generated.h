// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EndGame/Camera/EndGameCamera.h"

#ifdef PARTYJUNGLE_EndGameCamera_generated_h
#error "EndGameCamera.generated.h already included, missing '#pragma once' in EndGameCamera.h"
#endif
#define PARTYJUNGLE_EndGameCamera_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FInputActionValue;

// ********** Begin Class AEndGameCamera ***********************************************************
#define FID_PartyJungle_Source_PartyJungle_EndGame_Camera_EndGameCamera_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleConfirmInput); \
	DECLARE_FUNCTION(execHandleLeftRightInput);


#define FID_PartyJungle_Source_PartyJungle_EndGame_Camera_EndGameCamera_h_12_CALLBACK_WRAPPERS
PARTYJUNGLE_API UClass* Z_Construct_UClass_AEndGameCamera_NoRegister();

#define FID_PartyJungle_Source_PartyJungle_EndGame_Camera_EndGameCamera_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEndGameCamera(); \
	friend struct Z_Construct_UClass_AEndGameCamera_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_AEndGameCamera_NoRegister(); \
public: \
	DECLARE_CLASS2(AEndGameCamera, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_AEndGameCamera_NoRegister) \
	DECLARE_SERIALIZER(AEndGameCamera)


#define FID_PartyJungle_Source_PartyJungle_EndGame_Camera_EndGameCamera_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AEndGameCamera(AEndGameCamera&&) = delete; \
	AEndGameCamera(const AEndGameCamera&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEndGameCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEndGameCamera); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEndGameCamera) \
	NO_API virtual ~AEndGameCamera();


#define FID_PartyJungle_Source_PartyJungle_EndGame_Camera_EndGameCamera_h_9_PROLOG
#define FID_PartyJungle_Source_PartyJungle_EndGame_Camera_EndGameCamera_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PartyJungle_Source_PartyJungle_EndGame_Camera_EndGameCamera_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PartyJungle_Source_PartyJungle_EndGame_Camera_EndGameCamera_h_12_CALLBACK_WRAPPERS \
	FID_PartyJungle_Source_PartyJungle_EndGame_Camera_EndGameCamera_h_12_INCLASS_NO_PURE_DECLS \
	FID_PartyJungle_Source_PartyJungle_EndGame_Camera_EndGameCamera_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AEndGameCamera;

// ********** End Class AEndGameCamera *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PartyJungle_Source_PartyJungle_EndGame_Camera_EndGameCamera_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
