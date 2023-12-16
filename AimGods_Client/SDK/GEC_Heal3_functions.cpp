#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_Heal3.GEC_Heal3_C
// (None)

class UClass* UGEC_Heal3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_Heal3_C");

	return Clss;
}


// GEC_Heal3_C GEC_Heal3.Default__GEC_Heal3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_Heal3_C* UGEC_Heal3_C::GetDefaultObj()
{
	static class UGEC_Heal3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_Heal3_C*>(UGEC_Heal3_C::StaticClass()->DefaultObject);

	return Default;
}

}


