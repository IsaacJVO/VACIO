// Fill out your copyright notice in the Description page of Project Settings.


#include "director.h"
#include "builderscenario.h"
#include "escenario.h"

// Sets default values
Adirector::Adirector()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Adirector::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Adirector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void Adirector::ConstruirBloques()
{
	if (BuilderEscenario) //interface
	{
		BuilderEscenario->GetBlock1();
		BuilderEscenario->GetBlock2();
		BuilderEscenario->GetBlock3();
	}
}

void Adirector::SetBuilder(AActor* Builder)
{
	BuilderEscenario = Cast<Ibuilderscenario>(Builder); // casteo noms
}

Aescenario* Adirector::GetEscenario()
{
	if (BuilderEscenario)
	{
		return BuilderEscenario->GetEscenario(); 
	}
	else
	{
		return nullptr;
	}
}



