#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_Curse.GEC_Curse_C
// (None)

class UClass* UGEC_Curse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_Curse_C");

	return Clss;
}


// GEC_Curse_C GEC_Curse.Default__GEC_Curse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_Curse_C* UGEC_Curse_C::GetDefaultObj()
{
	static class UGEC_Curse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_Curse_C*>(UGEC_Curse_C::StaticClass()->DefaultObject);

	return Default;
}

}


