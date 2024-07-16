#include "DX11Hook.h"
namespace DX11Hook {
bool init = false;
Present oPresent;
HWND window = NULL;
tWindow rWindow = nullptr;
WNDPROC oWndProc;
ID3D11Device *pDevice = NULL;
ID3D11DeviceContext *pContext = NULL;
ID3D11RenderTargetView *mainRenderTargetView;
} // namespace DX11Hook
void DX11Hook::InitImGui() {
  ImGui::CreateContext();
  ImGuiIO &io = ImGui::GetIO();
  io.ConfigFlags = ImGuiConfigFlags_NoMouseCursorChange;
  ImGui_ImplWin32_Init(window);
  ImGui_ImplDX11_Init(pDevice, pContext);
}
LRESULT __stdcall DX11Hook::WndProc(const HWND hWnd, UINT uMsg, WPARAM wParam,
                                    LPARAM lParam) {
  if (true && ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam))
    return true;

  return CallWindowProc(oWndProc, hWnd, uMsg, wParam, lParam);
}
HRESULT __stdcall DX11Hook::hkPresent(IDXGISwapChain *pSwapChain,
                                      UINT SyncInterval, UINT Flags) {
  if (!init) {
    if (SUCCEEDED(
            pSwapChain->GetDevice(__uuidof(ID3D11Device), (void **)&pDevice))) {
      pDevice->GetImmediateContext(&pContext);
      DXGI_SWAP_CHAIN_DESC sd;
      pSwapChain->GetDesc(&sd);
      window = sd.OutputWindow;
      ID3D11Texture2D *pBackBuffer;
      pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D),
                            (LPVOID *)&pBackBuffer);
      pDevice->CreateRenderTargetView(pBackBuffer, NULL, &mainRenderTargetView);
      pBackBuffer->Release();
      oWndProc =
          (WNDPROC)SetWindowLongPtr(window, GWLP_WNDPROC, (LONG_PTR)WndProc);
      InitImGui();
      init = true;
    }

    else
      return oPresent(pSwapChain, SyncInterval, Flags);
  }

  ImGui_ImplDX11_NewFrame();
  ImGui_ImplWin32_NewFrame();
  ImGui::NewFrame();

  rWindow();

  ImGui::Render();

  pContext->OMSetRenderTargets(1, &mainRenderTargetView, NULL);
  ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
  return oPresent(pSwapChain, SyncInterval, Flags);
}
void DX11Hook::Init(tWindow _rWindow) {
  rWindow = _rWindow;
  bool init_hook = false;
  do {
    if (kiero::init(kiero::RenderType::D3D11) == kiero::Status::Success) {
      kiero::bind(8, (void **)&oPresent, hkPresent);
      init_hook = true;
    }
  } while (!init_hook);
}
