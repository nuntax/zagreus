#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_PowerShot2.GEC_PowerShot2_C
// (None)

class UClass* UGEC_PowerShot2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_PowerShot2_C");

	return Clss;
}


// GEC_PowerShot2_C GEC_PowerShot2.Default__GEC_PowerShot2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_PowerShot2_C* UGEC_PowerShot2_C::GetDefaultObj()
{
	static class UGEC_PowerShot2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_PowerShot2_C*>(UGEC_PowerShot2_C::StaticClass()->DefaultObject);

	return Default;
}

}


