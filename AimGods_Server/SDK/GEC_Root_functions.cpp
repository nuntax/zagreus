#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_Root.GEC_Root_C
// (None)

class UClass* UGEC_Root_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_Root_C");

	return Clss;
}


// GEC_Root_C GEC_Root.Default__GEC_Root_C
// (Public, Transactional, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_Root_C* UGEC_Root_C::GetDefaultObj()
{
	static class UGEC_Root_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_Root_C*>(UGEC_Root_C::StaticClass()->DefaultObject);

	return Default;
}

}


