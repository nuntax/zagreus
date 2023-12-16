#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ResetDebuff.GE_ResetDebuff_C
// (None)

class UClass* UGE_ResetDebuff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ResetDebuff_C");

	return Clss;
}


// GE_ResetDebuff_C GE_ResetDebuff.Default__GE_ResetDebuff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ResetDebuff_C* UGE_ResetDebuff_C::GetDefaultObj()
{
	static class UGE_ResetDebuff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ResetDebuff_C*>(UGE_ResetDebuff_C::StaticClass()->DefaultObject);

	return Default;
}

}


