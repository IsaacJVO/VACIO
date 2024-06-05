// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "builderscenario.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class Ubuilderscenario : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA_USFX_API Ibuilderscenario
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual void GetBlock1() = 0;//Build RAND
	virtual void GetBlock2() = 0;
	virtual void GetBlock3() = 0;
	virtual class Aescenario* GetEscenario() = 0; 

	//acces method 

	class Ablock1* block1;
	class Ablock2* block2;
	class Ablock3* block3;

	//first *
};
