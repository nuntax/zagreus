#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_CounterShotDebuff.GE_CounterShotDebuff_C
// (None)

class UClass* UGE_CounterShotDebuff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_CounterShotDebuff_C");

	return Clss;
}


// GE_CounterShotDebuff_C GE_CounterShotDebuff.Default__GE_CounterShotDebuff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_CounterShotDebuff_C* UGE_CounterShotDebuff_C::GetDefaultObj()
{
	static class UGE_CounterShotDebuff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_CounterShotDebuff_C*>(UGE_CounterShotDebuff_C::StaticClass()->DefaultObject);

	return Default;
}

}


