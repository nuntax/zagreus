#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_StunDebuff.GE_StunDebuff_C
// (None)

class UClass* UGE_StunDebuff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_StunDebuff_C");

	return Clss;
}


// GE_StunDebuff_C GE_StunDebuff.Default__GE_StunDebuff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_StunDebuff_C* UGE_StunDebuff_C::GetDefaultObj()
{
	static class UGE_StunDebuff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_StunDebuff_C*>(UGE_StunDebuff_C::StaticClass()->DefaultObject);

	return Default;
}

}


