// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Map/Square.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PARTYJUNGLE_Square_generated_h
#error "Square.generated.h already included, missing '#pragma once' in Square.h"
#endif
#define PARTYJUNGLE_Square_generated_h

#define FID_PartyJungle_Source_PartyJungle_Map_Square_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASquare(); \
	friend struct Z_Construct_UClass_ASquare_Statics; \
public: \
	DECLARE_CLASS(ASquare, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), NO_API) \
	DECLARE_SERIALIZER(ASquare)


#define FID_PartyJungle_Source_PartyJungle_Map_Square_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASquare(ASquare&&); \
	ASquare(const ASquare&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASquare); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASquare); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASquare) \
	NO_API virtual ~ASquare();


#define FID_PartyJungle_Source_PartyJungle_Map_Square_h_15_PROLOG
#define FID_PartyJungle_Source_PartyJungle_Map_Square_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PartyJungle_Source_PartyJungle_Map_Square_h_18_INCLASS_NO_PURE_DECLS \
	FID_PartyJungle_Source_PartyJungle_Map_Square_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARTYJUNGLE_API UClass* StaticClass<class ASquare>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PartyJungle_Source_PartyJungle_Map_Square_h


#define FOREACH_ENUM_ESQUARETYPE(op) \
	op(ESquareType::NORMAL) \
	op(ESquareType::TRAP) \
	op(ESquareType::SAFE_ZONE) 

enum class ESquareType : uint8;
template<> struct TIsUEnumClass<ESquareType> { enum { Value = true }; };
template<> PARTYJUNGLE_API UEnum* StaticEnum<ESquareType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
