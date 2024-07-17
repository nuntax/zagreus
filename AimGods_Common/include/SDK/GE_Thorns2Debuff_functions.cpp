#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Thorns2Debuff.GE_Thorns2Debuff_C
// (None)

class UClass* UGE_Thorns2Debuff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Thorns2Debuff_C");

	return Clss;
}


// GE_Thorns2Debuff_C GE_Thorns2Debuff.Default__GE_Thorns2Debuff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Thorns2Debuff_C* UGE_Thorns2Debuff_C::GetDefaultObj()
{
	static class UGE_Thorns2Debuff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Thorns2Debuff_C*>(UGE_Thorns2Debuff_C::StaticClass()->DefaultObject);

	return Default;
}

}


