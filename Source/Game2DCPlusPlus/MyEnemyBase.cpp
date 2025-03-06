#include "MyEnemyBase.h"
#include "Engine/DamageEvents.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "PaperFlipbookComponent.h"
#include "GameFramework/DamageType.h"
#include "FireDamageType.h"


// Sets default values
AMyEnemyBase::AMyEnemyBase()
{
    PrimaryActorTick.bCanEverTick = true;

    // Capsule Component (root)
    //GetCapsuleComponent()->InitCapsuleSize(42.0f, 96.0f);
        GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
        GetCapsuleComponent()->SetCollisionObjectType(ECC_Pawn); // Définit le Pawn comme type d'objet
        GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_Pawn, ECR_Block);
        GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_GameTraceChannel1, ECR_Overlap); // Collision avec projectiles
        RootComponent = GetCapsuleComponent();

    // PaperFlipbook
    EnemyFlipbook = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("EnemyFlipbook"));
    EnemyFlipbook->SetupAttachment(RootComponent);
    EnemyFlipbook->SetCollisionEnabled(ECollisionEnabled::NoCollision); // Pas de collision pour le flipbook

    GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    GetCapsuleComponent()->SetSimulatePhysics(false); //Active la PUTAIN de gravité
    GetCapsuleComponent()->SetEnableGravity(true);

    //Contrainte sur la profondeur (Y)
    GetCharacterMovement()->bConstrainToPlane = true;
    GetCharacterMovement()->SetPlaneConstraintAxisSetting(EPlaneConstraintAxisSetting::Y);
    GetCharacterMovement()->bOrientRotationToMovement = false;
    GetCapsuleComponent()->BodyInstance.bLockRotation = true;
    GetCapsuleComponent()->BodyInstance.bLockXRotation = true;
    GetCapsuleComponent()->BodyInstance.bLockYRotation = true;
    GetCapsuleComponent()->BodyInstance.bLockZRotation = true;
    EnemyFlipbook->SetWorldRotation(FRotator(0.0f, 0.0f, 0.0f));

    AIControllerClass = AAMyEnemyAIController::StaticClass();
    AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

    // Initialiser les variables
    Health = 100.0f;
    MoveSpeed = 300.0f;
}

// Called when the game starts or when spawned
void AMyEnemyBase::BeginPlay()
{
    Super::BeginPlay();
    GetCharacterMovement()->SetMovementMode(MOVE_Walking); // S'assurer que l'ennemi est en mode chute
    GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &AMyEnemyBase::OnOverlapBegin);
    
    GetCharacterMovement()->MaxWalkSpeed = 300.0f;

    if (AIControllerClass)
    {
        UE_LOG(LogTemp, Warning, TEXT("AI Controller correctly initialized"));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("AI Controller doesn't work"));
    }
}

// Called every frame
void AMyEnemyBase::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    FVector BoxExtentHead(25.0f, 10.0f, 5.0f);  // Taille de la boîte pour la tête
    FVector BoxExtentTorso(25.0f, 10.0f, 8.0f); // Taille de la boîte pour le torse
    FVector BoxExtentLegs(25.0f, 10.0f, 10.0f);  // Taille de la boîte pour les jambes

    FVector HeadLocation = EnemyFlipbook->GetComponentLocation() + FVector(0.0f, 0.0f, 18.0f);
    FVector TorsoLocation = EnemyFlipbook->GetComponentLocation() + FVector(0.0f, 0.0f, 0.0f);
    FVector LegsLocation = EnemyFlipbook->GetComponentLocation() + FVector(0.0f, 0.0f, -15.0f);

    // Dessiner les zones
    DrawDebugBox(GetWorld(), HeadLocation, BoxExtentHead, FColor::Red, false, -1.0f, 0, 2.0f); // Tête en rouge
    DrawDebugBox(GetWorld(), TorsoLocation, BoxExtentTorso, FColor::Green, false, -1.0f, 0, 2.0f); // Torse en vert
    DrawDebugBox(GetWorld(), LegsLocation, BoxExtentLegs, FColor::Blue, false, -1.0f, 0, 2.0f); // Jambes en bleu

    FVector currentLocation = GetActorLocation();
    FRotator currentRotation = GetActorRotation();
    if (FMath::Abs(currentLocation.Y) > KINDA_SMALL_NUMBER)
    {
        currentLocation.Y = 0.0f;
        SetActorLocation(currentLocation);
    }
    if (FMath::Abs(currentRotation.Yaw) > KINDA_SMALL_NUMBER)
    {
        currentRotation.Yaw = 0.0f;
        SetActorRotation(currentRotation);
    }

    FVector Velocity = GetCharacterMovement()->Velocity;
    FRotator NewRotation = Velocity.Rotation();
    SetActorRotation(FRotator(0.0f, NewRotation.Yaw, 0.0f));

    FVector CurrentLocation = GetActorLocation();
    FRotator CurrentRotation = GetActorRotation();
    CurrentLocation.Y = 0.0f;
    SetActorLocation(CurrentLocation);
    SetActorRotation(FRotator(0.0f, CurrentRotation.Yaw, 0.0f));

}

