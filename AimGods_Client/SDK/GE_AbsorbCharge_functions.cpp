#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_AbsorbCharge.GE_AbsorbCharge_C
// (None)

class UClass* UGE_AbsorbCharge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_AbsorbCharge_C");

	return Clss;
}


// GE_AbsorbCharge_C GE_AbsorbCharge.Default__GE_AbsorbCharge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_AbsorbCharge_C* UGE_AbsorbCharge_C::GetDefaultObj()
{
	static class UGE_AbsorbCharge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_AbsorbCharge_C*>(UGE_AbsorbCharge_C::StaticClass()->DefaultObject);

	return Default;
}

}


