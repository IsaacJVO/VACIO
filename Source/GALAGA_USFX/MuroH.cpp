
#include "MuroH.h"

AMuroH::AMuroH()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	mallaMuro->SetStaticMesh(malla.Object);
}

void AMuroH::Mover(float DeltaTime)
{
}

void AMuroH::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMuroH::BeginPlay()
{
	Super::BeginPlay();
}
