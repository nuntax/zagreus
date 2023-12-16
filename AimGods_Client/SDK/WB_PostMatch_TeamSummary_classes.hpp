#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x248 - 0x230)
// WidgetBlueprintGeneratedClass WB_PostMatch_TeamSummary.WB_PostMatch_TeamSummary_C
class UWB_PostMatch_TeamSummary_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            Txt_EnemyTeamEloValue;                             // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_MyTeamEloValue;                                // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_PostMatch_TeamSummary_C* GetDefaultObj();

	void Construct();
	void TimeRefresh();
	void ExecuteUbergraph_WB_PostMatch_TeamSummary(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AAGPlayerController* K2Node_DynamicCast_AsAGPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class AAGPlayerState* K2Node_DynamicCast_AsAGPlayer_State, bool K2Node_DynamicCast_bSuccess_1, class ABP_AGPlayerController_C* K2Node_DynamicCast_AsBP_AGPlayer_Controller, bool K2Node_DynamicCast_bSuccess_2, class ABP_AGPlayerState_C* K2Node_DynamicCast_AsBP_AGPlayer_State, bool K2Node_DynamicCast_bSuccess_3, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}


