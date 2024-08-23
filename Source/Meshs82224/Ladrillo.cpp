// Fill out your copyright notice in the Description page of Project Settings.


#include "Ladrillo.h"

// Sets default values
ALadrillo::ALadrillo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> Mesh(TEXT("StaticMesh'/Game/mesa_mesh/StaticMesh.StaticMesh'"));
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("brick"));
	MeshComponent->SetStaticMesh(Mesh.Object);
	SetRootComponent(MeshComponent);



}

// Called when the game starts or when spawned
void ALadrillo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALadrillo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

