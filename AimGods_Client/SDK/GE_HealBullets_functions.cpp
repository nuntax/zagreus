#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HealBullets.GE_HealBullets_C
// (None)

class UClass* UGE_HealBullets_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HealBullets_C");

	return Clss;
}


// GE_HealBullets_C GE_HealBullets.Default__GE_HealBullets_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HealBullets_C* UGE_HealBullets_C::GetDefaultObj()
{
	static class UGE_HealBullets_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HealBullets_C*>(UGE_HealBullets_C::StaticClass()->DefaultObject);

	return Default;
}

}


