#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_CurseCharge.GE_CurseCharge_C
// (None)

class UClass* UGE_CurseCharge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_CurseCharge_C");

	return Clss;
}


// GE_CurseCharge_C GE_CurseCharge.Default__GE_CurseCharge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_CurseCharge_C* UGE_CurseCharge_C::GetDefaultObj()
{
	static class UGE_CurseCharge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_CurseCharge_C*>(UGE_CurseCharge_C::StaticClass()->DefaultObject);

	return Default;
}

}


