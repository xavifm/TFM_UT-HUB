#include "ProgressBar_StateWidget.h"

#include "Components/ProgressBar.h"


void UProgressBar_StateWidget::OnBegin()
{
	SetPercent(GetPercent());
}

void UProgressBar_StateWidget::OnStart()
{
}

void UProgressBar_StateWidget::OnExit()
{
}

void UProgressBar_StateWidget::SetPercent(float a_Percent)
{
	float OldPercent {GetPercent()};
	auto* ProgressBar {Cast<UProgressBar>(this)};
	ProgressBar->SetPercent(a_Percent);
	
	m_EventProgressBarPercentChanged.Broadcast(GetName(), OldPercent, GetPercent());
}
