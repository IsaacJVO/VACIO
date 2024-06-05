// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "builderscenario.h"
#include "ConstructorEscenario.generated.h"

UCLASS()
class GALAGA_USFX_API AConstructorEscenario : public AActor, public Ibuilderscenario  //constructor concreto de ubn escenario
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AConstructorEscenario();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	class Aescenario* Escenario;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void GetBlock1() override; //ACCESO METODOS DE LA INTERFAZ RAND
	virtual void GetBlock2() override;
	virtual void GetBlock3() override;
	virtual class Aescenario* GetEscenario() override;   

};
