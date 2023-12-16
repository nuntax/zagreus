#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_BlizzardDebuff.GE_BlizzardDebuff_C
// (None)

class UClass* UGE_BlizzardDebuff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_BlizzardDebuff_C");

	return Clss;
}


// GE_BlizzardDebuff_C GE_BlizzardDebuff.Default__GE_BlizzardDebuff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_BlizzardDebuff_C* UGE_BlizzardDebuff_C::GetDefaultObj()
{
	static class UGE_BlizzardDebuff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_BlizzardDebuff_C*>(UGE_BlizzardDebuff_C::StaticClass()->DefaultObject);

	return Default;
}

}


