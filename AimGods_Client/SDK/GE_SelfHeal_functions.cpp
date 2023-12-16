#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SelfHeal.GE_SelfHeal_C
// (None)

class UClass* UGE_SelfHeal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SelfHeal_C");

	return Clss;
}


// GE_SelfHeal_C GE_SelfHeal.Default__GE_SelfHeal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SelfHeal_C* UGE_SelfHeal_C::GetDefaultObj()
{
	static class UGE_SelfHeal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SelfHeal_C*>(UGE_SelfHeal_C::StaticClass()->DefaultObject);

	return Default;
}

}


