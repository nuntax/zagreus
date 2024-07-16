#include <Windows.h>

#include "Hooks.h"

DWORD WINAPI Entry(LPVOID lpReserved) {
  AllocConsole();
  FILE *consoleIn, *consoleOut;
  freopen_s(&consoleIn, "CONIN$", "r", stdin);
  freopen_s(&consoleOut, "CONOUT$", "w", stdout);
  Hooks::HookFunctions();
  SDK::InitGObjects();
  SDK::FName::InitGNames();
  LPSTR workingdir = new CHAR[MAX_PATH];
  GetCurrentDirectoryA(MAX_PATH, workingdir);
  std::string path = workingdir;
  std::cout << "Current working directory: " << path << std::endl;
  return 0;
}
BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call,
                      LPVOID lpReserved) {
  switch (ul_reason_for_call) {
  case DLL_PROCESS_ATTACH:
    CreateThread(0, 0, Entry, hModule, 0, nullptr);
  case DLL_THREAD_ATTACH:
  case DLL_THREAD_DETACH:
  case DLL_PROCESS_DETACH:
    break;
  }
  return TRUE;
}
