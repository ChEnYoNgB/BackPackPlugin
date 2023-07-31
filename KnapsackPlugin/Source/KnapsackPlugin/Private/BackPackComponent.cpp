


#include "BackPackComponent.h"
#include "GameFramework/Controller.h"
#include "Math/UnrealMathUtility.h"
#include "Math/Vector.h"
#include "BasicItem.h"
#include "Engine/World.h"

UBackPackComponent::UBackPackComponent()
{

	PrimaryComponentTick.bCanEverTick = false;

	EmetyItem = CreateDefaultSubobject<ABasicItem>(TEXT("Empty"));
	EmetyItem->SetItemName(FName(TEXT("EmptyItem")));
}
void UBackPackComponent::BeginPlay()
{
	Super::BeginPlay();

	if (GetOwner())
	{
		PlayerCharacter = Cast<APawn>(GetOwner());
	}
	if (PlayerCharacter)
	{
		PlayerController = PlayerCharacter->GetController();
	}

}
void UBackPackComponent::SortItem()
{
	for (ABasicItem* Item : ItemArray)
	{
		if (Item->GetItemName() != FName(TEXT("EmptyItem")))continue;
		int32 Index = ItemArray.Find(Item);
		int32 Result = -1;
		while (Index != -1 && Index < ItemArray.Num())
		{
			if (ItemArray[Index]->GetItemName() == FName(TEXT("EmptyItem")))
			{
				++Index;
				continue;
			}
			Result = Index;
			break;
		}
		if (Result != -1 && ItemArray.Find(Item) != -1)
		{
			SwapItem(ItemArray.Find(Item), Result);
		}
		else
		{
			break;
		}
	}
}
void UBackPackComponent::InitKnapsack()
{
	if (EmptyTexture)
	{
		EmetyItem->SetItemTexture(EmptyTexture);
	}
	for (int32 i = 0; i < MaxSize; ++i)
	{
		ItemArray.Add(EmetyItem);
	}
}
void UBackPackComponent::ThrowItem(ABasicItem* Item)
{
	UWorld* World = GetWorld();
	if (World && Item)
	{
		const float Length = FMath::RandRange(-10.f, 15.f);
		FVector SpawnLocation = PlayerCharacter->GetActorLocation() + PlayerCharacter->GetActorForwardVector() * 100.f + Length;
		FRotator SpawnRotation = PlayerCharacter->GetActorRotation();
		/*
		 *	Add Your Function To Handle Special Item
		 *  For Example:
				AWeapon* Weapon = Cast<AWeapon>(Item);
				if (Weapon)
				{
					if (Weapon->CanThrow())
					{
						UE_LOG(LogTemp, Warning, TEXT("Throw a weapon"));
						Weapon->DetachToSocket();
						Weapon->SetActorLocation(SpawnLocation);
						Weapon->SetActorRotation(SpawnRotation);
						Weapon->SetItemHovering();
					}
					else
					{
						UE_LOG(LogTemp, Warning, TEXT("Weapon is Equipping, Can't throw!"));
					}
					return;
				}
		*/
		ABasicItem* SpawnItem = World->SpawnActor<ABasicItem>(Item->GetClass(), SpawnLocation, SpawnRotation);
		if (SpawnItem)
		{
			SpawnItem = DuplicateObject<ABasicItem>(Item, SpawnItem);
			SpawnItem->SetItemNumber(0);
		}
	}
}
void UBackPackComponent::AddItem(ABasicItem* NewItem)
{
	if (NewItem == nullptr || bIsFull)return;
	if (NewItem->GetbIsStack())
	{
		int32 FindResult = -1;
		FName ItemName = NewItem->GetItemName();
		ABasicItem** FindArray = ItemArray.FindByPredicate([ItemName](const ABasicItem* Element) { return Element->GetItemName() == ItemName; });
		if (FindArray == nullptr)
		{
			int32 EmptyIndex = ItemArray.Find(EmetyItem);
			if (EmptyIndex == -1)
			{
				bIsFull = true;
				/*	Add Your Function To Handle BackPack Full	*/
				UE_LOG(LogTemp, Warning, TEXT("StackFull"));
			}
			else
			{
				bIsFull = false;
				ItemArray[EmptyIndex] = NewItem;
				ItemArray[EmptyIndex]->SetItemNumber(ItemArray[EmptyIndex]->GetItemNumber() + 1);
			}
		}
		else
		{
			FindArray[0]->SetItemNumber(FindArray[0]->GetItemNumber() + 1);
		}
	}
	else
	{
		int32 EmptyIndex = ItemArray.Find(EmetyItem);
		if (EmptyIndex == -1)
		{
			bIsFull = true;
			/*	Add Your Function To Handle BackPack Full	*/
			UE_LOG(LogTemp, Warning, TEXT("Full"));
		}
		else
		{
			ItemArray[EmptyIndex] = NewItem;
			ItemArray[EmptyIndex]->SetItemNumber(ItemArray[EmptyIndex]->GetItemNumber() + 1);
		}
	}
	int32 EmptyIndex = ItemArray.Find(EmetyItem);
	if (EmptyIndex == -1)
	{
		bIsFull = true;
	}
	else
	{
		bIsFull = false;
	}
}
void UBackPackComponent::SwapItem(int32 Index1, int32 Index2)
{
	if (Index1 >= MaxSize || Index1 < 0 || Index2 >= MaxSize || Index2 < 0)return;
	ItemArray.Swap(Index1, Index2);
}
void UBackPackComponent::RemoveItem(int32 Index, int32 Number)
{
	if (Index >= MaxSize || Index < 0 || Number <= 0)return;
	if (ItemArray[Index] && ItemArray[Index] != EmetyItem)
	{
		const int32 Result = ItemArray[Index]->GetItemNumber() - Number;
		ABasicItem* throwItem = ItemArray[Index];
		/*
		 *	Add Your Function To Handle Special Item
		 *  For Example:
				AWeapon* Weapon = Cast<AWeapon>(throwItem);
				if (Weapon && !Weapon->CanThrow())return;
		*/
		if (Result <= 0)
		{
			ItemArray[Index] = EmetyItem;
		}
		else
		{
			ItemArray[Index]->SetItemNumber(Result);
		}
		for (int32 i = 0; i < Number; ++i)
		{
			ThrowItem(throwItem);
		}
	}
	int32 EmptyIndex = ItemArray.Find(EmetyItem);
	if (EmptyIndex == -1)
	{
		bIsFull = true;
	}
	else
	{
		bIsFull = false;
	}
}
void UBackPackComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


}

