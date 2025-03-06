#include "JordanCharacter.h"
#include "PaperFlipbookComponent.h"
#include "CharacterCombatComponent.h"

// Constructor
AJordanCharacter::AJordanCharacter()
{
	// D�finir ici des valeurs sp�cifiques � Jordan, comme les animations de base.
	
}

// Appel� au d�but du jeu
void AJordanCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (!CombatComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("JordanCharacter: CombatComponent est NULL !"));
	}

}

// Appel� chaque frame
void AJordanCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Ajout d'�l�ments propres � Jordan, comme des effets visuels sp�cifiques.
}

// Red�finition de l'attaque pour Jordan
void AJordanCharacter::LightAttack()
{
	// Appel de l'attaque g�n�rique dans la classe parent
	if (!CombatComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("JordanCharacter: Impossible d'executer LightAttack, CombatComponent est NULL !"));
		return;
	}

	CombatComponent->LightAttack();
}
