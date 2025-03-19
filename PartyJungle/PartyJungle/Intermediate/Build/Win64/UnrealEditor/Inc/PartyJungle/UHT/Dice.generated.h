// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dice/Dice.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PARTYJUNGLE_Dice_generated_h
#error "Dice.generated.h already included, missing '#pragma once' in Dice.h"
#endif
#define PARTYJUNGLE_Dice_generated_h

#define FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Dice_Dice_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRollTheDice);


#define FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Dice_Dice_h_10_CALLBACK_WRAPPERS
#define FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Dice_Dice_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADice(); \
	friend struct Z_Construct_UClass_ADice_Statics; \
public: \
	DECLARE_CLASS(ADice, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), NO_API) \
	DECLARE_SERIALIZER(ADice)


#define FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Dice_Dice_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADice(ADice&&); \
	ADice(const ADice&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADice); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADice); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADice) \
	NO_API virtual ~ADice();


#define FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Dice_Dice_h_7_PROLOG
#define FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Dice_Dice_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Dice_Dice_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Dice_Dice_h_10_CALLBACK_WRAPPERS \
	FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Dice_Dice_h_10_INCLASS_NO_PURE_DECLS \
	FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Dice_Dice_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARTYJUNGLE_API UClass* StaticClass<class ADice>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Dice_Dice_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
