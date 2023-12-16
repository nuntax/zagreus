#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SelfRegen.GE_SelfRegen_C
// (None)

class UClass* UGE_SelfRegen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SelfRegen_C");

	return Clss;
}


// GE_SelfRegen_C GE_SelfRegen.Default__GE_SelfRegen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SelfRegen_C* UGE_SelfRegen_C::GetDefaultObj()
{
	static class UGE_SelfRegen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SelfRegen_C*>(UGE_SelfRegen_C::StaticClass()->DefaultObject);

	return Default;
}

}


