/*


#include "MySword.h"

AMySword::AMySword()
{
	WeaponName = "Epee";
	AttackRange = 120.0f;
	Damage = 20.0f;
	AttackSpeed = 0.6f;
	MaxCombo = 3;

	static ConstructorHelpers::FObjectFinder<UDataTable> AttackAnimData(TEXT("/Game/MyBluePrints/DataTableWeaponAttackAnimations.DataTableWeaponAttackAnimations"));
	if (AttackAnimData.Succeeded())
	{
		AttackAnimations = AttackAnimData.Object;
		//UE_LOG(LogTemp, Warning, TEXT("✅ DataTableWeaponAttackAnimations chargée avec succès !"));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("❌ Impossible de charger DataTableWeaponAttackAnimations ! Vérifiez le chemin."));
	}

}

FVector AMySword::GetWeaponHitboxLocation() const
{
	return GetActorLocation() + FVector(AttackRange, 0.0f, 0.0f);
}
*/