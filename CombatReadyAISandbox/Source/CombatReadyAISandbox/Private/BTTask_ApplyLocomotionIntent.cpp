// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_ApplyLocomotionIntent.h"

#include "BehaviorTree/BehaviorTreeComponent.h"
#include "AIController.h"

#include "AIEnemyController.h"

UBTTask_ApplyLocomotionIntent::UBTTask_ApplyLocomotionIntent() {
	NodeName = TEXT("Apply Locomotion Intent");
}

uint16 UBTTask_ApplyLocomotionIntent::GetInstanceMemorySize() const {
	return sizeof(FIntentMemory);
}

bool UBTTask_ApplyLocomotionIntent::IntentEquals(const UBTTask_ApplyLocomotionIntent::FIntentMemory& M,
	bool Walk, bool Sprint, bool Strafe, bool Aim, bool Crouch)
{
	return M.Walk == Walk
		&& M.Sprint == Sprint
		&& M.Strafe == Strafe
		&& M.Aim == Aim
		&& M.Crouch == Crouch;
}

EBTNodeResult::Type UBTTask_ApplyLocomotionIntent::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) {
	AAIController* AIC = OwnerComp.GetAIOwner();
	if (!AIC) return EBTNodeResult::Failed;

	AAIEnemyController* EnemyController = Cast<AAIEnemyController>(AIC);
	if (!EnemyController) return EBTNodeResult::Failed;

	FIntentMemory* Mem = (FIntentMemory*)NodeMemory;
	if (bOnlyApplyIfChanged && Mem) {
		if (Mem->bInit && IntentEquals(*Mem, bWantsWalk, bWantsSprint, bWantsStrafe, bWantsAim, bWantsCrouch)) {
			return EBTNodeResult::Succeeded;
		}

		Mem->bInit = true;
		Mem->Walk = bWantsWalk;
		Mem->Sprint = bWantsSprint;
		Mem->Strafe = bWantsStrafe;
		Mem->Aim = bWantsAim;
		Mem->Crouch = bWantsCrouch;
	}

	EnemyController->BP_ApplyLocomotionIntent(
		bWantsWalk,
		bWantsSprint,
		bWantsStrafe,
		bWantsAim,
		bWantsCrouch
	);

	return EBTNodeResult::Succeeded;
}

