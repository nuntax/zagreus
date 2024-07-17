#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Cleanse.GE_Cleanse_C
// (None)

class UClass* UGE_Cleanse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Cleanse_C");

	return Clss;
}


// GE_Cleanse_C GE_Cleanse.Default__GE_Cleanse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Cleanse_C* UGE_Cleanse_C::GetDefaultObj()
{
	static class UGE_Cleanse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Cleanse_C*>(UGE_Cleanse_C::StaticClass()->DefaultObject);

	return Default;
}

}


