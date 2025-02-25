// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ladrillo.generated.h"

UCLASS()
class MESHS82224_API ALadrillo : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALadrillo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:


	//Para cargar mallas en unreal
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* MeshComponent;

};
