#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ExecuteCharge.GE_ExecuteCharge_C
// (None)

class UClass* UGE_ExecuteCharge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ExecuteCharge_C");

	return Clss;
}


// GE_ExecuteCharge_C GE_ExecuteCharge.Default__GE_ExecuteCharge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ExecuteCharge_C* UGE_ExecuteCharge_C::GetDefaultObj()
{
	static class UGE_ExecuteCharge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ExecuteCharge_C*>(UGE_ExecuteCharge_C::StaticClass()->DefaultObject);

	return Default;
}

}


