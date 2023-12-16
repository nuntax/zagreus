#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ThunderstormCharge.GE_ThunderstormCharge_C
// (None)

class UClass* UGE_ThunderstormCharge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ThunderstormCharge_C");

	return Clss;
}


// GE_ThunderstormCharge_C GE_ThunderstormCharge.Default__GE_ThunderstormCharge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ThunderstormCharge_C* UGE_ThunderstormCharge_C::GetDefaultObj()
{
	static class UGE_ThunderstormCharge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ThunderstormCharge_C*>(UGE_ThunderstormCharge_C::StaticClass()->DefaultObject);

	return Default;
}

}


