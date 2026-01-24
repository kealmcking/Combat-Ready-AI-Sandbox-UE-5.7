// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_FindCoverLocation.generated.h"

/**
 * 
 */
UCLASS()
class COMBATREADYAISANDBOX_API UBTTask_FindCoverLocation : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UBTTask_FindCoverLocation();

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	const FName Key_TargetActor = TEXT("TargetActor");
	const FName Key_DesiredLocation = TEXT("DesiredMoveLocation");

	const FName Key_CoverLocation = TEXT("CoverLocation");

	const FName Key_CoverLockTime = TEXT("CoverLockTime");

	UPROPERTY(EditAnywhere, Category = "Cover|Search")
	float SearchRadius = 1200.0f;

	UPROPERTY(EditAnywhere, Category = "Cover|Search")
	int32 NumSamples = 18;

	UPROPERTY(EditAnywhere, Category = "Cover|Distance")
	bool bUseDistanceBand = true;

	UPROPERTY(EditAnywhere, Category = "Cover|Distance", meta = (EditCondition = "bUseDistanceBand"))
	float MinTargetDistance = 700.0f;

	UPROPERTY(EditAnywhere, Category = "Cover|Distance", meta = (EditCondition = "bUseDistanceBand"))
	float MaxTargetDistance = 1600.0f;

	UPROPERTY(EditAnywhere, Category = "Cover|Trace")
	float EyeHeightOffset = 60.0f;

	UPROPERTY(EditAnywhere, Category = "Cover|Trace")
	TEnumAsByte<ECollisionChannel> TraceChannel = ECC_Visibility;

	UPROPERTY(EditAnywhere, Category = "Cover|Trace")
	bool bRequireLOSBlocked = true;

	UPROPERTY(EditAnywhere, Category = "Cover|Lock")
	float CoverLockSeconds = 1.25f;

	UPROPERTY(EditAnywhere, Category = "Debug")
	bool bDrawDebug = false;
};