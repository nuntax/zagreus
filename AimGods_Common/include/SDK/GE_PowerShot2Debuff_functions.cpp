#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_PowerShot2Debuff.GE_PowerShot2Debuff_C
// (None)

class UClass* UGE_PowerShot2Debuff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_PowerShot2Debuff_C");

	return Clss;
}


// GE_PowerShot2Debuff_C GE_PowerShot2Debuff.Default__GE_PowerShot2Debuff_C
// (Public, Transactional, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_PowerShot2Debuff_C* UGE_PowerShot2Debuff_C::GetDefaultObj()
{
	static class UGE_PowerShot2Debuff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_PowerShot2Debuff_C*>(UGE_PowerShot2Debuff_C::StaticClass()->DefaultObject);

	return Default;
}

}


