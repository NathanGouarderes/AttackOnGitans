#include "AMyEnemyAIController.h"
#include "MyEnemyBase.h"
#include "NavigationSystem.h"
#include "MyCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AIPerceptionTypes.h"

AAMyEnemyAIController::AAMyEnemyAIController()
{
    BlackboardComponent = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComponent"));
    BehaviorTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorTreeComponent"));

    // AIPerceptionComponent
    PerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("PerceptionComponent"));
    SetPerceptionComponent(*PerceptionComponent);

    // SightConfig
    SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("SightConfig"));
    if (SightConfig)
    {
        SightConfig->SightRadius = 12500.0f;            // Portée de détection
        SightConfig->LoseSightRadius = 22000.0f;        // Portée de perte de vue
        SightConfig->PeripheralVisionAngleDegrees = 190.0f; // Angle de vision
        SightConfig->DetectionByAffiliation.bDetectEnemies = true;
        SightConfig->DetectionByAffiliation.bDetectNeutrals = true;
        SightConfig->DetectionByAffiliation.bDetectFriendlies = true;

        // Attacher le SenseConfig à l'AIPerceptionComponent
        PerceptionComponent->ConfigureSense(*SightConfig);
        PerceptionComponent->SetDominantSense(SightConfig->GetSenseImplementation());
    }

    // Attacher la fonction de détection d'événements
    PerceptionComponent->OnTargetPerceptionUpdated.AddDynamic(this, &AAMyEnemyAIController::OnTargetDetected);
}

void AAMyEnemyAIController::BeginPlay()
{
    Super::BeginPlay();

    // Vérifie et lance le BehaviorTree
    AMyEnemyBase* EnemyBase = Cast<AMyEnemyBase>(GetPawn());
    if (EnemyBase && EnemyBase->BehaviorTree)
    {
        if (UseBlackboard(EnemyBase->BehaviorTree->BlackboardAsset, BlackboardComponent))
        {
            RunBehaviorTree(EnemyBase->BehaviorTree);
            UE_LOG(LogTemp, Warning, TEXT("Behavior Tree lancé."));
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("Échec d'initialisation du Blackboard."));
        }
    }
}

void AAMyEnemyAIController::Tick(float Deltatime)
{
    Super::Tick(Deltatime);
    if (BlackboardComponent->GetValueAsBool("IsPlayerVisible"))
    {
        AActor* PlayerActor = Cast<AActor>(BlackboardComponent->GetValueAsObject("Player"));
        if (PlayerActor)
        {
            FVector NewLocation = PlayerActor->GetActorLocation();
            if (FVector::Dist(OldLocation, NewLocation) > 200.0f)
            {
                BlackboardComponent->SetValueAsVector("CurrentPlayerLocation", PlayerActor->GetActorLocation());
                OldLocation = NewLocation;
                UE_LOG(LogTemp, Warning, TEXT("Mise à jour de CurrentPlayerLocation : %s"), *NewLocation.ToString());
            }
        }
    }
}

void AAMyEnemyAIController::SetNewPatrolLocation()
{
    // Exemple d'implémentation simple
    FVector Origin = GetPawn()->GetActorLocation();
    FVector PatrolLocation;
    UNavigationSystemV1* NavSystem = UNavigationSystemV1::GetCurrent(GetWorld());

    if (NavSystem)
    {
        FNavLocation NavLocation;
        if (NavSystem->GetRandomReachablePointInRadius(Origin, 3000.0f, NavLocation))
        {
            PatrolLocation = NavLocation.Location;
            BlackboardComponent->SetValueAsVector(TEXT("PatrolLocation"), PatrolLocation);
            MoveToLocation(PatrolLocation);

            UE_LOG(LogTemp, Warning, TEXT("Nouvelle position de patrouille : %s"), *PatrolLocation.ToString());
        }
    }
}

void AAMyEnemyAIController::OnTargetDetected(AActor* Actor, FAIStimulus Stimulus)
{
    // Récupérer l'ennemi actuel
    AMyEnemyBase* EnemyBase = Cast<AMyEnemyBase>(GetPawn());
    if (!EnemyBase || !Actor) return;

    // Vérifier si l'Actor est du type joueur (par exemple, AMyCharacter)
    AMyCharacter* PlayerCharacter = Cast<AMyCharacter>(Actor);
    if (!PlayerCharacter)
    {
        //UE_LOG(LogTemp, Warning, TEXT("Ignoré : %s"), *Actor->GetName());
        return; // Ignore tout ce qui n'est pas le joueur
    }

    if (Stimulus.WasSuccessfullySensed())
    {
        UE_LOG(LogTemp, Warning, TEXT("Stimulus reçu : %s, Source: %s"), *Stimulus.Tag.ToString(), *Actor->GetName());
        BlackboardComponent->SetValueAsObject("Player", Actor);
        UE_LOG(LogTemp, Warning, TEXT("Blackboard 'Player' mis à jour avec : %s"), *Actor->GetName());
        BlackboardComponent->SetValueAsBool("IsPlayerVisible", true);

        if (Actor)
        {
            BlackboardComponent->SetValueAsVector("LastKnownPlayerLocation", Actor->GetActorLocation());
            UE_LOG(LogTemp, Warning, TEXT("Mise à jour continue de LastKnownPlayerLocation: %s"), *Actor->GetActorLocation().ToString());
        }
        UE_LOG(LogTemp, Warning, TEXT("Blackboard 'IsPlayerVisible' mis à jour à : true"));

        EnemyBase->OnPlayerDetected(PlayerCharacter, true);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Stimulus perdu : %s, Source: %s"), *Stimulus.Tag.ToString(), *Actor->GetName());
        BlackboardComponent->ClearValue("Player");
        BlackboardComponent->SetValueAsBool("IsPlayerVisible", false);
        if (Actor)
        {
            BlackboardComponent->SetValueAsVector("LastKnownPlayerLocation", Actor->GetActorLocation());
            UE_LOG(LogTemp, Warning, TEXT("Conservation de LastKnownPlayerLocation après perte : %s"), *Actor->GetActorLocation().ToString());
        }
        UE_LOG(LogTemp, Warning, TEXT("Blackboard 'Player' vidé et 'IsPlayerVisible' mis à false"));
        EnemyBase->OnPlayerDetected(PlayerCharacter, false);
    }
}

