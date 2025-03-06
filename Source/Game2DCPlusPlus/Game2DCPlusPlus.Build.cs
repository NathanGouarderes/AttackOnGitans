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
            "Paper2D",
            "AIModule",
            "GameplayTasks",
            "NavigationSystem"
        });

        PrivateDependencyModuleNames.AddRange(new string[] { });
    }
}
