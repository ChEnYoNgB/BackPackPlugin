// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BasicItem.generated.h"
enum class EBasicItemState :uint8
{
	EBS_Hovering,
	EBS_Equipped,
	EBS_Inpackage
};
UCLASS()
class KNAPSACKPLUGIN_API ABasicItem : public AActor
{
	GENERATED_BODY()

public:
	ABasicItem();
	virtual void Tick(float DeltaTime) override;
protected:
	virtual void BeginPlay() override;
	UFUNCTION()
		virtual void OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
		virtual void OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
public:
	FORCEINLINE bool CanThrow()const { return ItemState != EBasicItemState::EBS_Equipped; }
	FORCEINLINE void SetItemEquip() { ItemState = EBasicItemState::EBS_Equipped; }
	FORCEINLINE void SetItemInpackage() { ItemState = EBasicItemState::EBS_Inpackage; }
	FORCEINLINE void SetItemHovering() { ItemState = EBasicItemState::EBS_Hovering; }

	FORCEINLINE UStaticMeshComponent* GetStaticMesh()const { return ItemMesh; }
	FORCEINLINE void SetStaticMesh(UStaticMeshComponent* NewMesh) { ItemMesh = NewMesh; }
	FORCEINLINE bool GetbIsStack()const { return bIsStack; }
	FORCEINLINE FName GetItemName()const { return ItemName; }
	FORCEINLINE void SetItemName(const FName Name) { ItemName = Name; }
	FORCEINLINE int32 GetItemNumber()const { return ItemNumber; }
	FORCEINLINE void SetItemNumber(const int32 Number) { ItemNumber = Number; }
	FORCEINLINE class UTexture2D* GetItemTexture()const { return ItemTexture; }
	FORCEINLINE void SetItemTexture(UTexture2D* Tex) { if (Tex)ItemTexture = Tex; }

protected:

	EBasicItemState ItemState = EBasicItemState::EBS_Hovering;

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* ItemMesh;
	UPROPERTY(VisibleAnywhere)
		class USphereComponent* Sphere;
private:

	/*	Item Attributes	*/
	UPROPERTY(EditAnywhere, Category = Attribute)
		bool bIsStack = true;
	UPROPERTY(EditAnywhere, Category = Attribute)
		FName ItemName;
	UPROPERTY(EditAnywhere, Category = Attribute)
		int32 ItemNumber = 0;
	UPROPERTY(EditAnywhere, Category = Attribute)
		UTexture2D* ItemTexture = nullptr;
};
