// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "ChaserAIController.generated.h"

/**
 * 
 */
UCLASS()
class VRPROJECT_API AChaserAIController : public AAIController
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
	//パトロールポイント
	UPROPERTY(EditAnywhere, BlueprintReadWrite = "AI")
	TArray<AActor*> PatrolPoints;

	//現在のパトロールポイントのインデックス
	int32 CurrentPatrolPointIndex = 0;
};
