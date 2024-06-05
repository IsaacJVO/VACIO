#include "NaveEnemigaCaza.h"

ANaveEnemigaCaza::ANaveEnemigaCaza()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere_3.Shape_Sphere_3'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);
}

void ANaveEnemigaCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    // Obtener la ubicación actual del actor
    FVector NewLocation = OriginalLocation;

    // Crear un movimiento de salto usando una función seno
    float RunningTime = GetGameTimeSinceCreation();
    float DeltaHeight = FMath::Sin(RunningTime * 2) * 100.0f; // Oscilación de 300 unidades
    NewLocation.Z += DeltaHeight;

    // Establecer la nueva ubicación del actor
    SetActorLocation(NewLocation);
}

void ANaveEnemigaCaza::BeginPlay()
{
	Super::BeginPlay();
        OriginalLocation = GetActorLocation();


}

void ANaveEnemigaCaza::Mover(float DeltaTime)
{

}
