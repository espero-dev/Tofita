// The Tofita Kernel
// Copyright (C) 2020  Oleg Petrenko
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, version 3 of the License.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

#include "../ntdll.dll/ntdll.hpp"
#include "../tofita32.dll/tofita32.hpp"

#ifndef USER32_DLL
#define USER32_DLL __declspec(dllimport)
#endif

extern "C" {
USER32_DLL wapi::Atom RegisterClassW(const wapi::WindowClass *wc);
USER32_DLL wapi::HWnd CreateWindowExW(uint32_t dwExStyle, const uint16_t *lpClassName,
									  const uint16_t *lpWindowName, uint32_t dwStyle, int32_t x, int32_t y,
									  int32_t nWidth, int32_t nHeight, wapi::HWnd hWndParent,
									  wapi::HMenu hMenu, wapi::HInstance hInstance, void *lpParam);
USER32_DLL wapi::Bool ShowWindow(wapi::HWnd hWnd, int32_t nCmdShow);
USER32_DLL wapi::Bool GetMessageW(wapi::Msg *msg, wapi::HWnd hWnd, uint32_t wMsgFilterMin,
								  uint32_t wMsgFilterMax);
USER32_DLL wapi::Bool TranslateMessage(wapi::Msg *msg);
USER32_DLL wapi::LResult DispatchMessageW(wapi::Msg *msg);
USER32_DLL void PostQuitMessage(int32_t nExitCode);
USER32_DLL wapi::HDc BeginPaint(wapi::HWnd hWnd, wapi::PaintStruct *ps);
USER32_DLL int32_t FillRect(wapi::HDc dc, const wapi::Rect *lprc, wapi::HBrush brush);
USER32_DLL wapi::Bool EndPaint(wapi::HWnd hWnd, wapi::PaintStruct *ps);
USER32_DLL wapi::LResult DefWindowProcW(wapi::HWnd hWnd, wapi::Message uMsg, void *wParam, void *lParam);
}
