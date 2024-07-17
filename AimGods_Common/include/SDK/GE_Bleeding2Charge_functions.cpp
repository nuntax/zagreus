#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Bleeding2Charge.GE_Bleeding2Charge_C
// (None)

class UClass* UGE_Bleeding2Charge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Bleeding2Charge_C");

	return Clss;
}


// GE_Bleeding2Charge_C GE_Bleeding2Charge.Default__GE_Bleeding2Charge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Bleeding2Charge_C* UGE_Bleeding2Charge_C::GetDefaultObj()
{
	static class UGE_Bleeding2Charge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Bleeding2Charge_C*>(UGE_Bleeding2Charge_C::StaticClass()->DefaultObject);

	return Default;
}

}


