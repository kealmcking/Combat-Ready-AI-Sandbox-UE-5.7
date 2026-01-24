// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_ApplyLocomotionIntent.generated.h"

/**
 * 
 */
UCLASS()
class COMBATREADYAISANDBOX_API UBTTask_ApplyLocomotionIntent : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UBTTask_ApplyLocomotionIntent();

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	UPROPERTY(EditAnywhere, Category = "LocomotionIntent")
	bool bWantsWalk = false;

	UPROPERTY(EditAnywhere, Category = "LocomotionIntent")
	bool bWantsSprint = false;

	UPROPERTY(EditAnywhere, Category = "LocomotionIntent")
	bool bWantsStrafe = false;

	UPROPERTY(EditAnywhere, Category = "LocomotionIntent")
	bool bWantsAim = false;

	UPROPERTY(EditAnywhere, Category = "LocomotionIntent")
	bool bWantsCrouch = false;

	UPROPERTY(EditAnywhere, Category = "LocomotionIntent")
	bool bOnlyApplyIfChanged = true;

	struct FIntentMemory 
	{
		bool bInit = false;

		bool Walk = false;
		bool Sprint = false;
		bool Strafe = false;
		bool Aim = false;
		bool Crouch = false;
	};

	static bool IntentEquals(const FIntentMemory& M, bool Walk, bool Sprint, bool Strafe, bool Aim, bool Crouch);

	virtual uint16 GetInstanceMemorySize() const override;
	
};
