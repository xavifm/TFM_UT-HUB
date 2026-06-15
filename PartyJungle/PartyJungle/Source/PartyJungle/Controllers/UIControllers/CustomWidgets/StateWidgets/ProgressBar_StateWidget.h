#pragma once

#include "StateWidget.h"
#include "Components/ProgressBar.h"

#include "ProgressBar_StateWidget.generated.h"


/**
 * Event triggered when the ProgressBar percentage is changed.
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(
	FEvent_ProgressBarPercentChanged, // Name of the structure that will be generated
	// Parameters of the delegate (Type, Name):
	const FString&, a_ProgressBarId, // Id of the affected ProgressBar.
	float, a_OldProgressBarPercent, // Old ProgressBar Percentage.
	float, a_NewProgressBarPercent // New ProgressBar Percentage.
);


/**
 * StateWidget for the UProgressBar widgets.
 */
UCLASS(BlueprintType)
class UProgressBar_StateWidget : public UProgressBar, public CStateWidget
{
	GENERATED_BODY()
	
public:
	/**
	 * Method called when the StateWidget is created, at the start of the UIController's state.
	 * @param a_FolderId Id of the folder containing this StatWidget.
	 * @param a_Widget Pointer to the related UWidget.
	 */
	virtual void OnBegin(const FString& a_FolderId, UWidget* a_Widget) override;

	/**
	 * Sets the percentage of the progress bar.
	 * @param a_Percent Selected percentage for the progress bar.
	 */
	void SetPercent(float a_Percent);

	/**
	 * Sets the visibility of the progress bar.
	 * @param a_InVisibility Selected visibility mode for the progress bar.
	 */
	void SetVisibility(ESlateVisibility a_InVisibility) override;
	
	/**
	 * Gets the 'ProgressBar Percent Changed' Event.
	 * @return Pointer to the 'ProgressBar Percent Changed' Event.
	 */
	FEvent_ProgressBarPercentChanged* const GetEvent_ProgressBarPercentChanged() { return &m_EventProgressBarPercentChanged; }

	
protected:
	FEvent_ProgressBarPercentChanged m_EventProgressBarPercentChanged; //!< Event triggered when the percentage of the ProgressBar is changed.
	
};
