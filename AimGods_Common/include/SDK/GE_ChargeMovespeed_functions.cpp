#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ChargeMovespeed.GE_ChargeMovespeed_C
// (None)

class UClass* UGE_ChargeMovespeed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ChargeMovespeed_C");

	return Clss;
}


// GE_ChargeMovespeed_C GE_ChargeMovespeed.Default__GE_ChargeMovespeed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ChargeMovespeed_C* UGE_ChargeMovespeed_C::GetDefaultObj()
{
	static class UGE_ChargeMovespeed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ChargeMovespeed_C*>(UGE_ChargeMovespeed_C::StaticClass()->DefaultObject);

	return Default;
}

}


