#include "StateWidget.h"


void CStateWidget::OnBegin(const FString& a_FolderId, UWidget* a_Widget)
{
	m_FolderId = a_FolderId;
	m_WidgetId = a_Widget->GetName();
	m_Widget = a_Widget;
}

void CStateWidget::SetStateWidgetVisibility(ESlateVisibility a_InVisibility)
{
	ESlateVisibility OldVisibilityMode {m_Widget->GetVisibility()};
	m_Widget->SetVisibility(a_InVisibility);
	
	m_EventVisibilityChanged.Broadcast(m_Widget, OldVisibilityMode, m_Widget->GetVisibility());
}
