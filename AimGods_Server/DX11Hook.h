#pragma once
#include <Windows.h>
#include <d3d11.h>
#include <dxgi.h>

#include "imgui/imgui.h"
#include "imgui/imgui_impl_dx11.h"
#include "imgui/imgui_impl_win32.h"
#include "kiero/kiero.h"

typedef HRESULT(__stdcall *Present)(IDXGISwapChain *pSwapChain,
                                    UINT SyncInterval, UINT Flags);
typedef LRESULT(CALLBACK *WNDPROC)(HWND, UINT, WPARAM, LPARAM);
typedef uintptr_t PTR;
extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg,
                                              WPARAM wParam, LPARAM lParam);
typedef void (*tWindow)();
namespace DX11Hook {
extern tWindow rWindow;
extern bool init;
extern Present oPresent;
extern HWND window;
extern WNDPROC oWndProc;
extern ID3D11Device *pDevice;
extern ID3D11DeviceContext *pContext;
extern ID3D11RenderTargetView *mainRenderTargetView;
HRESULT __stdcall hkPresent(IDXGISwapChain *pSwapChain, UINT SyncInterval,
                            UINT Flags);
void Init(tWindow _rWindow);
void InitImGui();
LRESULT __stdcall WndProc(const HWND hWnd, UINT uMsg, WPARAM wParam,
                          LPARAM lParam);
}; // namespace DX11Hook
