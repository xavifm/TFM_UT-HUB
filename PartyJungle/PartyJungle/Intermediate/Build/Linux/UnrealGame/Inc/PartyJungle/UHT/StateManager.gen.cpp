// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Managers/StateManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeStateManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AGameStateData_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AStateManager();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AStateManager_NoRegister();
PARTYJUNGLE_API UFunction* Z_Construct_UDelegateFunction_PartyJungle_Event_GameStateChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FEvent_GameStateChanged ***********************************************
struct Z_Construct_UDelegateFunction_PartyJungle_Event_GameStateChanged__DelegateSignature_Statics
{
	struct _Script_PartyJungle_eventEvent_GameStateChanged_Parms
	{
		const AGameStateData* a_PreviousState;
		const AGameStateData* a_CurrentState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Event triggered when the current GameState is changed.\n */// Name of the structure that will be generated\n// Parameters of the delegate (Type, Name):\n// Id of the previous GameState.\n// Id of the current GameState.\n" },
#endif
		{ "ModuleRelativePath", "Managers/StateManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event triggered when the current GameState is changed.\n // Name of the structure that will be generated\n// Parameters of the delegate (Type, Name):\n// Id of the previous GameState.\n// Id of the current GameState." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_a_PreviousState_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_a_CurrentState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_a_PreviousState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_a_CurrentState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_PartyJungle_Event_GameStateChanged__DelegateSignature_Statics::NewProp_a_PreviousState = { "a_PreviousState", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PartyJungle_eventEvent_GameStateChanged_Parms, a_PreviousState), Z_Construct_UClass_AGameStateData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_a_PreviousState_MetaData), NewProp_a_PreviousState_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_PartyJungle_Event_GameStateChanged__DelegateSignature_Statics::NewProp_a_CurrentState = { "a_CurrentState", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PartyJungle_eventEvent_GameStateChanged_Parms, a_CurrentState), Z_Construct_UClass_AGameStateData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_a_CurrentState_MetaData), NewProp_a_CurrentState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PartyJungle_Event_GameStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PartyJungle_Event_GameStateChanged__DelegateSignature_Statics::NewProp_a_PreviousState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PartyJungle_Event_GameStateChanged__DelegateSignature_Statics::NewProp_a_CurrentState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PartyJungle_Event_GameStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_PartyJungle_Event_GameStateChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_PartyJungle, nullptr, "Event_GameStateChanged__DelegateSignature", Z_Construct_UDelegateFunction_PartyJungle_Event_GameStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PartyJungle_Event_GameStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_PartyJungle_Event_GameStateChanged__DelegateSignature_Statics::_Script_PartyJungle_eventEvent_GameStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PartyJungle_Event_GameStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PartyJungle_Event_GameStateChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_PartyJungle_Event_GameStateChanged__DelegateSignature_Statics::_Script_PartyJungle_eventEvent_GameStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_PartyJungle_Event_GameStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PartyJungle_Event_GameStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEvent_GameStateChanged_DelegateWrapper(const FMulticastScriptDelegate& Event_GameStateChanged, const AGameStateData* a_PreviousState, const AGameStateData* a_CurrentState)
{
	struct _Script_PartyJungle_eventEvent_GameStateChanged_Parms
	{
		const AGameStateData* a_PreviousState;
		const AGameStateData* a_CurrentState;
	};
	_Script_PartyJungle_eventEvent_GameStateChanged_Parms Parms;
	Parms.a_PreviousState=a_PreviousState;
	Parms.a_CurrentState=a_CurrentState;
	Event_GameStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FEvent_GameStateChanged *************************************************

// ********** Begin Class AStateManager Function ChangeState ***************************************
struct Z_Construct_UFunction_AStateManager_ChangeState_Statics
{
	struct StateManager_eventChangeState_Parms
	{
		FString a_TargetState;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameState_Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Changes to the indicated state.\n\x09 * @param a_TargetState Indicated state id.\n\x09 * @return True if the state was changed successfully.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Managers/StateManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Changes to the indicated state.\n@param a_TargetState Indicated state id.\n@return True if the state was changed successfully." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_a_TargetState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_a_TargetState;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AStateManager_ChangeState_Statics::NewProp_a_TargetState = { "a_TargetState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StateManager_eventChangeState_Parms, a_TargetState), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_a_TargetState_MetaData), NewProp_a_TargetState_MetaData) };
