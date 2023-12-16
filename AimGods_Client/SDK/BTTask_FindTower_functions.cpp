#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTTask_FindTower.BTTask_FindTower_C
// (None)

class UClass* UBTTask_FindTower_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_FindTower_C");

	return Clss;
}


// BTTask_FindTower_C BTTask_FindTower.Default__BTTask_FindTower_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTTask_FindTower_C* UBTTask_FindTower_C::GetDefaultObj()
{
	static class UBTTask_FindTower_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_FindTower_C*>(UBTTask_FindTower_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTTask_FindTower.BTTask_FindTower_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_FindTower_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_FindTower_C", "ReceiveExecuteAI");

	Params::UBTTask_FindTower_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_FindTower.BTTask_FindTower_C.ExecuteUbergraph_BTTask_FindTower
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAGAIController*             K2Node_DynamicCast_AsAGAIController                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AAGTowerBase*                CallFunc_GetTowerToAttack_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_FindTower_C::ExecuteUbergraph_BTTask_FindTower(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class AAGAIController* K2Node_DynamicCast_AsAGAIController, bool K2Node_DynamicCast_bSuccess, class AAGTowerBase* CallFunc_GetTowerToAttack_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_FindTower_C", "ExecuteUbergraph_BTTask_FindTower");

	Params::UBTTask_FindTower_C_ExecuteUbergraph_BTTask_FindTower_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_DynamicCast_AsAGAIController = K2Node_DynamicCast_AsAGAIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTowerToAttack_ReturnValue = CallFunc_GetTowerToAttack_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


