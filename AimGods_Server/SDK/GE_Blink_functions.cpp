#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Blink.GE_Blink_C
// (None)

class UClass* UGE_Blink_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Blink_C");

	return Clss;
}


// GE_Blink_C GE_Blink.Default__GE_Blink_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Blink_C* UGE_Blink_C::GetDefaultObj()
{
	static class UGE_Blink_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Blink_C*>(UGE_Blink_C::StaticClass()->DefaultObject);

	return Default;
}

}


