#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_HeadHunter.GEC_HeadHunter_C
// (None)

class UClass* UGEC_HeadHunter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_HeadHunter_C");

	return Clss;
}


// GEC_HeadHunter_C GEC_HeadHunter.Default__GEC_HeadHunter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_HeadHunter_C* UGEC_HeadHunter_C::GetDefaultObj()
{
	static class UGEC_HeadHunter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_HeadHunter_C*>(UGEC_HeadHunter_C::StaticClass()->DefaultObject);

	return Default;
}

}


