#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_DoubleStrikes.GEC_DoubleStrikes_C
// (None)

class UClass* UGEC_DoubleStrikes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_DoubleStrikes_C");

	return Clss;
}


// GEC_DoubleStrikes_C GEC_DoubleStrikes.Default__GEC_DoubleStrikes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_DoubleStrikes_C* UGEC_DoubleStrikes_C::GetDefaultObj()
{
	static class UGEC_DoubleStrikes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_DoubleStrikes_C*>(UGEC_DoubleStrikes_C::StaticClass()->DefaultObject);

	return Default;
}

}


