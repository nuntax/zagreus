#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_Absorb.GEC_Absorb_C
// (None)

class UClass* UGEC_Absorb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_Absorb_C");

	return Clss;
}


// GEC_Absorb_C GEC_Absorb.Default__GEC_Absorb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_Absorb_C* UGEC_Absorb_C::GetDefaultObj()
{
	static class UGEC_Absorb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_Absorb_C*>(UGEC_Absorb_C::StaticClass()->DefaultObject);

	return Default;
}

}


