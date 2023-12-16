#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_Sprint.GEC_Sprint_C
// (None)

class UClass* UGEC_Sprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_Sprint_C");

	return Clss;
}


// GEC_Sprint_C GEC_Sprint.Default__GEC_Sprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_Sprint_C* UGEC_Sprint_C::GetDefaultObj()
{
	static class UGEC_Sprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_Sprint_C*>(UGEC_Sprint_C::StaticClass()->DefaultObject);

	return Default;
}

}


