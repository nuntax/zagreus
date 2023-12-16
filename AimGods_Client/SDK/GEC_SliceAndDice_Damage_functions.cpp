#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_SliceAndDice_Damage.GEC_SliceAndDice_Damage_C
// (None)

class UClass* UGEC_SliceAndDice_Damage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_SliceAndDice_Damage_C");

	return Clss;
}


// GEC_SliceAndDice_Damage_C GEC_SliceAndDice_Damage.Default__GEC_SliceAndDice_Damage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_SliceAndDice_Damage_C* UGEC_SliceAndDice_Damage_C::GetDefaultObj()
{
	static class UGEC_SliceAndDice_Damage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_SliceAndDice_Damage_C*>(UGEC_SliceAndDice_Damage_C::StaticClass()->DefaultObject);

	return Default;
}

}


