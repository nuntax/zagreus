#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_SelfHeal2.GEC_SelfHeal2_C
// (None)

class UClass* UGEC_SelfHeal2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_SelfHeal2_C");

	return Clss;
}


// GEC_SelfHeal2_C GEC_SelfHeal2.Default__GEC_SelfHeal2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_SelfHeal2_C* UGEC_SelfHeal2_C::GetDefaultObj()
{
	static class UGEC_SelfHeal2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_SelfHeal2_C*>(UGEC_SelfHeal2_C::StaticClass()->DefaultObject);

	return Default;
}

}


