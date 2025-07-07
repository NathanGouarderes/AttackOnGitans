#include "JordanCharacter.h"
#include "PaperFlipbookComponent.h"
#include "CharacterCombatComponent.h"

// Constructor
AJordanCharacter::AJordanCharacter()
{
	// Définir ici des valeurs spécifiques à Jordan, comme les animations de base.
	
}

// Appelé au début du jeu
void AJordanCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (!CombatComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("JordanCharacter: CombatComponent est NULL !"));
	}

}

// Appelé chaque frame
void AJordanCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Ajout d'éléments propres à Jordan, comme des effets visuels spécifiques.
}

// Redéfinition de l'attaque pour Jordan
void AJordanCharacter::LightAttack()
{
	// Appel de l'attaque générique dans la classe parent
	if (!CombatComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("JordanCharacter: Impossible d'executer LightAttack, CombatComponent est NULL !"));
		return;
	}

	CombatComponent->LightAttack();
}
