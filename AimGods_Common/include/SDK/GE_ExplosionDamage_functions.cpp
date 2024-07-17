#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ExplosionDamage.GE_ExplosionDamage_C
// (None)

class UClass* UGE_ExplosionDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ExplosionDamage_C");

	return Clss;
}


// GE_ExplosionDamage_C GE_ExplosionDamage.Default__GE_ExplosionDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ExplosionDamage_C* UGE_ExplosionDamage_C::GetDefaultObj()
{
	static class UGE_ExplosionDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ExplosionDamage_C*>(UGE_ExplosionDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


