// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EndGame/Camera/EndGameCamera.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionValue;
#ifdef PARTYJUNGLE_EndGameCamera_generated_h
#error "EndGameCamera.generated.h already included, missing '#pragma once' in EndGameCamera.h"
#endif
#define PARTYJUNGLE_EndGameCamera_generated_h

#define FID_PartyJungle_Source_PartyJungle_EndGame_Camera_EndGameCamera_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleConfirmInput); \
	DECLARE_FUNCTION(execHandleLeftRightInput);


#define FID_PartyJungle_Source_PartyJungle_EndGame_Camera_EndGameCamera_h_12_CALLBACK_WRAPPERS
#define FID_PartyJungle_Source_PartyJungle_EndGame_Camera_EndGameCamera_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEndGameCamera(); \
	friend struct Z_Construct_UClass_AEndGameCamera_Statics; \
public: \
	DECLARE_CLASS(AEndGameCamera, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), NO_API) \
	DECLARE_SERIALIZER(AEndGameCamera)


#define FID_PartyJungle_Source_PartyJungle_EndGame_Camera_EndGameCamera_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEndGameCamera(AEndGameCamera&&); \
	AEndGameCamera(const AEndGameCamera&); \
public: \
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


template<> PARTYJUNGLE_API UClass* StaticClass<class AEndGameCamera>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PartyJungle_Source_PartyJungle_EndGame_Camera_EndGameCamera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
