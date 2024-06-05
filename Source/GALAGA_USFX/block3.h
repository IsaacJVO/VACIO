// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "builderscenario.h"
#include "block3.generated.h"

UCLASS()
class GALAGA_USFX_API Ablock3 : public AActor 
{
	GENERATED_BODY()
	
public:	
	UStaticMeshComponent* MeshComponent3;
	// Sets default values for this actor's properties
	Ablock3();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
