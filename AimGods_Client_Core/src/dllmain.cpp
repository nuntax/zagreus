#include <Windows.h>
#include <Core.hpp>

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
			viewport->ViewportConsole = reinterpret_cast<SDK::UConsole*>(gameplayStatics->SpawnObject(SDK::UConsole::StaticClass(), viewport
			));
			if (!viewport->ViewportConsole)
				core.Log("Failed to spawn console");
		}
		
	});
	core.registerRawEvent("WB_Login_C", "OnLogin_Event", [&](SDK::UObject* obj, SDK::UFunction* func, void* params)
		{
			core.Log("OnLogin_Event called");
			auto LoginData = static_cast<SDK::Params::UWB_Login_C_OnLogin_Event_Params*>(params);
			core.Log(LoginData->Success ? "Success" : "No success");
			if(LoginData->Success)
			{
				core.Log("Logged in as: " + LoginData->AuthData.Username.ToString());
			}
			else
			{
				core.Log("Failed to log in: " + LoginData->AuthError.Message.ToString());
				core.Log("Error Type: " + LoginData->AuthError.Type.ToString());
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