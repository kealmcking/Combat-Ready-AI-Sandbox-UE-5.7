// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();
	CurrentHealth = MaxHealth;
}

void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

float UHealthComponent::GetHealthPercent()
{
	return CurrentHealth / MaxHealth;
}

void UHealthComponent::ChangeCurrentHealth(float InValue)
{
	if (bIsDead) return;

	float NewHealth = CurrentHealth - InValue;
	if (NewHealth < MaxHealth) {
		if (NewHealth <= 0.0f) {
			bIsDead = true;
			CurrentHealth = 0.0f;
		}
		else {
			CurrentHealth = NewHealth;
		}
	}
	else {
		CurrentHealth = MaxHealth;
	}
}

