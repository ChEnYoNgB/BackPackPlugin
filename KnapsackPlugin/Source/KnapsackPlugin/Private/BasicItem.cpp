// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicItem.h"
#include "Components/StaticMeshComponent.h"
#include"Components/SphereComponent.h"

ABasicItem::ABasicItem()
{

	PrimaryActorTick.bCanEverTick = true;

	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	ItemMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	ItemMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	RootComponent = ItemMesh;

	Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	Sphere->SetupAttachment(GetRootComponent());
}


void ABasicItem::BeginPlay()
{
	Super::BeginPlay();

	Sphere->OnComponentBeginOverlap.AddDynamic(this, &ABasicItem::OnSphereOverlap);
	Sphere->OnComponentEndOverlap.AddDynamic(this, &ABasicItem::OnSphereEndOverlap);
}

void ABasicItem::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//Add Your method
}

void ABasicItem::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	//Add Your method
}


void ABasicItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

