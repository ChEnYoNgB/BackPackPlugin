// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemSlot.h"
#include "ItemIcon.h"
#include "BasicItem.h"
#include "ItemDragDrop.h"
#include "BackPackWidget.h"
#include "BackPackComponent.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
void  UItemSlot::NativePreConstruct()
{
	Super::NativePreConstruct();
	if (Item)
	{
		if (Item->GetItemName() == FName(TEXT("EmptyItem")))
		{

			SetItemNumber(0);
		}
		else
		{
			SetItemNumber(Item->GetItemNumber());
		}
	}
	else
	{
		SetItemNumber(0);
	}
	if (BackPackComponentClass && GetOwningPlayerPawn())
	{
		UActorComponent* ActorComponent = GetOwningPlayerPawn()->GetComponentByClass(BackPackComponentClass);
		BackPackComponent = Cast<UBackPackComponent>(ActorComponent);
	}
}

bool UItemSlot::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	Super::NativeOnDrop(InGeometry, InDragDropEvent, InOperation);
	UItemSlot* ItemSlot = Cast<UItemSlot>(InOperation->Payload);
	if (ItemSlot && BackPackComponent)
	{
		BackPackComponent->SwapItem(ItemSlot->GetIndex(), Index);
	}
	if (BackPackWidget)
	{
		BackPackWidget->UpdateList();
	}

	return true;
}
void UItemSlot::NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation)
{
	Super::NativeOnDragDetected(InGeometry, InMouseEvent, OutOperation);
	if (IconDragDropClass && IconClass && Item)
	{
		UDragDropOperation* NewDrag = UWidgetBlueprintLibrary::CreateDragDropOperation(IconDragDropClass);
		if (NewDrag)
		{
			UItemDragDrop* SlashIconDragDrop = Cast<UItemDragDrop>(NewDrag);
			UItemIcon* SlashIcon = CreateWidget<UItemIcon>(GetOwningPlayer(), IconClass);
			if (SlashIconDragDrop && SlashIcon)
			{
				SlashIconDragDrop->Payload = this;
				SlashIconDragDrop->DefaultDragVisual = SlashIcon;
				SlashIcon->SetTexture(Item->GetItemTexture());
				OutOperation = SlashIconDragDrop;
			}
		}
	}
}
FReply UItemSlot::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	FReply Reply = Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);
	if (Item && Item->GetItemName() != FName(TEXT("EmptyItem")))
	{
		FEventReply EventReply;
		EventReply = UWidgetBlueprintLibrary::DetectDragIfPressed(InMouseEvent, this, EKeys::LeftMouseButton);
		if (BackPackComponent)
		{

			if (BackPackComponent->GetIsThrowAll())
			{
				Throw = Item->GetItemNumber();
			}
			else
			{
				Throw = 1;
			}
		}
		return EventReply.NativeReply;
	}
	return 	Reply;
}
void UItemSlot::SetItem(ABasicItem* NewItem)
{
	Item = NewItem;
}
void UItemSlot::SetIndex(int32 Number)
{
	Index = Number;
}
void UItemSlot::SetItemNumber(int32 Number)
{
	FText NumberText = FText::FromString(FString::FromInt(Number));
	ItemNumber->SetText(NumberText);
	if (Number <= 0)
	{
		ItemNumber->SetVisibility(ESlateVisibility::Hidden);
	}
	else
	{
		ItemNumber->SetVisibility(ESlateVisibility::Visible);
	}
}
void UItemSlot::SetItemTexture(UTexture2D* Texture)
{
	ItemTexture->SetBrushFromTexture(Texture);
}