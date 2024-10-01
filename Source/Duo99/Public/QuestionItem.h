#pragma once

#include "CoreMinimal.h"
#include "QuestionItem.generated.h"

UENUM(BlueprintType)
enum class EQuestionItemType : uint8
{
	Picture,
	FinishSentence,
	Listening,
	AssembleSentence
};

/**
 * Support only multiple choice questions for now, no voice input questions
 */
USTRUCT()
struct FQuestionItem : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> Choices;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Answer;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EQuestionItemType Type;

	// Use one or the other for choosing the question
	// Example picture of a cow
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* Texture;

	// Example 
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Prompt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USoundWave* Sound;
};
