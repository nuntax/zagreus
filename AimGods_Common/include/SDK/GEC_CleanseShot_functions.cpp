#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_CleanseShot.GEC_CleanseShot_C
// (None)

class UClass* UGEC_CleanseShot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_CleanseShot_C");

	return Clss;
}


// GEC_CleanseShot_C GEC_CleanseShot.Default__GEC_CleanseShot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_CleanseShot_C* UGEC_CleanseShot_C::GetDefaultObj()
{
	static class UGEC_CleanseShot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_CleanseShot_C*>(UGEC_CleanseShot_C::StaticClass()->DefaultObject);

	return Default;
}

}


