// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controllers/UIControllers/UIControllerBase.h"

#ifdef PARTYJUNGLE_UIControllerBase_generated_h
#error "UIControllerBase.generated.h already included, missing '#pragma once' in UIControllerBase.h"
#endif
#define PARTYJUNGLE_UIControllerBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FEvent_UpdateWidgets **************************************************
#define FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_UIControllerBase_h_17_DELEGATE \
PARTYJUNGLE_API void FEvent_UpdateWidgets_DelegateWrapper(const FMulticastScriptDelegate& Event_UpdateWidgets);


// ********** End Delegate FEvent_UpdateWidgets ****************************************************

// ********** Begin Class AUIControllerBase ********************************************************
PARTYJUNGLE_API UClass* Z_Construct_UClass_AUIControllerBase_NoRegister();

#define FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_UIControllerBase_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUIControllerBase(); \
	friend struct Z_Construct_UClass_AUIControllerBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_AUIControllerBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AUIControllerBase, AControllerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_AUIControllerBase_NoRegister) \
	DECLARE_SERIALIZER(AUIControllerBase)


#define FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_UIControllerBase_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUIControllerBase(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AUIControllerBase(AUIControllerBase&&) = delete; \
	AUIControllerBase(const AUIControllerBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUIControllerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUIControllerBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUIControllerBase) \
	NO_API virtual ~AUIControllerBase();


#define FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_UIControllerBase_h_23_PROLOG
#define FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_UIControllerBase_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_UIControllerBase_h_26_INCLASS_NO_PURE_DECLS \
	FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_UIControllerBase_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AUIControllerBase;

// ********** End Class AUIControllerBase **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_UIControllerBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
