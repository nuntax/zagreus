#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_Heal.GEC_Heal_C
// (None)

class UClass* UGEC_Heal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_Heal_C");

	return Clss;
}


// GEC_Heal_C GEC_Heal.Default__GEC_Heal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_Heal_C* UGEC_Heal_C::GetDefaultObj()
{
	static class UGEC_Heal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_Heal_C*>(UGEC_Heal_C::StaticClass()->DefaultObject);

	return Default;
}

}


