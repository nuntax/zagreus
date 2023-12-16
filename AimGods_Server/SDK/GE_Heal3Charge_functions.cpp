#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Heal3Charge.GE_Heal3Charge_C
// (None)

class UClass* UGE_Heal3Charge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Heal3Charge_C");

	return Clss;
}


// GE_Heal3Charge_C GE_Heal3Charge.Default__GE_Heal3Charge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Heal3Charge_C* UGE_Heal3Charge_C::GetDefaultObj()
{
	static class UGE_Heal3Charge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Heal3Charge_C*>(UGE_Heal3Charge_C::StaticClass()->DefaultObject);

	return Default;
}

}


