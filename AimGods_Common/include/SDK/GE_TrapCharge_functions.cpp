#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_TrapCharge.GE_TrapCharge_C
// (None)

class UClass* UGE_TrapCharge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_TrapCharge_C");

	return Clss;
}


// GE_TrapCharge_C GE_TrapCharge.Default__GE_TrapCharge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_TrapCharge_C* UGE_TrapCharge_C::GetDefaultObj()
{
	static class UGE_TrapCharge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_TrapCharge_C*>(UGE_TrapCharge_C::StaticClass()->DefaultObject);

	return Default;
}

}


