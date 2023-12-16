#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_BlizzardCharge.GE_BlizzardCharge_C
// (None)

class UClass* UGE_BlizzardCharge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_BlizzardCharge_C");

	return Clss;
}


// GE_BlizzardCharge_C GE_BlizzardCharge.Default__GE_BlizzardCharge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_BlizzardCharge_C* UGE_BlizzardCharge_C::GetDefaultObj()
{
	static class UGE_BlizzardCharge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_BlizzardCharge_C*>(UGE_BlizzardCharge_C::StaticClass()->DefaultObject);

	return Default;
}

}


