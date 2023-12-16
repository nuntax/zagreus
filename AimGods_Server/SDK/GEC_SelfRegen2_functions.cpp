#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_SelfRegen2.GEC_SelfRegen2_C
// (None)

class UClass* UGEC_SelfRegen2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_SelfRegen2_C");

	return Clss;
}


// GEC_SelfRegen2_C GEC_SelfRegen2.Default__GEC_SelfRegen2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_SelfRegen2_C* UGEC_SelfRegen2_C::GetDefaultObj()
{
	static class UGEC_SelfRegen2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_SelfRegen2_C*>(UGEC_SelfRegen2_C::StaticClass()->DefaultObject);

	return Default;
}

}


