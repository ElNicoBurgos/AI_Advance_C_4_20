// Fill out your copyright notice in the Description page of Project Settings.

#include "Enemy.h"
#include "Interfaces/MyInterfaceDamageable.h"
#include "Interfaces/HealInterface.h"
#include "Interfaces/PatrolPointInterface.h"
#include "Components/MyActorComponent.h" //Life Component
// Sets default values
AEnemy::AEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	life = CreateDefaultSubobject<UMyActorComponent>("Life Component");
	
}

// Called when the game starts or when spawned
void AEnemy::BeginPlay(){
	Super::BeginPlay();	
}

// Called every frame
void AEnemy::Tick(float DeltaTime){
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent){
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemy::TakeDamage(FName boneName, float currentDamage) {
	life->TakeDamage(boneName, currentDamage);
}

void AEnemy::ZoneHealt(float amountHealt) {
	life->ZoneHealt(amountHealt);
}

TArray <class ATargetPoint*> AEnemy::GetWayPoints() {
	return wayPoints;
}