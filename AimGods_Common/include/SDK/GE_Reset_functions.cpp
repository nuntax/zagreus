#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Reset.GE_Reset_C
// (None)

class UClass* UGE_Reset_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Reset_C");

	return Clss;
}


// GE_Reset_C GE_Reset.Default__GE_Reset_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Reset_C* UGE_Reset_C::GetDefaultObj()
{
	static class UGE_Reset_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Reset_C*>(UGE_Reset_C::StaticClass()->DefaultObject);

	return Default;
}

}


