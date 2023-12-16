#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_Armor.GEC_Armor_C
// (None)

class UClass* UGEC_Armor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_Armor_C");

	return Clss;
}


// GEC_Armor_C GEC_Armor.Default__GEC_Armor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_Armor_C* UGEC_Armor_C::GetDefaultObj()
{
	static class UGEC_Armor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_Armor_C*>(UGEC_Armor_C::StaticClass()->DefaultObject);

	return Default;
}

}


