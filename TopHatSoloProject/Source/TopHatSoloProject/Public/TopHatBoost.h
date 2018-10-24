// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TopHatBoost.generated.h"

class USphereComponent;
class StaticMeshComponent;


UCLASS()
class TOPHATSOLOPROJECT_API ATopHatBoost : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATopHatBoost();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	USphereComponent* SphereComp;

	UPROPERTY(VisibleAnywhere, Category = "Top Hat Base")
	UStaticMeshComponent* TopHatBaseMesh;
	UPROPERTY(VisibleAnywhere, Category = "Top Hat Ring")
	UStaticMeshComponent* TopHatRingMesh;
	UPROPERTY(VisibleAnywhere, Category = "Top Hat Brim")
	UStaticMeshComponent* TopHatBrimMesh;
	UPROPERTY(VisibleAnywhere, Category = "Top Hat Left Feather")
	UStaticMeshComponent* TopHatLeftFeatherMesh;
	UPROPERTY(VisibleAnywhere, Category = "Top Hat Right Feather")
	UStaticMeshComponent* TopHatRightFeatherMesh;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void SpeedBoost(float DeltaTime);
};
