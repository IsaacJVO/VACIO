// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AMuro.h"
#include "MuroH.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API AMuroH : public AAMuro
{
	GENERATED_BODY()
	
public:
	AMuroH();

private:
	void Mover(float DeltaTime);

	void Tick(float DeltaTime) override;

	void BeginPlay() override;


};
