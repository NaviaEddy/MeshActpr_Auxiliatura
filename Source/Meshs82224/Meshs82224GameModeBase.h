// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Meshs82224GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class MESHS82224_API AMeshs82224GameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	AMeshs82224GameModeBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	class ALadrillo* brick;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
};
