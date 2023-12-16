#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_CurseDebuff.GE_CurseDebuff_C
// (None)

class UClass* UGE_CurseDebuff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_CurseDebuff_C");

	return Clss;
}


// GE_CurseDebuff_C GE_CurseDebuff.Default__GE_CurseDebuff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_CurseDebuff_C* UGE_CurseDebuff_C::GetDefaultObj()
{
	static class UGE_CurseDebuff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_CurseDebuff_C*>(UGE_CurseDebuff_C::StaticClass()->DefaultObject);

	return Default;
}

}


