#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaEspia.generated.h"

UCLASS()
class GALAGA_USFX_API ANaveEnemigaEspia : public ANaveEnemiga
{
	GENERATED_BODY()



private:
	float tiempoSigilo;
	float tiempoInvisible;
protected:
	float tipoMovimiento;
	float vida;
	float puntaje;
	float tipoLaser;
	float tiempoCargaSigilo;

public:
	FORCEINLINE float GetTiempoSigilo() const { return tiempoSigilo; }
	FORCEINLINE float GetTiempoInvisible() const { return tiempoInvisible; }
	FORCEINLINE float GetTipoMovimiento() const { return tipoMovimiento; }
	FORCEINLINE float GetVida() const { return vida; }
	FORCEINLINE float GetPuntaje() const { return puntaje; }
	FORCEINLINE float GetTipoLaser() const { return tipoLaser; }
	FORCEINLINE float GetTiempoCargaSigilo() const { return tiempoCargaSigilo; }

	FORCEINLINE void SetTiempoSigilo(float _tiempoSigilo) { tiempoSigilo = _tiempoSigilo; }
	FORCEINLINE void SetTiempoInvisible(float _tiempoInvisible) { tiempoInvisible = _tiempoInvisible; }
	FORCEINLINE void SetTipoMovimiento(float _tipoMovimiento) { tipoMovimiento = _tipoMovimiento; }
	FORCEINLINE void SetVida(float _vida) { vida = _vida; }
	FORCEINLINE void SetPuntaje(float _puntaje) { puntaje = _puntaje; }
	FORCEINLINE void SetTipoLaser(float _tipoLaser) { tipoLaser = _tipoLaser; }
	FORCEINLINE void SetTiempoCargaSigilo(float _tiempoCargaSigilo) { tiempoCargaSigilo = _tiempoCargaSigilo; }

public:
	ANaveEnemigaEspia();

public:
	virtual void Tick(float DeltaTime) override;
 	void BeginPlay() override;
	void Mover(float DeltaTime);

};
