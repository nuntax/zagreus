#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_Fear.GEC_Fear_C
// (None)

class UClass* UGEC_Fear_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_Fear_C");

	return Clss;
}


// GEC_Fear_C GEC_Fear.Default__GEC_Fear_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_Fear_C* UGEC_Fear_C::GetDefaultObj()
{
	static class UGEC_Fear_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_Fear_C*>(UGEC_Fear_C::StaticClass()->DefaultObject);

	return Default;
}

}


