// Fill out your copyright notice in the Description page of Project Settings.


#include "AIEnemyController.h"

void AAIEnemyController::OnPossess(APawn* InPawn)
{
	UseBlackboard(BBAsset, BlackboardComponent);
	RunBehaviorTree(BTAsset);
}
