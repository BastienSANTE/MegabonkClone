#include "MegabonkWorldSubsystem.h"

void UMegabonkWorldSubsystem::Initialize(FSubsystemCollectionBase& Collection) {
	Super::Initialize(Collection);
	UE_LOG(LogTemp, Warning, TEXT("Initialized Megabonk World Subsystem"));
}

void UMegabonkWorldSubsystem::Deinitialize() {
	UE_LOG(LogTemp, Warning, TEXT("Deinitialized Megabonk World Subsystem"));
}

void UMegabonkWorldSubsystem::Tick(float DeltaTime) {
	_remainingTime += DeltaTime;
}

void UMegabonkWorldSubsystem::LevelUp() {
	_playerData.CurrentLevel++;
	return;
}

void UMegabonkWorldSubsystem::IncrementExperience(int gainedExperience) {
	_playerData.Experience += gainedExperience;
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Blue, FString::FromInt(_playerData.Experience));
}
