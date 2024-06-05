// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AMuro.generated.h"


UCLASS()
class GALAGA_USFX_API AAMuro : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true")) // Permite que la variable sea visible en el editor

		UStaticMeshComponent* mallaMuro;

protected:
	float Radio = 500.0f;
	float Angulo = 0.0f;
	float Speed = 2.0f;


	
public:	
	// Sets default values for this actor's properties
	AAMuro();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void Mover(float DeltaTime) PURE_VIRTUAL(ANaveEnemiga::Mover, );
};
