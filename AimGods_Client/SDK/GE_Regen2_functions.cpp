#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Regen2.GE_Regen2_C
// (None)

class UClass* UGE_Regen2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Regen2_C");

	return Clss;
}


// GE_Regen2_C GE_Regen2.Default__GE_Regen2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Regen2_C* UGE_Regen2_C::GetDefaultObj()
{
	static class UGE_Regen2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Regen2_C*>(UGE_Regen2_C::StaticClass()->DefaultObject);

	return Default;
}

}


