// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Player1.generated.h"

class StaticMeshComponent;

UCLASS()
class TOPHATSOLOPROJECT_API APlayer1 : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayer1();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Vampire boy
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* VampireHeadMeshComponent;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* VampireBodyMeshComponent;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* VampireCapeMeshComponent;

	//Vampire's top hat
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* TopHatBrimMeshComponent;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* TopHatRingMeshComponent;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* TopHatBaseMeshcomponent;

	//FVector CurrentVelocity;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void MoveForward(float value);
	virtual void MoveRight(float value);
	//virtual void Jump(float value);
	virtual void Rotate(float value);

	FVector CurrentVelocity;
	FVector NewLocation;

	UPROPERTY(EditAnywhere, Category = "TopHat")
	int TopHatCount;

	UFUNCTION(BlueprintCallable, Category = "TopHat")
	int GetTopHatCount();
	UFUNCTION(BlueprintCallable, Category = "TopHat")
	void SetTopHatCount(int newTopHatCount);

	UFUNCTION(BlueprintCallable, Category = "Boost Check")
	void BoostCheck(float DeltaTime);

	UFUNCTION(BlueprintCallable, Category = "BOOSTY BOY")
	void ActivateSpeedBoost();

	UPROPERTY(EditAnywhere, Category = "Boost")
	float boostDuration = 5.0f;

	float movementSpeed = 500.0f;

	UPROPERTY(BlueprintReadOnly, Category = "Boost")
	float currentBoostTime;
	bool boosted = false;
};
