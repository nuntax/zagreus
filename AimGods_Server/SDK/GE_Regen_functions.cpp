#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Regen.GE_Regen_C
// (None)

class UClass* UGE_Regen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Regen_C");

	return Clss;
}


// GE_Regen_C GE_Regen.Default__GE_Regen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Regen_C* UGE_Regen_C::GetDefaultObj()
{
	static class UGE_Regen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Regen_C*>(UGE_Regen_C::StaticClass()->DefaultObject);

	return Default;
}

}


