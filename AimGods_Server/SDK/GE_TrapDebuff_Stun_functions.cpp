#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_TrapDebuff_Stun.GE_TrapDebuff_Stun_C
// (None)

class UClass* UGE_TrapDebuff_Stun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_TrapDebuff_Stun_C");

	return Clss;
}


// GE_TrapDebuff_Stun_C GE_TrapDebuff_Stun.Default__GE_TrapDebuff_Stun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_TrapDebuff_Stun_C* UGE_TrapDebuff_Stun_C::GetDefaultObj()
{
	static class UGE_TrapDebuff_Stun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_TrapDebuff_Stun_C*>(UGE_TrapDebuff_Stun_C::StaticClass()->DefaultObject);

	return Default;
}

}


