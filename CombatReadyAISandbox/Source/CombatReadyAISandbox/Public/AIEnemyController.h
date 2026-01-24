// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AICombatTypes.h"
#include "Perception/AIPerceptionTypes.h"
#include "AIArchetypeData.h"
#include "AIEnemyController.generated.h"

class UAIPerceptionComponent;
class UAISenseConfig_Sight;
class UAISenseConfig_Hearing;

/**
 * 
 */
UCLASS()
class COMBATREADYAISANDBOX_API AAIEnemyController : public AAIController
{
	GENERATED_BODY()



public:
	AAIEnemyController();

	void OnPossess(APawn* InPawn) override;
	void OnUnPossess() override;

	virtual void Tick(float DeltaSeconds) override;

	UPROPERTY(EditDefaultsOnly, Category = "AI", meta = (DisplayThumbnail = "true"))
	TObjectPtr<UAIArchetypeData> Archetype;


	UPROPERTY()
	UBlackboardComponent* BlackboardComponent;

	UPROPERTY(EditDefaultsOnly, Category = "AI")
	UBlackboardData* BBAsset;

	UPROPERTY(EditDefaultsOnly, Category = "AI")
	UBehaviorTree* BTAsset;

	UPROPERTY()
	UAISenseConfig_Sight* SightConfig;

	UPROPERTY()
	UAISenseConfig_Hearing* HearingConfig;

	UFUNCTION()
	void OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);

	UFUNCTION(BlueprintImplementableEvent, Category = "AI|Locomotion")
	void BP_ApplyLocomotionIntent(bool bWantsWalk, bool bWantsSprint, bool bWantsStrafe, bool bWantsAim, bool bWantsCrouch);

	void ApplyArchetypeToBlackboard(UBlackboardComponent* BBComp, APawn* InPawn);

	UFUNCTION(BlueprintCallable, Category = "AI|FOCUS")
	void SetCombatFocus(AActor* Target);

	UFUNCTION(BlueprintCallable, Category="AI|FOCUS")
	void ClearCombatFocus();

private:
	// SHOOTING / FIRING
	void UpdateFireManager(float DeltaSeconds);

	bool ShouldTryFire() const;
	bool HasLineOfFireToTarget(AActor* Target, FVector& OutAimPoint) const;

	void StartBurst();
	void FireOneShot();
	void EndBurst();
	void StopAllFiring();

	bool TryFireWeaponAt(const FVector& AimPoint);

private:
	FTimerHandle Timer_AimReaction;
	FTimerHandle Timer_ShotTick;
	FTimerHandle Timer_ReloadCooldown;

	bool bFireBlockedByCooldown = false;
	bool bBurstActive = false;

	int32 ShotsRemaining = 0;

	UPROPERTY(EditDefaultsOnly, Category = "AI | Combat | Fire")
	float FireManagerTickInterval = 0.1f;

	float FireManagerAccum = 0.0f;

	const FName Key_TargetActor = TEXT("TargetActor");
	const FName Key_CombatState = TEXT("CombatState");
	const FName Key_HasLOS = TEXT("HasLOS");

	bool IsActorInFrontFOV(const AActor* Target, float MinDot = 0.35f) const;


protected:
	UFUNCTION(BlueprintImplementableEvent, Category = "AI|Combat")
	void BP_FireAt(const FVector& AimPoint);

	UFUNCTION(BlueprintImplementableEvent, Category = "AI|Combat")
	bool BP_CanFire() const;
};
