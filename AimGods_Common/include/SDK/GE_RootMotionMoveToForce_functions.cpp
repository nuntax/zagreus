#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_RootMotionMoveToForce.GE_RootMotionMoveToForce_C
// (None)

class UClass* UGE_RootMotionMoveToForce_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_RootMotionMoveToForce_C");

	return Clss;
}


// GE_RootMotionMoveToForce_C GE_RootMotionMoveToForce.Default__GE_RootMotionMoveToForce_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_RootMotionMoveToForce_C* UGE_RootMotionMoveToForce_C::GetDefaultObj()
{
	static class UGE_RootMotionMoveToForce_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_RootMotionMoveToForce_C*>(UGE_RootMotionMoveToForce_C::StaticClass()->DefaultObject);

	return Default;
}

}


