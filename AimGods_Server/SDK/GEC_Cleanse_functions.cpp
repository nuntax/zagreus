#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_Cleanse.GEC_Cleanse_C
// (None)

class UClass* UGEC_Cleanse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_Cleanse_C");

	return Clss;
}


// GEC_Cleanse_C GEC_Cleanse.Default__GEC_Cleanse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_Cleanse_C* UGEC_Cleanse_C::GetDefaultObj()
{
	static class UGEC_Cleanse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_Cleanse_C*>(UGEC_Cleanse_C::StaticClass()->DefaultObject);

	return Default;
}

}


