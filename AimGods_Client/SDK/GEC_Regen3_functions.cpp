#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_Regen3.GEC_Regen3_C
// (None)

class UClass* UGEC_Regen3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_Regen3_C");

	return Clss;
}


// GEC_Regen3_C GEC_Regen3.Default__GEC_Regen3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_Regen3_C* UGEC_Regen3_C::GetDefaultObj()
{
	static class UGEC_Regen3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_Regen3_C*>(UGEC_Regen3_C::StaticClass()->DefaultObject);

	return Default;
}

}


