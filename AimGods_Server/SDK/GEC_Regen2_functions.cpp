#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_Regen2.GEC_Regen2_C
// (None)

class UClass* UGEC_Regen2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_Regen2_C");

	return Clss;
}


// GEC_Regen2_C GEC_Regen2.Default__GEC_Regen2_C
// (Public, Transactional, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_Regen2_C* UGEC_Regen2_C::GetDefaultObj()
{
	static class UGEC_Regen2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_Regen2_C*>(UGEC_Regen2_C::StaticClass()->DefaultObject);

	return Default;
}

}


