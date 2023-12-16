#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x4A8 - 0x498)
// BlueprintGeneratedClass BP_AGPlayerState.BP_AGPlayerState_C
class ABP_AGPlayerState_C : public AAGPlayerState
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x498(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x4A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_AGPlayerState_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_AGPlayerState(int32 EntryPoint);
};

}


