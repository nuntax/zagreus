#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_Regen.GEC_Regen_C
// (None)

class UClass* UGEC_Regen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_Regen_C");

	return Clss;
}


// GEC_Regen_C GEC_Regen.Default__GEC_Regen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_Regen_C* UGEC_Regen_C::GetDefaultObj()
{
	static class UGEC_Regen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_Regen_C*>(UGEC_Regen_C::StaticClass()->DefaultObject);

	return Default;
}

}


