// Fill out your copyright notice in the Description page of Project Settings.


#include "block1.h"

// Sets default values
Ablock1::Ablock1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> bloque(TEXT("StaticMesh'/Game/Geometry/Meshes/1M_Cube_2.1M_Cube_2'"));
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComponent->SetupAttachment(RootComponent);
	MeshComponent->SetStaticMesh(bloque.Object);
	RootComponent = MeshComponent; 

	
}

// Called when the game starts or when spawned
void Ablock1::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Ablock1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

