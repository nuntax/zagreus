#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Vanish.GE_Vanish_C
// (None)

class UClass* UGE_Vanish_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Vanish_C");

	return Clss;
}


// GE_Vanish_C GE_Vanish.Default__GE_Vanish_C
// (Public, Transactional, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Vanish_C* UGE_Vanish_C::GetDefaultObj()
{
	static class UGE_Vanish_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Vanish_C*>(UGE_Vanish_C::StaticClass()->DefaultObject);

	return Default;
}

}