float AMyEnemyBase::TakeDamage(float DamageAmount, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
    const UDamageType* DamageType = nullptr;

    if (DamageEvent.DamageTypeClass)
    {
        DamageType = DamageEvent.DamageTypeClass->GetDefaultObject<UDamageType>();
    }

    if (DamageType && DamageType->IsA(UFireDamageType::StaticClass()))
    {
        UE_LOG(LogTemp, Warning, TEXT("L'ennemi Brûle"));
        int fireDamage = 1;
        for (int i = 0; i < 12; i++)
        {
            Health -= fireDamage;
            UE_LOG(LogTemp, Warning, TEXT("Vie : %d"), Health);

        }
    }
    UE_LOG(LogTemp, Warning, TEXT("Dommages infligés : %f"), DamageAmount);
    Health -= DamageAmount;
    UE_LOG(LogTemp, Warning, TEXT("Vie : %d"), Health);

    

    /*
    if (DamageCauser)
    {
        FRotator DamageCauserRotation = DamageCauser->GetActorRotation();
        UE_LOG(LogTemp, Warning, TEXT("Rotation du joueur Yaw : %f, Pitch : %f, Roll : %f"), DamageCauserRotation.Yaw, DamageCauserRotation.Pitch, DamageCauserRotation.Roll);

        FVector KnockbackDiretion = (GetActorLocation() - DamageCauser->GetActorLocation().GetSafeNormal());
        FVector knockbackImpulse = (KnockbackDiretion + FVector(0.001f, 0.0f, 0.5f)) * 0.2;
        GetCapsuleComponent()->AddImpulse(knockbackImpulse, NAME_None, true);
        UE_LOG(LogTemp, Warning, TEXT("L'ennemi est déplacé vers x: %f, y: %f, z: %f"), knockbackImpulse.X, knockbackImpulse.Y, knockbackImpulse.Z);
        knockbackImpulse = FVector(0.0f, 0.0f, 0.0f);
    }
    */
    



    if (Health <= 0)
    {
        Die(); 
    }

    return DamageAmount;
}

void AMyEnemyBase::OnPlayerDetected(APawn* Player, bool bIsVisible)
{
    if (bIsVisible)
    {
        UE_LOG(LogTemp, Warning, TEXT("Player detected by %s"), *GetName());
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Player lost by %s"), *GetName());
    }
}

void AMyEnemyBase::DealDamages(float DamageAmount)
{
    // Logique de gestion des dommages
    UE_LOG(LogTemp, Warning, TEXT("Dommages infligés : %f"), DamageAmount);
}

void AMyEnemyBase::Die()
{
    // Logique de mort de l'ennemi
    UE_LOG(LogTemp, Warning, TEXT("L'ennemi est mort !"));
    Destroy(); // Détruire l'acteur
}

void AMyEnemyBase::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{


    FVector LocalImpactPosition = EnemyFlipbook->GetComponentTransform().InverseTransformPosition(SweepResult.Location);
    if (LocalImpactPosition.Z > 18.0f)
    {
        UE_LOG(LogTemp, Warning, TEXT("Impact : Tête !"));
    }
    if (LocalImpactPosition.Z > 0.0f && LocalImpactPosition.Z < 18.0f)
    {
        UE_LOG(LogTemp, Warning, TEXT("Impact : Torse !"));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Impact : Jambes !"));

    }
    
    // Logique lors de la collision avec un autre acteur
    //UE_LOG(LogTemp, Warning, TEXT("Collision détectée avec un autre acteur !"));
    if (OtherActor && (OtherActor != this) && OtherComp)
    {
        AMyProjectileBase* projectile = Cast<AMyProjectileBase>(OtherActor);
        if (projectile)
        {
            UE_LOG(LogTemp, Warning, TEXT("Vie actuelle : %d"), Health);
            FPointDamageEvent DamageEvent;
            DamageEvent.DamageTypeClass = UFireDamageType::StaticClass();
            TakeDamage(projectile->Damage, DamageEvent, nullptr, projectile);
               
            UE_LOG(LogTemp, Warning, TEXT("Vie actuelle : %d"), Health);
            projectile->Destroy();
        }
        else
        {
           // UE_LOG(LogTemp, Warning, TEXT("Collision avec un autre acteur : %s"), *OtherActor->GetName());
        }
    }
}

