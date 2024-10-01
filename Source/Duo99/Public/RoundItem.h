#pragma once

#include "CoreMinimal.h"
#include "RoundItem.generated.h"

USTRUCT(BlueprintType)
struct FRoundItem : public FTableRowBase
{
    GENERATED_BODY()
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 RoundIndex;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float RoundTime;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 PlayersToEndRound;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 QuestionsToPassRound;
};