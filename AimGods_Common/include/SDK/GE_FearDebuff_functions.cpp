#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_FearDebuff.GE_FearDebuff_C
// (None)

class UClass* UGE_FearDebuff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_FearDebuff_C");

	return Clss;
}


// GE_FearDebuff_C GE_FearDebuff.Default__GE_FearDebuff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_FearDebuff_C* UGE_FearDebuff_C::GetDefaultObj()
{
	static class UGE_FearDebuff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_FearDebuff_C*>(UGE_FearDebuff_C::StaticClass()->DefaultObject);

	return Default;
}

}


