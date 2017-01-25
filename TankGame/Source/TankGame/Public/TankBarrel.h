// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent), hidecategories = ("Collision"))
class TANKGAME_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:

	void Elevate(float DegreesPerSecond);
	
private:

	// Sensiable default
	UPROPERTY(EditAnywhere, Category = Setup)
	float MaxDegreesPerSecond = 20; 

	// Max raised Pitch elevation
	UPROPERTY(EditAnywhere, Category = Setup)
	float MaxPitchElevation = 40;

	// Min lowered Pitch elevation
	UPROPERTY(EditAnywhere, Category = Setup)
	float MinPitchElevation = 0;

};
