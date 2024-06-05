#include "GALAGA_USFXGameMode.h"
#include "GALAGA_USFXPawn.h"
#include "director.h"
#include "ConstructorEscenario.h"
#include "FacadeMuros.h"    


AGALAGA_USFXGameMode::AGALAGA_USFXGameMode()
{
	DefaultPawnClass = AGALAGA_USFXPawn::StaticClass();
}


void AGALAGA_USFXGameMode::BeginPlay()
{
    Super::BeginPlay();
    Facade = GetWorld()->SpawnActor<AFacadeMuros>(AFacadeMuros::StaticClass());


    Facade->GenerarMuros();
    Facade->FacadeNaves();

//*-------------------
    Director = GetWorld()->SpawnActor<Adirector>(Adirector::StaticClass());
    BuilderEscenario = GetWorld()->SpawnActor<AConstructorEscenario>(AConstructorEscenario::StaticClass());//constrcutor concreto
    Director->SetBuilder(BuilderEscenario); //Lllama a los bloques 
    Director->ConstruirBloques(); //LLama a los bloques randomms
  
}
