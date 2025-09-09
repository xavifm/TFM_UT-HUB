// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/Items/Base/Item.h"

#ifdef PARTYJUNGLE_Item_generated_h
#error "Item.generated.h already included, missing '#pragma once' in Item.h"
#endif
#define PARTYJUNGLE_Item_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AItem ********************************************************************
PARTYJUNGLE_API UClass* Z_Construct_UClass_AItem_NoRegister();

#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Items_Base_Item_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct Z_Construct_UClass_AItem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_AItem_NoRegister(); \
public: \
	DECLARE_CLASS2(AItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_AItem_NoRegister) \
	DECLARE_SERIALIZER(AItem)


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Items_Base_Item_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AItem(AItem&&) = delete; \
	AItem(const AItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItem) \
	NO_API virtual ~AItem();


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Items_Base_Item_h_9_PROLOG
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Items_Base_Item_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Items_Base_Item_h_12_INCLASS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Items_Base_Item_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AItem;

// ********** End Class AItem **********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Items_Base_Item_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
