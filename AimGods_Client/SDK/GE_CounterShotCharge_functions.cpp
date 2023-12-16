#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_CounterShotCharge.GE_CounterShotCharge_C
// (None)

class UClass* UGE_CounterShotCharge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_CounterShotCharge_C");

	return Clss;
}


// GE_CounterShotCharge_C GE_CounterShotCharge.Default__GE_CounterShotCharge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_CounterShotCharge_C* UGE_CounterShotCharge_C::GetDefaultObj()
{
	static class UGE_CounterShotCharge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_CounterShotCharge_C*>(UGE_CounterShotCharge_C::StaticClass()->DefaultObject);

	return Default;
}

}


