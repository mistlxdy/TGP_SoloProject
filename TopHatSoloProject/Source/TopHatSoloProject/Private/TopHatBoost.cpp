// Fill out your copyright notice in the Description page of Project Settings.

#include "TopHatBoost.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
ATopHatBoost::ATopHatBoost()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Setting up the hat
	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Comp"));
	RootComponent = SphereComp;

	TopHatBaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Top Hat Base"));
	TopHatBaseMesh->SetupAttachment(SphereComp);

	TopHatRingMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Top Hat Ring"));
	TopHatRingMesh->SetupAttachment(SphereComp);

	TopHatBrimMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Top Hat Brim"));
	TopHatBrimMesh->SetupAttachment(SphereComp);

	TopHatLeftFeatherMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Top Hat Left Feather"));
	TopHatLeftFeatherMesh->SetupAttachment(SphereComp);

	TopHatRightFeatherMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Top Hat Feather"));
	TopHatRightFeatherMesh->SetupAttachment(SphereComp);
}

// Called when the game starts or when spawned
void ATopHatBoost::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATopHatBoost::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

