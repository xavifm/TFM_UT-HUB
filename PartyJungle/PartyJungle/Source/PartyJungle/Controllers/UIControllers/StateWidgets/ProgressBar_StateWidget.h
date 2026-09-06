#pragma once

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
class UProgressBar_StateWidget : public UProgressBar
{
	GENERATED_BODY()
	
public:
	/**
	 * Method called when the StateWidget is created, at the begin of the UIController's state.
	 */
	UFUNCTION(BlueprintCallable, Category = "ProgressBar_StateWidget")
	virtual void OnBegin();
	
	/**
	 * Method called when the StateWidget is started, at the start of the UIController's state.
	 */
	UFUNCTION(BlueprintCallable, Category = "ProgressBar_StateWidget")
	virtual void OnStart();
	
	/**
	 * Method called when the StateWidget is exited, at the exit of the UIController's state.
	 */
	UFUNCTION(BlueprintCallable, Category = "ProgressBar_StateWidget")
	virtual void OnExit();

	/**
	 * Sets the percentage of the progress bar.
	 * @param a_Percent Selected percentage for the progress bar.
	 */
	void SetPercent(float a_Percent);
	
	/**
	 * Gets the 'ProgressBar Percent Changed' Event.
	 * @return Pointer to the 'ProgressBar Percent Changed' Event.
	 */
	FEvent_ProgressBarPercentChanged* const GetEvent_ProgressBarPercentChanged() { return &m_EventProgressBarPercentChanged; }

	
protected:
	FEvent_ProgressBarPercentChanged m_EventProgressBarPercentChanged; //!< Event triggered when the percentage of the ProgressBar is changed.
	
};
