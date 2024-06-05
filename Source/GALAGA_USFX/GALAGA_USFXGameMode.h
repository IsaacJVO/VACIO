#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GALAGA_USFXGameMode.generated.h"


UCLASS(MinimalAPI)
class AGALAGA_USFXGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGALAGA_USFXGameMode();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = "Facade Muros ")
	class AFacadeMuros* Facade;
	//**************************BUILDER*******************************

	class Adirector* Director;
	class AConstructorEscenario* BuilderEscenario;//constrrand
};



