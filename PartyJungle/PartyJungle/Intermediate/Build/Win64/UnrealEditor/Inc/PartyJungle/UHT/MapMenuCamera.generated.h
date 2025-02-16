// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/Map/MapMenuCamera.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionValue;
#ifdef PARTYJUNGLE_MapMenuCamera_generated_h
#error "MapMenuCamera.generated.h already included, missing '#pragma once' in MapMenuCamera.h"
#endif
#define PARTYJUNGLE_MapMenuCamera_generated_h

#define FID_PartyJungle_Source_PartyJungle_Player_Map_MapMenuCamera_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFocusNextMinion); \
	DECLARE_FUNCTION(execSwitchCameraTeam);


#define FID_PartyJungle_Source_PartyJungle_Player_Map_MapMenuCamera_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMapMenuCamera(); \
	friend struct Z_Construct_UClass_AMapMenuCamera_Statics; \
public: \
	DECLARE_CLASS(AMapMenuCamera, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), NO_API) \
	DECLARE_SERIALIZER(AMapMenuCamera)


#define FID_PartyJungle_Source_PartyJungle_Player_Map_MapMenuCamera_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMapMenuCamera(AMapMenuCamera&&); \
	AMapMenuCamera(const AMapMenuCamera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapMenuCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapMenuCamera); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMapMenuCamera) \
	NO_API virtual ~AMapMenuCamera();


#define FID_PartyJungle_Source_PartyJungle_Player_Map_MapMenuCamera_h_11_PROLOG
#define FID_PartyJungle_Source_PartyJungle_Player_Map_MapMenuCamera_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PartyJungle_Source_PartyJungle_Player_Map_MapMenuCamera_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PartyJungle_Source_PartyJungle_Player_Map_MapMenuCamera_h_14_INCLASS_NO_PURE_DECLS \
	FID_PartyJungle_Source_PartyJungle_Player_Map_MapMenuCamera_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARTYJUNGLE_API UClass* StaticClass<class AMapMenuCamera>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PartyJungle_Source_PartyJungle_Player_Map_MapMenuCamera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
