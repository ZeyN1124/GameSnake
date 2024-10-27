// Fill out your copyright notice in the Description page of Project Settings.


#include "PanwBlu.h"
#include "Engine/Classes/Camera/CameraComponent.h"
#include "Snake.h"

// Sets default values
APanwBlu::APanwBlu()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PawnCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("PawnCamera"));
	RootComponent = PawnCamera;

}

// Called when the game starts or when spawned
void APanwBlu::BeginPlay()
{
	Super::BeginPlay();
	SetActorRotation(FRotator(-90, 0, 0));
	CreateSnakeActor();
}

// Called every frame
void APanwBlu::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APanwBlu::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void APanwBlu::CreateSnakeActor()
{
	SnakeActor = GetWorld()->SpawnActor <ASnake>(ASnake::StaticClass(), FTransform());
}

