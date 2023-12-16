#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Bleeding3Charge.GE_Bleeding3Charge_C
// (None)

class UClass* UGE_Bleeding3Charge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Bleeding3Charge_C");

	return Clss;
}


// GE_Bleeding3Charge_C GE_Bleeding3Charge.Default__GE_Bleeding3Charge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Bleeding3Charge_C* UGE_Bleeding3Charge_C::GetDefaultObj()
{
	static class UGE_Bleeding3Charge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Bleeding3Charge_C*>(UGE_Bleeding3Charge_C::StaticClass()->DefaultObject);

	return Default;
}

}