void Z_Construct_UFunction_AStateManager_ChangeState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StateManager_eventChangeState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AStateManager_ChangeState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StateManager_eventChangeState_Parms), &Z_Construct_UFunction_AStateManager_ChangeState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStateManager_ChangeState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStateManager_ChangeState_Statics::NewProp_a_TargetState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStateManager_ChangeState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AStateManager_ChangeState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStateManager_ChangeState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AStateManager, nullptr, "ChangeState", Z_Construct_UFunction_AStateManager_ChangeState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStateManager_ChangeState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AStateManager_ChangeState_Statics::StateManager_eventChangeState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AStateManager_ChangeState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AStateManager_ChangeState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AStateManager_ChangeState_Statics::StateManager_eventChangeState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AStateManager_ChangeState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStateManager_ChangeState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AStateManager::execChangeState)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_a_TargetState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ChangeState(Z_Param_a_TargetState);
	P_NATIVE_END;
}
// ********** End Class AStateManager Function ChangeState *****************************************

// ********** Begin Class AStateManager ************************************************************
void AStateManager::StaticRegisterNativesAStateManager()
{
	UClass* Class = AStateManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangeState", &AStateManager::execChangeState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AStateManager;
UClass* AStateManager::GetPrivateStaticClass()
{
	using TClass = AStateManager;
	if (!Z_Registration_Info_UClass_AStateManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("StateManager"),
			Z_Registration_Info_UClass_AStateManager.InnerSingleton,
			StaticRegisterNativesAStateManager,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AStateManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AStateManager_NoRegister()
{
	return AStateManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AStateManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Actor in charge of managing the Game States.\n */" },
#endif
		{ "IncludePath", "Managers/StateManager.h" },
		{ "ModuleRelativePath", "Managers/StateManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor in charge of managing the Game States." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_DefaultState_MetaData[] = {
		{ "Category", "StateManager" },
		{ "ModuleRelativePath", "Managers/StateManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_CurrentState_MetaData[] = {
		{ "ModuleRelativePath", "Managers/StateManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_GameStates_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Pointer to the current state data.\n" },
#endif
		{ "ModuleRelativePath", "Managers/StateManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Pointer to the current state data." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_m_DefaultState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_CurrentState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_GameStates_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_m_GameStates_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_m_GameStates;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AStateManager_ChangeState, "ChangeState" }, // 2434089589
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStateManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AStateManager_Statics::NewProp_m_DefaultState = { "m_DefaultState", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStateManager, m_DefaultState), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_DefaultState_MetaData), NewProp_m_DefaultState_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStateManager_Statics::NewProp_m_CurrentState = { "m_CurrentState", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStateManager, m_CurrentState), Z_Construct_UClass_AGameStateData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_CurrentState_MetaData), NewProp_m_CurrentState_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStateManager_Statics::NewProp_m_GameStates_ValueProp = { "m_GameStates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AGameStateData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AStateManager_Statics::NewProp_m_GameStates_Key_KeyProp = { "m_GameStates_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AStateManager_Statics::NewProp_m_GameStates = { "m_GameStates", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStateManager, m_GameStates), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_GameStates_MetaData), NewProp_m_GameStates_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStateManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStateManager_Statics::NewProp_m_DefaultState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStateManager_Statics::NewProp_m_CurrentState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStateManager_Statics::NewProp_m_GameStates_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStateManager_Statics::NewProp_m_GameStates_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStateManager_Statics::NewProp_m_GameStates,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStateManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AStateManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStateManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AStateManager_Statics::ClassParams = {
	&AStateManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AStateManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AStateManager_Statics::PropPointers),
	0,
	0x008001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStateManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AStateManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AStateManager()
{
	if (!Z_Registration_Info_UClass_AStateManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStateManager.OuterSingleton, Z_Construct_UClass_AStateManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AStateManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AStateManager);
AStateManager::~AStateManager() {}
// ********** End Class AStateManager **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_StateManager_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AStateManager, AStateManager::StaticClass, TEXT("AStateManager"), &Z_Registration_Info_UClass_AStateManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStateManager), 1086735638U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_StateManager_h__Script_PartyJungle_2259502101(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_StateManager_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Managers_StateManager_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
