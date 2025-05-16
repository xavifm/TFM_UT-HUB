#include "./PlayFabAPI.h"
#include <HttpModule.h>
#include "Http.h"
#include "Dom/JsonObject.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"


APlayFabAPI::APlayFabAPI()
{
	PrimaryActorTick.bCanEverTick = true;

}

void APlayFabAPI::BeginPlay()
{
	Super::BeginPlay();

        //RegisterUser("C4BF3",
        //             "jugadorPorfaFunciona",
        //             "ContraMuyMuyMuySegura",
        //             "jugador@testDefinitivoporfa.com",
        //             "JugadorDeCPlusPlus",
        //             "false");

        //LoginUser("C4BF3", "jugador@testDefinitivoporfa.com", "ContraMuyMuyMuySegura");
}

void APlayFabAPI::RegisterUser(const FString& TitleId, const FString& Username, const FString& Password, const FString& Email, const FString& DisName, const FString& RequireBothUsernameAndEmail)
{
    FString URL = TEXT("https://") + TitleId + TEXT(".playfabapi.com/Client/RegisterPlayFabUser");

    FHttpModule& HttpModule = FHttpModule::Get();
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> pRequest = HttpModule.CreateRequest();

    pRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    pRequest->SetVerb("POST");
    pRequest->SetURL(URL);

    FString JsonBody = FString::Printf(
        TEXT("{\"TitleId\":\"%s\",\"Username\":\"%s\",\"Password\":\"%s\",\"Email\":\"%s\",\"DisplayName\":\"%s\",\"RequireBothUsernameAndEmail\":%s}"),
        *TitleId, *Username, *Password, *Email, *DisplayName, *RequireBothUsernameAndEmail
    );

    pRequest->SetContentAsString(JsonBody);

    pRequest->OnProcessRequestComplete().BindLambda(
        [](FHttpRequestPtr pRequest, FHttpResponsePtr pResponse, bool _connectedSuccessfully) mutable -> void
        {
            if (!_connectedSuccessfully)
            {
                switch (pRequest->GetStatus())
                {
                case EHttpRequestStatus::Failed_ConnectionError:
                    UE_LOG(LogTemp, Error, TEXT("Connection failed."));
                    break;
                default:
                    UE_LOG(LogTemp, Error, TEXT("Request failed."));
                    break;
                }
                return;
            }
        });

    pRequest->ProcessRequest();
}

void APlayFabAPI::LoginUser(const FString& TitleId, const FString& Email, const FString& Password)
{
    StoredTitleId = TitleId;

    FString URL = TEXT("https://") + TitleId + TEXT(".playfabapi.com/Client/LoginWithEmailAddress");

    FHttpModule& HttpModule = FHttpModule::Get();
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> pRequest = HttpModule.CreateRequest();

    pRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    pRequest->SetVerb("POST");
    pRequest->SetURL(URL);

    FString JsonBody = FString::Printf(
        TEXT("{\"TitleId\":\"%s\",\"Email\":\"%s\",\"Password\":\"%s\"}"),
        *TitleId, *Email, *Password
    );

    pRequest->SetContentAsString(JsonBody);

    pRequest->OnProcessRequestComplete().BindLambda(
        [this](FHttpRequestPtr pRequest, FHttpResponsePtr pResponse, bool bConnectedSuccessfully)
        {
            if (!bConnectedSuccessfully || !pResponse.IsValid())
            {
                UE_LOG(LogTemp, Error, TEXT("Login request failed."));
                return;
            }

            const FString ResponseContent = pResponse->GetContentAsString();
            UE_LOG(LogTemp, Log, TEXT("Login response: %s"), *ResponseContent);

            if (EHttpResponseCodes::IsOk(pResponse->GetResponseCode()))
            {
                TSharedPtr<FJsonObject> JsonObject;
                TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(ResponseContent);

                if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
                {
                    const TSharedPtr<FJsonObject>* DataObject;
                    if (JsonObject->TryGetObjectField(TEXT("data"), DataObject))
                    {
                        FString RetrievedSessionTicket;
                        if ((*DataObject)->TryGetStringField(TEXT("SessionTicket"), RetrievedSessionTicket))
                        {
                            SessionTicket = RetrievedSessionTicket;
                            LoggedIn = true;
                            UE_LOG(LogTemp, Log, TEXT("SessionTicket saved: %s"), *SessionTicket);
                        }
                    }
                }
            }
            else
            {
                UE_LOG(LogTemp, Error, TEXT("Login failed: %s"), *ResponseContent);
            }
        });

    pRequest->ProcessRequest();
}


