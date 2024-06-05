#include "NaveEnemigaEspia.h"

ANaveEnemigaEspia::ANaveEnemigaEspia()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere_2.Shape_Sphere_2'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);
}

void ANaveEnemigaEspia::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ANaveEnemigaEspia::BeginPlay()
{
	Super::BeginPlay();
}

void ANaveEnemigaEspia::Mover(float DeltaTime)
{

}