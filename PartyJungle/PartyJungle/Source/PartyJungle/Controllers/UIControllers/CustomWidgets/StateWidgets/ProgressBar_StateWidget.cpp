#include "ProgressBar_StateWidget.h"

#include "Components/ProgressBar.h"


void UProgressBar_StateWidget::OnBegin(const FString& a_FolderId, UWidget* a_Widget)
{
	CStateWidget::OnBegin(a_FolderId, a_Widget);
	
	SetPercent(GetPercent());
}

void UProgressBar_StateWidget::SetPercent(float a_Percent)
{
	auto* ProgressBar {Cast<UProgressBar>(m_Widget)};
	float OldPercent {ProgressBar->GetPercent()};
	ProgressBar->SetPercent(a_Percent);
	
	m_EventProgressBarPercentChanged.Broadcast(GetWidgetId(), OldPercent, ProgressBar->GetPercent());
}

void UProgressBar_StateWidget::SetVisibility(ESlateVisibility a_InVisibility)
{
	ESlateVisibility OldVisibilityMode {m_Widget->GetVisibility()};
	Super::SetVisibility(a_InVisibility);
	
	m_EventVisibilityChanged.Broadcast(m_Widget, OldVisibilityMode, m_Widget->GetVisibility());
}
