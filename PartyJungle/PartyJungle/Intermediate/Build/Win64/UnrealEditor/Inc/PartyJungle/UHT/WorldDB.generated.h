// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "World/WorldDB.h"

#ifdef PARTYJUNGLE_WorldDB_generated_h
#error "WorldDB.generated.h already included, missing '#pragma once' in WorldDB.h"
#endif
#define PARTYJUNGLE_WorldDB_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class AMinigameLogic;
enum class EMinigameType : uint8;
enum class ETeamsMode : uint8;

// ********** Begin Class AWorldDB *****************************************************************
#define FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_World_WorldDB_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMapActors); \
	DECLARE_FUNCTION(execGetAllMinigames); \
	DECLARE_FUNCTION(execGetRandomMinigameOfType); \
	DECLARE_FUNCTION(execGetMinigamesOfType); \
	DECLARE_FUNCTION(execGetMinigamesQuantity); \
	DECLARE_FUNCTION(execGetLevelByIndex);


PARTYJUNGLE_API UClass* Z_Construct_UClass_AWorldDB_NoRegister();

#define FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_World_WorldDB_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWorldDB(); \
	friend struct Z_Construct_UClass_AWorldDB_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_AWorldDB_NoRegister(); \
public: \
	DECLARE_CLASS2(AWorldDB, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_AWorldDB_NoRegister) \
	DECLARE_SERIALIZER(AWorldDB)


#define FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_World_WorldDB_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWorldDB(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AWorldDB(AWorldDB&&) = delete; \
	AWorldDB(const AWorldDB&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorldDB); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldDB); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWorldDB) \
	NO_API virtual ~AWorldDB();


#define FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_World_WorldDB_h_9_PROLOG
#define FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_World_WorldDB_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_World_WorldDB_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_World_WorldDB_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_World_WorldDB_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AWorldDB;

// ********** End Class AWorldDB *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_World_WorldDB_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
