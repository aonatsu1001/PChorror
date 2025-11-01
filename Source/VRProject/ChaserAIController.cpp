// Fill out your copyright notice in the Description page of Project Settings.


//#include "ChaserAIController.h"
//#include "Kismet/GameplayStatics.h"
//#include "GameFramework/Character.h"

//起動時に一度だけ呼ばれる関数
//void AChaserAIController::BeginPlay()
//{
//	Super::BeginPlay();
//	// プレイヤーへのポインタを取得して変数に格納
//	APawn* VRPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
//
//	//if (VRPawn)
//	//{
//	//	//Chaserを特定の位置にテレポートさせる
//	//	APawn* ChaserPawn = GetPawn();
//	//	if (ChaserPawn)
//	//	{
//	//		FVector SpawnLocation = FVector(1000.f, 1000.f, 100.f); // 例: (1000, 1000, 100)の位置にスポーン
//	//		FRotator SpawnRotation = FRotator::ZeroRotator; // 回転はゼロ
//	//		ChaserPawn->SetActorLocationAndRotation(SpawnLocation, SpawnRotation);
//	//	}
//	//}
//}

// 毎フレーム呼ばれる関数
//void AChaserAIController::Tick(float DeltaSeconds)
//{
//	Super::Tick(DeltaSeconds);
//	
//	//プレイヤーを見つけるまで一定の速度で既定のルートを移動
//	APawn* VRPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
//	ACharacter* ChaserCharacter = Cast<ACharacter>(GetPawn());
//
//	//ChaserCharacterが存在しない場合は処理を中断
//	if (!ChaserCharacter) return;
//
//	//視界判定
//	bool bCanSeePlayer = VRPawn && LineOfSightTo(VRPawn);
//
//	if (bCanSeePlayer)
//	{
//		//追跡時の速度
//		ChaserCharacter->GetCharacterMovement()->MaxWalkSpeed = 600.0f; // 走る速度に設定
//		MoveToActor(VRPawn, 5.0f); // 5.0fは停止距離
//	}
//	else
//	{
//		//徘徊時の測度
//		ChaserCharacter->GetCharacterMovement()->MaxWalkSpeed = 300.0f; // 歩く速度に設定
//
//		//パトロールポイントへ移動
//		if (PatrolPoints.Num() > 0)
//		{
//			//現在のパトロールポイントに移動
//			MoveToLocation(PatrolPoints[CurrentPatrolPointIndex], 5.0f); // 5.0fは停止距離
//
//			//パトロールポイントに到達したかどうかをチェック
//			if (FVector::Dist(ChaserCharacter->GetActorLocation(), PatrolPoints[CurrentPatrolPointIndex]) < 50.0f) // 50.0fは到達距離の閾値
//			{
//				//次のパトロールポイントに切り替え
//				CurrentPatrolPointIndex = (CurrentPatrolPointIndex + 1) % PatrolPoints.Num();
//			}
//		}
//	}
//
//	//プレイヤーを見つけたら追跡
//	if (VRPawn)
//	{
//		MoveToActor(VRPawn, 5.0f); // 5.0fは停止距離
//	}
//	
//}


