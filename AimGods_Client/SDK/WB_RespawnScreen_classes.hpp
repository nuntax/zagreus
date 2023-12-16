#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x278 - 0x230)
// WidgetBlueprintGeneratedClass WB_RespawnScreen.WB_RespawnScreen_C
class UWB_RespawnScreen_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ByeAnim;                                           // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      WelcomeAnim;                                       // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                            SpawningTimer;                                     // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                TeamLogo;                                          // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TeamText;                                          // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        Countdown;                                         // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_62D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_AGPlayerController_C*              Owner;                                             // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CountdownTimer;                                    // 0x270(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_RespawnScreen_C* GetDefaultObj();

	void Finished_8290CD1B40040114A413D2A1483419FE();
	void Decrement_Timer();
	void Start_Respawn_Countdown(float Time_till_Respawn);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WB_RespawnScreen(int32 EntryPoint, const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_1, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_Subtract_FloatFloat_ReturnValue, float K2Node_CustomEvent_Time_till_Respawn, float CallFunc_FMax_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ABP_AGPlayerController_C* K2Node_DynamicCast_AsBP_AGPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsRedTeam_ReturnValue, bool CallFunc_IsRedTeam_ReturnValue_1, bool Temp_bool_IsClosed_Variable, class UTexture2D* K2Node_Select_Default, class FText CallFunc_Conv_FloatToText_ReturnValue, bool CallFunc_IsRedTeam_ReturnValue_2, class FText K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue, const struct FLinearColor& Temp_struct_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool Temp_bool_Variable_2, bool CallFunc_IsValid_ReturnValue_1, const struct FLinearColor& K2Node_Select_Default_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


