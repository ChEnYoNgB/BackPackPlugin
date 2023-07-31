

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BackPackComponent.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class KNAPSACKPLUGIN_API UBackPackComponent : public UActorComponent
{
	GENERATED_BODY()

public:

	UBackPackComponent();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:

	virtual void BeginPlay() override;

public:
	FORCEINLINE bool GetIsFull()const { return bIsFull; }
	FORCEINLINE bool GetIsThrowAll()const { return bIsThrowAll; }
	FORCEINLINE void SetIsThrowAll(bool Value) { bIsThrowAll = Value; }
	FORCEINLINE TArray<class ABasicItem*> GetItemArray()const { return ItemArray; }
	void SortItem();
	void InitKnapsack();
	void ThrowItem(ABasicItem* Item);
	void AddItem(ABasicItem* NewItem);
	void SwapItem(int32 Index1, int32 Index2);
	void RemoveItem(int32 Index, int32 Number);




private:
	UPROPERTY()
		bool bIsThrowAll = false;
	UPROPERTY(EditAnywhere, Category = "Knapsack")
		int32 MaxSize = 5;
	UPROPERTY(VisibleAnywhere, Category = "Knapsack")
		bool bIsFull = false;
	UPROPERTY(VisibleAnywhere, Category = "Knapsack")
		ABasicItem* EmetyItem;
	UPROPERTY(EditAnywhere, Category = "Knapsack")
		TArray<ABasicItem*> ItemArray;
	UPROPERTY(VisibleAnywhere, Category = "Knapsack")
		class APawn* PlayerCharacter;
	UPROPERTY(VisibleAnywhere, Category = "Knapsack")
		class AController* PlayerController;
	UPROPERTY(EditAnywhere, Category = "Knapsack")
		class UTexture2D* EmptyTexture;

};
