#include "NaveEnemiga.h"

ANaveEnemiga::ANaveEnemiga()
{
	PrimaryActorTick.bCanEverTick = true;

	mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaNaveEnemiga->SetupAttachment(RootComponent);
	RootComponent = mallaNaveEnemiga;

	//// Crear el componente de colisión
	//CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	//// Configurar el componente de colisión
	//CollisionBox->SetCollisionProfileName("BlockAllDynamic");
	//// Asignar el componente de colisión como el raíz del actor
	//RootComponent = CollisionBox;
}

void ANaveEnemiga::BeginPlay()
{
	Super::BeginPlay();
	
}

void ANaveEnemiga::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Angulo += Speed * DeltaTime;

	//float NuevaY = GetActorLocation().Y + Radio * FMath::Sin(Angulo) * DeltaTime;

	//FVector NewLocation = FVector(GetActorLocation().X, NuevaY, GetActorLocation().Z);
	//SetActorLocation(NewLocation);

}

