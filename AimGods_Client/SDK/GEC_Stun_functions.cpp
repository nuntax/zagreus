#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_Stun.GEC_Stun_C
// (None)

class UClass* UGEC_Stun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_Stun_C");

	return Clss;
}


// GEC_Stun_C GEC_Stun.Default__GEC_Stun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_Stun_C* UGEC_Stun_C::GetDefaultObj()
{
	static class UGEC_Stun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_Stun_C*>(UGEC_Stun_C::StaticClass()->DefaultObject);

	return Default;
}

}


