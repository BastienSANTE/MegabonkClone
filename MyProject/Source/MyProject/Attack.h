/* Attack class
 * This class is a base for all attacks, containing only the most defining traits
 * 
 */

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Attack.generated.h"

UCLASS()
class MYPROJECT_API AAttack : public AActor
{
	GENERATED_BODY()
	
public:	
	AAttack();
	
	USceneComponent *AttackSceneComponent;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere);
	float Cooldown; // Default attack cooldown time
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere);
	float Radius;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere);
	float Damage;
	
	/*VISUALS*/
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere);
	USkeletalMeshComponent* AttackMeshComponent;

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
};
