// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MarsSimulationHUD.generated.h"

UCLASS()
class AMarsSimulationHUD : public AHUD
{
	GENERATED_BODY()

public:
	AMarsSimulationHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

