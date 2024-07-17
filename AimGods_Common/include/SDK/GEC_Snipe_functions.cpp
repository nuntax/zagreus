#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_Snipe.GEC_Snipe_C
// (None)

class UClass* UGEC_Snipe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_Snipe_C");

	return Clss;
}


// GEC_Snipe_C GEC_Snipe.Default__GEC_Snipe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_Snipe_C* UGEC_Snipe_C::GetDefaultObj()
{
	static class UGEC_Snipe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_Snipe_C*>(UGEC_Snipe_C::StaticClass()->DefaultObject);

	return Default;
}

}


