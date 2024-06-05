// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MuroH.h"
#include "AMuro.h"
#include "FacadeMuros.generated.h"

UCLASS()
class GALAGA_USFX_API AFacadeMuros : public AActor
{
	GENERATED_BODY()



	
public:	
	AFacadeMuros();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

public:
	void GenerarMuros();
	void FacadeNaves();

};
