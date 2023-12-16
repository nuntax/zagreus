#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SlowCharge.GE_SlowCharge_C
// (None)

class UClass* UGE_SlowCharge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SlowCharge_C");

	return Clss;
}


// GE_SlowCharge_C GE_SlowCharge.Default__GE_SlowCharge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SlowCharge_C* UGE_SlowCharge_C::GetDefaultObj()
{
	static class UGE_SlowCharge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SlowCharge_C*>(UGE_SlowCharge_C::StaticClass()->DefaultObject);

	return Default;
}

}


