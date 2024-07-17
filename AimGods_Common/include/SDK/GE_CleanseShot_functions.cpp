#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_CleanseShot.GE_CleanseShot_C
// (None)

class UClass* UGE_CleanseShot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_CleanseShot_C");

	return Clss;
}


// GE_CleanseShot_C GE_CleanseShot.Default__GE_CleanseShot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_CleanseShot_C* UGE_CleanseShot_C::GetDefaultObj()
{
	static class UGE_CleanseShot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_CleanseShot_C*>(UGE_CleanseShot_C::StaticClass()->DefaultObject);

	return Default;
}

}


