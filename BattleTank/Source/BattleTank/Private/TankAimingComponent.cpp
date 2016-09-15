// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankAimingComponent.h"


// Sets default values for this component's properties
UTankAimngComponent::UTankAimngComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTankAimngComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UTankAimngComponent::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	// ...
}

void UTankAimngComponent::AimAt(FVector HitLocation)
{
	auto OurTankName = GetOwner()->GetName();
	UE_LOG(LogTemp, Warning, TEXT("%s aiming at %s"), *OurTankName, *HitLocation.ToString());
}
