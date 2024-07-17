#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_FearCharge.GE_FearCharge_C
// (None)

class UClass* UGE_FearCharge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_FearCharge_C");

	return Clss;
}


// GE_FearCharge_C GE_FearCharge.Default__GE_FearCharge_C
// (Public, Transactional, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_FearCharge_C* UGE_FearCharge_C::GetDefaultObj()
{
	static class UGE_FearCharge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_FearCharge_C*>(UGE_FearCharge_C::StaticClass()->DefaultObject);

	return Default;
}

}


