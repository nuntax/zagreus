#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_Bleeding3.GEC_Bleeding3_C
// (None)

class UClass* UGEC_Bleeding3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_Bleeding3_C");

	return Clss;
}


// GEC_Bleeding3_C GEC_Bleeding3.Default__GEC_Bleeding3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_Bleeding3_C* UGEC_Bleeding3_C::GetDefaultObj()
{
	static class UGEC_Bleeding3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_Bleeding3_C*>(UGEC_Bleeding3_C::StaticClass()->DefaultObject);

	return Default;
}

}


