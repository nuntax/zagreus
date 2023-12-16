#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_Vanish.GEC_Vanish_C
// (None)

class UClass* UGEC_Vanish_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_Vanish_C");

	return Clss;
}


// GEC_Vanish_C GEC_Vanish.Default__GEC_Vanish_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_Vanish_C* UGEC_Vanish_C::GetDefaultObj()
{
	static class UGEC_Vanish_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_Vanish_C*>(UGEC_Vanish_C::StaticClass()->DefaultObject);

	return Default;
}

}


