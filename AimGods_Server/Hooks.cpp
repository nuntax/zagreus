#include "Hooks.h"
#include <fstream>
#include <iterator>
#include <vector>
#include <unordered_set>
#include <detours/detours.h>
#include <nlohmann/json.hpp>
#include <istream>
#include "Mem.h"
#include "DebugMenu.h"
#include "FunctionQueue.h"
#include "ThreadManager.h"
//SERVER
//SERVER
//SERVER
//SERVER
//SERVER
#define LOG(msg) \
std::cout << __FILE__ << "(" << __LINE__ << "): " << msg << std::endl
typedef void(*tRequestExit) (bool);
typedef void(*tProcessEvent) (SDK::UObject*, SDK::UFunction*, void*);
tProcessEvent rProcessEvent = nullptr;
using json = nlohmann::json;
int MaxPlayers = 3;

void StartMatch()
{
	std::cout << "Starting Match" << std::endl;
	SDK::UWorld* GWorld = SDK::UWorld::GetWorld();
	auto GameMode = static_cast<SDK::ABP_AGGameMode_C*>(GWorld->AuthorityGameMode);
	auto GameStatistics = SDK::UGameplayStatics::GetDefaultObj();
	auto AllPCs = SDK::TArray<SDK::AActor*>();
	GameStatistics->GetAllActorsOfClass(GWorld, SDK::ABP_AGPlayerController_C::StaticClass(), &AllPCs);
	for (int i = 1; i < AllPCs.Num(); i++)
	{
		auto PC = static_cast<SDK::ABP_AGPlayerController_C*>(AllPCs[i]);
		std::cout << "Spawning for PlayerController: " << PC->GetFullName() << std::endl;
		int j = 2;
		if(MaxPlayers == 5)
		{
			j = 3;
		}
		if (i >= j)
		{
			PC->TeamComponent->bIsRedTeam = false;
		}
		else
		{
			PC->TeamComponent->bIsRedTeam = true;
		}
		
	}

	rHandleHasMatchStarted(GameMode);
	rNotifyBeginplay(GWorld->PersistentLevel->WorldSettings);
	for (int i = 1; i < AllPCs.Num(); i++)
	{
		auto PC = static_cast<SDK::ABP_AGPlayerController_C*>(AllPCs[i]);
		
		rRespawnPlayer(GameMode, PC);
	}
	
}

bool CanStartMatch = false;
void SetMatch()
{
	SDK::UWorld* GWorld = SDK::UWorld::GetWorld();
	auto GameMode = static_cast<SDK::ABP_AGGameMode_C*>(GWorld->AuthorityGameMode);
	auto GameStatistics = SDK::UGameplayStatics::GetDefaultObj();
	auto AllPCs = SDK::TArray<SDK::AActor*>();
	GameStatistics->GetAllActorsOfClass(GWorld, SDK::ABP_AGPlayerController_C::StaticClass(), &AllPCs);
	if (AllPCs.Num() == MaxPlayers)
	{
		CanStartMatch = true;
	}
	else
	{
		CanStartMatch = false;
	}
}

DWORD WINAPI PlayerCheckLoop(LPVOID lpParameter)
{
	std::cout << "Waiting for Players" << std::endl;
	bool* destroy = static_cast<bool*>(lpParameter);
	while (true)
	{
		FunctionQueue::AddFunction(SetMatch);
		if (CanStartMatch)
		{
			std::cout << "Players Joined, Starting Match" << std::endl;
			FunctionQueue::AddFunction(StartMatch);
			break;
		}
		Sleep(1000);
	}
	*destroy = true;
	return 0;
}

