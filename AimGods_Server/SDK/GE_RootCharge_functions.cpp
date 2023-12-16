#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_RootCharge.GE_RootCharge_C
// (None)

class UClass* UGE_RootCharge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_RootCharge_C");

	return Clss;
}


// GE_RootCharge_C GE_RootCharge.Default__GE_RootCharge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_RootCharge_C* UGE_RootCharge_C::GetDefaultObj()
{
	static class UGE_RootCharge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_RootCharge_C*>(UGE_RootCharge_C::StaticClass()->DefaultObject);

	return Default;
}

}


