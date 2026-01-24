// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_SetCoverMoveLocation.generated.h"

/**
 * 
 */
UCLASS()
class COMBATREADYAISANDBOX_API UBTTask_SetCoverMoveLocation : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UBTTask_SetCoverMoveLocation();

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	const FName Key_CoverActor = TEXT("CoverActor");
	const FName Key_TargetActor = TEXT("TargetActor");
	const FName Key_DesiredLocation = TEXT("DesiredMoveLocation");

	UPROPERTY(EditAnywhere, Category = "Cover")
	float ExtraInset = 35.0f;

	UPROPERTY(EditAnywhere, Category = "Cover")
	float MinStandOff = 25.0f;

	UPROPERTY(EditAnywhere, Category = "Cover")
	float ProjectRadius = 200.0f;

	UPROPERTY(EditAnywhere, Category = "Cover|Trace")
	TEnumAsByte<ECollisionChannel> TraceChannel = ECC_Visibility;

	UPROPERTY(EditAnywhere, Category = "Cover|Debug")
	bool bDrawDebug = false;
};
