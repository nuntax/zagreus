#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DisarmCharge.GE_DisarmCharge_C
// (None)

class UClass* UGE_DisarmCharge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DisarmCharge_C");

	return Clss;
}


// GE_DisarmCharge_C GE_DisarmCharge.Default__GE_DisarmCharge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DisarmCharge_C* UGE_DisarmCharge_C::GetDefaultObj()
{
	static class UGE_DisarmCharge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DisarmCharge_C*>(UGE_DisarmCharge_C::StaticClass()->DefaultObject);

	return Default;
}

}


