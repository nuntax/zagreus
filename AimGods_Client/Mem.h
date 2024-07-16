#pragma once
#include "Mem.h"
#include <cstdint>
#include <string>

#include <Psapi.h>
#include <windows.h>
class Mem {
private:
    static uintptr_t InternalScan(uintptr_t start, size_t length, const unsigned char* pattern, const char* mask);

public:
    static uintptr_t Scan(HMODULE module, const unsigned char* pattern, const char* mask);
};
