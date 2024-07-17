#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_BleedingDamage.GE_BleedingDamage_C
// (None)

class UClass* UGE_BleedingDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_BleedingDamage_C");

	return Clss;
}


// GE_BleedingDamage_C GE_BleedingDamage.Default__GE_BleedingDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_BleedingDamage_C* UGE_BleedingDamage_C::GetDefaultObj()
{
	static class UGE_BleedingDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_BleedingDamage_C*>(UGE_BleedingDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


