#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x180 - 0x168)
// BlueprintGeneratedClass BP_InputDetect_Instance.BP_InputDetect_Instance_C
class UBP_InputDetect_Instance_C : public UGameInstance
{
public:
	bool                                         bShowMouse;                                        // 0x168(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EInputType                        InputType;                                         // 0x169(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39B[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastInlineDelegateProperty_            UpdateInputType;                                   // 0x170(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UBP_InputDetect_Instance_C* GetDefaultObj();

	void SetShowMouse(bool bShowMouse);
	void SetInputType(enum class EInputType InputType, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void UpdateInputType__DelegateSignature(enum class EInputType InputType);
};

}


