// Fill out your copyright notice in the Description page of Project Settings.

#include "TankGame.h"
#include "TankAIController.h"


void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
	auto PlayerTank = GetPlayerTank();	
	if (!PlayerTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("AI Cannot Find Player!"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AI has found: %s"), *(PlayerTank->GetName()));
	}
}

ATank* ATankAIController::GetAIController() const
{
	return Cast<ATank>(GetPawn());
}

ATank* ATankAIController::GetPlayerTank() const
{
	auto PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (!PlayerPawn) { return nullptr; }
	return Cast<ATank>(PlayerPawn);
}