#include "Hooks.h"

#include <detours/detours.h>

#include <fstream>
#include <iterator>
#include <nlohmann/json.hpp>
#include <vector>

#include "FunctionQueue.h"
#include "Mem.h"
// CLIENT
// CLIENT
// CLIENT
// CLIENT
// CLIENT
// CLIENT
typedef void (*tProcessEvent)(SDK::UObject *, SDK::UFunction *, void *);
tProcessEvent rProcessEvent = nullptr;
using json = nlohmann::json;

void JoinServer(const char *ip) {
  SDK::UWorld *GWorld = SDK::UWorld::GetWorld();
  auto PC = GWorld->OwningGameInstance->LocalPlayers[0]->PlayerController;
  // convert ip to wstring
  std::wstring ip_wstring = std::wstring(ip, ip + strlen(ip));
  SDK::FString ip_fstring = ip_wstring.c_str();
  PC->ClientTravel(ip_fstring, SDK::ETravelType::TRAVEL_Absolute, false,
                   SDK::FGuid());
}

void InitClientAndConnect() {
  LPSTR workingdir = new CHAR[MAX_PATH];
  GetCurrentDirectoryA(MAX_PATH, workingdir);
  std::string path = workingdir;
  std::cout << "Current working directory: " << path << std::endl;
  std::ifstream i(path + "\\matchconfig.ag", std::ios::binary);

  std::vector<char> buffer(std::istreambuf_iterator<char>(i), {});

  json j = json::from_bson(buffer);
  std::string ip = j["serverip"];
  std::string usernamefrombson = j["username"];
  std::cout << "Server IP: " << ip << std::endl;
  std::cout << "Username: " << usernamefrombson << std::endl;
  std::wstring username =
      std::wstring(usernamefrombson.begin(), usernamefrombson.end());
  auto GWorld = SDK::UWorld::GetWorld();
  auto Instance =
      static_cast<SDK::UBP_AGGameInstance_C *>(GWorld->OwningGameInstance);
  Instance->Username = username.c_str();
  JoinServer(ip.c_str());
}

bool bIsFirstTime = true;
void hProcessEvent(SDK::UObject *Object, SDK::UFunction *Function,
                   void *Params) {
  FunctionQueue::ProcessFunctions();
  if (strstr(Function->GetFullName().c_str(),
             "Function Engine.GameMode.ReadyToEndMatch") &&
      bIsFirstTime) {
    InitClientAndConnect();
    bIsFirstTime = false;
  }
  return rProcessEvent(Object, Function, Params);
}

void Hooks::HookFunctions() {
  rProcessEvent =
      (tProcessEvent)Mem::Scan(GetModuleHandleW(nullptr),
                               reinterpret_cast<const unsigned char *>(
                                   "\x40\x55\x56\x57\x41\x54\x41\x55\x41\x56"
                                   "\x41\x57\x48\x81\xEC\xF0\x00\x00\x00\x00"),
                               "xxxxxxxxxxxxxxxx????");
  std::cout << "rProcessEvent: " << rProcessEvent << std::endl;

  DetourTransactionBegin();
  DetourUpdateThread(GetCurrentThread());

  DetourAttach(&(LPVOID &)rProcessEvent, (PVOID)hProcessEvent);

  DetourTransactionCommit();
}