#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_Trap.GEC_Trap_C
// (None)

class UClass* UGEC_Trap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_Trap_C");

	return Clss;
}


// GEC_Trap_C GEC_Trap.Default__GEC_Trap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_Trap_C* UGEC_Trap_C::GetDefaultObj()
{
	static class UGEC_Trap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_Trap_C*>(UGEC_Trap_C::StaticClass()->DefaultObject);

	return Default;
}

}


