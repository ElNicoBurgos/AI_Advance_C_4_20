// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CajaCuracion2.generated.h"

UCLASS()
class ADDNEWCOMPONENT_API ACajaCuracion2 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACajaCuracion2();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	virtual void Tick(float DeltaTime) override;	

};
