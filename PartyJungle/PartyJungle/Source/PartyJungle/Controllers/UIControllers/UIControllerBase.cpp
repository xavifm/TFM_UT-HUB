#include "UIControllerBase.h"

#include <PartyJungle/Controllers/UIControllers/CustomWidgets/StateWidgets/StateWidget.h>
#include <PartyJungle/Controllers/UIControllers/CustomWidgets/WidgetFolderContainer.h>
#include <PartyJungle/Controllers/UIControllers/CustomWidgets/WidgetFolder.h>

#include <Blueprint/UserWidget.h>
#include <Blueprint/WidgetBlueprintGeneratedClass.h>
#include <Blueprint/WidgetTree.h>


void AUIControllerBase::OnStart_Implementation()
{
	Super::OnStart_Implementation();
	
	if (m_UserWidgetClass)
	{
		m_UserWidget = CreateWidget<UUserWidget>(GetWorld(), m_UserWidgetClass);
		m_UserWidget->AddToViewport();
		m_WidgetContainer = m_UserWidget->GetWidgetTreeOwningClass()->GetWidgetTreeArchetype()->FindWidget<UWidgetFolderContainer>("WidgetFolderContainer");
		
		for (auto& [FolderId, WidgetsFolder] : m_WidgetContainer->GetAllWidgetFolders())
		{
			for (auto& Widget : WidgetsFolder.GetWidgets())
			{
				auto* StateWidget {dynamic_cast<CStateWidget*>(Widget)};
				if (StateWidget != nullptr)
				{
					StateWidget->OnBegin(FolderId, Widget);
				}
			}
		}
		
		for (auto& FolderId : m_WidgetContainer->GetAllActiveFolderIds())
		{
			m_WidgetContainer->SetFolderVisibility(FolderId, ESlateVisibility::Visible);
			for (auto& Widget : m_WidgetContainer->GetFolder(FolderId).GetWidgets())
			{
				auto* StateWidget {dynamic_cast<CStateWidget*>(Widget)};
				if (StateWidget != nullptr)
				{
					StateWidget->OnStart();
				}
			}
		}
	}
}

void AUIControllerBase::OnExit_Implementation()
{
	if (m_UserWidget)
	{
		for (auto& FolderId : m_WidgetContainer->GetAllActiveFolderIds())
		{
			m_WidgetContainer->SetFolderVisibility(FolderId, ESlateVisibility::Hidden);
			for (auto& Widget : m_WidgetContainer->GetFolder(FolderId).GetWidgets())
			{
				auto* StateWidget {dynamic_cast<CStateWidget*>(Widget)};
				if (StateWidget != nullptr)
				{
					StateWidget->OnExit();
				}
			}
		}
		
		m_UserWidget->RemoveFromParent();
		//m_UserWidget->RemoveFromViewport();  // ToDo Capy: Check if necessary
		m_UserWidget = nullptr;
		m_WidgetContainer->Reset();
	}
}

bool AUIControllerBase::HasWidget(const FString& a_WidgetId, const FString& a_FolderId)
{
	bool HasWidget {false};
	
	if (a_FolderId == "")
	{
		HasWidget = (m_WidgetContainer->SearchWidget(a_WidgetId) != nullptr);
	}
	else
	{
		HasWidget = m_WidgetContainer->HasWidgetInFolder(a_FolderId, a_WidgetId);
	}
	
	return HasWidget;
}

void AUIControllerBase::SetFolderActive(const FString& a_FolderId, bool a_Active)
{
	m_WidgetContainer->SetFolderActive(a_FolderId, a_Active);
	m_WidgetContainer->SetFolderVisibility(a_FolderId, a_Active ? ESlateVisibility::Visible : ESlateVisibility::Hidden);
	
	for (auto& [FolderId, WidgetFolder] : m_WidgetContainer->GetAllWidgetFolders())
	{
		for (auto& Widget : WidgetFolder.GetWidgets())
		{
			auto* StateWidget {dynamic_cast<CStateWidget*>(Widget)};
			if (StateWidget != nullptr)
			{
				a_Active ? StateWidget->OnStart() : StateWidget->OnExit();
			}
		}
	}
}

void AUIControllerBase::SetFolderVisibility(const FString& a_FolderId, ESlateVisibility a_VisibilityMode)
{
	m_WidgetContainer->SetFolderVisibility(a_FolderId, a_VisibilityMode);
}

UWidgetFolderContainer* const AUIControllerBase::GetWidgetContainer()
{
	return m_WidgetContainer;
}
