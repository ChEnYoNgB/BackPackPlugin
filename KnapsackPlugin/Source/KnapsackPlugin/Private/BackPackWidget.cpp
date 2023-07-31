// Fill out your copyright notice in the Description page of Project Settings.


#include "BackPackWidget.h"
#include "ItemSlot.h"
#include "BasicItem.h"
#include "ItemDragDrop.h"
#include "BackPackComponent.h"
#include "Components/WrapBox.h"
#include "Components/WrapBoxSlot.h"

void UBackPackWidget::NativeConstruct()
{
	Super::NativeConstruct();
	if (BackPackComponentClass && GetOwningPlayerPawn())
	{
		UActorComponent* ActorComponent = GetOwningPlayerPawn()->GetComponentByClass(BackPackComponentClass);
		BackPackComponent = Cast<UBackPackComponent>(ActorComponent);
	}
	UpdateList();
}
bool UBackPackWidget::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	Super::NativeOnDrop(InGeometry, InDragDropEvent, InOperation);
	if (BackPackComponent)
	{
		UItemSlot* ItemSlot = Cast<UItemSlot>(InOperation->Payload);
		if (ItemSlot)
		{
			const int32 Index = ItemSlot->GetIndex();
			BackPackComponent->RemoveItem(Index, ItemSlot->GetThrowNumber());
			UpdateList();
		}
	}
	return true;
}
void UBackPackWidget::UpdateList()
{
	if (ItemList && BackPackComponent && ItemSlotClass)
	{
		ItemList->ClearChildren();
		BackPackComponent->SortItem();
		TArray<ABasicItem*> ItemArray = BackPackComponent->GetItemArray();
		int32 Index = 0;
		for (ABasicItem* Item : ItemArray)
		{
			UItemSlot* SlashItemSlot = CreateWidget<UItemSlot>(GetOwningPlayer(), ItemSlotClass);
			if (SlashItemSlot)
			{
				SlashItemSlot->SetBackPackWidget(this);
				SlashItemSlot->SetItem(Item);
				SlashItemSlot->SetItemTexture(Item->GetItemTexture());
				SlashItemSlot->SetIndex(Index++);
				SlashItemSlot->SetItemNumber(Item->GetItemNumber());
				ItemList->AddChild(SlashItemSlot);
			}
		}
	}
}