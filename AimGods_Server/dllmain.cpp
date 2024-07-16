#include "Mem.h"
#include <Psapi.h>
#include <conio.h>
#include <csignal>
#include <future>
#include <iostream>
#include <libloaderapi.h>
#include <sstream>
#include <windows.h>

#include "DX11Hook.h"
#include "DebugMenu.h"
#include "FunctionQueue.h"
#include "Hooks.h"
#include "ThreadManager.h"

void GetAllWindowsFromProcessID(DWORD dwProcessID, std::vector<HWND>& vhWnds)
{
    // find all hWnds (vhWnds) associated with a process id (dwProcessID)
    HWND hCurWnd = NULL;
    do {
        hCurWnd = FindWindowEx(NULL, hCurWnd, NULL, NULL);
        DWORD dwProcID = 0;
        GetWindowThreadProcessId(hCurWnd, &dwProcID);
        if (dwProcID == dwProcessID) {
            vhWnds.push_back(hCurWnd); // add the found hCurWnd to the vector
            wprintf(L"Found hWnd %d\n", hCurWnd);
        }
    } while (hCurWnd != NULL);
}

std::vector<unsigned char> escapedHexStringToBytes(const std::string& escapedHexString)
{
    std::vector<unsigned char> bytes;

    for (size_t i = 2; i < escapedHexString.length(); i += 4) {
        std::string byteString = escapedHexString.substr(i, 2);
        unsigned char byte = static_cast<unsigned char>(std::stoi(byteString, nullptr, 16));
        bytes.push_back(byte);
    }

    return bytes;
}

DWORD WINAPI main(LPVOID lpReserved)
{

    AllocConsole();
    FILE *consoleIn, *consoleOut;
    freopen_s(&consoleIn, "CONIN$", "r", stdin);
    freopen_s(&consoleOut, "CONOUT$", "w", stdout);
    std::cout << "AimGods Dev Build" << std::endl;
    Hooks::HookFunctions();
    DX11Hook::Init(DebugMenu::Render);
    SDK::InitGObjects();
    // get the current process id
    const int pid = GetCurrentProcessId();
    std::vector<HWND> vhWnds;
    GetAllWindowsFromProcessID(pid, vhWnds);
    // renaming the window to SERVER
    for (auto hWnd : vhWnds) {
        SetWindowTextA(hWnd, "SERVER");
    }
    return TRUE;
}
DWORD WINAPI ThreadManager(LPVOID lpreserverd)
{
    g_ThreadManager.ThreadLoop();

    return TRUE;
}
BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
    DisableThreadLibraryCalls(hModule);
    switch (ul_reason_for_call) {
    case DLL_PROCESS_ATTACH:
        CreateThread(0, 0, main, hModule, 0, nullptr);
        CreateThread(0, 0, ThreadManager, 0, 0, nullptr);
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}