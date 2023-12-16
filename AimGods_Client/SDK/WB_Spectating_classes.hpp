#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x248 - 0x230)
// WidgetBlueprintGeneratedClass WB_Spectating.WB_Spectating_C
class UWB_Spectating_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            TimerText;                                         // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_Ghost_C*                           OwningPawn;                                        // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_Spectating_C* GetDefaultObj();

	void UpdateTimer(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ABP_AGPlayerController_C* K2Node_DynamicCast_AsBP_AGPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class AAGGameState* K2Node_DynamicCast_AsAGGame_State, bool K2Node_DynamicCast_bSuccess_1, const struct FTimespan& CallFunc_MakeTimespan_ReturnValue, class FText CallFunc_AsTimespan_Timespan_ReturnValue);
	class FText GetInfoText(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool CallFunc_IsValid_ReturnValue, class FText K2Node_Select_Default);
	void Construct();
	void ExecuteUbergraph_WB_Spectating(int32 EntryPoint, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ABP_Ghost_C* K2Node_DynamicCast_AsBP_Ghost, bool K2Node_DynamicCast_bSuccess);
};

}


