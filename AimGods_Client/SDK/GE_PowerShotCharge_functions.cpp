#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_PowerShotCharge.GE_PowerShotCharge_C
// (None)

class UClass* UGE_PowerShotCharge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_PowerShotCharge_C");

	return Clss;
}


// GE_PowerShotCharge_C GE_PowerShotCharge.Default__GE_PowerShotCharge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_PowerShotCharge_C* UGE_PowerShotCharge_C::GetDefaultObj()
{
	static class UGE_PowerShotCharge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_PowerShotCharge_C*>(UGE_PowerShotCharge_C::StaticClass()->DefaultObject);

	return Default;
}

}


