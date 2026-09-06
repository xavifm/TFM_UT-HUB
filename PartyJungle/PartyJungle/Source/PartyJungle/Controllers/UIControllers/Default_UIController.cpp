#include "Default_UIController.h"

#include "StateWidgets/ProgressBar_StateWidget.h"


void ADefault_UIController::OnStart_Implementation()
{
	Super::OnStart_Implementation();
	
	auto* ProgressBar {FindWidget<UProgressBar_StateWidget>("ProgressBar1")};
	if (ProgressBar)
	{
		m_EventBeginWidgets.AddUniqueDynamic(ProgressBar, &UProgressBar_StateWidget::UProgressBar_StateWidget::OnBegin);
		m_EventBeginWidgets.AddUniqueDynamic(ProgressBar, &UProgressBar_StateWidget::UProgressBar_StateWidget::OnStart);
		m_EventBeginWidgets.AddUniqueDynamic(ProgressBar, &UProgressBar_StateWidget::UProgressBar_StateWidget::OnExit);
	}
}

void ADefault_UIController::OnExit_Implementation()
{
	auto* ProgressBar {FindWidget<UProgressBar_StateWidget>("ProgressBar1")};
	if (ProgressBar)
	{
		m_EventBeginWidgets.RemoveDynamic(ProgressBar, &UProgressBar_StateWidget::OnBegin);
		m_EventBeginWidgets.RemoveDynamic(ProgressBar, &UProgressBar_StateWidget::OnStart);
		m_EventBeginWidgets.RemoveDynamic(ProgressBar, &UProgressBar_StateWidget::OnExit);
	}
	
	Super::OnExit_Implementation();
}
