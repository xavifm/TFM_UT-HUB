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

// Begin Class APlayFabAPI Function RegisterUser
struct Z_Construct_UFunction_APlayFabAPI_RegisterUser_Statics
{
	struct PlayFabAPI_eventRegisterUser_Parms
	{
		FString TitleId;
		FString Username;
		FString Password;
		FString Email;
		FString DisplayName;
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
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
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RequireBothUsernameAndEmail;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayFabAPI_RegisterUser_Statics::NewProp_TitleId = { "TitleId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAPI_eventRegisterUser_Parms, TitleId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleId_MetaData), NewProp_TitleId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayFabAPI_RegisterUser_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAPI_eventRegisterUser_Parms, Username), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Username_MetaData), NewProp_Username_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayFabAPI_RegisterUser_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAPI_eventRegisterUser_Parms, Password), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Password_MetaData), NewProp_Password_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayFabAPI_RegisterUser_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAPI_eventRegisterUser_Parms, Email), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Email_MetaData), NewProp_Email_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayFabAPI_RegisterUser_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAPI_eventRegisterUser_Parms, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayFabAPI_RegisterUser_Statics::NewProp_RequireBothUsernameAndEmail = { "RequireBothUsernameAndEmail", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAPI_eventRegisterUser_Parms, RequireBothUsernameAndEmail), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequireBothUsernameAndEmail_MetaData), NewProp_RequireBothUsernameAndEmail_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayFabAPI_RegisterUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayFabAPI_RegisterUser_Statics::NewProp_TitleId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayFabAPI_RegisterUser_Statics::NewProp_Username,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayFabAPI_RegisterUser_Statics::NewProp_Password,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayFabAPI_RegisterUser_Statics::NewProp_Email,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayFabAPI_RegisterUser_Statics::NewProp_DisplayName,
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
	P_GET_PROPERTY(FStrProperty,Z_Param_DisplayName);
	P_GET_PROPERTY(FStrProperty,Z_Param_RequireBothUsernameAndEmail);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterUser(Z_Param_TitleId,Z_Param_Username,Z_Param_Password,Z_Param_Email,Z_Param_DisplayName,Z_Param_RequireBothUsernameAndEmail);
	P_NATIVE_END;
}
// End Class APlayFabAPI Function RegisterUser

// Begin Class APlayFabAPI
void APlayFabAPI::StaticRegisterNativesAPlayFabAPI()
{
	UClass* Class = APlayFabAPI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RegisterUser", &APlayFabAPI::execRegisterUser },
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
		{ &Z_Construct_UFunction_APlayFabAPI_RegisterUser, "RegisterUser" }, // 3648689862
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
struct Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_PlayFabAPI_PlayFabAPI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayFabAPI, APlayFabAPI::StaticClass, TEXT("APlayFabAPI"), &Z_Registration_Info_UClass_APlayFabAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayFabAPI), 1473246957U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_PlayFabAPI_PlayFabAPI_h_678063261(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_PlayFabAPI_PlayFabAPI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_PlayFabAPI_PlayFabAPI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
