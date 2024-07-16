#include "DebugMenu.h"

#include "FunctionQueue.h"
#include "Globals.h"
#include "Hooks.h"
#include "SDK.hpp"

namespace DebugMenu {
static char ip[16] = "";

void JoinServer() {
  SDK::UWorld *GWorld = SDK::UWorld::GetWorld();
  auto PC = GWorld->OwningGameInstance->LocalPlayers[0]->PlayerController;
  // convert ip to wstring
  std::wstring ip_wstring = std::wstring(ip, ip + strlen(ip));
  SDK::FString ip_fstring = ip_wstring.c_str();
  PC->ClientTravel(ip_fstring, SDK::ETravelType::TRAVEL_Absolute, false,
                   SDK::FGuid());
}
void Render() {
  console.Draw("Debug Console", nullptr);
  if (globals.renderDebugMenu) {
    ImGui::Begin("AimGods in 2023");
    if (ImGui::Button("JoinServer")) {
      FunctionQueue::AddFunction(JoinServer);
    }
    ImGui::SameLine();
    ImGui::InputText("IP", ip, IM_ARRAYSIZE(ip));
    if (ImGui::Button("DispatchBeginPlay")) {
      FunctionQueue::AddFunction([]() {
        SDK::UWorld *GWorld = SDK::UWorld::GetWorld();
        auto GameMode =
            static_cast<SDK::ABP_AGGameMode_C *>(GWorld->AuthorityGameMode);
        auto GameStatistics = SDK::UGameplayStatics::GetDefaultObj();
        auto AllPCs = SDK::TArray<SDK::AActor *>();
        GameStatistics->GetAllActorsOfClass(
            GWorld, SDK::ABP_AGPlayerController_C::StaticClass(), &AllPCs);
        for (int i = 1; i < AllPCs.Num(); i++) {
          auto PC = static_cast<SDK::ABP_AGPlayerController_C *>(AllPCs[i]);
          console.AddLog("Spawning for PlayerController: %s",
                         PC->GetFullName().c_str());
          if (i >= 2) {
            PC->TeamComponent->bIsRedTeam = false;
          } else {
            PC->TeamComponent->bIsRedTeam = true;
          }
          console.AddLog("1Player's Team: %s",
                         PC->TeamComponent->bIsRedTeam ? "Red" : "Blue");
        }
        rHandleHasMatchStarted(GameMode);
        rNotifyBeginplay(GWorld->PersistentLevel->WorldSettings);
        for (int i = 1; i < AllPCs.Num(); i++) {
          auto PC = static_cast<SDK::ABP_AGPlayerController_C *>(AllPCs[i]);
          console.AddLog("Spawning for PlayerController: %s",
                         PC->GetFullName().c_str());
          console.AddLog("Player's Team: %s",
                         PC->TeamComponent->bIsRedTeam ? "Red" : "Blue");
          rRespawnPlayer(GameMode, PC);
        }
        GameStatistics->SetEnableWorldRendering(GWorld, false);
      });
    }
    if (ImGui::Button("SetName_CLIENT")) {
      SDK::UWorld *GWorld = SDK::UWorld::GetWorld();
      auto PC = GWorld->OwningGameInstance;
    }
    ImGui::End();
  }
}
} // namespace DebugMenu
