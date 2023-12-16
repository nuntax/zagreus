#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_CounterHeadshotDebuff.GE_CounterHeadshotDebuff_C
// (None)

class UClass* UGE_CounterHeadshotDebuff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_CounterHeadshotDebuff_C");

	return Clss;
}


// GE_CounterHeadshotDebuff_C GE_CounterHeadshotDebuff.Default__GE_CounterHeadshotDebuff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_CounterHeadshotDebuff_C* UGE_CounterHeadshotDebuff_C::GetDefaultObj()
{
	static class UGE_CounterHeadshotDebuff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_CounterHeadshotDebuff_C*>(UGE_CounterHeadshotDebuff_C::StaticClass()->DefaultObject);

	return Default;
}

}


