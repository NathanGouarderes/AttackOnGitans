// Fill out your copyright notice in the Description page of Project Settings.


#include "MyProjectileBase.h"
#include "Particles/ParticleSystem.h"
#include "Particles/ParticleSystemComponent.h"
#include "GameFramework/DamageType.h"    // Pour UDamageType
#include "Engine/DamageEvents.h"
#include "Kismet/GameplayStatics.h"
#include "FireDamageType.h"
#include "Components/SphereComponent.h"
#include "Components/CapsuleComponent.h"


// Sets default values
AMyProjectileBase::AMyProjectileBase()
{
	PrimaryActorTick.bCanEverTick = true;

	// Création du composant de collision (sphère)
	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	CollisionComponent->InitSphereRadius(50);

	// Activer la simulation physique
	CollisionComponent->SetSimulatePhysics(false);
	// Activer la collision pour la physique
	CollisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	CollisionComponent->SetCollisionProfileName(TEXT("BlockAllDynamic"));
	CollisionComponent->SetNotifyRigidBodyCollision(true);  // Active la notification de collision

	// Bind l'événement OnHit
	CollisionComponent->OnComponentHit.AddDynamic(this, &AMyProjectileBase::OnHit);

	RootComponent = CollisionComponent;

	Speed = 900.0f;
	Damage = 25.0f;
	LifeSpan = 100.0f;

	SetLifeSpan(LifeSpan);
}


// Called when the game starts or when spawned
void AMyProjectileBase::BeginPlay()
{
	Super::BeginPlay();

	if (!UparticleSystemInstance)
	{
		UparticleSystemInstance = NewObject<UParticleSystemComponent>(this, TEXT("UparticleSystemInstance"));
		if (UparticleSystemInstance)
		{
			UparticleSystemInstance->SetupAttachment(RootComponent);
			UparticleSystemInstance->RegisterComponent();
		}
	}
	
}

// Called every frame
void AMyProjectileBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	SetActorLocation(GetActorLocation() + (Direction * Speed * DeltaTime));
}

void AMyProjectileBase::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
	bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		UE_LOG(LogTemp, Warning, TEXT("Je suis un projectile et j'ai touché %s"), *OtherActor->GetName());
		//Destroy();
	}
}

void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, FVector NormalImpulse,
	const FHitResult& Hit)
{
	UE_LOG(LogTemp, Warning, TEXT("Je suis un projectile et j'ai touché %s en OnHit"), *OtherActor->GetName());
}

void AMyProjectileBase::Initialize(FVector FireDirection)
{
	Direction = FireDirection;
	if (UparticleSystemInstance && UparticleEffect)
	{
		UparticleSystemInstance->SetTemplate(UparticleEffect);
		UparticleSystemInstance->ActivateSystem();
		UE_LOG(LogTemp, Warning, TEXT("Particules du projectile activees"));

	}
}

void AMyProjectileBase::DealDamages()
{
	UE_LOG(LogTemp, Warning, TEXT("Inflige des dégâts de %f"), Damage);
}

void AMyProjectileBase::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
	UE_LOG(LogTemp, Warning, TEXT("Projectile touche un truc"));
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		UE_LOG(LogTemp, Warning, TEXT("Projectile a touché %s"), *OtherActor->GetName());
		FDamageEvent DamageEvent(UFireDamageType::StaticClass());
		UGameplayStatics::ApplyDamage(OtherActor, Damage, nullptr, this, DamageEvent.DamageTypeClass);
		Destroy();
	}
}

