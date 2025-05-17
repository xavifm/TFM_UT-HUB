// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/PlayFabAPI/PlayFabAPI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabAPI() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PARTYJUNGLE_API UClass* Z_Construct_UClass_APlayFabAPI();
PARTYJUNGLE_API UClass* Z_Construct_UClass_APlayFabAPI_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// End Cross Module References

// Begin Class APlayFabAPI Function GetDisplayName
struct Z_Construct_UFunction_APlayFabAPI_GetDisplayName_Statics
{
	struct PlayFabAPI_eventGetDisplayName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayFabAPI/PlayFabAPI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayFabAPI_GetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAPI_eventGetDisplayName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayFabAPI_GetDisplayName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayFabAPI_GetDisplayName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayFabAPI_GetDisplayName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayFabAPI_GetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayFabAPI, nullptr, "GetDisplayName", nullptr, nullptr, Z_Construct_UFunction_APlayFabAPI_GetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayFabAPI_GetDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayFabAPI_GetDisplayName_Statics::PlayFabAPI_eventGetDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayFabAPI_GetDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayFabAPI_GetDisplayName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayFabAPI_GetDisplayName_Statics::PlayFabAPI_eventGetDisplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayFabAPI_GetDisplayName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayFabAPI_GetDisplayName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayFabAPI::execGetDisplayName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetDisplayName();
	P_NATIVE_END;
}
// End Class APlayFabAPI Function GetDisplayName

// Begin Class APlayFabAPI Function GetDisplayScore
struct Z_Construct_UFunction_APlayFabAPI_GetDisplayScore_Statics
{
	struct PlayFabAPI_eventGetDisplayScore_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayFabAPI/PlayFabAPI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayFabAPI_GetDisplayScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAPI_eventGetDisplayScore_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayFabAPI_GetDisplayScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayFabAPI_GetDisplayScore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayFabAPI_GetDisplayScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayFabAPI_GetDisplayScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayFabAPI, nullptr, "GetDisplayScore", nullptr, nullptr, Z_Construct_UFunction_APlayFabAPI_GetDisplayScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayFabAPI_GetDisplayScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayFabAPI_GetDisplayScore_Statics::PlayFabAPI_eventGetDisplayScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayFabAPI_GetDisplayScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayFabAPI_GetDisplayScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayFabAPI_GetDisplayScore_Statics::PlayFabAPI_eventGetDisplayScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayFabAPI_GetDisplayScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayFabAPI_GetDisplayScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayFabAPI::execGetDisplayScore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetDisplayScore();
	P_NATIVE_END;
}
// End Class APlayFabAPI Function GetDisplayScore

