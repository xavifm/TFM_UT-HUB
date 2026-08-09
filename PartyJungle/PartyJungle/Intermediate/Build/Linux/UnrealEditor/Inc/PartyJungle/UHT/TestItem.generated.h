// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/Items/TestItem.h"

#ifdef PARTYJUNGLE_TestItem_generated_h
#error "TestItem.generated.h already included, missing '#pragma once' in TestItem.h"
#endif
#define PARTYJUNGLE_TestItem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATestItem ****************************************************************
PARTYJUNGLE_API UClass* Z_Construct_UClass_ATestItem_NoRegister();

#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Items_TestItem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestItem(); \
	friend struct Z_Construct_UClass_ATestItem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_ATestItem_NoRegister(); \
public: \
	DECLARE_CLASS2(ATestItem, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_ATestItem_NoRegister) \
	DECLARE_SERIALIZER(ATestItem)


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Items_TestItem_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestItem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATestItem(ATestItem&&) = delete; \
	ATestItem(const ATestItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestItem) \
	NO_API virtual ~ATestItem();


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Items_TestItem_h_12_PROLOG
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Items_TestItem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Items_TestItem_h_15_INCLASS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Items_TestItem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATestItem;

// ********** End Class ATestItem ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Items_TestItem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
