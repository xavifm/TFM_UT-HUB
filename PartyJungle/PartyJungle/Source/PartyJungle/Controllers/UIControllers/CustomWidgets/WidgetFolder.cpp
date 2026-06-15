#include "WidgetFolder.h"


void FWidgetFolder::SetActive(bool a_IsActive)
{
	if (m_IsActive != a_IsActive)
	{
		m_IsActive = a_IsActive;
	}
}

void FWidgetFolder::SetVisibility(ESlateVisibility a_VisibilityMode)
{
	m_Overlay->SetVisibility(a_VisibilityMode);
}
