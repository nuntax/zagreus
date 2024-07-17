#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_RootDebuff_Infinite.GE_RootDebuff_Infinite_C
// (None)

class UClass* UGE_RootDebuff_Infinite_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_RootDebuff_Infinite_C");

	return Clss;
}


// GE_RootDebuff_Infinite_C GE_RootDebuff_Infinite.Default__GE_RootDebuff_Infinite_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_RootDebuff_Infinite_C* UGE_RootDebuff_Infinite_C::GetDefaultObj()
{
	static class UGE_RootDebuff_Infinite_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_RootDebuff_Infinite_C*>(UGE_RootDebuff_Infinite_C::StaticClass()->DefaultObject);

	return Default;
}

}


