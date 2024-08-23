// Copyright Epic Games, Inc. All Rights Reserved.

#include "Meshs82224GameModeBase.h"
#include "Ladrillo.h"

AMeshs82224GameModeBase::AMeshs82224GameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
	
}

void AMeshs82224GameModeBase::BeginPlay()
{
	Super::BeginPlay();
	FVector pox = FVector(-90.0f, 0.0f, 0.0f);
	for (int i = 0; i <= 5; i++) {
		brick = GetWorld()->SpawnActor<ALadrillo>(ALadrillo::StaticClass(), pox, FRotator::ZeroRotator);
		pox += FVector(150.0f, 0.0f, 0.0f);
	}
}

void AMeshs82224GameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
