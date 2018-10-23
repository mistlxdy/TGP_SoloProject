// Fill out your copyright notice in the Description page of Project Settings.

#include "TopHatPickUp.h"
#include "Components/SphereComponent.h"

// Sets default values
ATopHatPickUp::ATopHatPickUp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
}

// Called when the game starts or when spawned
void ATopHatPickUp::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATopHatPickUp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATopHatPickUp::NotifyActorBeginOverlap(AActor* OtherActor)
{
	OnActivate(OtherActor);
}

void ATopHatPickUp::TopHatAcquired()
{

}