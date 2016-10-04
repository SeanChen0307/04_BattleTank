// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent), hidecategories = ("Collisoin"))
class BATTLETANK_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()

public:
	// -1 is max downward speed, and +1 is max up movement
	void Elevate(float RelativeSpeed);

private:
	UPROPERTY(EditAnyWhere, Category = Setup)
	float MaxDegreePerSecond = 10;
	
	UPROPERTY(EditAnyWhere, Category = Setup)
	float MaxElevationDegrees = 40;

	UPROPERTY(EditAnyWhere, Category = Setup)
	float MinElevationDegrees = 0;
};