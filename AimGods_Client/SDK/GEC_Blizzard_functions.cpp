#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_Blizzard.GEC_Blizzard_C
// (None)

class UClass* UGEC_Blizzard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_Blizzard_C");

	return Clss;
}


// GEC_Blizzard_C GEC_Blizzard.Default__GEC_Blizzard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_Blizzard_C* UGEC_Blizzard_C::GetDefaultObj()
{
	static class UGEC_Blizzard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_Blizzard_C*>(UGEC_Blizzard_C::StaticClass()->DefaultObject);

	return Default;
}

}


