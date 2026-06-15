#pragma once

#include <PartyJungle/Controllers/UIControllers/CustomWidgets/WidgetFolder.h>

#include <Components/Widget.h>

#include "WidgetFolderContainer.generated.h"


/**
 * Widget that contains and manages the selected WidgetFolders.
 */
UCLASS()
class UWidgetFolderContainer : public UWidget
{
	GENERATED_BODY()
	
public:
	/**
	 * Gets if the WidgetFolderContainer contains the selected folder.
	 * @param a_FolderId Selected folder id.
	 * @return True if the WidgetFolderContainer contains the selected folder.
	 */
	UFUNCTION(BlueprintCallable, Category = "WidgetFolderContainer_Function")
	bool HasFolder(const FString& a_FolderId) const;

	/**
	 * Gets if the WidgetFolderContainer contains the indicated widget inside the selected folder.
	 * @param a_FolderId Selected folder id.
	 * @param a_WidgetId Indicated widget id.
	 * @return True if the WidgetFolderContainer contains the indicated widget inside the selected folder.
	 */
	UFUNCTION(BlueprintCallable, Category = "WidgetFolderContainer_Function")
	bool HasWidgetInFolder(const FString& a_FolderId, const FString& a_WidgetId);

	/**
	 * Gets all of the contained folder ids.
	 * @return Array with all the contained folder ids.
	 */
	UFUNCTION(BlueprintCallable, Category = "WidgetFolderContainer_Function")
	TArray<FString> GetAllFolderIds();

	/**
	 * Gets all of the contained and active folder ids.
	 * @return Array with all the contained and active folder ids.
	 */
	UFUNCTION(BlueprintCallable, Category = "WidgetFolderContainer_Function")
	TArray<FString> GetAllActiveFolderIds();

	/**
	 * Gets all of the contained WidgetFolders.
	 * @return All the contained WidgetFolders.
	 */
	UFUNCTION(BlueprintCallable, Category = "WidgetFolderContainer_Function")
	const TMap<FString, FWidgetFolder>& GetAllWidgetFolders();

	/**
	 * Gets the selected WidgetFolder.
	 * @param a_FolderId Id of the selected WidgetFolder.
	 * @return Reference to the selected WidgetFolder.
	 */
	UFUNCTION(BlueprintCallable, Category = "WidgetFolderContainer_Function")
	const FWidgetFolder& GetFolder(const FString& a_FolderId);

	/**
	 * Gets the indicated widget inside the selected folder.
	 * @param a_FolderId Id of the selected folder.
	 * @param a_WidgetId Id of the indicated widget.
	 * @return Pointer to the indicated widget from the selected folder.
	 */
	UFUNCTION(BlueprintCallable, Category = "WidgetFolderContainer_Function")
	UWidget* const GetWidgetInFolder(const FString& a_FolderId, const FString& a_WidgetId);

	/**
	 * Search the id of the folder that contains the indicated widget.
	 * @param a_WidgetId Id of the indicated widget.
	 * @return Id of the folder that contains the indicated widget.
	 */
	UFUNCTION(BlueprintCallable, Category = "WidgetFolderContainer_Function")
	FString SearchWidgetFolder(const FString& a_WidgetId);

	/**
	 * Search a widget in all of the WidgetFolderContainer's folders.
	 * @param a_WidgetId Id of the searched widget.
	 * @return Pointer to the searched widget.
	 */
	UFUNCTION(BlueprintCallable, Category = "WidgetFolderContainer_Function")
	UWidget* const SearchWidget(const FString& a_WidgetId);

	/**
	 * Sets the indicated visibility mode for the selected folder.
	 * @param a_FolderId Id of the selected folder.
	 * @param a_VisibilityMode Indicated visibility mode.
	 */
	UFUNCTION(BlueprintCallable, Category = "WidgetFolderContainer_Function")
	void SetFolderVisibility(const FString& a_FolderId, ESlateVisibility a_VisibilityMode);

	/**
	 * Sets the indicated visibility mode for the selected folder widgets individually. When indicated, it has into account if they have custom visibility modes.
	 * @param a_FolderId Id of the selected folder.
	 * @param a_VisibilityMode Indicated visibility mode.
	 * @param a_ForceVisibilityMode True to force the visibility even if a widget has a custom visibility mode. False to let the widgets with a custom visibility mode to manage it.
	 */
	UFUNCTION(BlueprintCallable, Category = "WidgetFolderContainer_Function")
	void SetStateWidgetsVisibility(const FString& a_FolderId, ESlateVisibility a_VisibilityMode, bool a_ForceVisibilityMode);

	/**
	 * Sets the indicated widget visibility mode.
	 * @param a_FolderId Id of the selected folder.
	 * @param a_WidgetId Id of the indicated widget.
	 * @param a_VisibilityMode Indicated visibility mode.
	 * @param a_ForceVisibilityMode True to force the visibility even if a widget has a custom visibility mode. False to let the widgets with a custom visibility mode to manage it.
	 */
	UFUNCTION(BlueprintCallable, Category = "WidgetFolderContainer_Function")
	void SetStateWidgetVisibility(const FString& a_FolderId, const FString& a_WidgetId, ESlateVisibility a_VisibilityMode, bool a_ForceVisibilityMode);

	/**
	 * Resets the contained widget folders.
	 */
	UFUNCTION(BlueprintCallable, Category = "WidgetFolderContainer_Function")
	void Reset();

	/**
	 * Gets if the selected folder is active.
	 * @param a_FolderId Id of the selected folder.
	 * @return True if the selected folder is active.
	 */
	UFUNCTION(BlueprintCallable, Category = "WidgetFolderContainer_Function")
	bool IsFolderActive(const FString& a_FolderId);

	/**
	 * Sets the selected folder is active.
	 * @param a_FolderId Id of the selected folder.
	 * @param a_Active True to activate the folder. False to deactivate it.
	 */
	UFUNCTION(BlueprintCallable, Category = "WidgetFolderContainer_Function")
	void SetFolderActive(const FString& a_FolderId, bool a_Active);
	
	
protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WidgetFolderContainer")
	TMap<FString, FWidgetFolder> m_WidgetFolders; //!< Contained widget folders.
	
};
