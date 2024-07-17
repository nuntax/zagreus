#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Regen3.GE_Regen3_C
// (None)

class UClass* UGE_Regen3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Regen3_C");

	return Clss;
}


// GE_Regen3_C GE_Regen3.Default__GE_Regen3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Regen3_C* UGE_Regen3_C::GetDefaultObj()
{
	static class UGE_Regen3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Regen3_C*>(UGE_Regen3_C::StaticClass()->DefaultObject);

	return Default;
}

}


