// Copyright @Marcin Szewczak 2018

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/TriggerVolume.h"
#include "OpenDoor.generated.h"




UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYPROJECT_API UOpenDoor : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UOpenDoor();
	void OpenDoor();
	void CloseDoor();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	UPROPERTY(EditAnywhere)
		float OpenAngle = -90.f;
	UPROPERTY(EditAnywhere)
		ATriggerVolume* PressurePlate;
	UPROPERTY(EditAnywhere)
		float DoorCloseDelay = 1.f;
	float LastDoorOpenTime;
	UPROPERTY(VisibleAnywhere)
		AActor* ActorThatOpens;
	AActor* Owner;

	
};
