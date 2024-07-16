#pragma once
#include "SDK.hpp"
namespace Hooks {

void HookFunctions();
inline bool LogProcessEvent = false;
} // namespace Hooks
typedef void(__fastcall *tBeginPlay)(SDK::AAGGameMode *);
inline tBeginPlay rBeginPlay = nullptr;
typedef void(__fastcall *tNotifyBeginplay)(SDK::AWorldSettings *);
inline tNotifyBeginplay rNotifyBeginplay = nullptr;
typedef void(__fastcall *tHandleHasMatchStarted)(SDK::AAGGameMode *);
inline tHandleHasMatchStarted rHandleHasMatchStarted = nullptr;
typedef void(__fastcall *tRespawnPlayer)(void *, void *);
inline tRespawnPlayer rRespawnPlayer = nullptr;