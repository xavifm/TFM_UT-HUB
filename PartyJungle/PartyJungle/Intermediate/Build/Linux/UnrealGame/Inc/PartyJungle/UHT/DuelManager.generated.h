// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Managers/DuelManager.h"

#ifdef PARTYJUNGLE_DuelManager_generated_h
#error "DuelManager.generated.h already included, missing '#pragma once' in DuelManager.h"
#endif
#define PARTYJUNGLE_DuelManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AMinion;
enum class EDuelType : uint8;

// ********** Begin Class ADuelManager *************************************************************
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_DuelManager_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDuelSquareIndex); \
	DECLARE_FUNCTION(execSetDuelSquareIndex); \
	DECLARE_FUNCTION(execGetRouletteResult); \
	DECLARE_FUNCTION(execSetRouletteResult); \
	DECLARE_FUNCTION(execSendRegistryToInstance); \
	DECLARE_FUNCTION(execRegisterDuel); \
	DECLARE_FUNCTION(execResetDuels); \
	DECLARE_FUNCTION(execIsAnyCrownInDuel); \
	DECLARE_FUNCTION(execGetBetCrownsQuantity); \
	DECLARE_FUNCTION(execGetSavedPot); \
	DECLARE_FUNCTION(execGetPotQuantity); \
	DECLARE_FUNCTION(execGetBetCoinsQuantity); \
	DECLARE_FUNCTION(execSwitchDuelType); \
	DECLARE_FUNCTION(execGetDuelType); \
	DECLARE_FUNCTION(execSaveDuelToRegistry); \
	DECLARE_FUNCTION(execSafeDuelChoice); \
	DECLARE_FUNCTION(execSetUpDuelInfo);


PARTYJUNGLE_API UClass* Z_Construct_UClass_ADuelManager_NoRegister();

#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_DuelManager_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADuelManager(); \
	friend struct Z_Construct_UClass_ADuelManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_ADuelManager_NoRegister(); \
public: \
	DECLARE_CLASS2(ADuelManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_ADuelManager_NoRegister) \
	DECLARE_SERIALIZER(ADuelManager)


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_DuelManager_h_31_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADuelManager(ADuelManager&&) = delete; \
	ADuelManager(const ADuelManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADuelManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADuelManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADuelManager) \
	NO_API virtual ~ADuelManager();


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_DuelManager_h_28_PROLOG
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_DuelManager_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_DuelManager_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_DuelManager_h_31_INCLASS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_DuelManager_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADuelManager;

// ********** End Class ADuelManager ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_DuelManager_h

// ********** Begin Enum EDuelType *****************************************************************
#define FOREACH_ENUM_EDUELTYPE(op) \
	op(EDuelType::HALF_COINS) \
	op(EDuelType::ALL_IN_COINS) \
	op(EDuelType::ALL_IN_VS_ST) \
	op(EDuelType::RESIGN) 

enum class EDuelType : uint8;
template<> struct TIsUEnumClass<EDuelType> { enum { Value = true }; };
template<> PARTYJUNGLE_API UEnum* StaticEnum<EDuelType>();
// ********** End Enum EDuelType *******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
