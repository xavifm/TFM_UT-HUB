// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/Menu/MainMenuInput.h"

#ifdef PARTYJUNGLE_MainMenuInput_generated_h
#error "MainMenuInput.generated.h already included, missing '#pragma once' in MainMenuInput.h"
#endif
#define PARTYJUNGLE_MainMenuInput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UInputComponent;
struct FInputActionValue;

// ********** Begin Class AMainMenuInput ***********************************************************
#define FID_PartyJungle_Source_PartyJungle_Player_Menu_MainMenuInput_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetupPlayerInputComponent); \
	DECLARE_FUNCTION(execHandleUpDownInput);


#define FID_PartyJungle_Source_PartyJungle_Player_Menu_MainMenuInput_h_12_CALLBACK_WRAPPERS
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMainMenuInput_NoRegister();

#define FID_PartyJungle_Source_PartyJungle_Player_Menu_MainMenuInput_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainMenuInput(); \
	friend struct Z_Construct_UClass_AMainMenuInput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_AMainMenuInput_NoRegister(); \
public: \
	DECLARE_CLASS2(AMainMenuInput, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_AMainMenuInput_NoRegister) \
	DECLARE_SERIALIZER(AMainMenuInput)


#define FID_PartyJungle_Source_PartyJungle_Player_Menu_MainMenuInput_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMainMenuInput(AMainMenuInput&&) = delete; \
	AMainMenuInput(const AMainMenuInput&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainMenuInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainMenuInput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainMenuInput) \
	NO_API virtual ~AMainMenuInput();


#define FID_PartyJungle_Source_PartyJungle_Player_Menu_MainMenuInput_h_9_PROLOG
#define FID_PartyJungle_Source_PartyJungle_Player_Menu_MainMenuInput_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PartyJungle_Source_PartyJungle_Player_Menu_MainMenuInput_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PartyJungle_Source_PartyJungle_Player_Menu_MainMenuInput_h_12_CALLBACK_WRAPPERS \
	FID_PartyJungle_Source_PartyJungle_Player_Menu_MainMenuInput_h_12_INCLASS_NO_PURE_DECLS \
	FID_PartyJungle_Source_PartyJungle_Player_Menu_MainMenuInput_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMainMenuInput;

// ********** End Class AMainMenuInput *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PartyJungle_Source_PartyJungle_Player_Menu_MainMenuInput_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
