#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_CounterShot.GEC_CounterShot_C
// (None)

class UClass* UGEC_CounterShot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_CounterShot_C");

	return Clss;
}


// GEC_CounterShot_C GEC_CounterShot.Default__GEC_CounterShot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_CounterShot_C* UGEC_CounterShot_C::GetDefaultObj()
{
	static class UGEC_CounterShot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_CounterShot_C*>(UGEC_CounterShot_C::StaticClass()->DefaultObject);

	return Default;
}

}


