// Fill out your copyright notice in the Description page of Project Settings.


#include "ParkourComponent.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/WorldSettings.h"
#include "Engine/World.h"



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
	UE_LOG(LogTemp, Warning, TEXT("Test bIsWallBeside"));
	FVector PlayerLocation = (GetOwner()->GetActorLocation());
	FRotator PlayerRotationLeft = (GetOwner()->GetActorRotation());
	FRotator PlayerRotationRight = (GetOwner()->GetActorRotation());
	PlayerRotationLeft.Yaw -= 45;
	PlayerRotationRight.Yaw += 45;

	UE_LOG(LogTemp, Warning, TEXT("Test PlayerRotationLeft: %s"), *PlayerRotationLeft.ToString());
	UE_LOG(LogTemp, Warning, TEXT("Test PlayerRotationRight: %s"), *PlayerRotationRight.ToString());

	FVector StartLocation = PlayerLocation + PlayerRotationLeft.Vector() * 1;
	FVector leftWallDetectLimit = StartLocation + PlayerRotationLeft.Vector() * 100;
	FVector rightWallDetectLimit = StartLocation + PlayerRotationRight.Vector() * 100;

	UE_LOG(LogTemp, Warning, TEXT("Test Start Location: %s"), *StartLocation.ToString());
	UE_LOG(LogTemp, Warning, TEXT("Test bIsWallBeside Left: %s"), *leftWallDetectLimit.ToString());
	UE_LOG(LogTemp, Warning, TEXT("Test bIsWallBeside Right: %s"), *rightWallDetectLimit.ToString());

	// LeftDrawDebug
	DrawDebugLine(
		GetWorld(),
		PlayerLocation,
		leftWallDetectLimit,
		FColor::Red,
		true,
		10.0f,
		0.0f,
		10.0f);

	DrawDebugLine(
		GetWorld(),
		PlayerLocation,
		rightWallDetectLimit,
		FColor::Red,
		true,
		10.0f,
		0.0f,
		10.0f);

	return true;
}

bool UParkourComponent::bIsWallFront()
{
	UE_LOG(LogTemp, Warning, TEXT("Test bIsWallFront"));
	FVector PlayerLocation = (GetOwner()->GetActorLocation());
	FVector fWallDetectLimit = PlayerLocation + GetOwner()->GetActorForwardVector() * 100;
	FHitResult Hit;
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(GetOwner());


	DrawDebugLine(
		GetWorld(),
		PlayerLocation,
		fWallDetectLimit,
		FColor::Red,
		true,
		10.0f,
		0.0f,
		10.0f);

	//GetWorld()->LineTraceSingleByChannel(Hit,PlayerLocation,fWallDetectLimit,ECollisionChannel::ECC_GameTraceChannel1, Params);
	//UE_LOG(LogTemp, Warning, TEXT("Hit Result: %s"), *Hit.ToString());



	return (GetWorld()->LineTraceSingleByChannel(Hit, PlayerLocation, fWallDetectLimit, ECollisionChannel::ECC_GameTraceChannel1, Params));
}

bool UParkourComponent::bIsLedgeFront()
{
	UE_LOG(LogTemp, Warning, TEXT("Test IsLedgeFront"));

	FVector PlayerLocation = (GetOwner()->GetActorLocation());
	PlayerLocation.Z += 200;
	UE_LOG(LogTemp, Warning, TEXT("The start point value is: %s"), *PlayerLocation.ToString());

	FVector DetectLimit = PlayerLocation + GetOwner()->GetActorForwardVector() * 100;
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

	return true;

}

bool UParkourComponent::bIsGroundBelow()
{
	UE_LOG(LogTemp, Warning, TEXT("Test bIsGroundBelow"));
	FVector PlayerLocation = (GetOwner()->GetActorLocation());

	FVector GroundBelowDetectLimit = PlayerLocation;
	GroundBelowDetectLimit.Z -= 85;

	DrawDebugLine(
		GetWorld(),
		PlayerLocation,
		GroundBelowDetectLimit,
		FColor::Red,
		true,
		10.0f,
		0.0f,
		10.0f);

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
	//APawn* OwnerPawn = Cast<APawn>(GetOwner());
	//ACharacter* OwnerCharacter = Cast<ACharacter>(GetOwner());


}

void UParkourComponent::wallBehaviorDetermine()
{

	//UE_LOG(LogTemp, Warning, TEXT("Test WallBehaviorDetermine function"));
	//APawn* OwnerPawn = Cast<APawn>(GetOwner());

	bIsWallFront(); // Check
	bIsLedgeFront(); // Check
	bIsGroundBelow(); // Check
	bIsWallBeside(); // Check
}