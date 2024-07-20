#include <Windows.h>
#include <Mem.hpp>

#include "Core.hpp"


DWORD WINAPI Main(LPVOID lpReserved)
{
    Zagreus::Core& core = Zagreus::Core::getCore();
    core.registerEvent(Zagreus::eventType::GAME_INITIALIZED, [&]() {
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