#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Thorns2.GE_Thorns2_C
// (None)

class UClass* UGE_Thorns2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Thorns2_C");

	return Clss;
}


// GE_Thorns2_C GE_Thorns2.Default__GE_Thorns2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Thorns2_C* UGE_Thorns2_C::GetDefaultObj()
{
	static class UGE_Thorns2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Thorns2_C*>(UGE_Thorns2_C::StaticClass()->DefaultObject);

	return Default;
}

}


