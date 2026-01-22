// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/Inventory/Inventory.h"

#ifdef PARTYJUNGLE_Inventory_generated_h
#error "Inventory.generated.h already included, missing '#pragma once' in Inventory.h"
#endif
#define PARTYJUNGLE_Inventory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AItem;
class AMinion;
enum class EUseMode : uint8;

// ********** Begin Class AInventory ***************************************************************
#define FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Inventory_Inventory_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSwitchItemThrowPlayer); \
	DECLARE_FUNCTION(execCheckIfItemExists); \
	DECLARE_FUNCTION(execGetSortedInventory); \
	DECLARE_FUNCTION(execAddItem); \
	DECLARE_FUNCTION(execCheckIfIsEmptySpace); \
	DECLARE_FUNCTION(execCheckIfThereIsSpaceToStoreItem); \
	DECLARE_FUNCTION(execGetItemUseModeFromUI); \
	DECLARE_FUNCTION(execUseItemFromUI); \
	DECLARE_FUNCTION(execUseItem);


#define FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Inventory_Inventory_h_12_CALLBACK_WRAPPERS
PARTYJUNGLE_API UClass* Z_Construct_UClass_AInventory_NoRegister();

#define FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Inventory_Inventory_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInventory(); \
	friend struct Z_Construct_UClass_AInventory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_AInventory_NoRegister(); \
public: \
	DECLARE_CLASS2(AInventory, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_AInventory_NoRegister) \
	DECLARE_SERIALIZER(AInventory)


#define FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Inventory_Inventory_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AInventory(AInventory&&) = delete; \
	AInventory(const AInventory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInventory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInventory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInventory) \
	NO_API virtual ~AInventory();


#define FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Inventory_Inventory_h_9_PROLOG
#define FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Inventory_Inventory_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Inventory_Inventory_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Inventory_Inventory_h_12_CALLBACK_WRAPPERS \
	FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Inventory_Inventory_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Inventory_Inventory_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AInventory;

// ********** End Class AInventory *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Inventory_Inventory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
