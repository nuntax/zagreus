#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SelfHeal3.GE_SelfHeal3_C
// (None)

class UClass* UGE_SelfHeal3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SelfHeal3_C");

	return Clss;
}


// GE_SelfHeal3_C GE_SelfHeal3.Default__GE_SelfHeal3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SelfHeal3_C* UGE_SelfHeal3_C::GetDefaultObj()
{
	static class UGE_SelfHeal3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SelfHeal3_C*>(UGE_SelfHeal3_C::StaticClass()->DefaultObject);

	return Default;
}

}


