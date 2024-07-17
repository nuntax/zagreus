#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ExplosionCharge.GE_ExplosionCharge_C
// (None)

class UClass* UGE_ExplosionCharge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ExplosionCharge_C");

	return Clss;
}


// GE_ExplosionCharge_C GE_ExplosionCharge.Default__GE_ExplosionCharge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ExplosionCharge_C* UGE_ExplosionCharge_C::GetDefaultObj()
{
	static class UGE_ExplosionCharge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ExplosionCharge_C*>(UGE_ExplosionCharge_C::StaticClass()->DefaultObject);

	return Default;
}

}


