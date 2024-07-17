#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Armor.GE_Armor_C
// (None)

class UClass* UGE_Armor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Armor_C");

	return Clss;
}


// GE_Armor_C GE_Armor.Default__GE_Armor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Armor_C* UGE_Armor_C::GetDefaultObj()
{
	static class UGE_Armor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Armor_C*>(UGE_Armor_C::StaticClass()->DefaultObject);

	return Default;
}

}


