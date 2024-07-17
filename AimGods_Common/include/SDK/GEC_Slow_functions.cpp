#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_Slow.GEC_Slow_C
// (None)

class UClass* UGEC_Slow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_Slow_C");

	return Clss;
}


// GEC_Slow_C GEC_Slow.Default__GEC_Slow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_Slow_C* UGEC_Slow_C::GetDefaultObj()
{
	static class UGEC_Slow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_Slow_C*>(UGEC_Slow_C::StaticClass()->DefaultObject);

	return Default;
}

}


