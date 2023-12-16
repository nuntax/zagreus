#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_RegenCharge.GE_RegenCharge_C
// (None)

class UClass* UGE_RegenCharge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_RegenCharge_C");

	return Clss;
}


// GE_RegenCharge_C GE_RegenCharge.Default__GE_RegenCharge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_RegenCharge_C* UGE_RegenCharge_C::GetDefaultObj()
{
	static class UGE_RegenCharge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_RegenCharge_C*>(UGE_RegenCharge_C::StaticClass()->DefaultObject);

	return Default;
}

}


