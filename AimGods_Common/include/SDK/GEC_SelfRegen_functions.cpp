#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_SelfRegen.GEC_SelfRegen_C
// (None)

class UClass* UGEC_SelfRegen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_SelfRegen_C");

	return Clss;
}


// GEC_SelfRegen_C GEC_SelfRegen.Default__GEC_SelfRegen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_SelfRegen_C* UGEC_SelfRegen_C::GetDefaultObj()
{
	static class UGEC_SelfRegen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_SelfRegen_C*>(UGEC_SelfRegen_C::StaticClass()->DefaultObject);

	return Default;
}

}


