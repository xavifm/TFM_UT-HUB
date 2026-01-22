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

class AMinion;

// ********** Begin Class AItem ********************************************************************
#define FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Items_Base_Item_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPrice); \
	DECLARE_FUNCTION(execGetDescription); \
	DECLARE_FUNCTION(execGetName); \
	DECLARE_FUNCTION(execExecuteItem);


PARTYJUNGLE_API UClass* Z_Construct_UClass_AItem_NoRegister();

#define FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Items_Base_Item_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct Z_Construct_UClass_AItem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_AItem_NoRegister(); \
public: \
	DECLARE_CLASS2(AItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_AItem_NoRegister) \
	DECLARE_SERIALIZER(AItem)


#define FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Items_Base_Item_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AItem(AItem&&) = delete; \
	AItem(const AItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItem) \
	NO_API virtual ~AItem();


#define FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Items_Base_Item_h_24_PROLOG
#define FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Items_Base_Item_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Items_Base_Item_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Items_Base_Item_h_27_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Items_Base_Item_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AItem;

// ********** End Class AItem **********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Player_Items_Base_Item_h

// ********** Begin Enum EItemType *****************************************************************
#define FOREACH_ENUM_EITEMTYPE(op) \
	op(EItemType::DICE) \
	op(EItemType::MISC) 

enum class EItemType : uint8;
template<> struct TIsUEnumClass<EItemType> { enum { Value = true }; };
template<> PARTYJUNGLE_API UEnum* StaticEnum<EItemType>();
// ********** End Enum EItemType *******************************************************************

// ********** Begin Enum EUseMode ******************************************************************
#define FOREACH_ENUM_EUSEMODE(op) \
	op(EUseMode::SELECT) \
	op(EUseMode::THROW) \
	op(EUseMode::INSTANT) 

enum class EUseMode : uint8;
template<> struct TIsUEnumClass<EUseMode> { enum { Value = true }; };
template<> PARTYJUNGLE_API UEnum* StaticEnum<EUseMode>();
// ********** End Enum EUseMode ********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
