// Copyright @Marcin Szewczak 2018

#include "Position_Reporter2.h"


// Sets default values for this component's properties
UPosition_Reporter2::UPosition_Reporter2()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPosition_Reporter2::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("Position report reporting for duty on Second Chair!"));
	
}


// Called every frame
void UPosition_Reporter2::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

