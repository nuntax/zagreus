#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Absorb2Charge.GE_Absorb2Charge_C
// (None)

class UClass* UGE_Absorb2Charge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Absorb2Charge_C");

	return Clss;
}


// GE_Absorb2Charge_C GE_Absorb2Charge.Default__GE_Absorb2Charge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Absorb2Charge_C* UGE_Absorb2Charge_C::GetDefaultObj()
{
	static class UGE_Absorb2Charge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Absorb2Charge_C*>(UGE_Absorb2Charge_C::StaticClass()->DefaultObject);

	return Default;
}

}


