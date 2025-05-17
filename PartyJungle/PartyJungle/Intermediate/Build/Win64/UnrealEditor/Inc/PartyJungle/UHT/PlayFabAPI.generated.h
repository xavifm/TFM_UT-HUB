// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayFabAPI/PlayFabAPI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PARTYJUNGLE_PlayFabAPI_generated_h
#error "PlayFabAPI.generated.h already included, missing '#pragma once' in PlayFabAPI.h"
#endif
#define PARTYJUNGLE_PlayFabAPI_generated_h

#define FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_PlayFabAPI_PlayFabAPI_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDisplayScore); \
	DECLARE_FUNCTION(execGetDisplayName); \
	DECLARE_FUNCTION(execSendScoreToPlayFab); \
	DECLARE_FUNCTION(execLoginUser); \
	DECLARE_FUNCTION(execRegisterUser);


#define FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_PlayFabAPI_PlayFabAPI_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayFabAPI(); \
	friend struct Z_Construct_UClass_APlayFabAPI_Statics; \
public: \
	DECLARE_CLASS(APlayFabAPI, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), NO_API) \
	DECLARE_SERIALIZER(APlayFabAPI)


#define FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_PlayFabAPI_PlayFabAPI_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlayFabAPI(APlayFabAPI&&); \
	APlayFabAPI(const APlayFabAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayFabAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayFabAPI); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayFabAPI) \
	NO_API virtual ~APlayFabAPI();


#define FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_PlayFabAPI_PlayFabAPI_h_7_PROLOG
#define FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_PlayFabAPI_PlayFabAPI_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_PlayFabAPI_PlayFabAPI_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_PlayFabAPI_PlayFabAPI_h_10_INCLASS_NO_PURE_DECLS \
	FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_PlayFabAPI_PlayFabAPI_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARTYJUNGLE_API UClass* StaticClass<class APlayFabAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_PlayFabAPI_PlayFabAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
