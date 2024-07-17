#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SnipeCharge.GE_SnipeCharge_C
// (None)

class UClass* UGE_SnipeCharge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SnipeCharge_C");

	return Clss;
}


// GE_SnipeCharge_C GE_SnipeCharge.Default__GE_SnipeCharge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SnipeCharge_C* UGE_SnipeCharge_C::GetDefaultObj()
{
	static class UGE_SnipeCharge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SnipeCharge_C*>(UGE_SnipeCharge_C::StaticClass()->DefaultObject);

	return Default;
}

}


