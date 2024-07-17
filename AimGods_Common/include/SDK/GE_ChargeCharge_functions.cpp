#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ChargeCharge.GE_ChargeCharge_C
// (None)

class UClass* UGE_ChargeCharge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ChargeCharge_C");

	return Clss;
}


// GE_ChargeCharge_C GE_ChargeCharge.Default__GE_ChargeCharge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ChargeCharge_C* UGE_ChargeCharge_C::GetDefaultObj()
{
	static class UGE_ChargeCharge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ChargeCharge_C*>(UGE_ChargeCharge_C::StaticClass()->DefaultObject);

	return Default;
}

}