void APlayFabAPI::GetUserAccountInfo()
{
    if (!LoggedIn)
        return;

    FString URL = TEXT("https://") + StoredTitleId + TEXT(".playfabapi.com/Client/GetAccountInfo");

    FHttpModule& HttpModule = FHttpModule::Get();
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = HttpModule.CreateRequest();

    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    Request->SetHeader(TEXT("X-Authorization"), SessionTicket);

    FString Body = TEXT("{}");
    Request->SetContentAsString(Body);

    Request->OnProcessRequestComplete().BindLambda(
        [this](FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
        {
            if (!bWasSuccessful || !Response.IsValid())
            {
                UE_LOG(LogTemp, Error, TEXT("Failed to get account info"));
                return;
            }

            const FString ResponseContent = Response->GetContentAsString();
            UE_LOG(LogTemp, Log, TEXT("Account Info Response: %s"), *ResponseContent);

            TSharedPtr<FJsonObject> JsonObject;
            TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(ResponseContent);

            if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
            {
                const TSharedPtr<FJsonObject>* DataObject;
                if (JsonObject->TryGetObjectField(TEXT("data"), DataObject))
                {
                    DisplayName = (*(*DataObject)->GetObjectField("Info")->GetObjectField("TitleInfo")).GetStringField("DisplayName");
                }
            }
        });

    Request->ProcessRequest();
}

void APlayFabAPI::GetUserScoreFromPlayFab()
{
    if (!LoggedIn)
        return;

    FString URL = FString::Printf(TEXT("https://%s.playfabapi.com/Client/GetUserData"), *StoredTitleId);

    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb(TEXT("POST"));
    Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    Request->SetHeader(TEXT("X-Authorization"), SessionTicket);

    Request->SetContentAsString(TEXT("{}"));

    Request->OnProcessRequestComplete().BindLambda(
        [this](FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
        {
            if (!bWasSuccessful || !Response.IsValid())
            {
                UE_LOG(LogTemp, Error, TEXT("Failed to get user data."));
                return;
            }

            const FString ResponseContent = Response->GetContentAsString();
            UE_LOG(LogTemp, Log, TEXT("User Data Response: %s"), *ResponseContent);

            TSharedPtr<FJsonObject> JsonObject;
            TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(ResponseContent);

            if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
            {
                const TSharedPtr<FJsonObject>* DataObject;
                if (JsonObject->TryGetObjectField(TEXT("data"), DataObject))
                {
                    const TSharedPtr<FJsonObject>* UserData;
                    if ((*DataObject)->TryGetObjectField(TEXT("Data"), UserData))
                    {
                        const TSharedPtr<FJsonObject>* ScoreObject;
                        if ((*UserData)->TryGetObjectField(TEXT("GameScore"), ScoreObject))
                        {
                            FString ScoreValue = (*ScoreObject)->GetStringField(TEXT("Value"));
                            UE_LOG(LogTemp, Log, TEXT("GameScore: %s"), *ScoreValue);
                            DisplayScore = FCString::Atoi(*ScoreValue);
                        }
                    }
                }
            }
        });

    Request->ProcessRequest();
}

void APlayFabAPI::SendScoreToPlayFab(int32 Score)
{
    if (!LoggedIn)
        return;

    FString URL = FString::Printf(TEXT("https://%s.playfabapi.com/Client/UpdateUserData"), *StoredTitleId);

    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();

    Request->SetURL(URL);
    Request->SetVerb(TEXT("POST"));
    Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    Request->SetHeader(TEXT("X-Authorization"), SessionTicket);

    FString Body = FString::Printf(TEXT(
        "{"
        "\"Data\": {"
        "\"GameScore\": \"%d\""
        "}"
        "}"), Score);

    Request->SetContentAsString(Body);

    Request->OnProcessRequestComplete().BindLambda(
        [](FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
        {
            if (bWasSuccessful && Response->GetResponseCode() == 200)
            {
                UE_LOG(LogTemp, Log, TEXT("Score successfully saved in Player Data!"));
            }
            else
            {
                UE_LOG(LogTemp, Error, TEXT("Failed to save player data: %s"), *Response->GetContentAsString());
            }
        });

    Request->ProcessRequest();
}

FString APlayFabAPI::GetDisplayName()
{
    FString nameQuery = "Not Logged In!";

    if(LoggedIn) 
    {
        if (DisplayName == "")
            GetUserAccountInfo();

        nameQuery = DisplayName;
    }
   
    return nameQuery;
}

int APlayFabAPI::GetDisplayScore()
{
    int scoreQuery = -1;

    if (LoggedIn)
    {
        if (DisplayScore == -1)
            GetUserScoreFromPlayFab();

        scoreQuery = DisplayScore;
    }

    return scoreQuery;
}






