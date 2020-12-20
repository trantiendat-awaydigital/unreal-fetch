// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FetchResponse.generated.h"

/**
 * 
 */
UCLASS()
class UNREALFETCHEXAMPLE_API UFetchResponse : public UObject
{
	GENERATED_BODY()
	
	public:
		UPROPERTY(BlueprintReadOnly);
		int32 StatusCode;

		UPROPERTY(BlueprintReadOnly);
		FString ResponseText;
};