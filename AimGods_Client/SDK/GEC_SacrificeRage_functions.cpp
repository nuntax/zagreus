#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_SacrificeRage.GEC_SacrificeRage_C
// (None)

class UClass* UGEC_SacrificeRage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_SacrificeRage_C");

	return Clss;
}


// GEC_SacrificeRage_C GEC_SacrificeRage.Default__GEC_SacrificeRage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_SacrificeRage_C* UGEC_SacrificeRage_C::GetDefaultObj()
{
	static class UGEC_SacrificeRage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_SacrificeRage_C*>(UGEC_SacrificeRage_C::StaticClass()->DefaultObject);

	return Default;
}

}


