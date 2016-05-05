// Fill out your copyright notice in the Description page of Project Settings.

#include "Ted_V5.h"
#include "Potato.h"


// Sets default values
APotato::APotato()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APotato::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APotato::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void APotato::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

