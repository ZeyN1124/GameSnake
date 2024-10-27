// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PanwBlu.generated.h"

class UCameraComponent;
class ASnake;

UCLASS()
class SNAKE2_API APanwBlu : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APanwBlu();


	UPROPERTY(BlueprintReadWrite)
	UCameraComponent* PawnCamera;

	UPROPERTY(BlueprintReadWrite)
	ASnake* SnakeActor;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf <ASnake> SnakeActorClass;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void CreateSnakeActor();

};
