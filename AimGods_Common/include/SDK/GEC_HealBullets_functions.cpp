#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_HealBullets.GEC_HealBullets_C
// (None)

class UClass* UGEC_HealBullets_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_HealBullets_C");

	return Clss;
}


// GEC_HealBullets_C GEC_HealBullets.Default__GEC_HealBullets_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_HealBullets_C* UGEC_HealBullets_C::GetDefaultObj()
{
	static class UGEC_HealBullets_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_HealBullets_C*>(UGEC_HealBullets_C::StaticClass()->DefaultObject);

	return Default;
}

}


