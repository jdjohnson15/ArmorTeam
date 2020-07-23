// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicTankPawn.h"

// Sets default values
ABasicTankPawn::ABasicTankPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABasicTankPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABasicTankPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABasicTankPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	//Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("ParticleToggle", IE_Pressed, this, &ABasicTankPawn::Fire);

	PlayerInputComponent->BindAxis("MoveForward", this, &ABasicTankPawn::MoveForward);
	PlayerInputComponent->BindAxis("TurnBase", this, &ABasicTankPawn::TurnBase);
	PlayerInputComponent->BindAxis("TurnTurret", this, &ABasicTankPawn::MoveTurret);
	PlayerInputComponent->BindAxis("LiftTurret", this, &ABasicTankPawn::LiftTurret);

}

UPawnMovementComponent* ABasicTankPawn::GetMovementComponent() const
{
	return OurMovementComponent;
}

void ABasicTankPawn::MoveForward(float AxisValue)
{

}

void ABasicTankPawn::TurnBase(float AxisValue)
{

}

void ABasicTankPawn::MoveTurret(float AxisValue)
{

}

void ABasicTankPawn::LiftTurret(float AxisValue)
{

}

void ABasicTankPawn::Fire()
{

}

