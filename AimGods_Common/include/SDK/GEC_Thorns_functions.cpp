#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_Thorns.GEC_Thorns_C
// (None)

class UClass* UGEC_Thorns_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_Thorns_C");

	return Clss;
}


// GEC_Thorns_C GEC_Thorns.Default__GEC_Thorns_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_Thorns_C* UGEC_Thorns_C::GetDefaultObj()
{
	static class UGEC_Thorns_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_Thorns_C*>(UGEC_Thorns_C::StaticClass()->DefaultObject);

	return Default;
}

}


