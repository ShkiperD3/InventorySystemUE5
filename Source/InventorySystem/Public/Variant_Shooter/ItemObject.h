// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ItemData.h"
#include "ItemObject.generated.h"

UCLASS(BlueprintType)
class INVENTORYSYSTEM_API UItemObject : public UObject
{
    GENERATED_BODY()

public:

    UPROPERTY(BlueprintReadWrite)
    FItemData Data;
};

