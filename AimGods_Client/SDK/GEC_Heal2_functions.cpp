#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_Heal2.GEC_Heal2_C
// (None)

class UClass* UGEC_Heal2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_Heal2_C");

	return Clss;
}


// GEC_Heal2_C GEC_Heal2.Default__GEC_Heal2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_Heal2_C* UGEC_Heal2_C::GetDefaultObj()
{
	static class UGEC_Heal2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_Heal2_C*>(UGEC_Heal2_C::StaticClass()->DefaultObject);

	return Default;
}

}


