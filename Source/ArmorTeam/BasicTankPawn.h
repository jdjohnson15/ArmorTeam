// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "UObject/ConstructorHelpers.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "CollidingPawnMovementComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BasicTankPawn.generated.h"

UCLASS()
class ARMORTEAM_API ABasicTankPawn : public APawn
{
	GENERATED_BODY()

	UPROPERTY()
		class UStaticMesh* tankBase;

	UPROPERTY()
		class UStaticMesh* tankTurret;

	UPROPERTY()
		class UCollidingPawnMovementComponent* OurMovementComponent;

public:
	// Sets default values for this pawn's properties
	ABasicTankPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual UPawnMovementComponent* GetMovementComponent() const override;

	//movement control functions
	void MoveForward(float AxisValue);
	void TurnBase(float AxisValue);
	void MoveTurret(float AxisValue);
	void LiftTurret(float AxisValue);
	void Fire();

};
