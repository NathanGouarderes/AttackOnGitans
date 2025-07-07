/*
#include "MyWeaponBase.h"
#include "PaperFlipbook.h"

AMyWeaponBase::AMyWeaponBase()
{
    PrimaryActorTick.bCanEverTick = false;

    WeaponFlipbookComponent = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("WeaponFlipbook"));
    WeaponFlipbookComponent->SetupAttachment(RootComponent);

    WeaponHitbox = CreateDefaultSubobject<UBoxComponent>(TEXT("WeaponHitbox"));
    WeaponHitbox->SetupAttachment(WeaponFlipbookComponent);
    WeaponHitbox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    WeaponHitbox->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
    WeaponHitbox->SetNotifyRigidBodyCollision(true);


    static ConstructorHelpers::FObjectFinder<UDataTable> AnimDataTable(TEXT("/Game/MyBluePrints/DT_WeaponAnimation"));
    if (AnimDataTable.Succeeded())
    {
        AttackAnimations = AnimDataTable.Object;
        //UE_LOG(LogTemp, Warning, TEXT("✅ AttackAnimations assignée dynamiquement !"));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("❌ Impossible de charger DataTableWeaponAttackAnimations ! Vérifie le chemin."));
    }
}

void AMyWeaponBase::BeginPlay()
{
    Super::BeginPlay();
    //GetAttackAnimation(1);

}



// ✅ Implémentation de Tick()
void AMyWeaponBase::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

// ✅ Implémentation de GetWeaponHitboxLocation()
FVector AMyWeaponBase::GetWeaponHitboxLocation() const
{
    return GetActorLocation(); // Retourne la position actuelle de l'arme (modifiable si besoin)
}

UPaperFlipbook* AMyWeaponBase::GetAttackAnimation(int32 AttackStep)
{
    if (!AttackAnimations)
    {
        UE_LOG(LogTemp, Error, TEXT("❌ AttackAnimations DataTable est NULL !"));
        return nullptr;

    }
    else
    {
       // UE_LOG(LogTemp, Warning, TEXT("✅ AttackAnimations DataTable chargée avec succès !"));

        FString RowName = FString::Printf(TEXT("Attack_%d"), AttackStep);
       // UE_LOG(LogTemp, Warning, TEXT("🔍 Recherche de la ligne : %s"), *RowName);

        //UE_LOG(LogTemp, Warning, TEXT("DT Structure Type : %s"), *AttackAnimations->RowStruct->GetName());
        // Vérifier toutes les lignes de la DataTable
        FWeaponAnimationRow* Row = AttackAnimations->FindRow<FWeaponAnimationRow>(*RowName, TEXT("Lookup AttackAnimation"), true);

        if (Row)
        {
            //UE_LOG(LogTemp, Warning, TEXT("✅ Animation trouvée pour %s"), *RowName);
            if (Row->AttackAnimation)
            {
                //UE_LOG(LogTemp, Warning, TEXT("🎞️ Flipbook trouvé : %s"), *Row->AttackAnimation->GetName());
                //eaponFlipbookComponent->SetFlipbook(Row->AttackAnimation);
                //WeaponFlipbookComponent->PlayFromStart();
            }
            else
            {
                UE_LOG(LogTemp, Error, TEXT("❌ Flipbook NULL dans la ligne %s"), *RowName);
            }

            UE_LOG(LogTemp, Warning, TEXT("💥 Dégâts de l'attaque : %f"), Row->AttackDamage);
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("❌ Aucune animation trouvée pour AttackStep: %d"), AttackStep);
        }

        UE_LOG(LogTemp, Warning, TEXT("🔍 Recherche de la ligne : %s"), *RowName);

    TArray<FName> RowNames = AttackAnimations->GetRowNames();
    for (const FName& Name : RowNames)
    {
        //UE_LOG(LogTemp, Warning, TEXT("📌 Ligne trouvée dans DataTable : %s"), *Name.ToString());
    }

            if (Row)
            {
                //UE_LOG(LogTemp, Warning, TEXT("✅ Animation trouvée : %s"), *RowName);
                return Row->AttackAnimation;
            }
            else
            {
                UE_LOG(LogTemp, Error, TEXT("❌ Aucune animation trouvée pour AttackStep: %d"), AttackStep);
                return nullptr;
            }
    }

}

FWeaponAnimationRow* AMyWeaponBase::GetAttackRow(int32 ComboStep)
{
    if (!AttackAnimations)
    {
        UE_LOG(LogTemp, Warning, TEXT("AttackAniamtion vide dans GetAttackRow."));
        return nullptr;
    }

    FString RowName = FString::Printf(TEXT("Attack_%d"), ComboStep);
    return AttackAnimations->FindRow<FWeaponAnimationRow>(*RowName, TEXT("GetAttackRow"), true);

}

void AMyWeaponBase::PrintDataTableContent()
{
    if (!AttackAnimations)
    {
        UE_LOG(LogTemp, Error, TEXT("❌ AttackAnimations DataTable est NULL !"));
        return;
    }

    TArray<FName> RowNames = AttackAnimations->GetRowNames();
    for (const FName& Name : RowNames)
    {
        //UE_LOG(LogTemp, Warning, TEXT("📌 Ligne trouvée dans DataTable : %s"), *Name.ToString());
    }
}




*/