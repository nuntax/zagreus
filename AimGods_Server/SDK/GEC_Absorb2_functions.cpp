#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_Absorb2.GEC_Absorb2_C
// (None)

class UClass* UGEC_Absorb2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_Absorb2_C");

	return Clss;
}


// GEC_Absorb2_C GEC_Absorb2.Default__GEC_Absorb2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_Absorb2_C* UGEC_Absorb2_C::GetDefaultObj()
{
	static class UGEC_Absorb2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_Absorb2_C*>(UGEC_Absorb2_C::StaticClass()->DefaultObject);

	return Default;
}

}


