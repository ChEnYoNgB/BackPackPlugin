// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BackPackWidget.generated.h"

/**
 *
 */
UCLASS()
class KNAPSACKPLUGIN_API UBackPackWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual void NativeConstruct()override;
	virtual bool NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)override;
	void UpdateList();
protected:
	UPROPERTY(EditAnywhere, Category = BasicSetting)
		TSubclassOf<class UBackPackComponent> BackPackComponentClass;
	UPROPERTY(EditAnywhere, Category = BasicSetting)
		TSubclassOf<class UItemSlot> ItemSlotClass;
private:
	UPROPERTY(meta = (BindWidget))
		class UWrapBox* ItemList;
	UPROPERTY(VisibleAnywhere, Category = BackPackComponent)
		class UBackPackComponent* BackPackComponent;
};
