#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DecalsFriezes.BP_DecalsFriezes_C
// (Actor)

class UClass* ABP_DecalsFriezes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DecalsFriezes_C");

	return Clss;
}


// BP_DecalsFriezes_C BP_DecalsFriezes.Default__BP_DecalsFriezes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DecalsFriezes_C* ABP_DecalsFriezes_C::GetDefaultObj()
{
	static class ABP_DecalsFriezes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DecalsFriezes_C*>(ABP_DecalsFriezes_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DecalsFriezes.BP_DecalsFriezes_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMaterials_DecalsFriezesB   MaterialsFriezesB                                                (Edit, BlueprintVisible, HasGetValueTypeHash)
// class FName                        Stain_Parameter                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CurrentMaterial                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           AtlasClassicalA                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           AtlasClassicalB                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMeshes_DecalsFriezes       MeshesFriezes                                                    (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FMaterials_DecalsFriezesA   MaterialsFriezesA                                                (Edit, BlueprintVisible, HasGetValueTypeHash)
// class FString                      DecalName                                                        (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DecalsFriezes_C::UserConstructionScript(const struct FMaterials_DecalsFriezesB& MaterialsFriezesB, class FName Stain_Parameter, class UMaterialInstance* CurrentMaterial, class UMaterialInstance* AtlasClassicalA, class UMaterialInstance* AtlasClassicalB, const struct FMeshes_DecalsFriezes& MeshesFriezes, const struct FMaterials_DecalsFriezesA& MaterialsFriezesA, const class FString& DecalName, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, class UMaterialInstance* CallFunc_Array_Get_Item, class UMaterialInstance* CallFunc_Array_Get_Item_1, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, class UStaticMesh* CallFunc_Array_Get_Item_2, bool CallFunc_SetStaticMesh_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DecalsFriezes_C", "UserConstructionScript");

	Params::ABP_DecalsFriezes_C_UserConstructionScript_Params Parms{};

	Parms.MaterialsFriezesB = MaterialsFriezesB;
	Parms.Stain_Parameter = Stain_Parameter;
	Parms.CurrentMaterial = CurrentMaterial;
	Parms.AtlasClassicalA = AtlasClassicalA;
	Parms.AtlasClassicalB = AtlasClassicalB;
	Parms.MeshesFriezes = MeshesFriezes;
	Parms.MaterialsFriezesA = MaterialsFriezesA;
	Parms.DecalName = DecalName;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetMaterial_ReturnValue_1 = CallFunc_GetMaterial_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_2 = CallFunc_Conv_ByteToInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DecalsFriezes.BP_DecalsFriezes_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_DecalsFriezes_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DecalsFriezes_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DecalsFriezes.BP_DecalsFriezes_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DecalsFriezes_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DecalsFriezes_C", "ReceiveTick");

	Params::ABP_DecalsFriezes_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DecalsFriezes.BP_DecalsFriezes_C.ExecuteUbergraph_BP_DecalsFriezes
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DecalsFriezes_C::ExecuteUbergraph_BP_DecalsFriezes(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DecalsFriezes_C", "ExecuteUbergraph_BP_DecalsFriezes");

	Params::ABP_DecalsFriezes_C_ExecuteUbergraph_BP_DecalsFriezes_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


