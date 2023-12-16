#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_IceBlock.GE_IceBlock_C
// (None)

class UClass* UGE_IceBlock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_IceBlock_C");

	return Clss;
}


// GE_IceBlock_C GE_IceBlock.Default__GE_IceBlock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_IceBlock_C* UGE_IceBlock_C::GetDefaultObj()
{
	static class UGE_IceBlock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_IceBlock_C*>(UGE_IceBlock_C::StaticClass()->DefaultObject);

	return Default;
}

}


