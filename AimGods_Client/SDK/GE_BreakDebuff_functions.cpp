#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_BreakDebuff.GE_BreakDebuff_C
// (None)

class UClass* UGE_BreakDebuff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_BreakDebuff_C");

	return Clss;
}


// GE_BreakDebuff_C GE_BreakDebuff.Default__GE_BreakDebuff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_BreakDebuff_C* UGE_BreakDebuff_C::GetDefaultObj()
{
	static class UGE_BreakDebuff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_BreakDebuff_C*>(UGE_BreakDebuff_C::StaticClass()->DefaultObject);

	return Default;
}

}


