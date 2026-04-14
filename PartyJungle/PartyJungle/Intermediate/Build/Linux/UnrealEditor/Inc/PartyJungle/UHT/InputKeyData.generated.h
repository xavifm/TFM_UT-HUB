// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controllers/PlayersControllers/ControllerAuxs/InputKeyData.h"

#ifdef PARTYJUNGLE_InputKeyData_generated_h
#error "InputKeyData.generated.h already included, missing '#pragma once' in InputKeyData.h"
#endif
#define PARTYJUNGLE_InputKeyData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EInputKeys : uint8;
enum class ETriggerEvents : uint8;

// ********** Begin Delegate FEvent_PlayerInputKey *************************************************
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_ControllerAuxs_InputKeyData_h_20_DELEGATE \
PARTYJUNGLE_API void FEvent_PlayerInputKey_DelegateWrapper(const FMulticastScriptDelegate& Event_PlayerInputKey, EInputKeys a_InputKey, ETriggerEvents a_InputEvent, int32 a_PlayerId);


// ********** End Delegate FEvent_PlayerInputKey ***************************************************

// ********** Begin ScriptStruct FInputKeyData *****************************************************
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_ControllerAuxs_InputKeyData_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputKeyData_Statics; \
	PARTYJUNGLE_API static class UScriptStruct* StaticStruct();


struct FInputKeyData;
// ********** End ScriptStruct FInputKeyData *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_ControllerAuxs_InputKeyData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
