// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ConstructorBuilder.h"
#include "escenario.generated.h"

UCLASS()
class GALAGA_USFX_API Aescenario : public AActor, public IConstructorBuilder
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Aescenario();
private:
	class Ablock1* block1;
	class Ablock2* block2;
	class Ablock3* block3;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void SetBlock1(class Ablock1* bloque1) override;
	virtual void SetBlock2(class Ablock2* bloque2) override;
	virtual void SetBlock3(class Ablock3* bloque3) override;

};
