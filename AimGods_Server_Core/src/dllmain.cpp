#include <Windows.h>
#include "Core.hpp"

std::string wchar2string(const wchar_t* str)
{
    std::string mystring;
    while (*str)
        mystring += (char)*str++;
    return  mystring;
}

DWORD WINAPI Main(LPVOID lpReserved)
{
    Zagreus::Core& core = Zagreus::Core::getCore();
    core.registerManagedEvent(Zagreus::eventType::GAME_INITIALIZED, [&](SDK::UObject* obj, SDK::UFunction* func, void* params) {
            core.Log("Game Initialized");
            SDK::InitGObjects();
            SDK::UGameEngine* engine = SDK::UGameEngine::GetEngine();
            SDK::UGameplayStatics* gameplayStatics = SDK::UGameplayStatics::GetDefaultObj();
            SDK::UGameViewportClient* viewport = engine->GameViewport;
            if (!viewport->ViewportConsole) {
                core.Log("Spawning console");
                viewport->ViewportConsole = static_cast<SDK::UConsole*>(gameplayStatics->SpawnObject(SDK::UConsole::StaticClass(), viewport));
                if (!viewport->ViewportConsole)
                    core.Log("Failed to spawn console");
            }
            /*SDK::UWorld* GWorld = SDK::UWorld::GetWorld();
            auto PC = GWorld->OwningGameInstance->LocalPlayers[0]->PlayerController;
            auto args_str = GetCommandLineW();
            auto argc = 3;
            auto args = CommandLineToArgvW(args_str, &argc);
            wchar_t* map = args[2];
            auto connection_string = L"?listen?game=AimGods.BP_AGGameMode_C";
            map = wcscat(map, connection_string);
            core.Log("Connection string: " + wchar2string(map));
            PC->LocalTravel(SDK::FString(map));*/
    });
	 core.registerRawEvent("GameMode", "ReadyToEndMatch", [&](SDK::UObject* obj, SDK::UFunction* func, void* params)
	 {
	     SDK::UWorld* GWorld = SDK::UWorld::GetWorld();
	     SDK::APlayerController* PC = GWorld->OwningGameInstance->LocalPlayers[0]->PlayerController;
	     wchar_t* args_str = GetCommandLineW();
	     int argc = 3;
	     wchar_t** args = CommandLineToArgvW(args_str, &argc);
	     wchar_t* map = args[2];
	     const wchar_t* connection_string = L"?listen?game=AimGods.BP_AGGameMode_C";
	     map = wcscat(map, connection_string);
	     core.Log("Connection string: " + wchar2string(map));
	 	 PC->LocalTravel(SDK::FString(map));
	 });
	core.registerRawEvent("WB_RespawnScreen_C", "OnInitialized", [&](auto obj, auto func, auto params)
	{
		SDK::UWorld* GWorld = SDK::UWorld::GetWorld();
		auto GameInstance = reinterpret_cast<SDK::UBP_AGGameInstance_C*>(GWorld->OwningGameInstance);
		GameInstance->DebugRemovePlayer(0);
	});
	return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(0, 0, Main, hModule, 0, nullptr);
        break;
    case DLL_PROCESS_DETACH:
        // Code to run when the DLL is unloaded
        break;
    }
    return TRUE;
}