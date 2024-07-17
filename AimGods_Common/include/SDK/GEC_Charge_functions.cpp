#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_Charge.GEC_Charge_C
// (None)

class UClass* UGEC_Charge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_Charge_C");

	return Clss;
}


// GEC_Charge_C GEC_Charge.Default__GEC_Charge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_Charge_C* UGEC_Charge_C::GetDefaultObj()
{
	static class UGEC_Charge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_Charge_C*>(UGEC_Charge_C::StaticClass()->DefaultObject);

	return Default;
}

}


