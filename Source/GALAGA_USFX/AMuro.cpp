#include "AMuro.h"

// Sets default values
AAMuro::AAMuro()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	mallaMuro = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("UStaticMeshComponent"));
	mallaMuro->SetupAttachment(RootComponent);
	RootComponent = mallaMuro;

}

// Called when the game starts or when spawned
void AAMuro::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAMuro::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Angulo += Speed * DeltaTime;

	float NuevaZ = GetActorLocation().Z + Radio * FMath::Sin(Angulo) * DeltaTime;

	FVector NewLocation = FVector(GetActorLocation().X, GetActorLocation().Y, NuevaZ);
	SetActorLocation(NewLocation);

	//***********************************************

}

