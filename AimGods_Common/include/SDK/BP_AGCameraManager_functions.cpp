#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AGCameraManager.BP_AGCameraManager_C
// (Actor)

class UClass* ABP_AGCameraManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AGCameraManager_C");

	return Clss;
}


// BP_AGCameraManager_C BP_AGCameraManager.Default__BP_AGCameraManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AGCameraManager_C* ABP_AGCameraManager_C::GetDefaultObj()
{
	static class ABP_AGCameraManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AGCameraManager_C*>(ABP_AGCameraManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


