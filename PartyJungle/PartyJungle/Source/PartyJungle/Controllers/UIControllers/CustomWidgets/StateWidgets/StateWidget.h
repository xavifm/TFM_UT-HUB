#pragma once

#include <Components/Widget.h>


/**
 * Event triggered when the Visibility Mode of a CStateWidget is changed.
 */
DECLARE_MULTICAST_DELEGATE_ThreeParams(
	FEvent_VisibilityChanged, // Name of the structure that will be generated
	// Parameters of the delegate (Type, Name):
	UWidget* const a_Widget, // Pointer to the changed Widget.
	ESlateVisibility a_OldVisibilityMode, // Old Visibility Mode.
	ESlateVisibility a_NewVisibilityMode // New Visibility Mode.
);


/**
 * Base class for the StateWidgets.
 */
class CStateWidget
{
public:
	/**
	 * Default constructor.
	 */
	CStateWidget() = default;

	/**
	 * Destructor.
	 */
	virtual ~CStateWidget() = default;

	/**
	 * Method called when the StateWidget is created, at the start of the UIController's state.
	 * @param a_FolderId Id of the folder containing this StatWidget.
	 * @param a_Widget Pointer to the related UWidget.
	 */
	UFUNCTION(BlueprintCallable, Category = "StateWidget_Function")
	virtual void OnBegin(const FString& a_FolderId, UWidget* a_Widget);

	/**
	 * Method called when the StateWidget is activated. If it starts activated, it's called after OnBegin(...).
	 */
	UFUNCTION(BlueprintCallable, Category = "StateWidget_Function")
	virtual void OnStart() {}

	/**
	 * Method called when the StateWidget is deactivated. When the UIController's state ends, every StateWidget is deactivated automatically.
	 */
	UFUNCTION(BlueprintCallable, Category = "StateWidget_Function")
	virtual void OnExit() {}

	/**
	 * Gets the StateWidget's Folder Id.
	 * @return Folder Id of this StateWidget.
	 */
	UFUNCTION(BlueprintCallable, Category = "StateWidget_Function")
	const FString& GetFolderId() { return m_FolderId; }
	
	/**
	 * Gets the StateWidget's Widget Id.
	 * @return Widget Id of this StateWidget.
	 */
	UFUNCTION(BlueprintCallable, Category = "StateWidget_Function")
	const FString& GetWidgetId() { return m_WidgetId; }

	/**
	 * Indicated if this StateWidget has a custom visibility workflow, independent of its folder visibility.
	 * @return True if this StateWidget has a custom visibility workflow.
	 */
	UFUNCTION(BlueprintCallable, Category = "StateWidget_Function")
	bool HasCustomVisibility() { return m_CustomVisibility; }

	/**
	 * Sets this StateWidget custom visibility workflow, independent of its folder visibility.
	 * @param a_CustomVisibility True to make the StateWidget have a custom visibility workflow.
	 */
	UFUNCTION(BlueprintCallable, Category = "StateWidget_Function")
	void SetCustomVisibility(bool a_CustomVisibility) { m_CustomVisibility = a_CustomVisibility; }

	/**
	 * Gets the 'Visibility Mode Changed' event.
	 * @return 'Visibility Mode Changed' event.
	 */
	FEvent_VisibilityChanged& GetEvent_VisibilityModeChanged() { return m_EventVisibilityChanged; }

	/**
	 * Sets the StateWidget visibility. It also broadcasts the 'Visibility Mode Changed' event.
	 * @param a_InVisibility Selected visibility mode.
	 */
	UFUNCTION(BlueprintCallable, Category = "StateWidget_Function")
	virtual void SetStateWidgetVisibility(ESlateVisibility a_InVisibility);
	
	
protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StateWidget")
	bool m_CustomVisibility {false}; //!< Indicated if the StateWidget has a custom visibility workflow, independent of its folder visibility.
	
	UPROPERTY()
	UWidget* m_Widget {nullptr}; //!< Pointer to the related UWidget.
	
	UPROPERTY()
	FEvent_VisibilityChanged m_EventVisibilityChanged; //!< Event triggered when the visibility mode is changed.
	
private:
	UPROPERTY()
	FString m_FolderId {""}; //!< Id of the folder containing this StatWidget.
	
	UPROPERTY()
	FString m_WidgetId {""}; //!< Id of the related UWidget.
};
