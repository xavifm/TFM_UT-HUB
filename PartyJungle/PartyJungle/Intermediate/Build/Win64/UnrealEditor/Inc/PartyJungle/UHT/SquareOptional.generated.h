// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Map/SquareOptional.h"

#ifdef PARTYJUNGLE_SquareOptional_generated_h
#error "SquareOptional.generated.h already included, missing '#pragma once' in SquareOptional.h"
#endif
#define PARTYJUNGLE_SquareOptional_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASquareOptional **********************************************************
#define FID_PartyJungle_Source_PartyJungle_Map_SquareOptional_h_10_CALLBACK_WRAPPERS
PARTYJUNGLE_API UClass* Z_Construct_UClass_ASquareOptional_NoRegister();

#define FID_PartyJungle_Source_PartyJungle_Map_SquareOptional_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASquareOptional(); \
	friend struct Z_Construct_UClass_ASquareOptional_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_ASquareOptional_NoRegister(); \
public: \
	DECLARE_CLASS2(ASquareOptional, ASquare, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_ASquareOptional_NoRegister) \
	DECLARE_SERIALIZER(ASquareOptional)


#define FID_PartyJungle_Source_PartyJungle_Map_SquareOptional_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASquareOptional(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASquareOptional(ASquareOptional&&) = delete; \
	ASquareOptional(const ASquareOptional&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASquareOptional); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASquareOptional); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASquareOptional) \
	NO_API virtual ~ASquareOptional();


#define FID_PartyJungle_Source_PartyJungle_Map_SquareOptional_h_7_PROLOG
#define FID_PartyJungle_Source_PartyJungle_Map_SquareOptional_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PartyJungle_Source_PartyJungle_Map_SquareOptional_h_10_CALLBACK_WRAPPERS \
	FID_PartyJungle_Source_PartyJungle_Map_SquareOptional_h_10_INCLASS_NO_PURE_DECLS \
	FID_PartyJungle_Source_PartyJungle_Map_SquareOptional_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASquareOptional;

// ********** End Class ASquareOptional ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PartyJungle_Source_PartyJungle_Map_SquareOptional_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
