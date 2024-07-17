#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_Reset.GEC_Reset_C
// (None)

class UClass* UGEC_Reset_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_Reset_C");

	return Clss;
}


// GEC_Reset_C GEC_Reset.Default__GEC_Reset_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_Reset_C* UGEC_Reset_C::GetDefaultObj()
{
	static class UGEC_Reset_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_Reset_C*>(UGEC_Reset_C::StaticClass()->DefaultObject);

	return Default;
}

}


