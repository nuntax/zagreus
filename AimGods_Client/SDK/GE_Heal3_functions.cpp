#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Heal3.GE_Heal3_C
// (None)

class UClass* UGE_Heal3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Heal3_C");

	return Clss;
}


// GE_Heal3_C GE_Heal3.Default__GE_Heal3_C
// (Public, Transactional, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Heal3_C* UGE_Heal3_C::GetDefaultObj()
{
	static class UGE_Heal3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Heal3_C*>(UGE_Heal3_C::StaticClass()->DefaultObject);

	return Default;
}

}


