#pragma once

#include <Components/Overlay.h>

#include "WidgetFolder.generated.h"

class UOverlay;


/**
 * Struct with the data of a StateWidget's Folder.
 */
USTRUCT(BlueprintType)
struct FWidgetFolder
{
	GENERATED_BODY()
	
public:
	/**
	 * Default constructor.
	 */
	FWidgetFolder() = default;

	/**
	 * Parametized constructor.
	 * @param a_Overlay Widget's folder related overlay.
	 */
	FWidgetFolder(UOverlay* const a_Overlay) : m_Overlay(a_Overlay) {}

	/**
	 * Destructor.
	 */
	~FWidgetFolder() = default;

	/**
	 * Gets if the WidgetFolder is active.
	 * @return True if the WidgetFolder is active.
	 */
	bool IsActive() const { return m_IsActive; }

	/**
	 * Sets the WidgetFolder is active.
	 * @param a_IsActive True to activate. False to deactivate.
	 */
	void SetActive(bool a_IsActive);

	/**
	 * Gets the WidgetFolder visibility mode.
	 * @return WidgetFolder visibility mode.
	 */
	ESlateVisibility GetVisibility() const { return m_Overlay->GetVisibility(); };

	/**
	 * Sets the WidgetFolder visibility mode.
	 * @param a_VisibilityMode Selected WidgetFolder visibility mode.
	 */
	void SetVisibility(ESlateVisibility a_VisibilityMode);

	/**
	 * Gets all of the WidgetFolder's children widgets.
	 * @return WidgetFolder's contained widgets.
	 */
	const TArray<UWidget*>& GetWidgets() const { return m_Overlay->GetAllChildren(); }
	
	
protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WidgetFolderContainer")
	bool m_IsActive {false}; //!< Indicates if the WidgetFolder is active.
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WidgetFolderContainer")
	UOverlay* m_Overlay {nullptr}; //!< Pointer to the related overlay.
	
};
