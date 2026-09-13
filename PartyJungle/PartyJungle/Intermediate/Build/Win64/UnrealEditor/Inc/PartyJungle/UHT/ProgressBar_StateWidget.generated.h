// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controllers/UIControllers/StateWidgets/ProgressBar_StateWidget.h"

#ifdef PARTYJUNGLE_ProgressBar_StateWidget_generated_h
#error "ProgressBar_StateWidget.generated.h already included, missing '#pragma once' in ProgressBar_StateWidget.h"
#endif
#define PARTYJUNGLE_ProgressBar_StateWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FEvent_ProgressBarPercentChanged **************************************
#define FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_StateWidgets_ProgressBar_StateWidget_h_17_DELEGATE \
PARTYJUNGLE_API void FEvent_ProgressBarPercentChanged_DelegateWrapper(const FMulticastScriptDelegate& Event_ProgressBarPercentChanged, const FString& a_ProgressBarId, float a_OldProgressBarPercent, float a_NewProgressBarPercent);


// ********** End Delegate FEvent_ProgressBarPercentChanged ****************************************

// ********** Begin Class UProgressBar_StateWidget *************************************************
#define FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_StateWidgets_ProgressBar_StateWidget_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnExit); \
	DECLARE_FUNCTION(execOnStart); \
	DECLARE_FUNCTION(execOnBegin);


PARTYJUNGLE_API UClass* Z_Construct_UClass_UProgressBar_StateWidget_NoRegister();

#define FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_StateWidgets_ProgressBar_StateWidget_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProgressBar_StateWidget(); \
	friend struct Z_Construct_UClass_UProgressBar_StateWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_UProgressBar_StateWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UProgressBar_StateWidget, UProgressBar, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_UProgressBar_StateWidget_NoRegister) \
	DECLARE_SERIALIZER(UProgressBar_StateWidget)


#define FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_StateWidgets_ProgressBar_StateWidget_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProgressBar_StateWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UProgressBar_StateWidget(UProgressBar_StateWidget&&) = delete; \
	UProgressBar_StateWidget(const UProgressBar_StateWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProgressBar_StateWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProgressBar_StateWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProgressBar_StateWidget) \
	NO_API virtual ~UProgressBar_StateWidget();


#define FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_StateWidgets_ProgressBar_StateWidget_h_23_PROLOG
#define FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_StateWidgets_ProgressBar_StateWidget_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_StateWidgets_ProgressBar_StateWidget_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_StateWidgets_ProgressBar_StateWidget_h_26_INCLASS_NO_PURE_DECLS \
	FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_StateWidgets_ProgressBar_StateWidget_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UProgressBar_StateWidget;

// ********** End Class UProgressBar_StateWidget ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_StateWidgets_ProgressBar_StateWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
