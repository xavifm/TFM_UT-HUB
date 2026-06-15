#pragma once

#include <PartyJungle/Controllers/ControllerBase.h>

#include <PartyJungle/Controllers/UIControllers/CustomWidgets/WidgetFolderContainer.h>

#include "UIControllerBase.generated.h"

class UWidgetFolderContainer;


/**
 * Base UI Controller class.
 */
UCLASS()
class AUIControllerBase : public AControllerBase
{
	GENERATED_BODY()
	
public:
	/**
	 * Function called when the State is changed for starting the controller.
	 */
	virtual void OnStart_Implementation() override;
	
	/**
	 * Function called when the State is changed for exiting the controller.
	 */
	virtual void OnExit_Implementation() override;
	
	/**
	 * Gets the wanted Widget from the WidgetContainer.
	 * @tparam TWidgetType Type of the returned Widget.
	 * @param a_WidgetId Id of the wanted Widget.
	 * @param a_FolderId Id of the Folder that contains the wanted Widget. If empty, it looks in all folders.
	 * @return Pointer to the wanted Widget.
	 */
	template <typename TWidgetType = UWidget>
	UFUNCTION(BlueprintCallable, Category = "UIController_Functions")
	TWidgetType* const GetWidget(const FString& a_WidgetId, const FString& a_FolderId = "");

	/**
	 * Gets if the wanted Widget exists in the WidgetContainer.
	 * @param a_WidgetId Id of the wanted Widget.
	 * @param a_FolderId Id of the Folder that contains the wanted Widget. If empty, it looks in all folders.
	 * @return True if the wanted Widget exists in the WidgetContainer.
	 */
	UFUNCTION(BlueprintCallable, Category = "UIController_Functions")
	bool HasWidget(const FString& a_WidgetId, const FString& a_FolderId = "");

	/**
	 * Sets the selected Folder from the WidgetContainer active.
	 * @param a_FolderId Id of the selected Folder.
	 * @param a_Active True to activate. False to deactivate.
	 */
	UFUNCTION(BlueprintCallable, Category = "UIController_Functions")
	void SetFolderActive(const FString& a_FolderId, bool a_Active);

	/**
	 * Sets the visibility state for the selected Folder from the WidgetContainer.
	 * @param a_FolderId Id of the selected Folder.
	 * @param a_VisibilityMode Wanted visibility state.
	 */
	UFUNCTION(BlueprintCallable, Category = "UIController_Functions")
	void SetFolderVisibility(const FString& a_FolderId, ESlateVisibility a_VisibilityMode);

	/**
	 * Gets the WidgetContainer of the UIController.
	 * @return Pointer to the WidgetContainer of the UIController.
	 */
	UFUNCTION(BlueprintCallable, Category = "UIController_Functions")
	UWidgetFolderContainer* const GetWidgetContainer();
	
	
protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UIController")
	TSubclassOf<UUserWidget> m_UserWidgetClass {nullptr}; //!< Type of the used UserWidget class.
	
	UPROPERTY()
	UUserWidget* m_UserWidget {nullptr}; //!< Pointer to the UIController's UserWidget.
	
	UPROPERTY()
	UWidgetFolderContainer* m_WidgetContainer {nullptr}; //!< Pointer to the UIController's WidgetContainer.
};


template <typename TWidgetType>
TWidgetType* const AUIControllerBase::GetWidget(const FString& a_WidgetId, const FString& a_FolderId)
{
	TWidgetType* TargetWidget {nullptr};
	
	if (a_FolderId == "")
	{
		TargetWidget = Cast<TWidgetType>(m_WidgetContainer->SearchWidget(a_WidgetId));
	}
	else
	{
		TargetWidget = Cast<TWidgetType>(m_WidgetContainer->GetWidgetInFolder(a_FolderId, a_WidgetId));
	}
	
	return TargetWidget;
}
