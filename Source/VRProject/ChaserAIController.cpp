// Fill out your copyright notice in the Description page of Project Settings.

#include "ChaserAIController.h"
#include "Kismet/GameplayStatics.h"  //GetPlayerPawn（Get Player Character)のために追加

void AChaserAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//プレイヤーキャラクターの取得（Get Player Characterノード）
	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	if (PlayerPawn)
	{
		bool bCanSeePlayer = LineOfSightTo(PlayerPawn);  //Chaserの視界内にプレイヤーがいるかどうかを確認

		if (bCanSeePlayer)
		{
			if (bIsChasing == false)
			{
				bIsChasing = true;
				OnPlalyerSpotted();  //プレイヤーを発見したときのイベントを呼び出す
			}

			//プレイヤーを追跡
			MoveToActor(PlayerPawn, 5.0f);  //5.0fは停止距離
		}
		else
		{
			if (bIsChasing == true)
			{
				bIsChasing = false;
				OnPlayerLost();  //プレイヤーを見失ったときのイベントを呼び出す
			}

			//プレイヤーを見失った場合の処理（例：停止）
			StopMovement();
		}
	}
}


