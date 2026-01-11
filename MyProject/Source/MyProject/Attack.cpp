// Fill out your copyright notice in the Description page of Project Settings.


#include "Attack.h"

// Sets default values
AAttack::AAttack()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	AttackSceneComponent = CreateDefaultSubobject<USceneComponent>("Attack Scene Component");
	AttackSceneComponent->RegisterComponent();
	
	AttackMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>("Attack Skeletal Mesh");
	AttackMeshComponent->RegisterComponent();
	AttackMeshComponent->AttachToComponent(AttackSceneComponent, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called when the game starts or when spawned
void AAttack::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAttack::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

