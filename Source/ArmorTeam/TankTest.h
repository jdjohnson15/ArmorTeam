// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "TankTest.generated.h"

UCLASS()
class ARMORTEAM_API ATankTest : public APawn
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
		USceneComponent* OurVisibleComponent;


public:
	// Sets default values for this pawn's properties
	ATankTest();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	//Input functions
	void Move_XAxis(float AxisValue);
	void Move_YAxis(float AxisValue);
	void TurnLeft();
	void TurnRight();

	//Input variables
	FVector CurrentVelocity;

};
