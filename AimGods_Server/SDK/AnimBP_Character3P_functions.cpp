#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass AnimBP_Character3P.AnimBP_Character3P_C
// (None)

class UClass* UAnimBP_Character3P_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimBP_Character3P_C");

	return Clss;
}


// AnimBP_Character3P_C AnimBP_Character3P.Default__AnimBP_Character3P_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimBP_Character3P_C* UAnimBP_Character3P_C::GetDefaultObj()
{
	static class UAnimBP_Character3P_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimBP_Character3P_C*>(UAnimBP_Character3P_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimBP_Character3P.AnimBP_Character3P_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAnimBP_Character3P_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_Character3P_C", "AnimGraph");

	Params::UAnimBP_Character3P_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function AnimBP_Character3P.AnimBP_Character3P_C.Can Jump
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Should_Jump                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bJumping                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAnimBP_Character3P_C::Can_Jump(bool Should_Jump, bool* bJumping, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_Character3P_C", "Can Jump");

	Params::UAnimBP_Character3P_C_Can_Jump_Params Parms{};

	Parms.Should_Jump = Should_Jump;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bJumping != nullptr)
		*bJumping = Parms.bJumping;

}


// Function AnimBP_Character3P.AnimBP_Character3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Character3P_AnimGraphNode_TransitionResult_D25429B644E6C66D625827BA5AE5F04E
// (BlueprintEvent)
// Parameters:

void UAnimBP_Character3P_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Character3P_AnimGraphNode_TransitionResult_D25429B644E6C66D625827BA5AE5F04E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_Character3P_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Character3P_AnimGraphNode_TransitionResult_D25429B644E6C66D625827BA5AE5F04E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnimBP_Character3P.AnimBP_Character3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Character3P_AnimGraphNode_TransitionResult_1F0CA7D54F1926766F307EBD0A3AE5E6
// (BlueprintEvent)
// Parameters:

void UAnimBP_Character3P_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Character3P_AnimGraphNode_TransitionResult_1F0CA7D54F1926766F307EBD0A3AE5E6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_Character3P_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Character3P_AnimGraphNode_TransitionResult_1F0CA7D54F1926766F307EBD0A3AE5E6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnimBP_Character3P.AnimBP_Character3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Character3P_AnimGraphNode_TransitionResult_315E9BF04EA579C328EB6A866B91C07A
// (BlueprintEvent)
// Parameters:

void UAnimBP_Character3P_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Character3P_AnimGraphNode_TransitionResult_315E9BF04EA579C328EB6A866B91C07A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_Character3P_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Character3P_AnimGraphNode_TransitionResult_315E9BF04EA579C328EB6A866B91C07A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnimBP_Character3P.AnimBP_Character3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Character3P_AnimGraphNode_TransitionResult_24E37AE040B13DA63FCEF0AE5F5F1415
// (BlueprintEvent)
// Parameters:

void UAnimBP_Character3P_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Character3P_AnimGraphNode_TransitionResult_24E37AE040B13DA63FCEF0AE5F5F1415()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_Character3P_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Character3P_AnimGraphNode_TransitionResult_24E37AE040B13DA63FCEF0AE5F5F1415");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnimBP_Character3P.AnimBP_Character3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Character3P_AnimGraphNode_TransitionResult_65693E2D4AACC1AD08E80C8AE9060490
// (BlueprintEvent)
// Parameters:

void UAnimBP_Character3P_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Character3P_AnimGraphNode_TransitionResult_65693E2D4AACC1AD08E80C8AE9060490()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_Character3P_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Character3P_AnimGraphNode_TransitionResult_65693E2D4AACC1AD08E80C8AE9060490");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnimBP_Character3P.AnimBP_Character3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Character3P_AnimGraphNode_TransitionResult_4AAD4A594EABD4F92E1D44BBD3F4830B
// (BlueprintEvent)
// Parameters:

void UAnimBP_Character3P_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Character3P_AnimGraphNode_TransitionResult_4AAD4A594EABD4F92E1D44BBD3F4830B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_Character3P_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Character3P_AnimGraphNode_TransitionResult_4AAD4A594EABD4F92E1D44BBD3F4830B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnimBP_Character3P.AnimBP_Character3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Character3P_AnimGraphNode_TransitionResult_F13AB6764EBE8335385B039A555B9993
// (BlueprintEvent)
// Parameters:

void UAnimBP_Character3P_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Character3P_AnimGraphNode_TransitionResult_F13AB6764EBE8335385B039A555B9993()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_Character3P_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Character3P_AnimGraphNode_TransitionResult_F13AB6764EBE8335385B039A555B9993");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnimBP_Character3P.AnimBP_Character3P_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_Character3P_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_Character3P_C", "BlueprintUpdateAnimation");

	Params::UAnimBP_Character3P_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AnimBP_Character3P.AnimBP_Character3P_C.Get Weapon IK Transform
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAnimBP_Character3P_C::Get_Weapon_IK_Transform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_Character3P_C", "Get Weapon IK Transform");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnimBP_Character3P.AnimBP_Character3P_C.Get Aim Offsets
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAnimBP_Character3P_C::Get_Aim_Offsets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_Character3P_C", "Get Aim Offsets");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnimBP_Character3P.AnimBP_Character3P_C.ExecuteUbergraph_AnimBP_Character3P
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_2 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFalling_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCrouching_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AGCharacter_C*           K2Node_DynamicCast_AsBP_AGCharacter                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDead_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalculateDirection_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_TransformToBoneSpace_OutPosition                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_TransformToBoneSpace_OutRotation                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_GetBaseAimRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ClampAngle_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_Character3P_C::ExecuteUbergraph_AnimBP_Character3P(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_2, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_2, bool CallFunc_Less_FloatFloat_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, float K2Node_Event_DeltaTimeX, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_IsCrouching_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class ABP_AGCharacter_C* K2Node_DynamicCast_AsBP_AGCharacter, bool K2Node_DynamicCast_bSuccess, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, bool CallFunc_IsDead_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_CalculateDirection_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_TransformToBoneSpace_OutPosition, const struct FRotator& CallFunc_TransformToBoneSpace_OutRotation, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FRotator& CallFunc_GetBaseAimRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_ClampAngle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_Character3P_C", "ExecuteUbergraph_AnimBP_Character3P");

	Params::UAnimBP_Character3P_C_ExecuteUbergraph_AnimBP_Character3P_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_1 = CallFunc_LessEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_2 = CallFunc_Greater_FloatFloat_ReturnValue_2;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_2 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_2;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_2 = CallFunc_Less_FloatFloat_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_IsFalling_ReturnValue = CallFunc_IsFalling_ReturnValue;
	Parms.CallFunc_IsCrouching_ReturnValue = CallFunc_IsCrouching_ReturnValue;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_AGCharacter = K2Node_DynamicCast_AsBP_AGCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_IsDead_ReturnValue = CallFunc_IsDead_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_CalculateDirection_ReturnValue = CallFunc_CalculateDirection_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_2 = CallFunc_LessEqual_FloatFloat_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_TransformToBoneSpace_OutPosition = CallFunc_TransformToBoneSpace_OutPosition;
	Parms.CallFunc_TransformToBoneSpace_OutRotation = CallFunc_TransformToBoneSpace_OutRotation;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_GetBaseAimRotation_ReturnValue = CallFunc_GetBaseAimRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_ClampAngle_ReturnValue = CallFunc_ClampAngle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


