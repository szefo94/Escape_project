// Copyright @Marcin Szewczak 2018

#pragma once

#include "CoreMinimal.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "Components/ActorComponent.h"
#include "Components/InputComponent.h"
#include "DrawDebugHelpers.h"
#include "Grabber.generated.h"




UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MYPROJECT_API UGrabber : public UActorComponent
{
GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGrabber();
	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;


private:
	//Ray-cast and grab whats in reach
	void Grab();
	//Called when Grab key is released
	void Release();
	//range of reach in cm (default set to 100)
	float Reach = 100.f;
	//returns current end of reach line
	FVector GetReachLineEnd();
	//returns current start of reach line
	FVector GetReachLineStart();

	UPhysicsHandleComponent *PhysicsHandle = nullptr;

	UInputComponent *InputComponent = nullptr;

	//find attached physics
	void FindPhysicsHandleComponent();

	//setup attached (assumed) input component
	void SetupInputComponent();

	//return hit for first physics bodi in reach
	const FHitResult GetFirstPhysicsBodyInReach();
};
