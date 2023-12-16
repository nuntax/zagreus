#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_PowerShot2Charge.GE_PowerShot2Charge_C
// (None)

class UClass* UGE_PowerShot2Charge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_PowerShot2Charge_C");

	return Clss;
}


// GE_PowerShot2Charge_C GE_PowerShot2Charge.Default__GE_PowerShot2Charge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_PowerShot2Charge_C* UGE_PowerShot2Charge_C::GetDefaultObj()
{
	static class UGE_PowerShot2Charge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_PowerShot2Charge_C*>(UGE_PowerShot2Charge_C::StaticClass()->DefaultObject);

	return Default;
}

}


