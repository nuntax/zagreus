#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SelfRegen2.GE_SelfRegen2_C
// (None)

class UClass* UGE_SelfRegen2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SelfRegen2_C");

	return Clss;
}


// GE_SelfRegen2_C GE_SelfRegen2.Default__GE_SelfRegen2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SelfRegen2_C* UGE_SelfRegen2_C::GetDefaultObj()
{
	static class UGE_SelfRegen2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SelfRegen2_C*>(UGE_SelfRegen2_C::StaticClass()->DefaultObject);

	return Default;
}

}


