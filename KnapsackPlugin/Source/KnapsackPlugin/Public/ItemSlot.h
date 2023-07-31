// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ItemSlot.generated.h"

/**
 *
 */
UCLASS()
class KNAPSACKPLUGIN_API UItemSlot : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual void NativePreConstruct()override;
	virtual bool NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)override;
	virtual void NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation)override;
	virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)override;

	void SetItem(class ABasicItem* NewItem);
	void SetIndex(int32 Number);
	void SetItemNumber(int32 Number);
	void SetItemTexture(class UTexture2D* Texture);

	FORCEINLINE ABasicItem* GetItem()const { return Item; }
	FORCEINLINE int32 GetIndex()const { return Index; }
	FORCEINLINE int32 GetThrowNumber()const { return Throw; }
	FORCEINLINE class UBackPackWidget* GetBackPackWidget()const { return BackPackWidget; }
	FORCEINLINE void SetBackPackWidget(UBackPackWidget* Widget) { BackPackWidget = Widget; }
private:
	UPROPERTY()
		int32 Index;
	UPROPERTY()
		int32 Throw = 0;
	UPROPERTY()
		class ABasicItem* Item;
	UPROPERTY(meta = (BindWidget))
		class UImage* ItemTexture;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* ItemNumber;
	UPROPERTY()
		class UBackPackWidget* BackPackWidget;
	UPROPERTY()
		class UBackPackComponent* BackPackComponent;
	UPROPERTY(EditAnywhere, Category = BasicSetting)
		TSubclassOf<class  UItemIcon> IconClass;
	UPROPERTY(EditAnywhere, Category = BasicSetting)
		TSubclassOf<class UItemDragDrop> IconDragDropClass;
	UPROPERTY(EditAnywhere, Category = BasicSetting)
		TSubclassOf<class  UBackPackComponent> BackPackComponentClass;


};
