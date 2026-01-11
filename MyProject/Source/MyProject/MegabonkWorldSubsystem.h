#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "MegabonkWorldSubsystem.generated.h"

/**
 * Test world subsystem to handle gamer time & waves

/* Player data structure. This handles all the
basic player-relevant data, such as level, XP, money, etc.
Initialization happens here ATM, ask Julien if it's clean enough.
Since there is always 1 and only player, I'm not enclined to
use a data table.

---x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x---

Enemies will deal damage to the player by asking a setting
to the values of this struct. Moreover, since this is part
of a singleton, we don't have to worry about multiple Player
data structures existing.
*/

USTRUCT(BlueprintType)
struct FMegabonkPlayerData {
	GENERATED_USTRUCT_BODY()
	float CurrentLevel{1};
	int Experience{0};
	int Money{0};
	int Health{50}; // Most classes in Megabonk start with 50 or so HP.

	// Movement
	float BaseSpeed{1};
	float JumpSpeed{1};
	float JumpHeight{1};

	// Attacks
	float BaseAttackRadius{300}; // 300 UE Units equals 3 meters
	float BaseAttackDamageMultiplier{1};

	// Collecting
	float GrabAreaRadius{200};
};


UCLASS()
class MYPROJECT_API UMegabonkWorldSubsystem : public UTickableWorldSubsystem {
	
	GENERATED_BODY()
	
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	virtual void Tick(float DeltaTime) override;
	virtual TStatId GetStatId() const override { return GetStatID(); };
	
public:
	UPROPERTY(BlueprintReadOnly, Category = "Time Management")
	float GameLength; // Maximum game length
	
	UFUNCTION(BlueprintCallable, Category = "Player Data")
	void LevelUp();
	
	UFUNCTION(BlueprintCallable, Category = "Player Data")
	void IncrementExperience(int gainedExperience);
	
	// A few getters to ease interaction w/ ui
	UFUNCTION(BlueprintCallable, Category = "Player Data")
	int GetExperience() const { return _playerData.Experience; }
	
	UFUNCTION(BlueprintCallable, Category = "Player Data")
	int GetRemainingTime() const { return _remainingTime; }
	
	UFUNCTION(BlueprintCallable, Category = "Player Data")
	float GetLevel() const { return _playerData.CurrentLevel; }
	
private:
	float _remainingTime;
	FMegabonkPlayerData _playerData;
};
