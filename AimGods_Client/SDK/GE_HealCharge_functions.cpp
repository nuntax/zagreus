#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HealCharge.GE_HealCharge_C
// (None)

class UClass* UGE_HealCharge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HealCharge_C");

	return Clss;
}


// GE_HealCharge_C GE_HealCharge.Default__GE_HealCharge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HealCharge_C* UGE_HealCharge_C::GetDefaultObj()
{
	static class UGE_HealCharge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HealCharge_C*>(UGE_HealCharge_C::StaticClass()->DefaultObject);

	return Default;
}

}


