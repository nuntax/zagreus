#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DoubleStrikesDamage.GE_DoubleStrikesDamage_C
// (None)

class UClass* UGE_DoubleStrikesDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DoubleStrikesDamage_C");

	return Clss;
}


// GE_DoubleStrikesDamage_C GE_DoubleStrikesDamage.Default__GE_DoubleStrikesDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DoubleStrikesDamage_C* UGE_DoubleStrikesDamage_C::GetDefaultObj()
{
	static class UGE_DoubleStrikesDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DoubleStrikesDamage_C*>(UGE_DoubleStrikesDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


