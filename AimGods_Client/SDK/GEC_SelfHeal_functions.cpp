#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_SelfHeal.GEC_SelfHeal_C
// (None)

class UClass* UGEC_SelfHeal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_SelfHeal_C");

	return Clss;
}


// GEC_SelfHeal_C GEC_SelfHeal.Default__GEC_SelfHeal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_SelfHeal_C* UGEC_SelfHeal_C::GetDefaultObj()
{
	static class UGEC_SelfHeal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_SelfHeal_C*>(UGEC_SelfHeal_C::StaticClass()->DefaultObject);

	return Default;
}

}


