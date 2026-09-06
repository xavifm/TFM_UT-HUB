#pragma once

#include <PartyJungle/Controllers/ControllerBase.h>

#include <Blueprint/UserWidget.h>
#include <Blueprint/WidgetTree.h>
#include <Blueprint/WidgetBlueprintGeneratedClass.h>

#include "UIControllerBase.generated.h"

class UWidget;
class UWidgetFolderContainer;


DECLARE_DYNAMIC_MULTICAST_DELEGATE(
	FEvent_UpdateWidgets // Name of the structure that will be generated
);


/**
 * Base UI Controller class.
 */
UCLASS()
class AUIControllerBase : public AControllerBase
{
	GENERATED_BODY()
	
public:
	/**
	 * Method called when the State and the StateManager are ready. Call instead of BeginPlay().
	 */
	virtual void OnBeginState_Implementation() override;
	
	/**
	 * Function called when the State is changed for starting the controller.
	 */
	virtual void OnStart_Implementation() override;
	
	/**
	 * Function called when the State is changed for exiting the controller.
	 */
	virtual void OnExit_Implementation() override;
	
	template <typename TWidgetType = UWidget>
	UFUNCTION(BlueprintCallable, Category = "UIController_Functions")
	TWidgetType* FindWidget(const FName& a_WidgetName);
	
	
protected:
	FEvent_UpdateWidgets m_EventBeginWidgets; //!< Event triggered when the Controller begins, used for beginning the selected widget.
	
	FEvent_UpdateWidgets m_EventStartWidgets; //!< Event triggered when the Controller starts, used for starting the selected widget.
	
	FEvent_UpdateWidgets m_EventExitWidgets; //!< Event triggered when the Controller exits, used for exiting the selected widget.
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UIController")
	TSubclassOf<UUserWidget> m_UserWidgetClass {nullptr}; //!< Type of the used UserWidget class.
	
	UPROPERTY()
	UUserWidget* m_UserWidget {nullptr}; //!< Pointer to the UIController's UserWidget.
};


template <typename TWidgetType>
TWidgetType* AUIControllerBase::FindWidget(const FName& a_WidgetName)
{
	return m_UserWidget->GetWidgetTreeOwningClass()->GetWidgetTreeArchetype()->FindWidget<TWidgetType>(a_WidgetName);
}
