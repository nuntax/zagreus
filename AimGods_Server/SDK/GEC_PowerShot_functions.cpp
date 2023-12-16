#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_PowerShot.GEC_PowerShot_C
// (None)

class UClass* UGEC_PowerShot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_PowerShot_C");

	return Clss;
}


// GEC_PowerShot_C GEC_PowerShot.Default__GEC_PowerShot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_PowerShot_C* UGEC_PowerShot_C::GetDefaultObj()
{
	static class UGEC_PowerShot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_PowerShot_C*>(UGEC_PowerShot_C::StaticClass()->DefaultObject);

	return Default;
}

}


