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

#define NTDLL32_DLL __declspec(dllexport)
#include "ntdll.hpp"
#include "../tofita32.dll/tofita32.cpp"

// High performance function, that does completely nothing
uint32_t KiFastStub() {
	return 0;
}

extern "C" __attribute__((fastcall)) void _DllMainCRTStartup(int (*entry)()) {
	// TODO entry arguments
	tofitaExitProcess(entry());
}