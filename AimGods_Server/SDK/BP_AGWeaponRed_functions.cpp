#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AGWeaponRed.BP_AGWeaponRed_C
// (Actor)

class UClass* ABP_AGWeaponRed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AGWeaponRed_C");

	return Clss;
}


// BP_AGWeaponRed_C BP_AGWeaponRed.Default__BP_AGWeaponRed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AGWeaponRed_C* ABP_AGWeaponRed_C::GetDefaultObj()
{
	static class ABP_AGWeaponRed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AGWeaponRed_C*>(ABP_AGWeaponRed_C::StaticClass()->DefaultObject);

	return Default;
}

}


