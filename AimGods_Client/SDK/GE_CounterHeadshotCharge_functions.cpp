#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_CounterHeadshotCharge.GE_CounterHeadshotCharge_C
// (None)

class UClass* UGE_CounterHeadshotCharge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_CounterHeadshotCharge_C");

	return Clss;
}


// GE_CounterHeadshotCharge_C GE_CounterHeadshotCharge.Default__GE_CounterHeadshotCharge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_CounterHeadshotCharge_C* UGE_CounterHeadshotCharge_C::GetDefaultObj()
{
	static class UGE_CounterHeadshotCharge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_CounterHeadshotCharge_C*>(UGE_CounterHeadshotCharge_C::StaticClass()->DefaultObject);

	return Default;
}

}


