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

#include <stdint.h>

#ifndef TOFITA32_DLL
#define TOFITA32_DLL __declspec(dllimport)
#endif

extern "C" {

enum class TofitaSyscalls : uint64_t {
	ExitProcess = 1000,
};

__attribute__((naked, fastcall)) TOFITA32_DLL uint64_t KiFastSystemCall(TofitaSyscalls rcx, uint64_t rdx = 0,
																		uint64_t r8 = 0, uint64_t r9 = 0);
TOFITA32_DLL void tofitaExitProcess(uint32_t exitCode);
}