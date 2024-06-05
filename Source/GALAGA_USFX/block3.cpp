// Fill out your copyright notice in the Description page of Project Settings.


#include "block3.h"

// Sets default values
Ablock3::Ablock3()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> bloque3(TEXT("StaticMesh'/Game/Geometry/Meshes/1M_Cube_3.1M_Cube_3'"));
	MeshComponent3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComponent3->SetupAttachment(RootComponent);
	MeshComponent3->SetStaticMesh(bloque3.Object);
	RootComponent = MeshComponent3;
}

// Called when the game starts or when spawned
void Ablock3::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Ablock3::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

