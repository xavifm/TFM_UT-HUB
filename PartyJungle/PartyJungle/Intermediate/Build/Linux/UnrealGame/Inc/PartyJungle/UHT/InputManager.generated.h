// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Managers/InputManager.h"

#ifdef PARTYJUNGLE_InputManager_generated_h
#error "InputManager.generated.h already included, missing '#pragma once' in InputManager.h"
#endif
#define PARTYJUNGLE_InputManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AInputManager ************************************************************
PARTYJUNGLE_API UClass* Z_Construct_UClass_AInputManager_NoRegister();

#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_InputManager_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInputManager(); \
	friend struct Z_Construct_UClass_AInputManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTYJUNGLE_API UClass* Z_Construct_UClass_AInputManager_NoRegister(); \
public: \
	DECLARE_CLASS2(AInputManager, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartyJungle"), Z_Construct_UClass_AInputManager_NoRegister) \
	DECLARE_SERIALIZER(AInputManager)


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_InputManager_h_58_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInputManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AInputManager(AInputManager&&) = delete; \
	AInputManager(const AInputManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInputManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInputManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInputManager) \
	NO_API virtual ~AInputManager();


#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_InputManager_h_55_PROLOG
#define FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_InputManager_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_InputManager_h_58_INCLASS_NO_PURE_DECLS \
	FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_InputManager_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AInputManager;

// ********** End Class AInputManager **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_InputManager_h

// ********** Begin Enum EInputKeys ****************************************************************
#define FOREACH_ENUM_EINPUTKEYS(op) \
	op(EInputKeys::Button_Start) \
	op(EInputKeys::Button_Select) \
	op(EInputKeys::Button_Down) \
	op(EInputKeys::Button_Up) \
	op(EInputKeys::Button_Right) \
	op(EInputKeys::Button_Left) \
	op(EInputKeys::Cross_Down) \
	op(EInputKeys::Cross_Up) \
	op(EInputKeys::Cross_Right) \
	op(EInputKeys::Cross_Left) \
	op(EInputKeys::Trigger1_Right) \
	op(EInputKeys::Trigger1_Left) \
	op(EInputKeys::Trigger2_Right) \
	op(EInputKeys::Trigger2_Left) \
	op(EInputKeys::COUNT) 

enum class EInputKeys : uint8;
template<> struct TIsUEnumClass<EInputKeys> { enum { Value = true }; };
template<> PARTYJUNGLE_API UEnum* StaticEnum<EInputKeys>();
// ********** End Enum EInputKeys ******************************************************************

// ********** Begin Enum EInputAxes ****************************************************************
#define FOREACH_ENUM_EINPUTAXES(op) \
	op(EInputAxes::AxisX_Left) \
	op(EInputAxes::AxisY_Left) \
	op(EInputAxes::AxisX_Right) \
	op(EInputAxes::AxisY_Right) \
	op(EInputAxes::COUNT) 

enum class EInputAxes : uint8;
template<> struct TIsUEnumClass<EInputAxes> { enum { Value = true }; };
template<> PARTYJUNGLE_API UEnum* StaticEnum<EInputAxes>();
// ********** End Enum EInputAxes ******************************************************************

// ********** Begin Enum ETriggerEvents ************************************************************
#define FOREACH_ENUM_ETRIGGEREVENTS(op) \
	op(ETriggerEvents::Pressed) \
	op(ETriggerEvents::Released) \
	op(ETriggerEvents::Repeat) \
	op(ETriggerEvents::DoubleClick) \
	op(ETriggerEvents::Axis) \
	op(ETriggerEvents::COUNT) 

enum class ETriggerEvents : uint8;
template<> struct TIsUEnumClass<ETriggerEvents> { enum { Value = true }; };
template<> PARTYJUNGLE_API UEnum* StaticEnum<ETriggerEvents>();
// ********** End Enum ETriggerEvents **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
