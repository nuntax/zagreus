#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Heal.GE_Heal_C
// (None)

class UClass* UGE_Heal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Heal_C");

	return Clss;
}


// GE_Heal_C GE_Heal.Default__GE_Heal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Heal_C* UGE_Heal_C::GetDefaultObj()
{
	static class UGE_Heal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Heal_C*>(UGE_Heal_C::StaticClass()->DefaultObject);

	return Default;
}

}


