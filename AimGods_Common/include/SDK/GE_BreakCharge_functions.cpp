#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_BreakCharge.GE_BreakCharge_C
// (None)

class UClass* UGE_BreakCharge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_BreakCharge_C");

	return Clss;
}


// GE_BreakCharge_C GE_BreakCharge.Default__GE_BreakCharge_C
// (Public, Transactional, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_BreakCharge_C* UGE_BreakCharge_C::GetDefaultObj()
{
	static class UGE_BreakCharge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_BreakCharge_C*>(UGE_BreakCharge_C::StaticClass()->DefaultObject);

	return Default;
}

}


