// Fill out your copyright notice in the Description page of Project Settings.

#include "Player1.h"
#include "Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"

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
	PlayerInputComponent->BindAxis("Rotate", this, &APlayer1::Rotate);
}

void APlayer1::MoveForward(float value)
{
	CurrentVelocity.X = value * movementSpeed;
}

void APlayer1::MoveRight(float value)
{
	CurrentVelocity.Y = value * movementSpeed;
}

void APlayer1::Rotate(float value)
{
	VampireBodyMeshComponent->AddWorldRotation(FQuat(FRotator(0.0f, value, 0.0f)));
}

int APlayer1::GetTopHatCount()
{
	return TopHatCount;
}

void APlayer1::SetTopHatCount(int newTopHatCount)
{
	TopHatCount = newTopHatCount;
}

//int APlayer1::GetPlayerSpeed(float valueX, float valueY)
//{
//	return CurrentVelocity.X = valueX;
//	return CurrentVelocity.Y = valueY;
//}

//void APlayer1::CheckTopHatCount()
//{
//	if (TopHatCount = 5)
//	{
//		FGenericPlatformMisc::RequestExit(false);
//	}
//}

void APlayer1::BoostCheck(float DeltaTime)
{
	if (boosted)
	{
		currentBoostTime += DeltaTime;
		if (currentBoostTime > boostDuration)
		{
			boosted = false;
			movementSpeed = 1.0f;
		}
	}
}

void APlayer1::ActivateSpeedBoost()
{
	boosted = true;
	currentBoostTime = 0.0f;
	movementSpeed = 1000.0f;
}