#include "UIControllerBase.h"


void AUIControllerBase::OnBeginState_Implementation()
{
	m_EventBeginWidgets.Broadcast();
}

void AUIControllerBase::OnStart_Implementation()
{
	Super::OnStart_Implementation();
	
	if (m_UserWidgetClass)
	{
		m_UserWidget = CreateWidget<UUserWidget>(GetWorld(), m_UserWidgetClass);
		m_UserWidget->AddToViewport();
		
		m_EventStartWidgets.Broadcast();
	}
}

void AUIControllerBase::OnExit_Implementation()
{
	if (m_UserWidget)
	{
		m_EventExitWidgets.Broadcast();
		
		m_UserWidget->RemoveFromParent();
		m_UserWidget = nullptr;
	}
}
