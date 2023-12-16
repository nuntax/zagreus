#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_RootDebuff.GE_RootDebuff_C
// (None)

class UClass* UGE_RootDebuff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_RootDebuff_C");

	return Clss;
}


// GE_RootDebuff_C GE_RootDebuff.Default__GE_RootDebuff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_RootDebuff_C* UGE_RootDebuff_C::GetDefaultObj()
{
	static class UGE_RootDebuff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_RootDebuff_C*>(UGE_RootDebuff_C::StaticClass()->DefaultObject);

	return Default;
}

}


