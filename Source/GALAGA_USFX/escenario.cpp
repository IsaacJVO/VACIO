// Fill out your copyright notice in the Description page of Project Settings.


#include "escenario.h"
#include "block1.h"
#include "block2.h"
#include "block3.h"

// Sets default values
Aescenario::Aescenario()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Aescenario::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Aescenario::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void Aescenario::SetBlock1(Ablock1* bloque1)
{
	block1 = bloque1;
}

void Aescenario::SetBlock2(Ablock2* bloque2)
{
	block2 = bloque2;
}

void Aescenario::SetBlock3(Ablock3* bloque3)
{
	block3 = bloque3;
}

