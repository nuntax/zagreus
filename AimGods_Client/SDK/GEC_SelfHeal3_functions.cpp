#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_SelfHeal3.GEC_SelfHeal3_C
// (None)

class UClass* UGEC_SelfHeal3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_SelfHeal3_C");

	return Clss;
}


// GEC_SelfHeal3_C GEC_SelfHeal3.Default__GEC_SelfHeal3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_SelfHeal3_C* UGEC_SelfHeal3_C::GetDefaultObj()
{
	static class UGEC_SelfHeal3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_SelfHeal3_C*>(UGEC_SelfHeal3_C::StaticClass()->DefaultObject);

	return Default;
}

}


