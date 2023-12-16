#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SacrificeRage.GE_SacrificeRage_C
// (None)

class UClass* UGE_SacrificeRage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SacrificeRage_C");

	return Clss;
}


// GE_SacrificeRage_C GE_SacrificeRage.Default__GE_SacrificeRage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SacrificeRage_C* UGE_SacrificeRage_C::GetDefaultObj()
{
	static class UGE_SacrificeRage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SacrificeRage_C*>(UGE_SacrificeRage_C::StaticClass()->DefaultObject);

	return Default;
}

}


