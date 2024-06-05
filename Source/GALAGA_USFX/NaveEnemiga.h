#pragma once

#include "CoreMinimal.h"
//#include "Components/BoxComponent.h" 
#include "GameFramework/Actor.h"
#include "NaveEnemiga.generated.h"

UCLASS()
class GALAGA_USFX_API ANaveEnemiga : public AActor
{
	GENERATED_BODY()
	



public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true")) // Permite que la variable sea visible en el editor

	UStaticMeshComponent* mallaNaveEnemiga;
protected:
	float velocidad;
	float velocidadDisparo;
	float resistencia;
	float danoProducido;
	float valorDestruccion;
	float experiencia;
	float energia;
	FString nombre;
	FVector posicion;
	float tiempoDisparo;
	float vida;
//protected:
//	float Radio = 1000.0f;
//	float Angulo = 0.0f;
//	float Speed = 2.0f;


public:
	// Metodos accesores
	FORCEINLINE float GetVelocidad() const { return velocidad; }
	FORCEINLINE float GetVelocidadDisparo() const { return velocidadDisparo; }
	FORCEINLINE float GetResistencia() const { return resistencia; }
	FORCEINLINE float GetDanoProducido() const { return danoProducido; }
	FORCEINLINE float GetValorDestruccion() const { return valorDestruccion; }
	FORCEINLINE float GetTiempoDisparo() const { return tiempoDisparo; }
	FORCEINLINE float GetExperiencia() const { return experiencia; }
	FORCEINLINE float GetEnergia() const { return energia; }
	FORCEINLINE FString GetNombre() const { return nombre; }
	FORCEINLINE FVector GetPosicion() const { return posicion; }

	FORCEINLINE void SetVelocidad(float _velocidad) { velocidad = _velocidad; }
	FORCEINLINE void SetVelocidadDisparo(float _velocidadDisparo) { velocidadDisparo = _velocidadDisparo; }
	FORCEINLINE void SetResistencia(float _resistencia) { resistencia = _resistencia; }
	FORCEINLINE void SetValorDestruccion(float _valorDestruccion) { valorDestruccion = _valorDestruccion; }
	FORCEINLINE void SetDanoProducido(float _danoProducido) { danoProducido = _danoProducido; }
	FORCEINLINE void SetTiempoDisparo(float _tiempoDisparo) { tiempoDisparo = _tiempoDisparo; }
	FORCEINLINE void SetExperiencia(float _experiencia) { experiencia = _experiencia; }
	FORCEINLINE void SetEnergia(float _energia) { energia = _energia; }
	FORCEINLINE void SetNombre(FString _nombre) { nombre = _nombre; }
	FORCEINLINE void SetPosicion(FVector _posicion) { posicion = _posicion; }

public:	
	ANaveEnemiga();

protected:
	virtual void BeginPlay() override;

//private:
//	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
//	UBoxComponent* CollisionBox; // Declara un componente de caja de colisión

public:	
	virtual void Tick(float DeltaTime) override;

public:
	void Mover(float DeltaTime) PURE_VIRTUAL(ANaveEnemiga::Mover, );


};
