// Fill out your copyright notice in the Description page of Project Settings.

#include "Player1.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
APlayer1::APlayer1()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	//setting up the player
	VampireBodyMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Vampire's body"));
	RootComponent = VampireBodyMeshComponent;

	VampireHeadMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Vampire's head"));
	VampireHeadMeshComponent->SetupAttachment(VampireBodyMeshComponent);

	VampireCapeMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Vampire's cape"));
	VampireCapeMeshComponent->SetupAttachment(VampireBodyMeshComponent);

	//setting up the top hat
	TopHatBaseMeshcomponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Top hat base"));
	TopHatBaseMeshcomponent->SetupAttachment(VampireHeadMeshComponent);

	TopHatBrimMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Top hat brim"));
	TopHatBrimMeshComponent->SetupAttachment(VampireHeadMeshComponent);

	TopHatRingMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Top hat ring"));
	TopHatRingMeshComponent->SetupAttachment(VampireHeadMeshComponent);
 
}

// Called when the game starts or when spawned
void APlayer1::BeginPlay()
{
	Super::BeginPlay();
	RootComponent->AddLocalRotation(FRotator(0, -90, 0));
}

// Called every frame
void APlayer1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!CurrentVelocity.IsZero())
	{
		NewLocation = GetActorLocation() + (CurrentVelocity * DeltaTime); 
		SetActorLocation(NewLocation);
	}
}

// Called to bind functionality to input
void APlayer1::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("MoveForward", this, &APlayer1::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APlayer1::MoveRight);
}

void APlayer1::MoveForward(float value)
{
	CurrentVelocity.X = value * 100;
}

void APlayer1::MoveRight(float value)
{
	CurrentVelocity.Y = value * 100;
}
