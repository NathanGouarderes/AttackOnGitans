using UnrealBuildTool;

public class Game2DCPlusPlus : ModuleRules
{
    public Game2DCPlusPlus(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "UMG", //Ajout à la main
            "Paper2D",
            "PaperZD", // pour les animation type 3D
            "AIModule",
            "GameplayTasks",
            "NavigationSystem"
        });

        PublicIncludePaths.AddRange(new string[] {
            "PaperZD/Public/AnimSequences",
            "Game2DCPlusPlus/Enemies",
            "Game2DCPlusPlus/Components",
            "Game2DCPlusPlus/Abilities",
            "Game2DCPlusPlus/Tasks"
        });

        PrivateDependencyModuleNames.AddRange(new string[] { });
    }
}
