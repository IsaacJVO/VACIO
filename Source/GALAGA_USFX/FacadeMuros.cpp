// Fill out your copyright notice in the Description page of Project Settings.


#include "FacadeMuros.h"
#include "MuroH.h"
#include "AMuro.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaEspia.h"


// Sets default values
AFacadeMuros::AFacadeMuros()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFacadeMuros::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AFacadeMuros::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFacadeMuros::GenerarMuros()
{
    UWorld* const World = GetWorld();
    if (World != nullptr)
    {
        const FVector AreaMin = FVector(2000.0f, -1000.0f, 0.0f);
        const FVector AreaMax = FVector(800.0f, 1500.0f, 0.0f);

        // Genera nuevos muros
        for (int i = 0; i < 10; ++i)
        {
            float RandomX = FMath::RandRange(AreaMin.X, AreaMax.X);
            float RandomY = FMath::RandRange(AreaMin.Y, AreaMax.Y);

            FVector RandomLocation = FVector(RandomX, RandomY, -500.0f);

            AMuroH* MuroHActual = World->SpawnActor<AMuroH>(RandomLocation, FRotator::ZeroRotator);


            FString Message = FString::Printf(TEXT("Estoy Aqui"));
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, Message);
        } 
    }
}



void AFacadeMuros::FacadeNaves()
{

    FVector ubicacionInicialNaves = FVector(3000.0f, -800.0f, 200.0f);
    FRotator rotacionNave = FRotator(0.0f, 180.0f, 0.0f);

    UWorld* const World = GetWorld();

    if (World != nullptr)
    {

        // Generar naves enemigas de tipo ANaveEnemigaCaza
        for (int i = 0; i < 5; i++)
        {
            FVector ubicacionActual = FVector(ubicacionInicialNaves.X, ubicacionInicialNaves.Y + 300.0f * i, ubicacionInicialNaves.Z + 100.0f);
            ANaveEnemigaCaza* NaveEnemigaCazaActual = World->SpawnActor<ANaveEnemigaCaza>(ubicacionActual, rotacionNave);
        }

        // Ajustar la ubicación para generar naves de tipo ANaveEnemigaTransporte
        FVector ubicacionActual = FVector(ubicacionInicialNaves.X - 300.0f, ubicacionInicialNaves.Y, ubicacionInicialNaves.Z);
        for (int j = 0; j < 5; j++)
        {
            ubicacionActual.Y = ubicacionInicialNaves.Y + 300.0f * j;
            ANaveEnemigaTransporte* NaveEnemigaTransporteActual = World->SpawnActor<ANaveEnemigaTransporte>(ubicacionActual, rotacionNave);
        }

        // Ajustar la ubicación para generar naves de tipo ANaveEnemigaEspia
        ubicacionActual.X = ubicacionInicialNaves.X - 600.0f;
        for (int j = 0; j < 5; j++)
        {
            ubicacionActual.Y = ubicacionInicialNaves.Y + 300.0f * j;
            ANaveEnemigaEspia* NaveEnemigaEspiaActual = World->SpawnActor<ANaveEnemigaEspia>(ubicacionActual, rotacionNave);
        }

    }

}


