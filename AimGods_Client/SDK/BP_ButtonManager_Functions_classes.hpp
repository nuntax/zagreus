#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_ButtonManager_Functions.BP_ButtonManager_Functions_C
class UBP_ButtonManager_Functions_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBP_ButtonManager_Functions_C* GetDefaultObj();

	void GetButtonManager(class UWB_Button_Base_C* ButtonWidget, class UObject* __WorldContext, TScriptInterface<class IBPi_ButtonManager_C>* ButtonManager, TScriptInterface<class IBPi_ButtonManager_C> CurrentManager);
};

}


