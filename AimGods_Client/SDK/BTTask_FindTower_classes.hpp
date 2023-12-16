#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0xE0 - 0xA8)
// BlueprintGeneratedClass BTTask_FindTower.BTTask_FindTower_C
class UBTTask_FindTower_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                  DestinationActorKeyName;                           // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                DestinationActor;                                  // 0xB8(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UBTTask_FindTower_C* GetDefaultObj();

	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_FindTower(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class AAGAIController* K2Node_DynamicCast_AsAGAIController, bool K2Node_DynamicCast_bSuccess, class AAGTowerBase* CallFunc_GetTowerToAttack_ReturnValue);
};

}


