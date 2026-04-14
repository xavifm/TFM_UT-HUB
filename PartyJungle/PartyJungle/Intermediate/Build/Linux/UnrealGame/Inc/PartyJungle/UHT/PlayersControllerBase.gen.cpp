// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Controllers/PlayersControllers/PlayersControllerBase.h"
#include "PartyJungle/Controllers/PlayersControllers/ControllerAuxs/PlayerData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePlayersControllerBase() {}

// ********** Begin Cross Module References ********************************************************
PARTYJUNGLE_API UClass* Z_Construct_UClass_AControllerBase();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinion_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_APlayersControllerBase();
PARTYJUNGLE_API UClass* Z_Construct_UClass_APlayersControllerBase_NoRegister();
PARTYJUNGLE_API UFunction* Z_Construct_UDelegateFunction_PartyJungle_Event_MinionChanged__DelegateSignature();
PARTYJUNGLE_API UFunction* Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerChanged__DelegateSignature();
PARTYJUNGLE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerData();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FEvent_PlayerChanged **************************************************
struct Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerChanged__DelegateSignature_Statics
{
	struct _Script_PartyJungle_eventEvent_PlayerChanged_Parms
	{
		int32 a_OldPlayerId;
		int32 a_NewPlayerId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Event triggered when the Current Played is Changed.\n */// Name of the structure that will be generated\n// Parameters of the delegate (Type, Name):\n// Id of the Old Player.\n// Id of the New Player.\n" },
#endif
		{ "ModuleRelativePath", "Controllers/PlayersControllers/PlayersControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event triggered when the Current Played is Changed.\n // Name of the structure that will be generated\n// Parameters of the delegate (Type, Name):\n// Id of the Old Player.\n// Id of the New Player." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_OldPlayerId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_NewPlayerId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerChanged__DelegateSignature_Statics::NewProp_a_OldPlayerId = { "a_OldPlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PartyJungle_eventEvent_PlayerChanged_Parms, a_OldPlayerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerChanged__DelegateSignature_Statics::NewProp_a_NewPlayerId = { "a_NewPlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PartyJungle_eventEvent_PlayerChanged_Parms, a_NewPlayerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerChanged__DelegateSignature_Statics::NewProp_a_OldPlayerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerChanged__DelegateSignature_Statics::NewProp_a_NewPlayerId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_PartyJungle, nullptr, "Event_PlayerChanged__DelegateSignature", Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerChanged__DelegateSignature_Statics::_Script_PartyJungle_eventEvent_PlayerChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerChanged__DelegateSignature_Statics::_Script_PartyJungle_eventEvent_PlayerChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEvent_PlayerChanged_DelegateWrapper(const FMulticastScriptDelegate& Event_PlayerChanged, int32 a_OldPlayerId, int32 a_NewPlayerId)
{
	struct _Script_PartyJungle_eventEvent_PlayerChanged_Parms
	{
		int32 a_OldPlayerId;
		int32 a_NewPlayerId;
	};
	_Script_PartyJungle_eventEvent_PlayerChanged_Parms Parms;
	Parms.a_OldPlayerId=a_OldPlayerId;
	Parms.a_NewPlayerId=a_NewPlayerId;
	Event_PlayerChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FEvent_PlayerChanged ****************************************************

// ********** Begin Delegate FEvent_MinionChanged **************************************************
struct Z_Construct_UDelegateFunction_PartyJungle_Event_MinionChanged__DelegateSignature_Statics
{
	struct _Script_PartyJungle_eventEvent_MinionChanged_Parms
	{
		int32 a_PlayerId;
		int32 a_OldMinionId;
		int32 a_NewMinionId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Event triggered when the Current Minion is Changed.\n */// Name of the structure that will be generated\n// Parameters of the delegate (Type, Name):\n// Id of the Player that own the Minion.\n// Id of the Old Minion.\n// Id of the New Minion.\n" },
#endif
		{ "ModuleRelativePath", "Controllers/PlayersControllers/PlayersControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event triggered when the Current Minion is Changed.\n // Name of the structure that will be generated\n// Parameters of the delegate (Type, Name):\n// Id of the Player that own the Minion.\n// Id of the Old Minion.\n// Id of the New Minion." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_PlayerId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_OldMinionId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_NewMinionId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_PartyJungle_Event_MinionChanged__DelegateSignature_Statics::NewProp_a_PlayerId = { "a_PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PartyJungle_eventEvent_MinionChanged_Parms, a_PlayerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_PartyJungle_Event_MinionChanged__DelegateSignature_Statics::NewProp_a_OldMinionId = { "a_OldMinionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PartyJungle_eventEvent_MinionChanged_Parms, a_OldMinionId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_PartyJungle_Event_MinionChanged__DelegateSignature_Statics::NewProp_a_NewMinionId = { "a_NewMinionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PartyJungle_eventEvent_MinionChanged_Parms, a_NewMinionId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PartyJungle_Event_MinionChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PartyJungle_Event_MinionChanged__DelegateSignature_Statics::NewProp_a_PlayerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PartyJungle_Event_MinionChanged__DelegateSignature_Statics::NewProp_a_OldMinionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PartyJungle_Event_MinionChanged__DelegateSignature_Statics::NewProp_a_NewMinionId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PartyJungle_Event_MinionChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_PartyJungle_Event_MinionChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_PartyJungle, nullptr, "Event_MinionChanged__DelegateSignature", Z_Construct_UDelegateFunction_PartyJungle_Event_MinionChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PartyJungle_Event_MinionChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_PartyJungle_Event_MinionChanged__DelegateSignature_Statics::_Script_PartyJungle_eventEvent_MinionChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PartyJungle_Event_MinionChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PartyJungle_Event_MinionChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_PartyJungle_Event_MinionChanged__DelegateSignature_Statics::_Script_PartyJungle_eventEvent_MinionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_PartyJungle_Event_MinionChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PartyJungle_Event_MinionChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEvent_MinionChanged_DelegateWrapper(const FMulticastScriptDelegate& Event_MinionChanged, int32 a_PlayerId, int32 a_OldMinionId, int32 a_NewMinionId)
{
	struct _Script_PartyJungle_eventEvent_MinionChanged_Parms
	{
		int32 a_PlayerId;
		int32 a_OldMinionId;
		int32 a_NewMinionId;
	};
	_Script_PartyJungle_eventEvent_MinionChanged_Parms Parms;
	Parms.a_PlayerId=a_PlayerId;
	Parms.a_OldMinionId=a_OldMinionId;
	Parms.a_NewMinionId=a_NewMinionId;
	Event_MinionChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FEvent_MinionChanged ****************************************************

// ********** Begin Class APlayersControllerBase Function AssignPlayerToTeam ***********************
struct Z_Construct_UFunction_APlayersControllerBase_AssignPlayerToTeam_Statics
{
	struct PlayersControllerBase_eventAssignPlayerToTeam_Parms
	{
		int32 a_PlayerId;
		int32 a_TeamId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayersController_Functions" },
		{ "ModuleRelativePath", "Controllers/PlayersControllers/PlayersControllerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_a_PlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_a_TeamId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_PlayerId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_TeamId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayersControllerBase_AssignPlayerToTeam_Statics::NewProp_a_PlayerId = { "a_PlayerId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayersControllerBase_eventAssignPlayerToTeam_Parms, a_PlayerId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_a_PlayerId_MetaData), NewProp_a_PlayerId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayersControllerBase_AssignPlayerToTeam_Statics::NewProp_a_TeamId = { "a_TeamId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayersControllerBase_eventAssignPlayerToTeam_Parms, a_TeamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_a_TeamId_MetaData), NewProp_a_TeamId_MetaData) };
void Z_Construct_UFunction_APlayersControllerBase_AssignPlayerToTeam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlayersControllerBase_eventAssignPlayerToTeam_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayersControllerBase_AssignPlayerToTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayersControllerBase_eventAssignPlayerToTeam_Parms), &Z_Construct_UFunction_APlayersControllerBase_AssignPlayerToTeam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayersControllerBase_AssignPlayerToTeam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayersControllerBase_AssignPlayerToTeam_Statics::NewProp_a_PlayerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayersControllerBase_AssignPlayerToTeam_Statics::NewProp_a_TeamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayersControllerBase_AssignPlayerToTeam_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_AssignPlayerToTeam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayersControllerBase_AssignPlayerToTeam_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayersControllerBase, nullptr, "AssignPlayerToTeam", Z_Construct_UFunction_APlayersControllerBase_AssignPlayerToTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_AssignPlayerToTeam_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayersControllerBase_AssignPlayerToTeam_Statics::PlayersControllerBase_eventAssignPlayerToTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_AssignPlayerToTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayersControllerBase_AssignPlayerToTeam_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayersControllerBase_AssignPlayerToTeam_Statics::PlayersControllerBase_eventAssignPlayerToTeam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayersControllerBase_AssignPlayerToTeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayersControllerBase_AssignPlayerToTeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayersControllerBase::execAssignPlayerToTeam)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_a_PlayerId);
	P_GET_PROPERTY(FIntProperty,Z_Param_a_TeamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AssignPlayerToTeam(Z_Param_a_PlayerId,Z_Param_a_TeamId);
	P_NATIVE_END;
}
// ********** End Class APlayersControllerBase Function AssignPlayerToTeam *************************

// ********** Begin Class APlayersControllerBase Function GetCurrentMinion *************************
struct Z_Construct_UFunction_APlayersControllerBase_GetCurrentMinion_Statics
{
	struct PlayersControllerBase_eventGetCurrentMinion_Parms
	{
		const AMinion* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayersController_Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets a pointer to the current Minion.\n\x09 * @return Pointer to the current Minion.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/PlayersControllers/PlayersControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a pointer to the current Minion.\n@return Pointer to the current Minion." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayersControllerBase_GetCurrentMinion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayersControllerBase_eventGetCurrentMinion_Parms, ReturnValue), Z_Construct_UClass_AMinion_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayersControllerBase_GetCurrentMinion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayersControllerBase_GetCurrentMinion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_GetCurrentMinion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayersControllerBase_GetCurrentMinion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayersControllerBase, nullptr, "GetCurrentMinion", Z_Construct_UFunction_APlayersControllerBase_GetCurrentMinion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_GetCurrentMinion_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayersControllerBase_GetCurrentMinion_Statics::PlayersControllerBase_eventGetCurrentMinion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_GetCurrentMinion_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayersControllerBase_GetCurrentMinion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayersControllerBase_GetCurrentMinion_Statics::PlayersControllerBase_eventGetCurrentMinion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayersControllerBase_GetCurrentMinion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayersControllerBase_GetCurrentMinion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayersControllerBase::execGetCurrentMinion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const AMinion**)Z_Param__Result=P_THIS->GetCurrentMinion();
	P_NATIVE_END;
}
// ********** End Class APlayersControllerBase Function GetCurrentMinion ***************************

// ********** Begin Class APlayersControllerBase Function GetCurrentMinionId ***********************
struct Z_Construct_UFunction_APlayersControllerBase_GetCurrentMinionId_Statics
{
	struct PlayersControllerBase_eventGetCurrentMinionId_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayersController_Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the id of the current Minion.\n\x09 * @return Id of the current Minion.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/PlayersControllers/PlayersControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the id of the current Minion.\n@return Id of the current Minion." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayersControllerBase_GetCurrentMinionId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayersControllerBase_eventGetCurrentMinionId_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayersControllerBase_GetCurrentMinionId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayersControllerBase_GetCurrentMinionId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_GetCurrentMinionId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayersControllerBase_GetCurrentMinionId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayersControllerBase, nullptr, "GetCurrentMinionId", Z_Construct_UFunction_APlayersControllerBase_GetCurrentMinionId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_GetCurrentMinionId_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayersControllerBase_GetCurrentMinionId_Statics::PlayersControllerBase_eventGetCurrentMinionId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_GetCurrentMinionId_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayersControllerBase_GetCurrentMinionId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayersControllerBase_GetCurrentMinionId_Statics::PlayersControllerBase_eventGetCurrentMinionId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayersControllerBase_GetCurrentMinionId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayersControllerBase_GetCurrentMinionId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayersControllerBase::execGetCurrentMinionId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentMinionId();
	P_NATIVE_END;
}
// ********** End Class APlayersControllerBase Function GetCurrentMinionId *************************

// ********** Begin Class APlayersControllerBase Function GetCurrentPlayer *************************
struct Z_Construct_UFunction_APlayersControllerBase_GetCurrentPlayer_Statics
{
	struct PlayersControllerBase_eventGetCurrentPlayer_Parms
	{
		FPlayerData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayersController_Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets a pointer to the current Minion.\n\x09 * @return Pointer to the current Minion.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/PlayersControllers/PlayersControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a pointer to the current Minion.\n@return Pointer to the current Minion." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayersControllerBase_GetCurrentPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayersControllerBase_eventGetCurrentPlayer_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlayerData, METADATA_PARAMS(0, nullptr) }; // 980726925
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayersControllerBase_GetCurrentPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayersControllerBase_GetCurrentPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_GetCurrentPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayersControllerBase_GetCurrentPlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayersControllerBase, nullptr, "GetCurrentPlayer", Z_Construct_UFunction_APlayersControllerBase_GetCurrentPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_GetCurrentPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayersControllerBase_GetCurrentPlayer_Statics::PlayersControllerBase_eventGetCurrentPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_GetCurrentPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayersControllerBase_GetCurrentPlayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayersControllerBase_GetCurrentPlayer_Statics::PlayersControllerBase_eventGetCurrentPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayersControllerBase_GetCurrentPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayersControllerBase_GetCurrentPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayersControllerBase::execGetCurrentPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FPlayerData*)Z_Param__Result=P_THIS->GetCurrentPlayer();
	P_NATIVE_END;
}
// ********** End Class APlayersControllerBase Function GetCurrentPlayer ***************************

// ********** Begin Class APlayersControllerBase Function GetCurrentPlayerId ***********************
struct Z_Construct_UFunction_APlayersControllerBase_GetCurrentPlayerId_Statics
{
	struct PlayersControllerBase_eventGetCurrentPlayerId_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayersController_Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the id of the current Player.\n\x09 * @return Id of the current Player.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/PlayersControllers/PlayersControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the id of the current Player.\n@return Id of the current Player." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayersControllerBase_GetCurrentPlayerId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayersControllerBase_eventGetCurrentPlayerId_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayersControllerBase_GetCurrentPlayerId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayersControllerBase_GetCurrentPlayerId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_GetCurrentPlayerId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayersControllerBase_GetCurrentPlayerId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayersControllerBase, nullptr, "GetCurrentPlayerId", Z_Construct_UFunction_APlayersControllerBase_GetCurrentPlayerId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_GetCurrentPlayerId_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayersControllerBase_GetCurrentPlayerId_Statics::PlayersControllerBase_eventGetCurrentPlayerId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_GetCurrentPlayerId_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayersControllerBase_GetCurrentPlayerId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayersControllerBase_GetCurrentPlayerId_Statics::PlayersControllerBase_eventGetCurrentPlayerId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayersControllerBase_GetCurrentPlayerId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayersControllerBase_GetCurrentPlayerId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayersControllerBase::execGetCurrentPlayerId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentPlayerId();
	P_NATIVE_END;
}
// ********** End Class APlayersControllerBase Function GetCurrentPlayerId *************************

// ********** Begin Class APlayersControllerBase Function GetMinionById ****************************
struct Z_Construct_UFunction_APlayersControllerBase_GetMinionById_Statics
{
	struct PlayersControllerBase_eventGetMinionById_Parms
	{
		int32 a_MinionId;
		int32 a_PlayerId;
		const AMinion* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayersController_Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the Minion with the chosen id.\n\x09 * @param a_MinionId Id of the chosen Minion.\n\x09 * @param a_PlayerId Id of the chosen Player. Current Player by default.\n\x09 * @return Pointer to the Minion with the chosen id.\n\x09 */" },
#endif
		{ "CPP_Default_a_PlayerId", "-1" },
		{ "ModuleRelativePath", "Controllers/PlayersControllers/PlayersControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the Minion with the chosen id.\n@param a_MinionId Id of the chosen Minion.\n@param a_PlayerId Id of the chosen Player. Current Player by default.\n@return Pointer to the Minion with the chosen id." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_MinionId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_PlayerId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayersControllerBase_GetMinionById_Statics::NewProp_a_MinionId = { "a_MinionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayersControllerBase_eventGetMinionById_Parms, a_MinionId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayersControllerBase_GetMinionById_Statics::NewProp_a_PlayerId = { "a_PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayersControllerBase_eventGetMinionById_Parms, a_PlayerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayersControllerBase_GetMinionById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayersControllerBase_eventGetMinionById_Parms, ReturnValue), Z_Construct_UClass_AMinion_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayersControllerBase_GetMinionById_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayersControllerBase_GetMinionById_Statics::NewProp_a_MinionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayersControllerBase_GetMinionById_Statics::NewProp_a_PlayerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayersControllerBase_GetMinionById_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_GetMinionById_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayersControllerBase_GetMinionById_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayersControllerBase, nullptr, "GetMinionById", Z_Construct_UFunction_APlayersControllerBase_GetMinionById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_GetMinionById_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayersControllerBase_GetMinionById_Statics::PlayersControllerBase_eventGetMinionById_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_GetMinionById_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayersControllerBase_GetMinionById_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayersControllerBase_GetMinionById_Statics::PlayersControllerBase_eventGetMinionById_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayersControllerBase_GetMinionById()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayersControllerBase_GetMinionById_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayersControllerBase::execGetMinionById)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_a_MinionId);
	P_GET_PROPERTY(FIntProperty,Z_Param_a_PlayerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const AMinion**)Z_Param__Result=P_THIS->GetMinionById(Z_Param_a_MinionId,Z_Param_a_PlayerId);
	P_NATIVE_END;
}
// ********** End Class APlayersControllerBase Function GetMinionById ******************************

// ********** Begin Class APlayersControllerBase Function GetPlayerById ****************************
struct Z_Construct_UFunction_APlayersControllerBase_GetPlayerById_Statics
{
	struct PlayersControllerBase_eventGetPlayerById_Parms
	{
		int32 a_PlayerId;
		FPlayerData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayersController_Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the Player with the chosen id.\n\x09 * @param a_PlayerId Id of the chosen Player.\n\x09 * @return Pointer to the Player with the chosen id.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/PlayersControllers/PlayersControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the Player with the chosen id.\n@param a_PlayerId Id of the chosen Player.\n@return Pointer to the Player with the chosen id." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_PlayerId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayersControllerBase_GetPlayerById_Statics::NewProp_a_PlayerId = { "a_PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayersControllerBase_eventGetPlayerById_Parms, a_PlayerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayersControllerBase_GetPlayerById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayersControllerBase_eventGetPlayerById_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlayerData, METADATA_PARAMS(0, nullptr) }; // 980726925
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayersControllerBase_GetPlayerById_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayersControllerBase_GetPlayerById_Statics::NewProp_a_PlayerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayersControllerBase_GetPlayerById_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_GetPlayerById_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayersControllerBase_GetPlayerById_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayersControllerBase, nullptr, "GetPlayerById", Z_Construct_UFunction_APlayersControllerBase_GetPlayerById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_GetPlayerById_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayersControllerBase_GetPlayerById_Statics::PlayersControllerBase_eventGetPlayerById_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_GetPlayerById_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayersControllerBase_GetPlayerById_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayersControllerBase_GetPlayerById_Statics::PlayersControllerBase_eventGetPlayerById_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayersControllerBase_GetPlayerById()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayersControllerBase_GetPlayerById_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayersControllerBase::execGetPlayerById)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_a_PlayerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FPlayerData*)Z_Param__Result=P_THIS->GetPlayerById(Z_Param_a_PlayerId);
	P_NATIVE_END;
}
// ********** End Class APlayersControllerBase Function GetPlayerById ******************************

// ********** Begin Class APlayersControllerBase Function GetPlayersAmount *************************
struct Z_Construct_UFunction_APlayersControllerBase_GetPlayersAmount_Statics
{
	struct PlayersControllerBase_eventGetPlayersAmount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayersController_Functions" },
		{ "ModuleRelativePath", "Controllers/PlayersControllers/PlayersControllerBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayersControllerBase_GetPlayersAmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayersControllerBase_eventGetPlayersAmount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayersControllerBase_GetPlayersAmount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayersControllerBase_GetPlayersAmount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_GetPlayersAmount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayersControllerBase_GetPlayersAmount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayersControllerBase, nullptr, "GetPlayersAmount", Z_Construct_UFunction_APlayersControllerBase_GetPlayersAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_GetPlayersAmount_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayersControllerBase_GetPlayersAmount_Statics::PlayersControllerBase_eventGetPlayersAmount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_GetPlayersAmount_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayersControllerBase_GetPlayersAmount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayersControllerBase_GetPlayersAmount_Statics::PlayersControllerBase_eventGetPlayersAmount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayersControllerBase_GetPlayersAmount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayersControllerBase_GetPlayersAmount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayersControllerBase::execGetPlayersAmount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPlayersAmount();
	P_NATIVE_END;
}
// ********** End Class APlayersControllerBase Function GetPlayersAmount ***************************

// ********** Begin Class APlayersControllerBase Function GetPlayersByTeamId ***********************
struct Z_Construct_UFunction_APlayersControllerBase_GetPlayersByTeamId_Statics
{
	struct PlayersControllerBase_eventGetPlayersByTeamId_Parms
	{
		int32 a_TeamId;
		TArray<int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayersController_Functions" },
		{ "ModuleRelativePath", "Controllers/PlayersControllers/PlayersControllerBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_TeamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayersControllerBase_GetPlayersByTeamId_Statics::NewProp_a_TeamId = { "a_TeamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayersControllerBase_eventGetPlayersByTeamId_Parms, a_TeamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayersControllerBase_GetPlayersByTeamId_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APlayersControllerBase_GetPlayersByTeamId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayersControllerBase_eventGetPlayersByTeamId_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayersControllerBase_GetPlayersByTeamId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayersControllerBase_GetPlayersByTeamId_Statics::NewProp_a_TeamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayersControllerBase_GetPlayersByTeamId_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayersControllerBase_GetPlayersByTeamId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_GetPlayersByTeamId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayersControllerBase_GetPlayersByTeamId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayersControllerBase, nullptr, "GetPlayersByTeamId", Z_Construct_UFunction_APlayersControllerBase_GetPlayersByTeamId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_GetPlayersByTeamId_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayersControllerBase_GetPlayersByTeamId_Statics::PlayersControllerBase_eventGetPlayersByTeamId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_GetPlayersByTeamId_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayersControllerBase_GetPlayersByTeamId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayersControllerBase_GetPlayersByTeamId_Statics::PlayersControllerBase_eventGetPlayersByTeamId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayersControllerBase_GetPlayersByTeamId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayersControllerBase_GetPlayersByTeamId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayersControllerBase::execGetPlayersByTeamId)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_a_TeamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<int32>*)Z_Param__Result=P_THIS->GetPlayersByTeamId(Z_Param_a_TeamId);
	P_NATIVE_END;
}
// ********** End Class APlayersControllerBase Function GetPlayersByTeamId *************************

// ********** Begin Class APlayersControllerBase Function NextMinion *******************************
struct Z_Construct_UFunction_APlayersControllerBase_NextMinion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayersController_Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Called to select the next Minion for the current Player.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/PlayersControllers/PlayersControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called to select the next Minion for the current Player." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayersControllerBase_NextMinion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayersControllerBase, nullptr, "NextMinion", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_NextMinion_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayersControllerBase_NextMinion_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APlayersControllerBase_NextMinion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayersControllerBase_NextMinion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayersControllerBase::execNextMinion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NextMinion();
	P_NATIVE_END;
}
// ********** End Class APlayersControllerBase Function NextMinion *********************************

// ********** Begin Class APlayersControllerBase Function NextPlayer *******************************
struct Z_Construct_UFunction_APlayersControllerBase_NextPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayersController_Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Called to select the next Player.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/PlayersControllers/PlayersControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called to select the next Player." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayersControllerBase_NextPlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayersControllerBase, nullptr, "NextPlayer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_NextPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayersControllerBase_NextPlayer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APlayersControllerBase_NextPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayersControllerBase_NextPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayersControllerBase::execNextPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NextPlayer();
	P_NATIVE_END;
}
// ********** End Class APlayersControllerBase Function NextPlayer *********************************

// ********** Begin Class APlayersControllerBase Function PreviousMinion ***************************
struct Z_Construct_UFunction_APlayersControllerBase_PreviousMinion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayersController_Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Called to select the previous Minion for the current Player.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/PlayersControllers/PlayersControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called to select the previous Minion for the current Player." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayersControllerBase_PreviousMinion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayersControllerBase, nullptr, "PreviousMinion", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_PreviousMinion_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayersControllerBase_PreviousMinion_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APlayersControllerBase_PreviousMinion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayersControllerBase_PreviousMinion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayersControllerBase::execPreviousMinion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PreviousMinion();
	P_NATIVE_END;
}
// ********** End Class APlayersControllerBase Function PreviousMinion *****************************

// ********** Begin Class APlayersControllerBase Function SetAllPlayersInputsEnabled ***************
struct Z_Construct_UFunction_APlayersControllerBase_SetAllPlayersInputsEnabled_Statics
{
	struct PlayersControllerBase_eventSetAllPlayersInputsEnabled_Parms
	{
		bool a_Enabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayersController_Functions" },
		{ "ModuleRelativePath", "Controllers/PlayersControllers/PlayersControllerBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_a_Enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_a_Enabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APlayersControllerBase_SetAllPlayersInputsEnabled_Statics::NewProp_a_Enabled_SetBit(void* Obj)
{
	((PlayersControllerBase_eventSetAllPlayersInputsEnabled_Parms*)Obj)->a_Enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayersControllerBase_SetAllPlayersInputsEnabled_Statics::NewProp_a_Enabled = { "a_Enabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayersControllerBase_eventSetAllPlayersInputsEnabled_Parms), &Z_Construct_UFunction_APlayersControllerBase_SetAllPlayersInputsEnabled_Statics::NewProp_a_Enabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayersControllerBase_SetAllPlayersInputsEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayersControllerBase_SetAllPlayersInputsEnabled_Statics::NewProp_a_Enabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_SetAllPlayersInputsEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayersControllerBase_SetAllPlayersInputsEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayersControllerBase, nullptr, "SetAllPlayersInputsEnabled", Z_Construct_UFunction_APlayersControllerBase_SetAllPlayersInputsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_SetAllPlayersInputsEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayersControllerBase_SetAllPlayersInputsEnabled_Statics::PlayersControllerBase_eventSetAllPlayersInputsEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_SetAllPlayersInputsEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayersControllerBase_SetAllPlayersInputsEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayersControllerBase_SetAllPlayersInputsEnabled_Statics::PlayersControllerBase_eventSetAllPlayersInputsEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayersControllerBase_SetAllPlayersInputsEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayersControllerBase_SetAllPlayersInputsEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayersControllerBase::execSetAllPlayersInputsEnabled)
{
	P_GET_UBOOL(Z_Param_a_Enabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAllPlayersInputsEnabled(Z_Param_a_Enabled);
	P_NATIVE_END;
}
// ********** End Class APlayersControllerBase Function SetAllPlayersInputsEnabled *****************

// ********** Begin Class APlayersControllerBase Function SetEventsEnabled *************************
struct Z_Construct_UFunction_APlayersControllerBase_SetEventsEnabled_Statics
{
	struct PlayersControllerBase_eventSetEventsEnabled_Parms
	{
		bool a_Enable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the events for this Controller enabled.\n\x09 * @param a_Enable True if enabled. False if disabled.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/PlayersControllers/PlayersControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the events for this Controller enabled.\n@param a_Enable True if enabled. False if disabled." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_a_Enable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_a_Enable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APlayersControllerBase_SetEventsEnabled_Statics::NewProp_a_Enable_SetBit(void* Obj)
{
	((PlayersControllerBase_eventSetEventsEnabled_Parms*)Obj)->a_Enable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayersControllerBase_SetEventsEnabled_Statics::NewProp_a_Enable = { "a_Enable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayersControllerBase_eventSetEventsEnabled_Parms), &Z_Construct_UFunction_APlayersControllerBase_SetEventsEnabled_Statics::NewProp_a_Enable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayersControllerBase_SetEventsEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayersControllerBase_SetEventsEnabled_Statics::NewProp_a_Enable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_SetEventsEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayersControllerBase_SetEventsEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayersControllerBase, nullptr, "SetEventsEnabled", Z_Construct_UFunction_APlayersControllerBase_SetEventsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_SetEventsEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayersControllerBase_SetEventsEnabled_Statics::PlayersControllerBase_eventSetEventsEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_SetEventsEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayersControllerBase_SetEventsEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayersControllerBase_SetEventsEnabled_Statics::PlayersControllerBase_eventSetEventsEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayersControllerBase_SetEventsEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayersControllerBase_SetEventsEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayersControllerBase::execSetEventsEnabled)
{
	P_GET_UBOOL(Z_Param_a_Enable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEventsEnabled(Z_Param_a_Enable);
	P_NATIVE_END;
}
// ********** End Class APlayersControllerBase Function SetEventsEnabled ***************************

// ********** Begin Class APlayersControllerBase Function SetInputsEnabled *************************
struct Z_Construct_UFunction_APlayersControllerBase_SetInputsEnabled_Statics
{
	struct PlayersControllerBase_eventSetInputsEnabled_Parms
	{
		bool a_Enable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the inputs for this Controller enabled.\n\x09 * @param a_Enable True if enabled. False if disabled.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/PlayersControllers/PlayersControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the inputs for this Controller enabled.\n@param a_Enable True if enabled. False if disabled." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_a_Enable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_a_Enable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APlayersControllerBase_SetInputsEnabled_Statics::NewProp_a_Enable_SetBit(void* Obj)
{
	((PlayersControllerBase_eventSetInputsEnabled_Parms*)Obj)->a_Enable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayersControllerBase_SetInputsEnabled_Statics::NewProp_a_Enable = { "a_Enable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayersControllerBase_eventSetInputsEnabled_Parms), &Z_Construct_UFunction_APlayersControllerBase_SetInputsEnabled_Statics::NewProp_a_Enable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayersControllerBase_SetInputsEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayersControllerBase_SetInputsEnabled_Statics::NewProp_a_Enable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_SetInputsEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayersControllerBase_SetInputsEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayersControllerBase, nullptr, "SetInputsEnabled", Z_Construct_UFunction_APlayersControllerBase_SetInputsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_SetInputsEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayersControllerBase_SetInputsEnabled_Statics::PlayersControllerBase_eventSetInputsEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_SetInputsEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayersControllerBase_SetInputsEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayersControllerBase_SetInputsEnabled_Statics::PlayersControllerBase_eventSetInputsEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayersControllerBase_SetInputsEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayersControllerBase_SetInputsEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayersControllerBase::execSetInputsEnabled)
{
	P_GET_UBOOL(Z_Param_a_Enable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInputsEnabled(Z_Param_a_Enable);
	P_NATIVE_END;
}
// ********** End Class APlayersControllerBase Function SetInputsEnabled ***************************

// ********** Begin Class APlayersControllerBase Function SetMinionById ****************************
struct Z_Construct_UFunction_APlayersControllerBase_SetMinionById_Statics
{
	struct PlayersControllerBase_eventSetMinionById_Parms
	{
		int32 a_MinionId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayersController_Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Called to select a Minion by its Id.\n\x09 * @param a_MinionId Id of the selected Minion.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/PlayersControllers/PlayersControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called to select a Minion by its Id.\n@param a_MinionId Id of the selected Minion." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_MinionId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayersControllerBase_SetMinionById_Statics::NewProp_a_MinionId = { "a_MinionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayersControllerBase_eventSetMinionById_Parms, a_MinionId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayersControllerBase_SetMinionById_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayersControllerBase_SetMinionById_Statics::NewProp_a_MinionId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_SetMinionById_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayersControllerBase_SetMinionById_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayersControllerBase, nullptr, "SetMinionById", Z_Construct_UFunction_APlayersControllerBase_SetMinionById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_SetMinionById_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayersControllerBase_SetMinionById_Statics::PlayersControllerBase_eventSetMinionById_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_SetMinionById_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayersControllerBase_SetMinionById_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayersControllerBase_SetMinionById_Statics::PlayersControllerBase_eventSetMinionById_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayersControllerBase_SetMinionById()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayersControllerBase_SetMinionById_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayersControllerBase::execSetMinionById)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_a_MinionId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMinionById(Z_Param_a_MinionId);
	P_NATIVE_END;
}
// ********** End Class APlayersControllerBase Function SetMinionById ******************************

// ********** Begin Class APlayersControllerBase Function SetPlayerById ****************************
struct Z_Construct_UFunction_APlayersControllerBase_SetPlayerById_Statics
{
	struct PlayersControllerBase_eventSetPlayerById_Parms
	{
		int32 a_PlayerId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayersController_Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Called to select a Player by its Id.\n\x09 * @param a_PlayerId Id of the selected Player.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/PlayersControllers/PlayersControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called to select a Player by its Id.\n@param a_PlayerId Id of the selected Player." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_PlayerId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayersControllerBase_SetPlayerById_Statics::NewProp_a_PlayerId = { "a_PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayersControllerBase_eventSetPlayerById_Parms, a_PlayerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayersControllerBase_SetPlayerById_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayersControllerBase_SetPlayerById_Statics::NewProp_a_PlayerId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_SetPlayerById_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayersControllerBase_SetPlayerById_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayersControllerBase, nullptr, "SetPlayerById", Z_Construct_UFunction_APlayersControllerBase_SetPlayerById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_SetPlayerById_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayersControllerBase_SetPlayerById_Statics::PlayersControllerBase_eventSetPlayerById_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_SetPlayerById_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayersControllerBase_SetPlayerById_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayersControllerBase_SetPlayerById_Statics::PlayersControllerBase_eventSetPlayerById_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayersControllerBase_SetPlayerById()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayersControllerBase_SetPlayerById_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayersControllerBase::execSetPlayerById)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_a_PlayerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlayerById(Z_Param_a_PlayerId);
	P_NATIVE_END;
}
// ********** End Class APlayersControllerBase Function SetPlayerById ******************************

// ********** Begin Class APlayersControllerBase Function SetPlayerInputsEnabled *******************
struct Z_Construct_UFunction_APlayersControllerBase_SetPlayerInputsEnabled_Statics
{
	struct PlayersControllerBase_eventSetPlayerInputsEnabled_Parms
	{
		int32 a_PlayerId;
		bool a_Enabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayersController_Functions" },
		{ "ModuleRelativePath", "Controllers/PlayersControllers/PlayersControllerBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_a_PlayerId;
	static void NewProp_a_Enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_a_Enabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayersControllerBase_SetPlayerInputsEnabled_Statics::NewProp_a_PlayerId = { "a_PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayersControllerBase_eventSetPlayerInputsEnabled_Parms, a_PlayerId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APlayersControllerBase_SetPlayerInputsEnabled_Statics::NewProp_a_Enabled_SetBit(void* Obj)
{
	((PlayersControllerBase_eventSetPlayerInputsEnabled_Parms*)Obj)->a_Enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayersControllerBase_SetPlayerInputsEnabled_Statics::NewProp_a_Enabled = { "a_Enabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayersControllerBase_eventSetPlayerInputsEnabled_Parms), &Z_Construct_UFunction_APlayersControllerBase_SetPlayerInputsEnabled_Statics::NewProp_a_Enabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayersControllerBase_SetPlayerInputsEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayersControllerBase_SetPlayerInputsEnabled_Statics::NewProp_a_PlayerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayersControllerBase_SetPlayerInputsEnabled_Statics::NewProp_a_Enabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_SetPlayerInputsEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayersControllerBase_SetPlayerInputsEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayersControllerBase, nullptr, "SetPlayerInputsEnabled", Z_Construct_UFunction_APlayersControllerBase_SetPlayerInputsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_SetPlayerInputsEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayersControllerBase_SetPlayerInputsEnabled_Statics::PlayersControllerBase_eventSetPlayerInputsEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayersControllerBase_SetPlayerInputsEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayersControllerBase_SetPlayerInputsEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayersControllerBase_SetPlayerInputsEnabled_Statics::PlayersControllerBase_eventSetPlayerInputsEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayersControllerBase_SetPlayerInputsEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayersControllerBase_SetPlayerInputsEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayersControllerBase::execSetPlayerInputsEnabled)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_a_PlayerId);
	P_GET_UBOOL(Z_Param_a_Enabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlayerInputsEnabled(Z_Param_a_PlayerId,Z_Param_a_Enabled);
	P_NATIVE_END;
}
// ********** End Class APlayersControllerBase Function SetPlayerInputsEnabled *********************

// ********** Begin Class APlayersControllerBase ***************************************************
void APlayersControllerBase::StaticRegisterNativesAPlayersControllerBase()
{
	UClass* Class = APlayersControllerBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AssignPlayerToTeam", &APlayersControllerBase::execAssignPlayerToTeam },
		{ "GetCurrentMinion", &APlayersControllerBase::execGetCurrentMinion },
		{ "GetCurrentMinionId", &APlayersControllerBase::execGetCurrentMinionId },
		{ "GetCurrentPlayer", &APlayersControllerBase::execGetCurrentPlayer },
		{ "GetCurrentPlayerId", &APlayersControllerBase::execGetCurrentPlayerId },
		{ "GetMinionById", &APlayersControllerBase::execGetMinionById },
		{ "GetPlayerById", &APlayersControllerBase::execGetPlayerById },
		{ "GetPlayersAmount", &APlayersControllerBase::execGetPlayersAmount },
		{ "GetPlayersByTeamId", &APlayersControllerBase::execGetPlayersByTeamId },
		{ "NextMinion", &APlayersControllerBase::execNextMinion },
		{ "NextPlayer", &APlayersControllerBase::execNextPlayer },
		{ "PreviousMinion", &APlayersControllerBase::execPreviousMinion },
		{ "SetAllPlayersInputsEnabled", &APlayersControllerBase::execSetAllPlayersInputsEnabled },
		{ "SetEventsEnabled", &APlayersControllerBase::execSetEventsEnabled },
		{ "SetInputsEnabled", &APlayersControllerBase::execSetInputsEnabled },
		{ "SetMinionById", &APlayersControllerBase::execSetMinionById },
		{ "SetPlayerById", &APlayersControllerBase::execSetPlayerById },
		{ "SetPlayerInputsEnabled", &APlayersControllerBase::execSetPlayerInputsEnabled },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_APlayersControllerBase;
UClass* APlayersControllerBase::GetPrivateStaticClass()
{
	using TClass = APlayersControllerBase;
	if (!Z_Registration_Info_UClass_APlayersControllerBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlayersControllerBase"),
			Z_Registration_Info_UClass_APlayersControllerBase.InnerSingleton,
			StaticRegisterNativesAPlayersControllerBase,
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
	return Z_Registration_Info_UClass_APlayersControllerBase.InnerSingleton;
}
UClass* Z_Construct_UClass_APlayersControllerBase_NoRegister()
{
	return APlayersControllerBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APlayersControllerBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base Controller for the Data of all Players in the Game.\n */" },
#endif
		{ "IncludePath", "Controllers/PlayersControllers/PlayersControllerBase.h" },
		{ "ModuleRelativePath", "Controllers/PlayersControllers/PlayersControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base Controller for the Data of all Players in the Game." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_Players_MetaData[] = {
		{ "Category", "PlayersController" },
		{ "ModuleRelativePath", "Controllers/PlayersControllers/PlayersControllerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_CurrentPlayerId_MetaData[] = {
		{ "Category", "PlayersController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//< Array of Players' data.\n" },
#endif
		{ "ModuleRelativePath", "Controllers/PlayersControllers/PlayersControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Array of Players' data." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_CurrentMinionId_MetaData[] = {
		{ "Category", "PlayersController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Id of the current Player.\n" },
#endif
		{ "ModuleRelativePath", "Controllers/PlayersControllers/PlayersControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Id of the current Player." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_EventPlayerChanged_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Id of the current Minion.\n" },
#endif
		{ "ModuleRelativePath", "Controllers/PlayersControllers/PlayersControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Id of the current Minion." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_EventMinionChanged_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Event triggered when the player is changed.\n" },
#endif
		{ "ModuleRelativePath", "Controllers/PlayersControllers/PlayersControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Event triggered when the player is changed." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_m_Players_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_m_Players;
	static const UECodeGen_Private::FIntPropertyParams NewProp_m_CurrentPlayerId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_m_CurrentMinionId;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_EventPlayerChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_EventMinionChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayersControllerBase_AssignPlayerToTeam, "AssignPlayerToTeam" }, // 1996883073
		{ &Z_Construct_UFunction_APlayersControllerBase_GetCurrentMinion, "GetCurrentMinion" }, // 1543174737
		{ &Z_Construct_UFunction_APlayersControllerBase_GetCurrentMinionId, "GetCurrentMinionId" }, // 4107980164
		{ &Z_Construct_UFunction_APlayersControllerBase_GetCurrentPlayer, "GetCurrentPlayer" }, // 2670778292
		{ &Z_Construct_UFunction_APlayersControllerBase_GetCurrentPlayerId, "GetCurrentPlayerId" }, // 3625594233
		{ &Z_Construct_UFunction_APlayersControllerBase_GetMinionById, "GetMinionById" }, // 1136624216
		{ &Z_Construct_UFunction_APlayersControllerBase_GetPlayerById, "GetPlayerById" }, // 1979950775
		{ &Z_Construct_UFunction_APlayersControllerBase_GetPlayersAmount, "GetPlayersAmount" }, // 1522522542
		{ &Z_Construct_UFunction_APlayersControllerBase_GetPlayersByTeamId, "GetPlayersByTeamId" }, // 4026599908
		{ &Z_Construct_UFunction_APlayersControllerBase_NextMinion, "NextMinion" }, // 3482659955
		{ &Z_Construct_UFunction_APlayersControllerBase_NextPlayer, "NextPlayer" }, // 587291787
		{ &Z_Construct_UFunction_APlayersControllerBase_PreviousMinion, "PreviousMinion" }, // 3729712250
		{ &Z_Construct_UFunction_APlayersControllerBase_SetAllPlayersInputsEnabled, "SetAllPlayersInputsEnabled" }, // 2240034459
		{ &Z_Construct_UFunction_APlayersControllerBase_SetEventsEnabled, "SetEventsEnabled" }, // 821933752
		{ &Z_Construct_UFunction_APlayersControllerBase_SetInputsEnabled, "SetInputsEnabled" }, // 673485013
		{ &Z_Construct_UFunction_APlayersControllerBase_SetMinionById, "SetMinionById" }, // 1730935962
		{ &Z_Construct_UFunction_APlayersControllerBase_SetPlayerById, "SetPlayerById" }, // 3671255305
		{ &Z_Construct_UFunction_APlayersControllerBase_SetPlayerInputsEnabled, "SetPlayerInputsEnabled" }, // 3701025376
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayersControllerBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayersControllerBase_Statics::NewProp_m_Players_Inner = { "m_Players", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPlayerData, METADATA_PARAMS(0, nullptr) }; // 980726925
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayersControllerBase_Statics::NewProp_m_Players = { "m_Players", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayersControllerBase, m_Players), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_Players_MetaData), NewProp_m_Players_MetaData) }; // 980726925
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayersControllerBase_Statics::NewProp_m_CurrentPlayerId = { "m_CurrentPlayerId", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayersControllerBase, m_CurrentPlayerId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_CurrentPlayerId_MetaData), NewProp_m_CurrentPlayerId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayersControllerBase_Statics::NewProp_m_CurrentMinionId = { "m_CurrentMinionId", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayersControllerBase, m_CurrentMinionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_CurrentMinionId_MetaData), NewProp_m_CurrentMinionId_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APlayersControllerBase_Statics::NewProp_m_EventPlayerChanged = { "m_EventPlayerChanged", nullptr, (EPropertyFlags)0x0020080000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayersControllerBase, m_EventPlayerChanged), Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_EventPlayerChanged_MetaData), NewProp_m_EventPlayerChanged_MetaData) }; // 4238188420
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APlayersControllerBase_Statics::NewProp_m_EventMinionChanged = { "m_EventMinionChanged", nullptr, (EPropertyFlags)0x0020080000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayersControllerBase, m_EventMinionChanged), Z_Construct_UDelegateFunction_PartyJungle_Event_MinionChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_EventMinionChanged_MetaData), NewProp_m_EventMinionChanged_MetaData) }; // 3102599471
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayersControllerBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayersControllerBase_Statics::NewProp_m_Players_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayersControllerBase_Statics::NewProp_m_Players,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayersControllerBase_Statics::NewProp_m_CurrentPlayerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayersControllerBase_Statics::NewProp_m_CurrentMinionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayersControllerBase_Statics::NewProp_m_EventPlayerChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayersControllerBase_Statics::NewProp_m_EventMinionChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayersControllerBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlayersControllerBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AControllerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayersControllerBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayersControllerBase_Statics::ClassParams = {
	&APlayersControllerBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APlayersControllerBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayersControllerBase_Statics::PropPointers),
	0,
	0x008001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayersControllerBase_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayersControllerBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayersControllerBase()
{
	if (!Z_Registration_Info_UClass_APlayersControllerBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayersControllerBase.OuterSingleton, Z_Construct_UClass_APlayersControllerBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayersControllerBase.OuterSingleton;
}
APlayersControllerBase::APlayersControllerBase() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayersControllerBase);
APlayersControllerBase::~APlayersControllerBase() {}
// ********** End Class APlayersControllerBase *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_PlayersControllerBase_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayersControllerBase, APlayersControllerBase::StaticClass, TEXT("APlayersControllerBase"), &Z_Registration_Info_UClass_APlayersControllerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayersControllerBase), 96820651U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_PlayersControllerBase_h__Script_PartyJungle_2087820263(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_PlayersControllerBase_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_PlayersControllers_PlayersControllerBase_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
