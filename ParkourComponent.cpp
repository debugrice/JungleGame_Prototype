// Fill out your copyright notice in the Description page of Project Settings.


#include "ParkourComponent.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"

// Sets default values for this component's properties
UParkourComponent::UParkourComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UParkourComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UParkourComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	UE_LOG(LogTemp, Warning, TEXT("Test TickFunction"));
	wallBehaviorDetermine();
	


}

bool UParkourComponent::bIsWallBeside()
{
	return true;
}

bool UParkourComponent::bIsWallFront()
{
	return true;
}

bool UParkourComponent::bIsLedgeFront()
{
	UE_LOG(LogTemp, Warning, TEXT("Test IsLedgeFront"));

	FVector Location = (GetOwner()->GetActorLocation());
	Location.Z += 200;
	UE_LOG(LogTemp, Warning, TEXT("The start point value is: %s"), *Location.ToString());

	FVector DetectLimit = Location + GetOwner()->GetActorForwardVector() * 100;
	FVector LedgeDetect = DetectLimit;
	LedgeDetect.Z -= 100;
	UE_LOG(LogTemp, Warning, TEXT("The DetectLimit value is: %s"), *DetectLimit.ToString());
	FHitResult Hit;

	DrawDebugLine(
		GetWorld(),
		DetectLimit,
		LedgeDetect,
		FColor::Red,
		true,
		10.0f,
		0.0f,
		10.0f);

}

bool UParkourComponent::bIsGroundBelow()
{
	return true;

}

void UParkourComponent::climb()
{

}
void UParkourComponent::climbUp()
{

}
void UParkourComponent::climbDown()
{

}
void UParkourComponent::wallrun()
{

}
void UParkourComponent::slide()
{

}

void UParkourComponent::wallBehaviorDetermine()
{

	UE_LOG(LogTemp, Warning, TEXT("Test WallBehaviorDetermine function"));
	bIsWallFront();

}