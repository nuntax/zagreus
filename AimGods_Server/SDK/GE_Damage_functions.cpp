#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Damage.GE_Damage_C
// (None)

class UClass* UGE_Damage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Damage_C");

	return Clss;
}


// GE_Damage_C GE_Damage.Default__GE_Damage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Damage_C* UGE_Damage_C::GetDefaultObj()
{
	static class UGE_Damage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Damage_C*>(UGE_Damage_C::StaticClass()->DefaultObject);

	return Default;
}

}


