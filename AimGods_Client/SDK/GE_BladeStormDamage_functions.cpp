#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_BladeStormDamage.GE_BladeStormDamage_C
// (None)

class UClass* UGE_BladeStormDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_BladeStormDamage_C");

	return Clss;
}


// GE_BladeStormDamage_C GE_BladeStormDamage.Default__GE_BladeStormDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_BladeStormDamage_C* UGE_BladeStormDamage_C::GetDefaultObj()
{
	static class UGE_BladeStormDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_BladeStormDamage_C*>(UGE_BladeStormDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


