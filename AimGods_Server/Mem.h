#pragma once
#include <Psapi.h>
#include <windows.h>

#include <cstdint>
#include <string>

#include "Mem.h"
class Mem {
private:
  static uintptr_t InternalScan(uintptr_t start, size_t length,
                                const unsigned char *pattern, const char *mask);

public:
  static uintptr_t Scan(HMODULE module, const unsigned char *pattern,
                        const char *mask);
};
