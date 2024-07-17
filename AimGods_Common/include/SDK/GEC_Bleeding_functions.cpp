#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_Bleeding.GEC_Bleeding_C
// (None)

class UClass* UGEC_Bleeding_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_Bleeding_C");

	return Clss;
}


// GEC_Bleeding_C GEC_Bleeding.Default__GEC_Bleeding_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_Bleeding_C* UGEC_Bleeding_C::GetDefaultObj()
{
	static class UGEC_Bleeding_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_Bleeding_C*>(UGEC_Bleeding_C::StaticClass()->DefaultObject);

	return Default;
}

}


