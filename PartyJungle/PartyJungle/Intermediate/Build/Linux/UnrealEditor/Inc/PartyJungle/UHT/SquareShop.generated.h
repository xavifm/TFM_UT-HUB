// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Map/SquareShop.h"

#ifdef PARTYJUNGLE_SquareShop_generated_h
#error "SquareShop.generated.h already included, missing '#pragma once' in SquareShop.h"
#endif
#define PARTYJUNGLE_SquareShop_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AItem;

// ********** Begin Class ASquareShop **************************************************************
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_SquareShop_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSwitchShop); \
	DECLARE_FUNCTION(execSwitchShopItem);


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_SquareShop_h_11_CALLBACK_WRAPPERS
PARTYJUNGLE_API UClass* Z_Construct_UClass_ASquareShop_NoRegister();

#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_SquareShop_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASquareShop(); \
	friend struct Z_Construct_UClass_ASquareShop_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_ASquareShop_NoRegister(); \
public: \
	DECLARE_CLASS2(ASquareShop, ASquare, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_ASquareShop_NoRegister) \
	DECLARE_SERIALIZER(ASquareShop)


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_SquareShop_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASquareShop(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASquareShop(ASquareShop&&) = delete; \
	ASquareShop(const ASquareShop&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASquareShop); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASquareShop); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASquareShop) \
	NO_API virtual ~ASquareShop();


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_SquareShop_h_8_PROLOG
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_SquareShop_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_SquareShop_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_SquareShop_h_11_CALLBACK_WRAPPERS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_SquareShop_h_11_INCLASS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_SquareShop_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASquareShop;

// ********** End Class ASquareShop ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Map_SquareShop_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
