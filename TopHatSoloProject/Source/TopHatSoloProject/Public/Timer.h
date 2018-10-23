// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Timer.generated.h"
//#include "Runtime/UMG/Public/Blueprint/UserWidget.h"

UCLASS()
class TOPHATSOLOPROJECT_API ATimer : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATimer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void EasyMode(float DeltaTime);
	void NormalMode(float DeltaTime);
	void HardMode(float DeltaTime);

	int time;
};
