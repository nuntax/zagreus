#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SheepCharge.GE_SheepCharge_C
// (None)

class UClass* UGE_SheepCharge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SheepCharge_C");

	return Clss;
}


// GE_SheepCharge_C GE_SheepCharge.Default__GE_SheepCharge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SheepCharge_C* UGE_SheepCharge_C::GetDefaultObj()
{
	static class UGE_SheepCharge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SheepCharge_C*>(UGE_SheepCharge_C::StaticClass()->DefaultObject);

	return Default;
}

}


