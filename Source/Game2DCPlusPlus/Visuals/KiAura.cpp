#include "KiAura.h"
#include "PaperFlipbookComponent.h"
#include "Particles/ParticleSystem.h"
#include "Particles/ParticleSystemComponent.h"

// Sets default values
AKiAura::AKiAura()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    AuraFlipbook = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("AuraFlipbook"));
    RootComponent = AuraFlipbook;

    if (AuraFlipbookAsset)
    {
        AuraFlipbook->SetFlipbook(AuraFlipbookAsset);
        AuraFlipbook->SetLooping(true);
        AuraFlipbook->SetHiddenInGame(true); // Assurez-vous que l'aura est visible
        AuraFlipbook->Stop();
    }

    AuraComponentInstance = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("AuraComponentInstance"));
    AuraComponentInstance->SetupAttachment(RootComponent);
    AuraComponentInstance->SetAutoActivate(false);

}

// Called when the game starts or when spawned
void AKiAura::BeginPlay()
{
    Super::BeginPlay();
    
    // Démarrer l'aura par défaut
    UE_LOG(LogTemp, Warning, TEXT("BeganPlay KiAura"));
    if (!AuraComponentInstance)
    {
        AuraComponentInstance = NewObject<UParticleSystemComponent>(this, TEXT("AuraComponentInstance"));
        if (AuraComponentInstance)
        {
            AuraComponentInstance->SetupAttachment(RootComponent);
            AuraComponentInstance->RegisterComponent(); // Enregistre le composant pour le rendre actif
            UE_LOG(LogTemp, Warning, TEXT("AuraComponentInstance cree dynamiquement dans BeginPlay"));
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("Erreur : AuraComponentInstance n'a pas pu etre cree dans BeginPlay"));
        }
    }

    if (AuraEffect)
    {
        UE_LOG(LogTemp, Warning, TEXT("AuraEffect assigne correctement"));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Erreur : AuraEffect non assigne"));
    }
}

// Called every frame
void AKiAura::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AKiAura::StartAura()
{
    if (AuraFlipbook)
    {
        UE_LOG(LogTemp, Warning, TEXT("StartAura - Displaying Aura"));
        AuraFlipbook->SetHiddenInGame(false); // Assurez-vous que l'aura est visible
        AuraFlipbook->Play();
        AuraFlipbook->SetFlipbook(AuraFlipbookAsset);
    }
    if (AuraChargingSound)
    {
       // UGameplayStatics::PlaySoundAtLocation(this, AuraChargingSound, GetActorLocation());
    }

    if (AuraComponentInstance && AuraEffect)
    {
        AuraComponentInstance->SetTemplate(AuraEffect);
        AuraComponentInstance->ActivateSystem();
        UE_LOG(LogTemp, Warning, TEXT("Particules de l'aura activees"));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Particules non activees : AuraComponentInstance ou AuraEffect est NULL"));
    }
}

void AKiAura::StopAura()
{
    if (AuraFlipbook)
    {
        UE_LOG(LogTemp, Warning, TEXT("StopAura - Hiding Aura"));
        AuraFlipbook->SetHiddenInGame(true);

        AuraFlipbook->Stop();
    }

    if (AuraComponentInstance)
    {
        AuraComponentInstance->DeactivateSystem();
    }
}