// Begin Class APlayFabAPI Function LoginUser
struct Z_Construct_UFunction_APlayFabAPI_LoginUser_Statics
{
	struct PlayFabAPI_eventLoginUser_Parms
	{
		FString TitleId;
		FString Email;
		FString Password;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayFabAPI/PlayFabAPI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TitleId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Email;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayFabAPI_LoginUser_Statics::NewProp_TitleId = { "TitleId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAPI_eventLoginUser_Parms, TitleId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleId_MetaData), NewProp_TitleId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayFabAPI_LoginUser_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAPI_eventLoginUser_Parms, Email), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Email_MetaData), NewProp_Email_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayFabAPI_LoginUser_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAPI_eventLoginUser_Parms, Password), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Password_MetaData), NewProp_Password_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayFabAPI_LoginUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayFabAPI_LoginUser_Statics::NewProp_TitleId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayFabAPI_LoginUser_Statics::NewProp_Email,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayFabAPI_LoginUser_Statics::NewProp_Password,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayFabAPI_LoginUser_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayFabAPI_LoginUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayFabAPI, nullptr, "LoginUser", nullptr, nullptr, Z_Construct_UFunction_APlayFabAPI_LoginUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayFabAPI_LoginUser_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayFabAPI_LoginUser_Statics::PlayFabAPI_eventLoginUser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayFabAPI_LoginUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayFabAPI_LoginUser_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayFabAPI_LoginUser_Statics::PlayFabAPI_eventLoginUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayFabAPI_LoginUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayFabAPI_LoginUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayFabAPI::execLoginUser)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_TitleId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Email);
	P_GET_PROPERTY(FStrProperty,Z_Param_Password);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoginUser(Z_Param_TitleId,Z_Param_Email,Z_Param_Password);
	P_NATIVE_END;
}
// End Class APlayFabAPI Function LoginUser

// Begin Class APlayFabAPI Function RegisterUser
struct Z_Construct_UFunction_APlayFabAPI_RegisterUser_Statics
{
	struct PlayFabAPI_eventRegisterUser_Parms
	{
		FString TitleId;
		FString Username;
		FString Password;
		FString Email;
		FString DisName;
		FString RequireBothUsernameAndEmail;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayFabAPI/PlayFabAPI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequireBothUsernameAndEmail_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TitleId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Username;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Email;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RequireBothUsernameAndEmail;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayFabAPI_RegisterUser_Statics::NewProp_TitleId = { "TitleId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAPI_eventRegisterUser_Parms, TitleId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleId_MetaData), NewProp_TitleId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayFabAPI_RegisterUser_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAPI_eventRegisterUser_Parms, Username), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Username_MetaData), NewProp_Username_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayFabAPI_RegisterUser_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAPI_eventRegisterUser_Parms, Password), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Password_MetaData), NewProp_Password_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayFabAPI_RegisterUser_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAPI_eventRegisterUser_Parms, Email), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Email_MetaData), NewProp_Email_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayFabAPI_RegisterUser_Statics::NewProp_DisName = { "DisName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAPI_eventRegisterUser_Parms, DisName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisName_MetaData), NewProp_DisName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayFabAPI_RegisterUser_Statics::NewProp_RequireBothUsernameAndEmail = { "RequireBothUsernameAndEmail", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAPI_eventRegisterUser_Parms, RequireBothUsernameAndEmail), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequireBothUsernameAndEmail_MetaData), NewProp_RequireBothUsernameAndEmail_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayFabAPI_RegisterUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayFabAPI_RegisterUser_Statics::NewProp_TitleId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayFabAPI_RegisterUser_Statics::NewProp_Username,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayFabAPI_RegisterUser_Statics::NewProp_Password,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayFabAPI_RegisterUser_Statics::NewProp_Email,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayFabAPI_RegisterUser_Statics::NewProp_DisName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayFabAPI_RegisterUser_Statics::NewProp_RequireBothUsernameAndEmail,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayFabAPI_RegisterUser_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayFabAPI_RegisterUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayFabAPI, nullptr, "RegisterUser", nullptr, nullptr, Z_Construct_UFunction_APlayFabAPI_RegisterUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayFabAPI_RegisterUser_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayFabAPI_RegisterUser_Statics::PlayFabAPI_eventRegisterUser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayFabAPI_RegisterUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayFabAPI_RegisterUser_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayFabAPI_RegisterUser_Statics::PlayFabAPI_eventRegisterUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayFabAPI_RegisterUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayFabAPI_RegisterUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayFabAPI::execRegisterUser)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_TitleId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Username);
	P_GET_PROPERTY(FStrProperty,Z_Param_Password);
	P_GET_PROPERTY(FStrProperty,Z_Param_Email);
	P_GET_PROPERTY(FStrProperty,Z_Param_DisName);
	P_GET_PROPERTY(FStrProperty,Z_Param_RequireBothUsernameAndEmail);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterUser(Z_Param_TitleId,Z_Param_Username,Z_Param_Password,Z_Param_Email,Z_Param_DisName,Z_Param_RequireBothUsernameAndEmail);
	P_NATIVE_END;
}
// End Class APlayFabAPI Function RegisterUser

