#include "WidgetFolderContainer.h"

#include <PartyJungle/Controllers/UIControllers/CustomWidgets/StateWidgets/StateWidget.h>


bool UWidgetFolderContainer::HasFolder(const FString& a_FolderId) const
{
	return m_WidgetFolders.Contains(a_FolderId);
}

bool UWidgetFolderContainer::HasWidgetInFolder(const FString& a_FolderId, const FString& a_WidgetId)
{
	return GetWidgetInFolder(a_FolderId, a_WidgetId) != nullptr;
}

TArray<FString> UWidgetFolderContainer::GetAllFolderIds()
{
	TArray<FString> AllFolders;
	AllFolders.Reserve(m_WidgetFolders.Num());
	
	for (auto& [FolderId, WidgetsFolder] : m_WidgetFolders)
	{
		AllFolders.Add(FolderId);
	}
	
	return AllFolders;
}

TArray<FString> UWidgetFolderContainer::GetAllActiveFolderIds()
{
	TArray<FString> AllActiveFolders;
	AllActiveFolders.Reserve(m_WidgetFolders.Num());
	
	for (auto& [FolderId, WidgetsFolder] : m_WidgetFolders)
	{
		if (WidgetsFolder.IsActive())
		{
			AllActiveFolders.Add(FolderId);
		}
	}
	
	return AllActiveFolders;
}

const TMap<FString, FWidgetFolder>& UWidgetFolderContainer::GetAllWidgetFolders()
{
	return m_WidgetFolders;
}

const FWidgetFolder& UWidgetFolderContainer::GetFolder(const FString& a_FolderId)
{
	return m_WidgetFolders[a_FolderId];
}

UWidget* const UWidgetFolderContainer::GetWidgetInFolder(const FString& a_FolderId, const FString& a_WidgetId)
{
	UWidget* TargetWidget {nullptr};
	
	if (HasFolder(a_FolderId))
	{
		auto* TargetWidgetIt {m_WidgetFolders[a_FolderId].GetWidgets().FindByPredicate([&a_WidgetId](UWidget* a_CurentWidget) 
			{ return a_CurentWidget->GetName() == a_WidgetId; })};
		if (TargetWidgetIt != nullptr)
		{
			TargetWidget = *TargetWidgetIt;
		}
	}
	
	return TargetWidget;
}

FString UWidgetFolderContainer::SearchWidgetFolder(const FString& a_WidgetId)
{
	FString TargetFolder {""};
	
	for (auto& [FolderId, WidgetsFolder] : m_WidgetFolders)
	{
		if (HasWidgetInFolder(FolderId, a_WidgetId))
		{
			TargetFolder = FolderId;
			break;
		}
	}
	
	return TargetFolder;
}

UWidget* const UWidgetFolderContainer::SearchWidget(const FString& a_WidgetId)
{
	UWidget* TargetWidget {nullptr};
	
	for (auto& [FolderId, WidgetsFolder] : m_WidgetFolders)
	{
		auto* Widget {GetWidgetInFolder(FolderId, a_WidgetId)};
		if (Widget != nullptr)
		{
			TargetWidget = Widget;
			break;
		}
	}
	
	return TargetWidget;
}

void UWidgetFolderContainer::SetFolderVisibility(const FString& a_FolderId, ESlateVisibility a_VisibilityMode)
{
	if (HasFolder(a_FolderId))
	{
		m_WidgetFolders[a_FolderId].SetVisibility(a_VisibilityMode);
	}
}

void UWidgetFolderContainer::SetStateWidgetsVisibility(const FString& a_FolderId, ESlateVisibility a_VisibilityMode, bool a_ForceVisibilityMode)
{
	if (HasFolder(a_FolderId))
	{
		for (auto& Widget : m_WidgetFolders[a_FolderId].GetWidgets())
		{
			auto* StateWidget {dynamic_cast<CStateWidget*>(Widget)};
			if (StateWidget != nullptr && (a_ForceVisibilityMode || !StateWidget->HasCustomVisibility()))
			{
				StateWidget->SetStateWidgetVisibility(a_VisibilityMode);
			}
		}
	}
}

void UWidgetFolderContainer::SetStateWidgetVisibility(const FString& a_FolderId, const FString& a_WidgetId, ESlateVisibility a_VisibilityMode, bool a_ForceVisibilityMode)
{
	if (HasWidgetInFolder(a_FolderId, a_WidgetId))
	{
		auto* StateWidget {dynamic_cast<CStateWidget*>(GetWidgetInFolder(a_FolderId, a_WidgetId))};
		if (StateWidget != nullptr && (a_ForceVisibilityMode || !StateWidget->HasCustomVisibility()))
		{
			StateWidget->SetStateWidgetVisibility(a_VisibilityMode);
		}
	}
}

void UWidgetFolderContainer::Reset()
{
	if (!m_WidgetFolders.IsEmpty())
	{
		m_WidgetFolders.Empty();
	}
}

bool UWidgetFolderContainer::IsFolderActive(const FString& a_FolderId)
{
	return m_WidgetFolders[a_FolderId].IsActive();
}

void UWidgetFolderContainer::SetFolderActive(const FString& a_FolderId, bool a_Active)
{
	m_WidgetFolders[a_FolderId].SetActive(a_Active);
}
