#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_HadesDispell.GEC_HadesDispell_C
// (None)

class UClass* UGEC_HadesDispell_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_HadesDispell_C");

	return Clss;
}


// GEC_HadesDispell_C GEC_HadesDispell.Default__GEC_HadesDispell_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_HadesDispell_C* UGEC_HadesDispell_C::GetDefaultObj()
{
	static class UGEC_HadesDispell_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_HadesDispell_C*>(UGEC_HadesDispell_C::StaticClass()->DefaultObject);

	return Default;
}

}


