// Fill out your copyright notice in the Description page of Project Settings.


#include "ConstructorEscenario.h"
#include "escenario.h"
#include"block1.h"
#include"block2.h"
#include"block3.h"


// Sets default values
AConstructorEscenario::AConstructorEscenario()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AConstructorEscenario::BeginPlay()
{
	Super::BeginPlay();
	Escenario = GetWorld()->SpawnActor<Aescenario>(Aescenario::StaticClass());
	Escenario ->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform); //
}

// Called every frame
void AConstructorEscenario::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AConstructorEscenario::GetBlock1()
{
	for (int i = 0; i < 1; i++)
	{
		FVector SpawnLocation = FVector(FMath::RandRange(-1000.0f, 120.0f), FMath::RandRange(-1000.0f, 120.0f), 200.0f);
		FRotator SpawnRotation = FRotator(0.0f, 0.0f, .0f);
		block1 = GetWorld()->SpawnActor<Ablock1>(Ablock1::StaticClass(), SpawnLocation, SpawnRotation);
	}
}

void AConstructorEscenario::GetBlock2()
{
	for (int i = 0; i < 1; i++)
	{
		FVector SpawnLocation = FVector(FMath::RandRange(-1000.0f, 120.0f), FMath::RandRange(-1000.0f, 120.0f), 200.0f);
		FRotator SpawnRotation = FRotator(0.0f, 0.0f, 0.0f);
		Ablock2* SpawnedBlock = GetWorld()->SpawnActor<Ablock2>(Ablock2::StaticClass(), SpawnLocation, SpawnRotation);
	}
}

void AConstructorEscenario::GetBlock3()
{
	for (int i = 0; i < 1; i++)
	{
		FVector SpawnLocation = FVector(FMath::RandRange(-1000.0f, 120.0f), FMath::RandRange(-1000.0f, 120.0f), 200.0f);
		FRotator SpawnRotation = FRotator(0.0f, 0.0f, .0f);
		block3 = GetWorld()->SpawnActor<Ablock3>(Ablock3::StaticClass(), SpawnLocation, SpawnRotation);
	}
}


Aescenario* AConstructorEscenario::GetEscenario()
{
	return Escenario;  
}

