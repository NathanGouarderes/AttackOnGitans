// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UFlipbookProviderInterface.generated.h"

/**
 * 
 */
UINTERFACE(MinimalAPI)
class UFlipbookProviderInterface : public UInterface
{
	GENERATED_BODY()
};

class GAME2DCPLUSPLUS_API IFlipbookProviderInterface
{
	GENERATED_BODY()

public:
	virtual class UPaperFlipbookComponent* GetCharacterFlipbook() const = 0;  //La putain de sa mère faut penser à mettre le public sinon c'est en private par défaut
};
