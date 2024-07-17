#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_Blink.GEC_Blink_C
// (None)

class UClass* UGEC_Blink_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_Blink_C");

	return Clss;
}


// GEC_Blink_C GEC_Blink.Default__GEC_Blink_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_Blink_C* UGEC_Blink_C::GetDefaultObj()
{
	static class UGEC_Blink_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_Blink_C*>(UGEC_Blink_C::StaticClass()->DefaultObject);

	return Default;
}

}


