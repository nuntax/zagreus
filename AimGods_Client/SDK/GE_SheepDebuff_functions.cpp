#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SheepDebuff.GE_SheepDebuff_C
// (None)

class UClass* UGE_SheepDebuff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SheepDebuff_C");

	return Clss;
}


// GE_SheepDebuff_C GE_SheepDebuff.Default__GE_SheepDebuff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SheepDebuff_C* UGE_SheepDebuff_C::GetDefaultObj()
{
	static class UGE_SheepDebuff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SheepDebuff_C*>(UGE_SheepDebuff_C::StaticClass()->DefaultObject);

	return Default;
}

}