// Begin Class APlayFabAPI Function SendScoreToPlayFab
struct Z_Construct_UFunction_APlayFabAPI_SendScoreToPlayFab_Statics
{
	struct PlayFabAPI_eventSendScoreToPlayFab_Parms
	{
		int32 Score;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayFabAPI/PlayFabAPI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayFabAPI_SendScoreToPlayFab_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAPI_eventSendScoreToPlayFab_Parms, Score), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayFabAPI_SendScoreToPlayFab_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayFabAPI_SendScoreToPlayFab_Statics::NewProp_Score,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayFabAPI_SendScoreToPlayFab_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayFabAPI_SendScoreToPlayFab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayFabAPI, nullptr, "SendScoreToPlayFab", nullptr, nullptr, Z_Construct_UFunction_APlayFabAPI_SendScoreToPlayFab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayFabAPI_SendScoreToPlayFab_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayFabAPI_SendScoreToPlayFab_Statics::PlayFabAPI_eventSendScoreToPlayFab_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayFabAPI_SendScoreToPlayFab_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayFabAPI_SendScoreToPlayFab_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayFabAPI_SendScoreToPlayFab_Statics::PlayFabAPI_eventSendScoreToPlayFab_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayFabAPI_SendScoreToPlayFab()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayFabAPI_SendScoreToPlayFab_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayFabAPI::execSendScoreToPlayFab)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Score);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendScoreToPlayFab(Z_Param_Score);
	P_NATIVE_END;
}
// End Class APlayFabAPI Function SendScoreToPlayFab

// Begin Class APlayFabAPI
void APlayFabAPI::StaticRegisterNativesAPlayFabAPI()
{
	UClass* Class = APlayFabAPI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDisplayName", &APlayFabAPI::execGetDisplayName },
		{ "GetDisplayScore", &APlayFabAPI::execGetDisplayScore },
		{ "LoginUser", &APlayFabAPI::execLoginUser },
		{ "RegisterUser", &APlayFabAPI::execRegisterUser },
		{ "SendScoreToPlayFab", &APlayFabAPI::execSendScoreToPlayFab },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayFabAPI);
UClass* Z_Construct_UClass_APlayFabAPI_NoRegister()
{
	return APlayFabAPI::StaticClass();
}
struct Z_Construct_UClass_APlayFabAPI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PlayFabAPI/PlayFabAPI.h" },
		{ "ModuleRelativePath", "PlayFabAPI/PlayFabAPI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FabUI_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayFabAPI/PlayFabAPI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FabUI;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayFabAPI_GetDisplayName, "GetDisplayName" }, // 1227285399
		{ &Z_Construct_UFunction_APlayFabAPI_GetDisplayScore, "GetDisplayScore" }, // 1286159512
		{ &Z_Construct_UFunction_APlayFabAPI_LoginUser, "LoginUser" }, // 4160491164
		{ &Z_Construct_UFunction_APlayFabAPI_RegisterUser, "RegisterUser" }, // 3834369853
		{ &Z_Construct_UFunction_APlayFabAPI_SendScoreToPlayFab, "SendScoreToPlayFab" }, // 2124804004
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayFabAPI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayFabAPI_Statics::NewProp_FabUI = { "FabUI", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayFabAPI, FabUI), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FabUI_MetaData), NewProp_FabUI_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayFabAPI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayFabAPI_Statics::NewProp_FabUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayFabAPI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlayFabAPI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayFabAPI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayFabAPI_Statics::ClassParams = {
	&APlayFabAPI::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APlayFabAPI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayFabAPI_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayFabAPI_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayFabAPI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayFabAPI()
{
	if (!Z_Registration_Info_UClass_APlayFabAPI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayFabAPI.OuterSingleton, Z_Construct_UClass_APlayFabAPI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayFabAPI.OuterSingleton;
}
template<> PARTYJUNGLE_API UClass* StaticClass<APlayFabAPI>()
{
	return APlayFabAPI::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayFabAPI);
APlayFabAPI::~APlayFabAPI() {}
// End Class APlayFabAPI

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_PlayFabAPI_PlayFabAPI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayFabAPI, APlayFabAPI::StaticClass, TEXT("APlayFabAPI"), &Z_Registration_Info_UClass_APlayFabAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayFabAPI), 1133063936U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_PlayFabAPI_PlayFabAPI_h_3592945402(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_PlayFabAPI_PlayFabAPI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_PlayFabAPI_PlayFabAPI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
