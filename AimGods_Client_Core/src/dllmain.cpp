#include <Windows.h>
#include <Core.hpp>
BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        // Code to run when the DLL is loaded
        break;
    case DLL_PROCESS_DETACH:
        // Code to run when the DLL is unloaded
        break;
    }
    return TRUE;
}