void InitializeServer()
{
	activateConsole();
	LPSTR workingdir = new CHAR[MAX_PATH];
	GetCurrentDirectoryA(MAX_PATH, workingdir);
	std::string path = workingdir;
	SDK::UWorld* GWorld = SDK::UWorld::GetWorld();
	auto PC = GWorld->OwningGameInstance->LocalPlayers[0]->PlayerController;

	std::ifstream i(path + "\\matchconfig_server.ag", std::ios::binary);

	std::vector<char> buffer(std::istreambuf_iterator<char>(i), {});

	json j = nlohmann::json::from_bson(buffer);
	std::string map = j["map"];
	std::cout << "Map: " << map << std::endl;
	std::wstring map_wstring = std::wstring(map.begin(), map.end());
	std::wstring servercommand = map_wstring + L"?listen?game=BP_AGGameMode.BP_AGGameMode_C";
	MaxPlayers = j["maxplayers"].template get<int>();

	std::cout << "MaxPlayers: " << MaxPlayers << std::endl;
	std::cout << "Map: " << map << std::endl;
	SDK::UGameplayStatics::GetDefaultObj()->SetEnableWorldRendering(GWorld, false);
	PC->LocalTravel(SDK::FString(servercommand.c_str()));
	g_ThreadManager.CreateRoutine(PlayerCheckLoop);
}

static const std::unordered_set<std::string> functionsToSkip = {
	"Waterfall", "Widget", "Camera", "HUD", "Tick", "Anim",
	"UpdateFunc", "WB", "ServerMoveNoBase", "ClientAckGoodMove",
	"UMG", "TextValue", "FloatValue", "ReplicatedWorldTimeSeconds", "CheckTarget", "ServerMoveOld", "OnLanded"
};
bool ShouldLog(const std::string& FunctionName)
{
	for (const auto& substr : functionsToSkip) {
		if (FunctionName.find(substr) != std::string::npos) {
			return false;
		}
	}
	return true;
}
bool bFirst = true;
void hProcessEvent(SDK::UObject* Object, SDK::UFunction* Function, void* Params)
{
	FunctionQueue::ProcessFunctions();
	if (strstr(Function->GetFullName().c_str(), "Function Engine.GameMode.ReadyToEndMatch") && bFirst)
	{
		bFirst = false;
		InitializeServer();
	}

	if (GetAsyncKeyState(VK_CAPITAL) & (1 << 16) && ShouldLog(Function->GetFullName()) || (Hooks::LogProcessEvent && ShouldLog(Function->GetFullName())))
		DebugMenu::console.AddLog("ProcessEvent: %s", Function->GetFullName().c_str());

	return rProcessEvent(Object, Function, Params);
}

void Hooks::HookFunctions()
{
	rProcessEvent = (tProcessEvent)Mem::Scan(GetModuleHandleW(nullptr), reinterpret_cast<const unsigned char*>("\x40\x55\x56\x57\x41\x54\x41\x55\x41\x56\x41\x57\x48\x81\xEC\xF0\x00\x00\x00\x00"), "xxxxxxxxxxxxxxxx????");
	rNotifyBeginplay = (tNotifyBeginplay)Mem::Scan(GetModuleHandleW(nullptr),
		reinterpret_cast<const unsigned char*>("\x40\x55\x53\x48\x8D\x6C\x24\x00\x48\x81\xEC\x00\x00\x00\x00\x48\x8B\x05\x00\x00\x00\x00\x48\x33\xC4\x48\x89\x45\x2F"),
		"xxxxxxx?xxx????xxx????xxxxxxx");
	rHandleHasMatchStarted = (tHandleHasMatchStarted)Mem::Scan(GetModuleHandleW(nullptr),
		reinterpret_cast<const unsigned char*>("\x4C\x8B\xDC\x55\x41\x56\x49\x8D\x6B\xA1\x48\x81\xEC\x00\x00\x00\x00\x48\x8B\x05\x00\x00\x00\x00\x48\x33\xC4\x48\x89\x45\x37\x49\x89\x5B\x10"),
		"xxxxxxxxxxxxx????xxx????xxxxxxxxxxx");
	rRespawnPlayer = (tRespawnPlayer)Mem::Scan(GetModuleHandleW(nullptr),
		reinterpret_cast<const unsigned char*>("\x48\x85\xD2\x0F\x84\x00\x00\x00\x00\x56\x41\x56\x48\x83\xEC\x78"),
		"xxxxx????xxxxxxx");

	std::cout << "rProcessEvent: " << std::hex << rProcessEvent << std::endl;

	DetourTransactionBegin();
	DetourUpdateThread(GetCurrentThread());

	DetourAttach(&(LPVOID&)rProcessEvent, (PVOID)hProcessEvent);

	DetourTransactionCommit();
}