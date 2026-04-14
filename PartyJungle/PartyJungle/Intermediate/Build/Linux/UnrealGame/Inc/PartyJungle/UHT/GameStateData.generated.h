// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameStates/GameStateData.h"

#ifdef PARTYJUNGLE_GameStateData_generated_h
#error "GameStateData.generated.h already included, missing '#pragma once' in GameStateData.h"
#endif
#define PARTYJUNGLE_GameStateData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AControllerBase;
class UManagerGameInstance;
enum class EGameControllers : uint8;

// ********** Begin Class AGameStateData ***********************************************************
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_GameStates_GameStateData_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddToStateManager); \
	DECLARE_FUNCTION(execInitState); \
	DECLARE_FUNCTION(execBeginState); \
	DECLARE_FUNCTION(execGetController); \
	DECLARE_FUNCTION(execCanExitControllers); \
	DECLARE_FUNCTION(execCanEnterControllers); \
	DECLARE_FUNCTION(execCanExitState); \
	DECLARE_FUNCTION(execCanEnterState); \
	DECLARE_FUNCTION(execGetGameStateId);


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_GameStates_GameStateData_h_29_CALLBACK_WRAPPERS
PARTYJUNGLE_API UClass* Z_Construct_UClass_AGameStateData_NoRegister();

#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_GameStates_GameStateData_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameStateData(); \
	friend struct Z_Construct_UClass_AGameStateData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_AGameStateData_NoRegister(); \
public: \
	DECLARE_CLASS2(AGameStateData, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_AGameStateData_NoRegister) \
	DECLARE_SERIALIZER(AGameStateData)


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_GameStates_GameStateData_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGameStateData(AGameStateData&&) = delete; \
	AGameStateData(const AGameStateData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameStateData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameStateData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameStateData) \
	NO_API virtual ~AGameStateData();


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_GameStates_GameStateData_h_26_PROLOG
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_GameStates_GameStateData_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_GameStates_GameStateData_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_GameStates_GameStateData_h_29_CALLBACK_WRAPPERS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_GameStates_GameStateData_h_29_INCLASS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_GameStates_GameStateData_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGameStateData;

// ********** End Class AGameStateData *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_GameStates_GameStateData_h

// ********** Begin Enum EGameControllers **********************************************************
#define FOREACH_ENUM_EGAMECONTROLLERS(op) \
	op(EGameControllers::GameLoop) \
	op(EGameControllers::Camera) \
	op(EGameControllers::Players) \
	op(EGameControllers::UI) \
	op(EGameControllers::COUNT) 

enum class EGameControllers : uint8;
template<> struct TIsUEnumClass<EGameControllers> { enum { Value = true }; };
template<> PARTYJUNGLE_API UEnum* StaticEnum<EGameControllers>();
// ********** End Enum EGameControllers ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
