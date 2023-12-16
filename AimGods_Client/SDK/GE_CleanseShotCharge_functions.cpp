#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_CleanseShotCharge.GE_CleanseShotCharge_C
// (None)

class UClass* UGE_CleanseShotCharge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_CleanseShotCharge_C");

	return Clss;
}


// GE_CleanseShotCharge_C GE_CleanseShotCharge.Default__GE_CleanseShotCharge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_CleanseShotCharge_C* UGE_CleanseShotCharge_C::GetDefaultObj()
{
	static class UGE_CleanseShotCharge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_CleanseShotCharge_C*>(UGE_CleanseShotCharge_C::StaticClass()->DefaultObject);

	return Default;
}

}


