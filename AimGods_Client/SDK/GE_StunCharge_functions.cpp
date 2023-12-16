#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_StunCharge.GE_StunCharge_C
// (None)

class UClass* UGE_StunCharge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_StunCharge_C");

	return Clss;
}


// GE_StunCharge_C GE_StunCharge.Default__GE_StunCharge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_StunCharge_C* UGE_StunCharge_C::GetDefaultObj()
{
	static class UGE_StunCharge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_StunCharge_C*>(UGE_StunCharge_C::StaticClass()->DefaultObject);

	return Default;
}

}


