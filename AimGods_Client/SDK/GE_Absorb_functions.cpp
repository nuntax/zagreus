#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Absorb.GE_Absorb_C
// (None)

class UClass* UGE_Absorb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Absorb_C");

	return Clss;
}


// GE_Absorb_C GE_Absorb.Default__GE_Absorb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Absorb_C* UGE_Absorb_C::GetDefaultObj()
{
	static class UGE_Absorb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Absorb_C*>(UGE_Absorb_C::StaticClass()->DefaultObject);

	return Default;
}

}


