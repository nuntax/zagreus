#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x240 - 0x230)
// WidgetBlueprintGeneratedClass WB_EndGame.WB_EndGame_C
class UWB_EndGame_C : public UUserWidget
{
public:
	class UTextBlock*                            TextBlock_63;                                      // 0x230(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bRedTeamWon;                                       // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_E[0x3];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Position;                                          // 0x23C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_EndGame_C* GetDefaultObj();

	class FText GetEndGameMessage(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_AGPlayerController_C* K2Node_DynamicCast_AsBP_AGPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsRedTeam_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue);
};

}


