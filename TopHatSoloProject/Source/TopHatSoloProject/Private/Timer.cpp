// Fill out your copyright notice in the Description page of Project Settings.

#include "Timer.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
// Sets default values
ATimer::ATimer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ATimer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATimer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATimer::EasyMode(float DeltaTime)
{
	time = 180;
	time = time - DeltaTime;
	if (time <= 0)
	{

	}
}

void ATimer::NormalMode(float DeltaTime)
{
	time = 120;
	time = time - DeltaTime;
	if (time <= 0)
	{

	}
}

void ATimer::HardMode(float DeltaTime)
{
	time = 60;
	time = time - DeltaTime;
	if (time <= 0)
	{
		/*FStringClassReference MyWidgetClassRef(TEXT("/Game/EndingScreens/FailedGame"));
		UClass* MyWidgetClass = MyWidgetClassRef.TryLoadClass<UExamine>();
		UExamine *widget = CreateWidget<UExamine>(GetWorld()->GetPla*/
	}
}