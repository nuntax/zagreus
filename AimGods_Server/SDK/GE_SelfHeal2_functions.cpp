#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SelfHeal2.GE_SelfHeal2_C
// (None)

class UClass* UGE_SelfHeal2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SelfHeal2_C");

	return Clss;
}


// GE_SelfHeal2_C GE_SelfHeal2.Default__GE_SelfHeal2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SelfHeal2_C* UGE_SelfHeal2_C::GetDefaultObj()
{
	static class UGE_SelfHeal2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SelfHeal2_C*>(UGE_SelfHeal2_C::StaticClass()->DefaultObject);

	return Default;
}

}


