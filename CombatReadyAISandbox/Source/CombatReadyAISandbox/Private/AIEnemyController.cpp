// Fill out your copyright notice in the Description page of Project Settings.


#include "AIEnemyController.h"

#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"

#include "UObject/ConstructorHelpers.h"

#include "Kismet/GameplayStatics.h"

#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AISenseConfig_Hearing.h"
#include "Perception/AISense_Sight.h"
#include "Perception/AISense_Hearing.h"

AAIEnemyController::AAIEnemyController() {
	PerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("PerceptionComponent"));
	SetPerceptionComponent(*PerceptionComponent);

	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("SightConfig"));
	HearingConfig = CreateDefaultSubobject<UAISenseConfig_Hearing>(TEXT("HearingConfig"));

	// Sight tuning (good defaults for a sandbox)
	SightConfig->SightRadius = 2500.0f;
	SightConfig->LoseSightRadius = 3000.0f;
	SightConfig->PeripheralVisionAngleDegrees = 70.0f;
	SightConfig->SetMaxAge(5.0f);
	SightConfig->DetectionByAffiliation.bDetectEnemies = true;
	SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
	SightConfig->DetectionByAffiliation.bDetectNeutrals = true;

	// Hearing tuning
	HearingConfig->HearingRange = 3000.0f;
	HearingConfig->SetMaxAge(3.0f);
	HearingConfig->DetectionByAffiliation.bDetectEnemies = true;
	HearingConfig->DetectionByAffiliation.bDetectFriendlies = true;
	HearingConfig->DetectionByAffiliation.bDetectNeutrals = true;

	PerceptionComponent->ConfigureSense(*SightConfig);
	PerceptionComponent->ConfigureSense(*HearingConfig);
	PerceptionComponent->SetDominantSense(UAISense_Sight::StaticClass());

	PerceptionComponent->OnTargetPerceptionUpdated.AddDynamic(this, &AAIEnemyController::OnTargetPerceptionUpdated);
}

void AAIEnemyController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if (!BBAsset || !BTAsset) {
		UE_LOG(LogTemp, Error, TEXT("AIEnemyController missing BBAsset or BTAsset"));
		return;
	}

	UBlackboardComponent* BBComp = nullptr;;
	if (!UseBlackboard(BBAsset, BBComp)) {
		UE_LOG(LogTemp, Error, TEXT("AIEnemyController failed to initialize blackboard"));
		return;
	}

	BlackboardComponent = BBComp;

	if (!RunBehaviorTree(BTAsset)) {
		UE_LOG(LogTemp, Error, TEXT("AIEnemyController failed to run behavior tree"));
		return;
	}

	UE_LOG(LogTemp, Warning, TEXT("BehaviorTree started successfully"));
}

void AAIEnemyController::OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus) {
	if (!BlackboardComponent || !Actor) return;

	const float Now = GetWorld() ? GetWorld()->GetTimeSeconds() : 0.f;
	const bool bIsSight = Stimulus.Type == UAISense::GetSenseID<UAISense_Sight>();

	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(this, 0);
	if (!PlayerPawn || Actor != PlayerPawn) {
		return;
	}

	if (Stimulus.WasSuccessfullySensed())
	{
		BlackboardComponent->SetValueAsObject(TEXT("TargetActor"), Actor);
		BlackboardComponent->SetValueAsVector(TEXT("LastKnownLocation"), Stimulus.StimulusLocation);
		BlackboardComponent->SetValueAsFloat(TEXT("LastSensedTime"), Now);

		if (bIsSight)
		{
			BlackboardComponent->SetValueAsBool(TEXT("HasLOS"), true);
			BlackboardComponent->SetValueAsBool(TEXT("IsSearching"), false);
		}
		else
		{
			BlackboardComponent->SetValueAsBool(TEXT("HasLOS"), false);
			BlackboardComponent->SetValueAsBool(TEXT("IsSearching"), true);
		}
	}
	else
	{
		if (bIsSight)
		{
			BlackboardComponent->SetValueAsBool(TEXT("HasLOS"), false);
			BlackboardComponent->SetValueAsBool(TEXT("IsSearching"), true);
			BlackboardComponent->SetValueAsVector(TEXT("LastKnownLocation"), Stimulus.StimulusLocation);
			BlackboardComponent->SetValueAsFloat(TEXT("LastSensedTime"), Now);
		}
	}
}
