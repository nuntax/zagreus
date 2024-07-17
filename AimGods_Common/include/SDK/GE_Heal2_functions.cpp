#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Heal2.GE_Heal2_C
// (None)

class UClass* UGE_Heal2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Heal2_C");

	return Clss;
}


// GE_Heal2_C GE_Heal2.Default__GE_Heal2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Heal2_C* UGE_Heal2_C::GetDefaultObj()
{
	static class UGE_Heal2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Heal2_C*>(UGE_Heal2_C::StaticClass()->DefaultObject);

	return Default;
}

}


