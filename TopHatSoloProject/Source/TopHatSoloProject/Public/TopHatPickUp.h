// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TopHatPickUp.generated.h"

class USphereComponent;

UCLASS()
class TOPHATSOLOPROJECT_API ATopHatPickUp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATopHatPickUp();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = "Components")
		USphereComponent* SphereComp;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void NotifyActorBeginOverlap(AActor* OtherActor);

	UFUNCTION(BlueprintImplementableEvent, Category = "Pickup")
	void OnActivate(AActor* pickedupBy);

	void TopHatAcquired();
};
