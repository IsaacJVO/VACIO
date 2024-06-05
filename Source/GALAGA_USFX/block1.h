// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "block1.generated.h"

UCLASS()
class GALAGA_USFX_API Ablock1 : public AActor
{
	GENERATED_BODY()
	
public:	
	UStaticMeshComponent* MeshComponent; 
	// Sets default values for this actor's properties
	Ablock1();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
