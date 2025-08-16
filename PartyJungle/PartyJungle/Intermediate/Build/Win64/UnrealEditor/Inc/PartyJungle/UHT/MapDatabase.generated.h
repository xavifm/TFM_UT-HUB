// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Map/MapDatabase.h"

#ifdef PARTYJUNGLE_MapDatabase_generated_h
#error "MapDatabase.generated.h already included, missing '#pragma once' in MapDatabase.h"
#endif
#define PARTYJUNGLE_MapDatabase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMapDatabase *************************************************************
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMapDatabase_NoRegister();

#define FID_PartyJungle_Source_PartyJungle_Map_MapDatabase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMapDatabase(); \
	friend struct Z_Construct_UClass_AMapDatabase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_AMapDatabase_NoRegister(); \
public: \
	DECLARE_CLASS2(AMapDatabase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_AMapDatabase_NoRegister) \
	DECLARE_SERIALIZER(AMapDatabase)


#define FID_PartyJungle_Source_PartyJungle_Map_MapDatabase_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMapDatabase(AMapDatabase&&) = delete; \
	AMapDatabase(const AMapDatabase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapDatabase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapDatabase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMapDatabase) \
	NO_API virtual ~AMapDatabase();


#define FID_PartyJungle_Source_PartyJungle_Map_MapDatabase_h_9_PROLOG
#define FID_PartyJungle_Source_PartyJungle_Map_MapDatabase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PartyJungle_Source_PartyJungle_Map_MapDatabase_h_12_INCLASS_NO_PURE_DECLS \
	FID_PartyJungle_Source_PartyJungle_Map_MapDatabase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMapDatabase;

// ********** End Class AMapDatabase ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PartyJungle_Source_PartyJungle_Map_MapDatabase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
