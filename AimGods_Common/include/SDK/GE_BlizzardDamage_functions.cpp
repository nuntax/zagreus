#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_BlizzardDamage.GE_BlizzardDamage_C
// (None)

class UClass* UGE_BlizzardDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_BlizzardDamage_C");

	return Clss;
}


// GE_BlizzardDamage_C GE_BlizzardDamage.Default__GE_BlizzardDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_BlizzardDamage_C* UGE_BlizzardDamage_C::GetDefaultObj()
{
	static class UGE_BlizzardDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_BlizzardDamage_C*>(UGE_BlizzardDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


