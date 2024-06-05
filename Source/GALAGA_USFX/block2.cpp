// Fill out your copyright notice in the Description page of Project Settings.


#include "block2.h"

// Sets default values
Ablock2::Ablock2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> bloque2(TEXT("StaticMesh'/Game/Geometry/Meshes/1M_Cube.1M_Cube'"));
	MeshComponent2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComponent2->SetupAttachment(RootComponent);
	MeshComponent2->SetStaticMesh(bloque2.Object);
	RootComponent = MeshComponent2;

}

// Called when the game starts or when spawned
void Ablock2::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Ablock2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

