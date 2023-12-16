#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Bleeding3Damage.GE_Bleeding3Damage_C
// (None)

class UClass* UGE_Bleeding3Damage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Bleeding3Damage_C");

	return Clss;
}


// GE_Bleeding3Damage_C GE_Bleeding3Damage.Default__GE_Bleeding3Damage_C
// (Public, Transactional, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Bleeding3Damage_C* UGE_Bleeding3Damage_C::GetDefaultObj()
{
	static class UGE_Bleeding3Damage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Bleeding3Damage_C*>(UGE_Bleeding3Damage_C::StaticClass()->DefaultObject);

	return Default;
}

}


