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
            "AIModule",
            "GameplayTasks",
            "NavigationSystem",
            "Niagara"
        });

        PublicIncludePaths.AddRange(new string[] {
            "Game2DCPlusPlus/Enemies",
            "Game2DCPlusPlus/Components",
            "Game2DCPlusPlus/Abilities",
            "Game2DCPlusPlus/Tasks"
        });

        PrivateDependencyModuleNames.AddRange(new string[] { });
    }
}
