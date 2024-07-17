#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_BleedingCharge.GE_BleedingCharge_C
// (None)

class UClass* UGE_BleedingCharge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_BleedingCharge_C");

	return Clss;
}


// GE_BleedingCharge_C GE_BleedingCharge.Default__GE_BleedingCharge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_BleedingCharge_C* UGE_BleedingCharge_C::GetDefaultObj()
{
	static class UGE_BleedingCharge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_BleedingCharge_C*>(UGE_BleedingCharge_C::StaticClass()->DefaultObject);

	return Default;
}

}


