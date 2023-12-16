#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_WeaponDamage.GE_WeaponDamage_C
// (None)

class UClass* UGE_WeaponDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_WeaponDamage_C");

	return Clss;
}


// GE_WeaponDamage_C GE_WeaponDamage.Default__GE_WeaponDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_WeaponDamage_C* UGE_WeaponDamage_C::GetDefaultObj()
{
	static class UGE_WeaponDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_WeaponDamage_C*>(UGE_WeaponDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


