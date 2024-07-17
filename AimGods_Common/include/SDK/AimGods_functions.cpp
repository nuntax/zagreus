#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AimGods.AGAbilitySystemComponent
// (None)

class UClass* UAGAbilitySystemComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGAbilitySystemComponent");

	return Clss;
}


// AGAbilitySystemComponent AimGods.Default__AGAbilitySystemComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAGAbilitySystemComponent* UAGAbilitySystemComponent::GetDefaultObj()
{
	static class UAGAbilitySystemComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAGAbilitySystemComponent*>(UAGAbilitySystemComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AimGods.AGAbilitySystemComponent.RemoveActiveEffectsByAssetTags
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       GameplayCueTag                                                   (Parm, NativeAccessSpecifierPublic)

void UAGAbilitySystemComponent::RemoveActiveEffectsByAssetTags(const struct FGameplayTagContainer& GameplayCueTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGAbilitySystemComponent", "RemoveActiveEffectsByAssetTags");

	Params::UAGAbilitySystemComponent_RemoveActiveEffectsByAssetTags_Params Parms{};

	Parms.GameplayCueTag = GameplayCueTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGAbilitySystemComponent.OnActiveGameplayEffectRemoved
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FActiveGameplayEffect       RemovedEffect                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAGAbilitySystemComponent::OnActiveGameplayEffectRemoved(struct FActiveGameplayEffect& RemovedEffect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGAbilitySystemComponent", "OnActiveGameplayEffectRemoved");

	Params::UAGAbilitySystemComponent_OnActiveGameplayEffectRemoved_Params Parms{};

	Parms.RemovedEffect = RemovedEffect;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGAbilitySystemComponent.OnActiveGameplayEffectAddedToSelf
// (Final, Native, Public, HasOutParams)
// Parameters:
// class UAbilitySystemComponent*     AbilitySystemComponent                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpec         EffectSpec                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle EffectHandle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAGAbilitySystemComponent::OnActiveGameplayEffectAddedToSelf(class UAbilitySystemComponent* AbilitySystemComponent, struct FGameplayEffectSpec& EffectSpec, const struct FActiveGameplayEffectHandle& EffectHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGAbilitySystemComponent", "OnActiveGameplayEffectAddedToSelf");

	Params::UAGAbilitySystemComponent_OnActiveGameplayEffectAddedToSelf_Params Parms{};

	Parms.AbilitySystemComponent = AbilitySystemComponent;
	Parms.EffectSpec = EffectSpec;
	Parms.EffectHandle = EffectHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGAbilitySystemComponent.GetActionNamePairedWithAbilityTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                AbilityTag                                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAGAbilitySystemComponent::GetActionNamePairedWithAbilityTag(const struct FGameplayTag& AbilityTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGAbilitySystemComponent", "GetActionNamePairedWithAbilityTag");

	Params::UAGAbilitySystemComponent_GetActionNamePairedWithAbilityTag_Params Parms{};

	Parms.AbilityTag = AbilityTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.AGAbilitySystemComponent.CancelAbility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                AbilityTag                                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAGAbilitySystemComponent::CancelAbility(const struct FGameplayTag& AbilityTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGAbilitySystemComponent", "CancelAbility");

	Params::UAGAbilitySystemComponent_CancelAbility_Params Parms{};

	Parms.AbilityTag = AbilityTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGAbilitySystemComponent.BP_RemoveLooseGameplayTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                GameplayCueTag                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Amount                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAGAbilitySystemComponent::BP_RemoveLooseGameplayTag(const struct FGameplayTag& GameplayCueTag, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGAbilitySystemComponent", "BP_RemoveLooseGameplayTag");

	Params::UAGAbilitySystemComponent_BP_RemoveLooseGameplayTag_Params Parms{};

	Parms.GameplayCueTag = GameplayCueTag;
	Parms.Amount = Amount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGAbilitySystemComponent.BP_RemoveGameplayCue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                GameplayCueTag                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAGAbilitySystemComponent::BP_RemoveGameplayCue(const struct FGameplayTag& GameplayCueTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGAbilitySystemComponent", "BP_RemoveGameplayCue");

	Params::UAGAbilitySystemComponent_BP_RemoveGameplayCue_Params Parms{};

	Parms.GameplayCueTag = GameplayCueTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGAbilitySystemComponent.BP_RemoveAllGameplayCues
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAGAbilitySystemComponent::BP_RemoveAllGameplayCues()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGAbilitySystemComponent", "BP_RemoveAllGameplayCues");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGAbilitySystemComponent.BP_GetGameplayEffectRemainingDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FActiveGameplayEffectHandle Handle                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAGAbilitySystemComponent::BP_GetGameplayEffectRemainingDuration(const struct FActiveGameplayEffectHandle& Handle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGAbilitySystemComponent", "BP_GetGameplayEffectRemainingDuration");

	Params::UAGAbilitySystemComponent_BP_GetGameplayEffectRemainingDuration_Params Parms{};

	Parms.Handle = Handle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.AGAbilitySystemComponent.BP_GetBlockedAbilityTags
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer       ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer UAGAbilitySystemComponent::BP_GetBlockedAbilityTags()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGAbilitySystemComponent", "BP_GetBlockedAbilityTags");

	Params::UAGAbilitySystemComponent_BP_GetBlockedAbilityTags_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.AGAbilitySystemComponent.BP_FindAbilitySpecFromClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TSubclassOf<class UGameplayAbility>InAbilityClass                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilitySpec        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayAbilitySpec UAGAbilitySystemComponent::BP_FindAbilitySpecFromClass(TSubclassOf<class UGameplayAbility> InAbilityClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGAbilitySystemComponent", "BP_FindAbilitySpecFromClass");

	Params::UAGAbilitySystemComponent_BP_FindAbilitySpecFromClass_Params Parms{};

	Parms.InAbilityClass = InAbilityClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.AGAbilitySystemComponent.BP_ExecuteGameplayCue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                GameplayCueTag                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      EffectParameters                                                 (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UAGAbilitySystemComponent::BP_ExecuteGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& EffectParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGAbilitySystemComponent", "BP_ExecuteGameplayCue");

	Params::UAGAbilitySystemComponent_BP_ExecuteGameplayCue_Params Parms{};

	Parms.GameplayCueTag = GameplayCueTag;
	Parms.EffectParameters = EffectParameters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGAbilitySystemComponent.BP_AddGameplayCue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                GameplayCueTag                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      EffectParameters                                                 (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UAGAbilitySystemComponent::BP_AddGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& EffectParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGAbilitySystemComponent", "BP_AddGameplayCue");

	Params::UAGAbilitySystemComponent_BP_AddGameplayCue_Params Parms{};

	Parms.GameplayCueTag = GameplayCueTag;
	Parms.EffectParameters = EffectParameters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AimGods.AGAggroSphereComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UAGAggroSphereComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGAggroSphereComponent");

	return Clss;
}


// AGAggroSphereComponent AimGods.Default__AGAggroSphereComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAGAggroSphereComponent* UAGAggroSphereComponent::GetDefaultObj()
{
	static class UAGAggroSphereComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAGAggroSphereComponent*>(UAGAggroSphereComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AimGods.AGAggroSphereComponent.GetAggroActors
// (Final, Native, Public, Const)
// Parameters:
// TArray<class AActor*>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class AActor*> UAGAggroSphereComponent::GetAggroActors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGAggroSphereComponent", "GetAggroActors");

	Params::UAGAggroSphereComponent_GetAggroActors_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.AGAggroSphereComponent.ActorLeftAggroRadius
// (Final, Native, Public)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAGAggroSphereComponent::ActorLeftAggroRadius(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGAggroSphereComponent", "ActorLeftAggroRadius");

	Params::UAGAggroSphereComponent_ActorLeftAggroRadius_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGAggroSphereComponent.ActorEnteredAggroRadius
// (Final, Native, Public, HasOutParams)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFromSweep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  SweepResult                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UAGAggroSphereComponent::ActorEnteredAggroRadius(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGAggroSphereComponent", "ActorEnteredAggroRadius");

	Params::UAGAggroSphereComponent_ActorEnteredAggroRadius_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGAggroSphereComponent.ActorDiedInAggroRadius
// (Final, Native, Public)
// Parameters:
// class AActor*                      KilledActor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*                 Killer                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAGAggroSphereComponent::ActorDiedInAggroRadius(class AActor* KilledActor, class AController* Killer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGAggroSphereComponent", "ActorDiedInAggroRadius");

	Params::UAGAggroSphereComponent_ActorDiedInAggroRadius_Params Parms{};

	Parms.KilledActor = KilledActor;
	Parms.Killer = Killer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AimGods.AGCharacterBase
// (Actor, Pawn)

class UClass* AAGCharacterBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGCharacterBase");

	return Clss;
}


// AGCharacterBase AimGods.Default__AGCharacterBase
// (Public, ClassDefaultObject, ArchetypeObject)

class AAGCharacterBase* AAGCharacterBase::GetDefaultObj()
{
	static class AAGCharacterBase* Default = nullptr;

	if (!Default)
		Default = static_cast<AAGCharacterBase*>(AAGCharacterBase::StaticClass()->DefaultObject);

	return Default;
}


// Function AimGods.AGCharacterBase.SetCanMove
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// bool                               CanMove                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGCharacterBase::SetCanMove(bool CanMove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCharacterBase", "SetCanMove");

	Params::AAGCharacterBase_SetCanMove_Params Parms{};

	Parms.CanMove = CanMove;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGCharacterBase.Server_ShowDamageNumberOnSpectators
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// class AAGCharacterBase*            DamagedCharacter                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAGDamageNumber             DamageNumber                                                     (Parm, NativeAccessSpecifierPublic)

void AAGCharacterBase::Server_ShowDamageNumberOnSpectators(class AAGCharacterBase* DamagedCharacter, const struct FAGDamageNumber& DamageNumber)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCharacterBase", "Server_ShowDamageNumberOnSpectators");

	Params::AAGCharacterBase_Server_ShowDamageNumberOnSpectators_Params Parms{};

	Parms.DamagedCharacter = DamagedCharacter;
	Parms.DamageNumber = DamageNumber;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGCharacterBase.IsDead
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AAGCharacterBase::IsDead()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCharacterBase", "IsDead");

	Params::AAGCharacterBase_IsDead_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.AGCharacterBase.IsAlive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AAGCharacterBase::IsAlive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCharacterBase", "IsAlive");

	Params::AAGCharacterBase_IsAlive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.AGCharacterBase.GetMoveSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AAGCharacterBase::GetMoveSpeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCharacterBase", "GetMoveSpeed");

	Params::AAGCharacterBase_GetMoveSpeed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AimGods.AGAICharacter
// (Actor, Pawn)

class UClass* AAGAICharacter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGAICharacter");

	return Clss;
}


// AGAICharacter AimGods.Default__AGAICharacter
// (Public, ClassDefaultObject, ArchetypeObject)

class AAGAICharacter* AAGAICharacter::GetDefaultObj()
{
	static class AAGAICharacter* Default = nullptr;

	if (!Default)
		Default = static_cast<AAGAICharacter*>(AAGAICharacter::StaticClass()->DefaultObject);

	return Default;
}


// Function AimGods.AGAICharacter.ShootTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Target                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGAICharacter::ShootTarget(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGAICharacter", "ShootTarget");

	Params::AAGAICharacter_ShootTarget_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGAICharacter.OnRep_Killer
// (Final, Native, Protected)
// Parameters:

void AAGAICharacter::OnRep_Killer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGAICharacter", "OnRep_Killer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGAICharacter.EnemyLeftAggroRadius
// (Final, Native, Protected)
// Parameters:
// class AActor*                      EnemyActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGAICharacter::EnemyLeftAggroRadius(class AActor* EnemyActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGAICharacter", "EnemyLeftAggroRadius");

	Params::AAGAICharacter_EnemyLeftAggroRadius_Params Parms{};

	Parms.EnemyActor = EnemyActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGAICharacter.EnemyEnteredAggroRadius
// (Final, Native, Protected)
// Parameters:
// class AActor*                      EnemyActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGAICharacter::EnemyEnteredAggroRadius(class AActor* EnemyActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGAICharacter", "EnemyEnteredAggroRadius");

	Params::AAGAICharacter_EnemyEnteredAggroRadius_Params Parms{};

	Parms.EnemyActor = EnemyActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGAICharacter.BPHandleDeath
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      KillerActor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGAICharacter::BPHandleDeath(class AActor* KillerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGAICharacter", "BPHandleDeath");

	Params::AAGAICharacter_BPHandleDeath_Params Parms{};

	Parms.KillerActor = KillerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AimGods.AGAICharacter.ActivateShieldFX
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bEnableFX                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGAICharacter::ActivateShieldFX(bool bEnableFX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGAICharacter", "ActivateShieldFX");

	Params::AAGAICharacter_ActivateShieldFX_Params Parms{};

	Parms.bEnableFX = bEnableFX;

	UObject::ProcessEvent(Func, &Parms);

}


// Class AimGods.AGAIController
// (Actor)

class UClass* AAGAIController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGAIController");

	return Clss;
}


// AGAIController AimGods.Default__AGAIController
// (Public, ClassDefaultObject, ArchetypeObject)

class AAGAIController* AAGAIController::GetDefaultObj()
{
	static class AAGAIController* Default = nullptr;

	if (!Default)
		Default = static_cast<AAGAIController*>(AAGAIController::StaticClass()->DefaultObject);

	return Default;
}


// Function AimGods.AGAIController.GetTowerToAttack
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AAGTowerBase*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AAGTowerBase* AAGAIController::GetTowerToAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGAIController", "GetTowerToAttack");

	Params::AAGAIController_GetTowerToAttack_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.AGAIController.FindTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AAGAIController::FindTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGAIController", "FindTarget");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGAIController.EnemyLeftAggroRadius
// (Final, Native, Protected)
// Parameters:
// class AActor*                      EnemyActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGAIController::EnemyLeftAggroRadius(class AActor* EnemyActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGAIController", "EnemyLeftAggroRadius");

	Params::AAGAIController_EnemyLeftAggroRadius_Params Parms{};

	Parms.EnemyActor = EnemyActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGAIController.EnemyEnteredAggroRadius
// (Final, Native, Protected)
// Parameters:
// class AActor*                      EnemADetourCrowdAIControlleryActor                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGAIController::EnemyEnteredAggroRadius(class AActor* EnemADetourCrowdAIControlleryActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGAIController", "EnemyEnteredAggroRadius");

	Params::AAGAIController_EnemyEnteredAggroRadius_Params Parms{};

	Parms.EnemADetourCrowdAIControlleryActor = EnemADetourCrowdAIControlleryActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AimGods.AGAnimNotify_PlayLocalSound
// (None)

class UClass* UAGAnimNotify_PlayLocalSound::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGAnimNotify_PlayLocalSound");

	return Clss;
}


// AGAnimNotify_PlayLocalSound AimGods.Default__AGAnimNotify_PlayLocalSound
// (Public, ClassDefaultObject, ArchetypeObject)

class UAGAnimNotify_PlayLocalSound* UAGAnimNotify_PlayLocalSound::GetDefaultObj()
{
	static class UAGAnimNotify_PlayLocalSound* Default = nullptr;

	if (!Default)
		Default = static_cast<UAGAnimNotify_PlayLocalSound*>(UAGAnimNotify_PlayLocalSound::StaticClass()->DefaultObject);

	return Default;
}


// Class AimGods.AGAT_WaitTargetDataUsingActor
// (None)

class UClass* UAGAT_WaitTargetDataUsingActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGAT_WaitTargetDataUsingActor");

	return Clss;
}


// AGAT_WaitTargetDataUsingActor AimGods.Default__AGAT_WaitTargetDataUsingActor
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAGAT_WaitTargetDataUsingActor* UAGAT_WaitTargetDataUsingActor::GetDefaultObj()
{
	static class UAGAT_WaitTargetDataUsingActor* Default = nullptr;

	if (!Default)
		Default = static_cast<UAGAT_WaitTargetDataUsingActor*>(UAGAT_WaitTargetDataUsingActor::StaticClass()->DefaultObject);

	return Default;
}


// Class AimGods.AGAttributes
// (None)

class UClass* UAGAttributes::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGAttributes");

	return Clss;
}


// AGAttributes AimGods.Default__AGAttributes
// (Public, ClassDefaultObject, ArchetypeObject)

class UAGAttributes* UAGAttributes::GetDefaultObj()
{
	static class UAGAttributes* Default = nullptr;

	if (!Default)
		Default = static_cast<UAGAttributes*>(UAGAttributes::StaticClass()->DefaultObject);

	return Default;
}


// Function AimGods.AGAttributes.OnRep_MoveSpeed
// (Native, Public, HasOutParams)
// Parameters:
// struct FGameplayAttributeData      OldMoveSpeed                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAGAttributes::OnRep_MoveSpeed(struct FGameplayAttributeData& OldMoveSpeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGAttributes", "OnRep_MoveSpeed");

	Params::UAGAttributes_OnRep_MoveSpeed_Params Parms{};

	Parms.OldMoveSpeed = OldMoveSpeed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGAttributes.OnRep_MaxHealth
// (Native, Public, HasOutParams)
// Parameters:
// struct FGameplayAttributeData      OldMaxHealth                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAGAttributes::OnRep_MaxHealth(struct FGameplayAttributeData& OldMaxHealth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGAttributes", "OnRep_MaxHealth");

	Params::UAGAttributes_OnRep_MaxHealth_Params Parms{};

	Parms.OldMaxHealth = OldMaxHealth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGAttributes.OnRep_Lifesteal
// (Native, Public, HasOutParams)
// Parameters:
// struct FGameplayAttributeData      OldLifesteal                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAGAttributes::OnRep_Lifesteal(struct FGameplayAttributeData& OldLifesteal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGAttributes", "OnRep_Lifesteal");

	Params::UAGAttributes_OnRep_Lifesteal_Params Parms{};

	Parms.OldLifesteal = OldLifesteal;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGAttributes.OnRep_IncomingHealMultiplier
// (Native, Public, HasOutParams)
// Parameters:
// struct FGameplayAttributeData      OldIncomingHealMultiplier                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAGAttributes::OnRep_IncomingHealMultiplier(struct FGameplayAttributeData& OldIncomingHealMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGAttributes", "OnRep_IncomingHealMultiplier");

	Params::UAGAttributes_OnRep_IncomingHealMultiplier_Params Parms{};

	Parms.OldIncomingHealMultiplier = OldIncomingHealMultiplier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGAttributes.OnRep_HealthRegeneration
// (Native, Public, HasOutParams)
// Parameters:
// struct FGameplayAttributeData      OldHealthRegeneration                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAGAttributes::OnRep_HealthRegeneration(struct FGameplayAttributeData& OldHealthRegeneration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGAttributes", "OnRep_HealthRegeneration");

	Params::UAGAttributes_OnRep_HealthRegeneration_Params Parms{};

	Parms.OldHealthRegeneration = OldHealthRegeneration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGAttributes.OnRep_Health
// (Native, Public, HasOutParams)
// Parameters:
// struct FGameplayAttributeData      OldHealth                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAGAttributes::OnRep_Health(struct FGameplayAttributeData& OldHealth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGAttributes", "OnRep_Health");

	Params::UAGAttributes_OnRep_Health_Params Parms{};

	Parms.OldHealth = OldHealth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGAttributes.OnRep_HeadshotDefense
// (Native, Public, HasOutParams)
// Parameters:
// struct FGameplayAttributeData      OldHeadshotDefense                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAGAttributes::OnRep_HeadshotDefense(struct FGameplayAttributeData& OldHeadshotDefense)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGAttributes", "OnRep_HeadshotDefense");

	Params::UAGAttributes_OnRep_HeadshotDefense_Params Parms{};

	Parms.OldHeadshotDefense = OldHeadshotDefense;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGAttributes.OnRep_HeadshotDamageMultiplier
// (Native, Public, HasOutParams)
// Parameters:
// struct FGameplayAttributeData      OldHeadshotDamageMultiplier                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAGAttributes::OnRep_HeadshotDamageMultiplier(struct FGameplayAttributeData& OldHeadshotDamageMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGAttributes", "OnRep_HeadshotDamageMultiplier");

	Params::UAGAttributes_OnRep_HeadshotDamageMultiplier_Params Parms{};

	Parms.OldHeadshotDamageMultiplier = OldHeadshotDamageMultiplier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGAttributes.OnRep_DelayBetweenShots
// (Native, Public, HasOutParams)
// Parameters:
// struct FGameplayAttributeData      OldDelayBetweenShots                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAGAttributes::OnRep_DelayBetweenShots(struct FGameplayAttributeData& OldDelayBetweenShots)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGAttributes", "OnRep_DelayBetweenShots");

	Params::UAGAttributes_OnRep_DelayBetweenShots_Params Parms{};

	Parms.OldDelayBetweenShots = OldDelayBetweenShots;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGAttributes.OnRep_Defense
// (Native, Public, HasOutParams)
// Parameters:
// struct FGameplayAttributeData      OldDefense                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAGAttributes::OnRep_Defense(struct FGameplayAttributeData& OldDefense)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGAttributes", "OnRep_Defense");

	Params::UAGAttributes_OnRep_Defense_Params Parms{};

	Parms.OldDefense = OldDefense;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGAttributes.OnRep_AttackPower
// (Native, Public, HasOutParams)
// Parameters:
// struct FGameplayAttributeData      OldAttackPower                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAGAttributes::OnRep_AttackPower(struct FGameplayAttributeData& OldAttackPower)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGAttributes", "OnRep_AttackPower");

	Params::UAGAttributes_OnRep_AttackPower_Params Parms{};

	Parms.OldAttackPower = OldAttackPower;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AimGods.AGAttributeSetBase
// (None)

class UClass* UAGAttributeSetBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGAttributeSetBase");

	return Clss;
}


// AGAttributeSetBase AimGods.Default__AGAttributeSetBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UAGAttributeSetBase* UAGAttributeSetBase::GetDefaultObj()
{
	static class UAGAttributeSetBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UAGAttributeSetBase*>(UAGAttributeSetBase::StaticClass()->DefaultObject);

	return Default;
}


// Class AimGods.AGAttributeSetPlayer
// (None)

class UClass* UAGAttributeSetPlayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGAttributeSetPlayer");

	return Clss;
}


// AGAttributeSetPlayer AimGods.Default__AGAttributeSetPlayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UAGAttributeSetPlayer* UAGAttributeSetPlayer::GetDefaultObj()
{
	static class UAGAttributeSetPlayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UAGAttributeSetPlayer*>(UAGAttributeSetPlayer::StaticClass()->DefaultObject);

	return Default;
}


// Function AimGods.AGAttributeSetPlayer.OnRep_TimeBetweenShots
// (Native, Public, HasOutParams)
// Parameters:
// struct FGameplayAttributeData      OldTimeBetweenShots                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAGAttributeSetPlayer::OnRep_TimeBetweenShots(struct FGameplayAttributeData& OldTimeBetweenShots)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGAttributeSetPlayer", "OnRep_TimeBetweenShots");

	Params::UAGAttributeSetPlayer_OnRep_TimeBetweenShots_Params Parms{};

	Parms.OldTimeBetweenShots = OldTimeBetweenShots;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGAttributeSetPlayer.OnRep_HeadshotDamageMultiplier
// (Native, Public, HasOutParams)
// Parameters:
// struct FGameplayAttributeData      OldHeadshotDamageMultiplier                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAGAttributeSetPlayer::OnRep_HeadshotDamageMultiplier(struct FGameplayAttributeData& OldHeadshotDamageMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGAttributeSetPlayer", "OnRep_HeadshotDamageMultiplier");

	Params::UAGAttributeSetPlayer_OnRep_HeadshotDamageMultiplier_Params Parms{};

	Parms.OldHeadshotDamageMultiplier = OldHeadshotDamageMultiplier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGAttributeSetPlayer.OnRep_Gold
// (Native, Public, HasOutParams)
// Parameters:
// struct FGameplayAttributeData      OldGold                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAGAttributeSetPlayer::OnRep_Gold(struct FGameplayAttributeData& OldGold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGAttributeSetPlayer", "OnRep_Gold");

	Params::UAGAttributeSetPlayer_OnRep_Gold_Params Parms{};

	Parms.OldGold = OldGold;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AimGods.AGAuthSubsystem
// (None)

class UClass* UAGAuthSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGAuthSubsystem");

	return Clss;
}


// AGAuthSubsystem AimGods.Default__AGAuthSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UAGAuthSubsystem* UAGAuthSubsystem::GetDefaultObj()
{
	static class UAGAuthSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UAGAuthSubsystem*>(UAGAuthSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function AimGods.AGAuthSubsystem.Login
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Username                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Password                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAGAuthSubsystem::Login(const class FString& Username, const class FString& Password)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGAuthSubsystem", "Login");

	Params::UAGAuthSubsystem_Login_Params Parms{};

	Parms.Username = Username;
	Parms.Password = Password;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGAuthSubsystem.GetUserInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAGAuthSubsystem::GetUserInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGAuthSubsystem", "GetUserInfo");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGAuthSubsystem.ForceLogin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Username                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Password                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAGAuthSubsystem::ForceLogin(const class FString& Username, const class FString& Password)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGAuthSubsystem", "ForceLogin");

	Params::UAGAuthSubsystem_ForceLogin_Params Parms{};

	Parms.Username = Username;
	Parms.Password = Password;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGAuthSubsystem.AutoRefreshToken
// (Final, Native, Public)
// Parameters:

void UAGAuthSubsystem::AutoRefreshToken()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGAuthSubsystem", "AutoRefreshToken");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class AimGods.AGBaseLocation
// (Actor)

class UClass* AAGBaseLocation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGBaseLocation");

	return Clss;
}


// AGBaseLocation AimGods.Default__AGBaseLocation
// (Public, ClassDefaultObject, ArchetypeObject)

class AAGBaseLocation* AAGBaseLocation::GetDefaultObj()
{
	static class AAGBaseLocation* Default = nullptr;

	if (!Default)
		Default = static_cast<AAGBaseLocation*>(AAGBaseLocation::StaticClass()->DefaultObject);

	return Default;
}


// Class AimGods.AGCharacter
// (Actor, Pawn)

class UClass* AAGCharacter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGCharacter");

	return Clss;
}


// AGCharacter AimGods.Default__AGCharacter
// (Public, ClassDefaultObject, ArchetypeObject)

class AAGCharacter* AAGCharacter::GetDefaultObj()
{
	static class AAGCharacter* Default = nullptr;

	if (!Default)
		Default = static_cast<AAGCharacter*>(AAGCharacter::StaticClass()->DefaultObject);

	return Default;
}


// Function AimGods.AGCharacter.StunTagChanged
// (Final, Native, Protected)
// Parameters:
// struct FGameplayTag                CallbackTag                                                      (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewCount                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGCharacter::StunTagChanged(const struct FGameplayTag& CallbackTag, int32 NewCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCharacter", "StunTagChanged");

	Params::AAGCharacter_StunTagChanged_Params Parms{};

	Parms.CallbackTag = CallbackTag;
	Parms.NewCount = NewCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGCharacter.SpawnWeapon
// (Final, Native, Protected)
// Parameters:

void AAGCharacter::SpawnWeapon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCharacter", "SpawnWeapon");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGCharacter.ShowHitIndicator
// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// struct FVector                     DamagerLocation                                                  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGCharacter::ShowHitIndicator(struct FVector& DamagerLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCharacter", "ShowHitIndicator");

	Params::AAGCharacter_ShowHitIndicator_Params Parms{};

	Parms.DamagerLocation = DamagerLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGCharacter.SetupPlayerCard
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAGCharacter::SetupPlayerCard()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCharacter", "SetupPlayerCard");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AimGods.AGCharacter.SetLastImpact
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// struct FVector                     Point                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGCharacter::SetLastImpact(const struct FVector& Point)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCharacter", "SetLastImpact");

	Params::AAGCharacter_SetLastImpact_Params Parms{};

	Parms.Point = Point;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGCharacter.ServerReload
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:

void AAGCharacter::ServerReload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCharacter", "ServerReload");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGCharacter.ServerGrantLoadoutAbilities
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:
// TArray<struct FLoadoutAbility>     LoadoutAbilities                                                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void AAGCharacter::ServerGrantLoadoutAbilities(TArray<struct FLoadoutAbility>& LoadoutAbilities)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCharacter", "ServerGrantLoadoutAbilities");

	Params::AAGCharacter_ServerGrantLoadoutAbilities_Params Parms{};

	Parms.LoadoutAbilities = LoadoutAbilities;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGCharacter.ServerEndWalk
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:

void AAGCharacter::ServerEndWalk()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCharacter", "ServerEndWalk");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGCharacter.ServerBeginWalk
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:

void AAGCharacter::ServerBeginWalk()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCharacter", "ServerBeginWalk");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGCharacter.Play3PReloadEffects
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:

void AAGCharacter::Play3PReloadEffects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCharacter", "Play3PReloadEffects");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGCharacter.OnRep_DeathInfo
// (Final, Native, Protected)
// Parameters:

void AAGCharacter::OnRep_DeathInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCharacter", "OnRep_DeathInfo");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGCharacter.OnRep_bIsDead
// (Final, Native, Protected)
// Parameters:

void AAGCharacter::OnRep_bIsDead()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCharacter", "OnRep_bIsDead");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGCharacter.OnDeath
// (Final, Native, Protected)
// Parameters:
// class AActor*                      KilledActor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*                 KillerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGCharacter::OnDeath(class AActor* KilledActor, class AController* KillerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCharacter", "OnDeath");

	Params::AAGCharacter_OnDeath_Params Parms{};

	Parms.KilledActor = KilledActor;
	Parms.KillerController = KillerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGCharacter.HandleLocalDeath
// (Final, Native, Public)
// Parameters:

void AAGCharacter::HandleLocalDeath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCharacter", "HandleLocalDeath");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGCharacter.Fire
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AAGCharacter::Fire()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCharacter", "Fire");

	Params::AAGCharacter_Fire_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.AGCharacter.EndCrouch
// (Net, Native, Event, Protected, NetClient, BlueprintCallable)
// Parameters:

void AAGCharacter::EndCrouch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCharacter", "EndCrouch");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGCharacter.CheatOpenShop
// (Event, Public, BlueprintEvent)
// Parameters:

void AAGCharacter::CheatOpenShop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCharacter", "CheatOpenShop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AimGods.AGCharacter.CheatGold
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              Gold                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGCharacter::CheatGold(int32 Gold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCharacter", "CheatGold");

	Params::AAGCharacter_CheatGold_Params Parms{};

	Parms.Gold = Gold;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AimGods.AGCharacter.BPUpdateKillFeed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AAGPlayerState*              KillerPC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AAGCharacter*                DeadActor                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGCharacter::BPUpdateKillFeed(class AAGPlayerState* KillerPC, class AAGCharacter* DeadActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCharacter", "BPUpdateKillFeed");

	Params::AAGCharacter_BPUpdateKillFeed_Params Parms{};

	Parms.KillerPC = KillerPC;
	Parms.DeadActor = DeadActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AimGods.AGCharacter.BPShowHitIndicator
// (Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                     DamagerLocation                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGCharacter::BPShowHitIndicator(struct FVector& DamagerLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCharacter", "BPShowHitIndicator");

	Params::AAGCharacter_BPShowHitIndicator_Params Parms{};

	Parms.DamagerLocation = DamagerLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AimGods.AGCharacter.BPShowGameplayUI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAGPlayerController*         NewController                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGCharacter::BPShowGameplayUI(class AAGPlayerController* NewController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCharacter", "BPShowGameplayUI");

	Params::AAGCharacter_BPShowGameplayUI_Params Parms{};

	Parms.NewController = NewController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AimGods.AGCharacter.BPShowDamageDirection
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      DamageCauser                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGCharacter::BPShowDamageDirection(class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCharacter", "BPShowDamageDirection");

	Params::AAGCharacter_BPShowDamageDirection_Params Parms{};

	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AimGods.AGCharacter.BPSendInfoToKillFeed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*                 KillerPC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AAGCharacter*                DeadActor                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGCharacter::BPSendInfoToKillFeed(class AController* KillerPC, class AAGCharacter* DeadActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCharacter", "BPSendInfoToKillFeed");

	Params::AAGCharacter_BPSendInfoToKillFeed_Params Parms{};

	Parms.KillerPC = KillerPC;
	Parms.DeadActor = DeadActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AimGods.AGCharacter.BPOnDeath
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAGPlayerState*              Killer                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGCharacter::BPOnDeath(class AAGPlayerState* Killer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCharacter", "BPOnDeath");

	Params::AAGCharacter_BPOnDeath_Params Parms{};

	Parms.Killer = Killer;

	UObject::ProcessEvent(Func, &Parms);

}


// Class AimGods.AGCharacterMovementComponent
// (None)

class UClass* UAGCharacterMovementComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGCharacterMovementComponent");

	return Clss;
}


// AGCharacterMovementComponent AimGods.Default__AGCharacterMovementComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAGCharacterMovementComponent* UAGCharacterMovementComponent::GetDefaultObj()
{
	static class UAGCharacterMovementComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAGCharacterMovementComponent*>(UAGCharacterMovementComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AimGods.AGCharacterMovementComponent.SetSlowWalking
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bSlowWalk                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAGCharacterMovementComponent::SetSlowWalking(bool bSlowWalk)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCharacterMovementComponent", "SetSlowWalking");

	Params::UAGCharacterMovementComponent_SetSlowWalking_Params Parms{};

	Parms.bSlowWalk = bSlowWalk;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AimGods.AGChatSubsystem
// (None)

class UClass* UAGChatSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGChatSubsystem");

	return Clss;
}


// AGChatSubsystem AimGods.Default__AGChatSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UAGChatSubsystem* UAGChatSubsystem::GetDefaultObj()
{
	static class UAGChatSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UAGChatSubsystem*>(UAGChatSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function AimGods.AGChatSubsystem.ShowChatBox
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      OtherPlayerId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OtherPlayerUsername                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAGChatSubsystem::ShowChatBox(const class FString& OtherPlayerId, const class FString& OtherPlayerUsername)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGChatSubsystem", "ShowChatBox");

	Params::UAGChatSubsystem_ShowChatBox_Params Parms{};

	Parms.OtherPlayerId = OtherPlayerId;
	Parms.OtherPlayerUsername = OtherPlayerUsername;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGChatSubsystem.SendChatMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ToUserId                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MessageText                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAGChatSubsystem::SendChatMessage(const class FString& ToUserId, const class FString& MessageText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGChatSubsystem", "SendChatMessage");

	Params::UAGChatSubsystem_SendChatMessage_Params Parms{};

	Parms.ToUserId = ToUserId;
	Parms.MessageText = MessageText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGChatSubsystem.GetChatConversationsFromServer
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAGChatSubsystem::GetChatConversationsFromServer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGChatSubsystem", "GetChatConversationsFromServer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGChatSubsystem.GetChatConversationById
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ChatConversationId                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FChatConversation           ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FChatConversation UAGChatSubsystem::GetChatConversationById(const class FString& ChatConversationId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGChatSubsystem", "GetChatConversationById");

	Params::UAGChatSubsystem_GetChatConversationById_Params Parms{};

	Parms.ChatConversationId = ChatConversationId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.AGChatSubsystem.CreateChatMessage
// (Final, Native, Public, HasOutParams)
// Parameters:
// class FString                      FromUserId                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FromUsername                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              MessageTimeStamp                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MessageText                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FChatMessage                ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FChatMessage UAGChatSubsystem::CreateChatMessage(const class FString& FromUserId, const class FString& FromUsername, int64& MessageTimeStamp, const class FString& MessageText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGChatSubsystem", "CreateChatMessage");

	Params::UAGChatSubsystem_CreateChatMessage_Params Parms{};

	Parms.FromUserId = FromUserId;
	Parms.FromUsername = FromUsername;
	Parms.MessageTimeStamp = MessageTimeStamp;
	Parms.MessageText = MessageText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AimGods.AGCheatManager
// (None)

class UClass* UAGCheatManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGCheatManager");

	return Clss;
}


// AGCheatManager AimGods.Default__AGCheatManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UAGCheatManager* UAGCheatManager::GetDefaultObj()
{
	static class UAGCheatManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UAGCheatManager*>(UAGCheatManager::StaticClass()->DefaultObject);

	return Default;
}


// Function AimGods.AGCheatManager.Cheat.OpenShop
// (Final, Exec, Native, Private)
// Parameters:

void UAGCheatManager::Cheat_OpenShop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCheatManager", "Cheat.OpenShop");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGCheatManager.Cheat.Gold
// (Final, Exec, Native, Private)
// Parameters:
// int32                              Gold                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAGCheatManager::Cheat_Gold(int32 Gold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCheatManager", "Cheat.Gold");

	Params::UAGCheatManager_Cheat_Gold_Params Parms{};

	Parms.Gold = Gold;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AimGods.AGGameMode
// (Actor)

class UClass* AAGGameMode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGGameMode");

	return Clss;
}


// AGGameMode AimGods.Default__AGGameMode
// (Public, ClassDefaultObject, ArchetypeObject)

class AAGGameMode* AAGGameMode::GetDefaultObj()
{
	static class AAGGameMode* Default = nullptr;

	if (!Default)
		Default = static_cast<AAGGameMode*>(AAGGameMode::StaticClass()->DefaultObject);

	return Default;
}


// Function AimGods.AGGameMode.TerminateGame
// (Final, Native, Private)
// Parameters:

void AAGGameMode::TerminateGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameMode", "TerminateGame");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGGameMode.SpawnMinions
// (Final, Native, Protected)
// Parameters:

void AAGGameMode::SpawnMinions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameMode", "SpawnMinions");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGGameMode.ResetSpawns
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:

void AAGGameMode::ResetSpawns()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameMode", "ResetSpawns");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGGameMode.QuitIfNotInEditor
// (Net, NetReliable, Native, Event, Protected, NetServer, BlueprintCallable)
// Parameters:

void AAGGameMode::QuitIfNotInEditor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameMode", "QuitIfNotInEditor");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGGameMode.QueueEndGame
// (Final, Native, Public)
// Parameters:
// bool                               bGameEndedEarly                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bServerShutdownEarly                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGGameMode::QueueEndGame(bool bGameEndedEarly, bool bServerShutdownEarly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameMode", "QueueEndGame");

	Params::AAGGameMode_QueueEndGame_Params Parms{};

	Parms.bGameEndedEarly = bGameEndedEarly;
	Parms.bServerShutdownEarly = bServerShutdownEarly;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGGameMode.OnServerToBeTerminated
// (Final, Native, Public)
// Parameters:

void AAGGameMode::OnServerToBeTerminated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameMode", "OnServerToBeTerminated");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGGameMode.OnServerHealthCheck
// (Final, Native, Public)
// Parameters:

void AAGGameMode::OnServerHealthCheck()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameMode", "OnServerHealthCheck");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGGameMode.Logout
// (Native, Protected, BlueprintCallable)
// Parameters:
// class AController*                 Exiting                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGGameMode::Logout(class AController* Exiting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameMode", "Logout");

	Params::AAGGameMode_Logout_Params Parms{};

	Parms.Exiting = Exiting;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGGameMode.KickAllPlayers
// (Net, NetReliable, Native, Event, Protected, NetServer, BlueprintCallable)
// Parameters:

void AAGGameMode::KickAllPlayers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameMode", "KickAllPlayers");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGGameMode.InitPlayerSpawns
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AAGGameMode::InitPlayerSpawns()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameMode", "InitPlayerSpawns");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGGameMode.HandleRageQuit
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class AController*                 Exiting                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGGameMode::HandleRageQuit(class AController* Exiting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameMode", "HandleRageQuit");

	Params::AAGGameMode_HandleRageQuit_Params Parms{};

	Parms.Exiting = Exiting;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGGameMode.HandleDisconnectDuringMatchLoad
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class AAGCharacter*                Character                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGGameMode::HandleDisconnectDuringMatchLoad(class AAGCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameMode", "HandleDisconnectDuringMatchLoad");

	Params::AAGGameMode_HandleDisconnectDuringMatchLoad_Params Parms{};

	Parms.Character = Character;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGGameMode.GetMinionPlayerStarts
// (Final, Native, Protected)
// Parameters:
// bool                               bIsRedTeam                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AAGMinionPlayerStart*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class AAGMinionPlayerStart*> AAGGameMode::GetMinionPlayerStarts(bool bIsRedTeam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameMode", "GetMinionPlayerStarts");

	Params::AAGGameMode_GetMinionPlayerStarts_Params Parms{};

	Parms.bIsRedTeam = bIsRedTeam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.AGGameMode.EndGameQueueExpired
// (Final, Native, Public)
// Parameters:

void AAGGameMode::EndGameQueueExpired()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameMode", "EndGameQueueExpired");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGGameMode.EndGame
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bRedTeamWon                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGGameMode::EndGame(bool bRedTeamWon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameMode", "EndGame");

	Params::AAGGameMode_EndGame_Params Parms{};

	Parms.bRedTeamWon = bRedTeamWon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AimGods.AGGameMode.CheckIfPlayersJoined
// (Final, Native, Private)
// Parameters:

void AAGGameMode::CheckIfPlayersJoined()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameMode", "CheckIfPlayersJoined");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGGameMode.CheckIfGameSessionActivated
// (Final, Native, Private)
// Parameters:

void AAGGameMode::CheckIfGameSessionActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameMode", "CheckIfGameSessionActivated");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGGameMode.AutoWin
// (Final, Native, Public)
// Parameters:

void AAGGameMode::AutoWin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameMode", "AutoWin");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGGameMode.ApplyRespawnMultipliers
// (Final, Native, Protected)
// Parameters:

void AAGGameMode::ApplyRespawnMultipliers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameMode", "ApplyRespawnMultipliers");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGGameMode.AddToDamageTaken
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
// class AActor*                      DamagedActor                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DamageDone                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGGameMode::AddToDamageTaken(class AActor* DamagedActor, float DamageDone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameMode", "AddToDamageTaken");

	Params::AAGGameMode_AddToDamageTaken_Params Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.DamageDone = DamageDone;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGGameMode.AddToDamageDone
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
// class AAGPlayerState*              InPlayerState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DamageDone                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGGameMode::AddToDamageDone(class AAGPlayerState* InPlayerState, float DamageDone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameMode", "AddToDamageDone");

	Params::AAGGameMode_AddToDamageDone_Params Parms{};

	Parms.InPlayerState = InPlayerState;
	Parms.DamageDone = DamageDone;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AimGods.AGCustomGameMode
// (Actor)

class UClass* AAGCustomGameMode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGCustomGameMode");

	return Clss;
}


// AGCustomGameMode AimGods.Default__AGCustomGameMode
// (Public, ClassDefaultObject, ArchetypeObject)

class AAGCustomGameMode* AAGCustomGameMode::GetDefaultObj()
{
	static class AAGCustomGameMode* Default = nullptr;

	if (!Default)
		Default = static_cast<AAGCustomGameMode*>(AAGCustomGameMode::StaticClass()->DefaultObject);

	return Default;
}


// Class AimGods.AGCustomGameSubsystem
// (None)

class UClass* UAGCustomGameSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGCustomGameSubsystem");

	return Clss;
}


// AGCustomGameSubsystem AimGods.Default__AGCustomGameSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UAGCustomGameSubsystem* UAGCustomGameSubsystem::GetDefaultObj()
{
	static class UAGCustomGameSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UAGCustomGameSubsystem*>(UAGCustomGameSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function AimGods.AGCustomGameSubsystem.StartCustomLobbyGameSessionPlacement
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAGCustomGameSubsystem::StartCustomLobbyGameSessionPlacement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCustomGameSubsystem", "StartCustomLobbyGameSessionPlacement");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGCustomGameSubsystem.SetPlayerIsReady
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsReady                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAGCustomGameSubsystem::SetPlayerIsReady(bool bIsReady)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCustomGameSubsystem", "SetPlayerIsReady");

	Params::UAGCustomGameSubsystem_SetPlayerIsReady_Params Parms{};

	Parms.bIsReady = bIsReady;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGCustomGameSubsystem.SendCustomGameInvite
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      PlayerId                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAGCustomGameSubsystem::SendCustomGameInvite(const class FString& PlayerId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCustomGameSubsystem", "SendCustomGameInvite");

	Params::UAGCustomGameSubsystem_SendCustomGameInvite_Params Parms{};

	Parms.PlayerId = PlayerId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGCustomGameSubsystem.LeaveCurrentGame
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAGCustomGameSubsystem::LeaveCurrentGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCustomGameSubsystem", "LeaveCurrentGame");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGCustomGameSubsystem.KickPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      PlayerId                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAGCustomGameSubsystem::KickPlayer(const class FString& PlayerId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCustomGameSubsystem", "KickPlayer");

	Params::UAGCustomGameSubsystem_KickPlayer_Params Parms{};

	Parms.PlayerId = PlayerId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGCustomGameSubsystem.GetIsReady
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAGCustomGameSubsystem::GetIsReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCustomGameSubsystem", "GetIsReady");

	Params::UAGCustomGameSubsystem_GetIsReady_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.AGCustomGameSubsystem.GetIsLeader
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAGCustomGameSubsystem::GetIsLeader()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCustomGameSubsystem", "GetIsLeader");

	Params::UAGCustomGameSubsystem_GetIsLeader_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.AGCustomGameSubsystem.GetIncomingInvites
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAGCustomGameSubsystem::GetIncomingInvites()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCustomGameSubsystem", "GetIncomingInvites");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGCustomGameSubsystem.GetCurrentGame
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAGCustomGameSubsystem::GetCurrentGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCustomGameSubsystem", "GetCurrentGame");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGCustomGameSubsystem.DescribeGameSessionPlacement
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAGCustomGameSubsystem::DescribeGameSessionPlacement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCustomGameSubsystem", "DescribeGameSessionPlacement");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGCustomGameSubsystem.CreateCustomGame
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAGCustomGameSubsystem::CreateCustomGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCustomGameSubsystem", "CreateCustomGame");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGCustomGameSubsystem.ChangeTeam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EFCustomGameTeam        NewTeam                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAGCustomGameSubsystem::ChangeTeam(enum class EFCustomGameTeam NewTeam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCustomGameSubsystem", "ChangeTeam");

	Params::UAGCustomGameSubsystem_ChangeTeam_Params Parms{};

	Parms.NewTeam = NewTeam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGCustomGameSubsystem.CancelOutgoingInvite
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InviteId                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAGCustomGameSubsystem::CancelOutgoingInvite(const class FString& InviteId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCustomGameSubsystem", "CancelOutgoingInvite");

	Params::UAGCustomGameSubsystem_CancelOutgoingInvite_Params Parms{};

	Parms.InviteId = InviteId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGCustomGameSubsystem.CancelInvite
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InviteId                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAGCustomGameSubsystem::CancelInvite(const class FString& InviteId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCustomGameSubsystem", "CancelInvite");

	Params::UAGCustomGameSubsystem_CancelInvite_Params Parms{};

	Parms.InviteId = InviteId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGCustomGameSubsystem.CancelIncomingInvite
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InviteId                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAGCustomGameSubsystem::CancelIncomingInvite(const class FString& InviteId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCustomGameSubsystem", "CancelIncomingInvite");

	Params::UAGCustomGameSubsystem_CancelIncomingInvite_Params Parms{};

	Parms.InviteId = InviteId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGCustomGameSubsystem.AllPlayersReady
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAGCustomGameSubsystem::AllPlayersReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCustomGameSubsystem", "AllPlayersReady");

	Params::UAGCustomGameSubsystem_AllPlayersReady_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.AGCustomGameSubsystem.AcceptInvite
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InviteId                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAGCustomGameSubsystem::AcceptInvite(const class FString& InviteId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGCustomGameSubsystem", "AcceptInvite");

	Params::UAGCustomGameSubsystem_AcceptInvite_Params Parms{};

	Parms.InviteId = InviteId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AimGods.AGDamageExecutionCalc
// (None)

class UClass* UAGDamageExecutionCalc::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGDamageExecutionCalc");

	return Clss;
}


// AGDamageExecutionCalc AimGods.Default__AGDamageExecutionCalc
// (Public, ClassDefaultObject, ArchetypeObject)

class UAGDamageExecutionCalc* UAGDamageExecutionCalc::GetDefaultObj()
{
	static class UAGDamageExecutionCalc* Default = nullptr;

	if (!Default)
		Default = static_cast<UAGDamageExecutionCalc*>(UAGDamageExecutionCalc::StaticClass()->DefaultObject);

	return Default;
}


// Class AimGods.AGDamageTextInterface
// (None)

class UClass* IAGDamageTextInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGDamageTextInterface");

	return Clss;
}


// AGDamageTextInterface AimGods.Default__AGDamageTextInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IAGDamageTextInterface* IAGDamageTextInterface::GetDefaultObj()
{
	static class IAGDamageTextInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IAGDamageTextInterface*>(IAGDamageTextInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class AimGods.AGDamageTextWidgetComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UAGDamageTextWidgetComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGDamageTextWidgetComponent");

	return Clss;
}


// AGDamageTextWidgetComponent AimGods.Default__AGDamageTextWidgetComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAGDamageTextWidgetComponent* UAGDamageTextWidgetComponent::GetDefaultObj()
{
	static class UAGDamageTextWidgetComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAGDamageTextWidgetComponent*>(UAGDamageTextWidgetComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AimGods.AGDamageTextWidgetComponent.SetDamageText
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EDamageTextType         DamageTextType                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              GoldAmount                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*                  DebuffIcon                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAGDamageTextWidgetComponent::SetDamageText(float Damage, enum class EDamageTextType DamageTextType, int32 GoldAmount, class UTexture2D* DebuffIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGDamageTextWidgetComponent", "SetDamageText");

	Params::UAGDamageTextWidgetComponent_SetDamageText_Params Parms{};

	Parms.Damage = Damage;
	Parms.DamageTextType = DamageTextType;
	Parms.GoldAmount = GoldAmount;
	Parms.DebuffIcon = DebuffIcon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AimGods.AGDamageTextWidgetComponent.AddDebuffIcon
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      DebuffImage                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAGDamageTextWidgetComponent::AddDebuffIcon(class UImage* DebuffImage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGDamageTextWidgetComponent", "AddDebuffIcon");

	Params::UAGDamageTextWidgetComponent_AddDebuffIcon_Params Parms{};

	Parms.DebuffImage = DebuffImage;

	UObject::ProcessEvent(Func, &Parms);

}


// Class AimGods.AGDTDefault
// (None)

class UClass* UAGDTDefault::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGDTDefault");

	return Clss;
}


// AGDTDefault AimGods.Default__AGDTDefault
// (Public, ClassDefaultObject, ArchetypeObject)

class UAGDTDefault* UAGDTDefault::GetDefaultObj()
{
	static class UAGDTDefault* Default = nullptr;

	if (!Default)
		Default = static_cast<UAGDTDefault*>(UAGDTDefault::StaticClass()->DefaultObject);

	return Default;
}


// Class AimGods.AGDTTower
// (None)

class UClass* UAGDTTower::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGDTTower");

	return Clss;
}


// AGDTTower AimGods.Default__AGDTTower
// (Public, ClassDefaultObject, ArchetypeObject)

class UAGDTTower* UAGDTTower::GetDefaultObj()
{
	static class UAGDTTower* Default = nullptr;

	if (!Default)
		Default = static_cast<UAGDTTower*>(UAGDTTower::StaticClass()->DefaultObject);

	return Default;
}


// Class AimGods.AGGameInstance
// (None)

class UClass* UAGGameInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGGameInstance");

	return Clss;
}


// AGGameInstance AimGods.Default__AGGameInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UAGGameInstance* UAGGameInstance::GetDefaultObj()
{
	static class UAGGameInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UAGGameInstance*>(UAGGameInstance::StaticClass()->DefaultObject);

	return Default;
}


// Function AimGods.AGGameInstance.SwapAbilities
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EAGAbilityInputID       SlotA                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAGAbilityInputID       SlotB                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSaveToDisk                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAGGameInstance::SwapAbilities(enum class EAGAbilityInputID SlotA, enum class EAGAbilityInputID SlotB, bool bSaveToDisk)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameInstance", "SwapAbilities");

	Params::UAGGameInstance_SwapAbilities_Params Parms{};

	Parms.SlotA = SlotA;
	Parms.SlotB = SlotB;
	Parms.bSaveToDisk = bSaveToDisk;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.AGGameInstance.SetUserInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InUsername                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InUserId                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAGGameInstance::SetUserInfo(const class FString& InUsername, const class FString& InUserId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameInstance", "SetUserInfo");

	Params::UAGGameInstance_SetUserInfo_Params Parms{};

	Parms.InUsername = InUsername;
	Parms.InUserId = InUserId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGGameInstance.SetAbility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EAGAbilityInputID       Slot                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UAGGameplayAbility>Ability                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSaveToDisk                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAGGameInstance::SetAbility(enum class EAGAbilityInputID Slot, TSubclassOf<class UAGGameplayAbility> Ability, bool bSaveToDisk)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameInstance", "SetAbility");

	Params::UAGGameInstance_SetAbility_Params Parms{};

	Parms.Slot = Slot;
	Parms.Ability = Ability;
	Parms.bSaveToDisk = bSaveToDisk;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.AGGameInstance.SaveGame
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAGGameInstance::SaveGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameInstance", "SaveGame");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGGameInstance.LoadGame
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAGGameInstance::LoadGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameInstance", "LoadGame");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGGameInstance.HandleDowntimeNotification
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHasStarted                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAGGameInstance::HandleDowntimeNotification(const class FString& Message, bool bHasStarted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameInstance", "HandleDowntimeNotification");

	Params::UAGGameInstance_HandleDowntimeNotification_Params Parms{};

	Parms.Message = Message;
	Parms.bHasStarted = bHasStarted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGGameInstance.ExitGame
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAGGameInstance::ExitGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameInstance", "ExitGame");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGGameInstance.BPRemoveSettingsMenu
// (Event, Public, BlueprintEvent)
// Parameters:

void UAGGameInstance::BPRemoveSettingsMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameInstance", "BPRemoveSettingsMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Class AimGods.AGGameliftSubsystem
// (None)

class UClass* UAGGameliftSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGGameliftSubsystem");

	return Clss;
}


// AGGameliftSubsystem AimGods.Default__AGGameliftSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UAGGameliftSubsystem* UAGGameliftSubsystem::GetDefaultObj()
{
	static class UAGGameliftSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UAGGameliftSubsystem*>(UAGGameliftSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function AimGods.AGGameliftSubsystem.UpdatePlayersInMatchStatus
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      PlayerId                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPlayerIsInMatch                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAGGameliftSubsystem::UpdatePlayersInMatchStatus(const class FString& PlayerId, bool& bPlayerIsInMatch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameliftSubsystem", "UpdatePlayersInMatchStatus");

	Params::UAGGameliftSubsystem_UpdatePlayersInMatchStatus_Params Parms{};

	Parms.PlayerId = PlayerId;
	Parms.bPlayerIsInMatch = bPlayerIsInMatch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGGameliftSubsystem.StartMatchmaking
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAGGameliftSubsystem::StartMatchmaking()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameliftSubsystem", "StartMatchmaking");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGGameliftSubsystem.StartCustomGame
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAGGameliftSubsystem::StartCustomGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameliftSubsystem", "StartCustomGame");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGGameliftSubsystem.ResetMatchmaking
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAGGameliftSubsystem::ResetMatchmaking()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameliftSubsystem", "ResetMatchmaking");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGGameliftSubsystem.JoinMatch
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAGGameliftSubsystem::JoinMatch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameliftSubsystem", "JoinMatch");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGGameliftSubsystem.GetMatchmakingTicket
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAGGameliftSubsystem::GetMatchmakingTicket()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameliftSubsystem", "GetMatchmakingTicket");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGGameliftSubsystem.CancelMatchmaking
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAGGameliftSubsystem::CancelMatchmaking()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameliftSubsystem", "CancelMatchmaking");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGGameliftSubsystem.AcceptMatch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bDidAccept                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAGGameliftSubsystem::AcceptMatch(bool bDidAccept)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameliftSubsystem", "AcceptMatch");

	Params::UAGGameliftSubsystem_AcceptMatch_Params Parms{};

	Parms.bDidAccept = bDidAccept;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AimGods.AGGameModeTest
// (Actor)

class UClass* AAGGameModeTest::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGGameModeTest");

	return Clss;
}


// AGGameModeTest AimGods.Default__AGGameModeTest
// (Public, ClassDefaultObject, ArchetypeObject)

class AAGGameModeTest* AAGGameModeTest::GetDefaultObj()
{
	static class AAGGameModeTest* Default = nullptr;

	if (!Default)
		Default = static_cast<AAGGameModeTest*>(AAGGameModeTest::StaticClass()->DefaultObject);

	return Default;
}


// Function AimGods.AGGameModeTest.RespondToOnActorKilled
// (Final, Native, Public)
// Parameters:
// class AActor*                      VictimActor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      KillerActor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*                 KillerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGGameModeTest::RespondToOnActorKilled(class AActor* VictimActor, class AActor* KillerActor, class AController* KillerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameModeTest", "RespondToOnActorKilled");

	Params::AAGGameModeTest_RespondToOnActorKilled_Params Parms{};

	Parms.VictimActor = VictimActor;
	Parms.KillerActor = KillerActor;
	Parms.KillerController = KillerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGGameModeTest.OnGameOver
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      InstigatorPawn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWonGame                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGGameModeTest::OnGameOver(class AActor* InstigatorPawn, bool bWonGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameModeTest", "OnGameOver");

	Params::AAGGameModeTest_OnGameOver_Params Parms{};

	Parms.InstigatorPawn = InstigatorPawn;
	Parms.bWonGame = bWonGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Class AimGods.AGGameplayAbility
// (None)

class UClass* UAGGameplayAbility::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGGameplayAbility");

	return Clss;
}


// AGGameplayAbility AimGods.Default__AGGameplayAbility
// (Public, ClassDefaultObject, ArchetypeObject)

class UAGGameplayAbility* UAGGameplayAbility::GetDefaultObj()
{
	static class UAGGameplayAbility* Default = nullptr;

	if (!Default)
		Default = static_cast<UAGGameplayAbility*>(UAGGameplayAbility::StaticClass()->DefaultObject);

	return Default;
}


// Function AimGods.AGGameplayAbility.GetActivationBlockedTags
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer       ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer UAGGameplayAbility::GetActivationBlockedTags()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameplayAbility", "GetActivationBlockedTags");

	Params::UAGGameplayAbility_GetActivationBlockedTags_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AimGods.AGGameplayCueNotify_Actor
// (Actor)

class UClass* AAGGameplayCueNotify_Actor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGGameplayCueNotify_Actor");

	return Clss;
}


// AGGameplayCueNotify_Actor AimGods.Default__AGGameplayCueNotify_Actor
// (Public, ClassDefaultObject, ArchetypeObject)

class AAGGameplayCueNotify_Actor* AAGGameplayCueNotify_Actor::GetDefaultObj()
{
	static class AAGGameplayCueNotify_Actor* Default = nullptr;

	if (!Default)
		Default = static_cast<AAGGameplayCueNotify_Actor*>(AAGGameplayCueNotify_Actor::StaticClass()->DefaultObject);

	return Default;
}


// Function AimGods.AGGameplayCueNotify_Actor.GetNumberOfSameActiveGameplayCues
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 AAGGameplayCueNotify_Actor::GetNumberOfSameActiveGameplayCues()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameplayCueNotify_Actor", "GetNumberOfSameActiveGameplayCues");

	Params::AAGGameplayCueNotify_Actor_GetNumberOfSameActiveGameplayCues_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AimGods.AGGameplayEffect
// (None)

class UClass* UAGGameplayEffect::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGGameplayEffect");

	return Clss;
}


// AGGameplayEffect AimGods.Default__AGGameplayEffect
// (Public, ClassDefaultObject, ArchetypeObject)

class UAGGameplayEffect* UAGGameplayEffect::GetDefaultObj()
{
	static class UAGGameplayEffect* Default = nullptr;

	if (!Default)
		Default = static_cast<UAGGameplayEffect*>(UAGGameplayEffect::StaticClass()->DefaultObject);

	return Default;
}


// Class AimGods.AGGameState
// (Actor)

class UClass* AAGGameState::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGGameState");

	return Clss;
}


// AGGameState AimGods.Default__AGGameState
// (Public, ClassDefaultObject, ArchetypeObject)

class AAGGameState* AAGGameState::GetDefaultObj()
{
	static class AAGGameState* Default = nullptr;

	if (!Default)
		Default = static_cast<AAGGameState*>(AAGGameState::StaticClass()->DefaultObject);

	return Default;
}


// Function AimGods.AGGameState.OnRep_PrematchTimeRemaining
// (Final, Native, Public)
// Parameters:

void AAGGameState::OnRep_PrematchTimeRemaining()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameState", "OnRep_PrematchTimeRemaining");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGGameState.OnRep_MatchTimeSeconds
// (Final, Native, Public)
// Parameters:

void AAGGameState::OnRep_MatchTimeSeconds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameState", "OnRep_MatchTimeSeconds");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGGameState.OnRep_bIsPostMatch
// (Final, Native, Public)
// Parameters:

void AAGGameState::OnRep_bIsPostMatch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameState", "OnRep_bIsPostMatch");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGGameState.OnEndGameStatsReceived
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// bool                               Success                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FStatsError                 StatError                                                        (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FGameStatsPayload>   EndGameStats                                                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void AAGGameState::OnEndGameStatsReceived(bool Success, struct FStatsError& StatError, TArray<struct FGameStatsPayload>& EndGameStats)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameState", "OnEndGameStatsReceived");

	Params::AAGGameState_OnEndGameStatsReceived_Params Parms{};

	Parms.Success = Success;
	Parms.StatError = StatError;
	Parms.EndGameStats = EndGameStats;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGGameState.OnCustomGameEnded
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:

void AAGGameState::OnCustomGameEnded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameState", "OnCustomGameEnded");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGGameState.IncrementMatchTimer
// (Final, Native, Public)
// Parameters:

void AAGGameState::IncrementMatchTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameState", "IncrementMatchTimer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGGameState.GetTeam
// (Final, Native, Public)
// Parameters:
// bool                               bRedTeam                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AAGPlayerController*> ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class AAGPlayerController*> AAGGameState::GetTeam(bool bRedTeam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameState", "GetTeam");

	Params::AAGGameState_GetTeam_Params Parms{};

	Parms.bRedTeam = bRedTeam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.AGGameState.GetBaseLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bIsRedTeam                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector AAGGameState::GetBaseLocation(bool bIsRedTeam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameState", "GetBaseLocation");

	Params::AAGGameState_GetBaseLocation_Params Parms{};

	Parms.bIsRedTeam = bIsRedTeam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.AGGameState.EndGame
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:

void AAGGameState::EndGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameState", "EndGame");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGGameState.CheckElapsedTime
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:

void AAGGameState::CheckElapsedTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameState", "CheckElapsedTime");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGGameState.AddTeamPoints
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// bool                               bOnBlueTeam                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AwardedPoints                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGGameState::AddTeamPoints(bool bOnBlueTeam, int32 AwardedPoints)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameState", "AddTeamPoints");

	Params::AAGGameState_AddTeamPoints_Params Parms{};

	Parms.bOnBlueTeam = bOnBlueTeam;
	Parms.AwardedPoints = AwardedPoints;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGGameState.AddPlayerToReadyList
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
// class APlayerController*           ReadyPC                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGGameState::AddPlayerToReadyList(class APlayerController* ReadyPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGameState", "AddPlayerToReadyList");

	Params::AAGGameState_AddPlayerToReadyList_Params Parms{};

	Parms.ReadyPC = ReadyPC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AimGods.AGGameViewportClient
// (None)

class UClass* UAGGameViewportClient::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGGameViewportClient");

	return Clss;
}


// AGGameViewportClient AimGods.Default__AGGameViewportClient
// (Public, ClassDefaultObject, ArchetypeObject)

class UAGGameViewportClient* UAGGameViewportClient::GetDefaultObj()
{
	static class UAGGameViewportClient* Default = nullptr;

	if (!Default)
		Default = static_cast<UAGGameViewportClient*>(UAGGameViewportClient::StaticClass()->DefaultObject);

	return Default;
}


// Class AimGods.AGGhost
// (Actor, Pawn)

class UClass* AAGGhost::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGGhost");

	return Clss;
}


// AGGhost AimGods.Default__AGGhost
// (Public, ClassDefaultObject, ArchetypeObject)

class AAGGhost* AAGGhost::GetDefaultObj()
{
	static class AAGGhost* Default = nullptr;

	if (!Default)
		Default = static_cast<AAGGhost*>(AAGGhost::StaticClass()->DefaultObject);

	return Default;
}


// Function AimGods.AGGhost.Server_SendGhostPCToTeammate
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:

void AAGGhost::Server_SendGhostPCToTeammate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGhost", "Server_SendGhostPCToTeammate");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGGhost.Server_RemoveGhostPCFromTeammate
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:

void AAGGhost::Server_RemoveGhostPCFromTeammate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGhost", "Server_RemoveGhostPCFromTeammate");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGGhost.BPOnSpectateModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bFreeMode                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGGhost::BPOnSpectateModeChanged(bool bFreeMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGGhost", "BPOnSpectateModeChanged");

	Params::AAGGhost_BPOnSpectateModeChanged_Params Parms{};

	Parms.bFreeMode = bFreeMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Class AimGods.AGHealthComponent
// (None)

class UClass* UAGHealthComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGHealthComponent");

	return Clss;
}


// AGHealthComponent AimGods.Default__AGHealthComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAGHealthComponent* UAGHealthComponent::GetDefaultObj()
{
	static class UAGHealthComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAGHealthComponent*>(UAGHealthComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AimGods.AGHealthComponent.OnRep_HP
// (Final, Native, Protected)
// Parameters:
// float                              OldHP                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAGHealthComponent::OnRep_HP(float OldHP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGHealthComponent", "OnRep_HP");

	Params::UAGHealthComponent_OnRep_HP_Params Parms{};

	Parms.OldHP = OldHP;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AimGods.AGMinionPlayerStart
// (Actor)

class UClass* AAGMinionPlayerStart::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGMinionPlayerStart");

	return Clss;
}


// AGMinionPlayerStart AimGods.Default__AGMinionPlayerStart
// (Public, ClassDefaultObject, ArchetypeObject)

class AAGMinionPlayerStart* AAGMinionPlayerStart::GetDefaultObj()
{
	static class AAGMinionPlayerStart* Default = nullptr;

	if (!Default)
		Default = static_cast<AAGMinionPlayerStart*>(AAGMinionPlayerStart::StaticClass()->DefaultObject);

	return Default;
}


// Class AimGods.AGMinionTarget
// (Actor)

class UClass* AAGMinionTarget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGMinionTarget");

	return Clss;
}


// AGMinionTarget AimGods.Default__AGMinionTarget
// (Public, ClassDefaultObject, ArchetypeObject)

class AAGMinionTarget* AAGMinionTarget::GetDefaultObj()
{
	static class AAGMinionTarget* Default = nullptr;

	if (!Default)
		Default = static_cast<AAGMinionTarget*>(AAGMinionTarget::StaticClass()->DefaultObject);

	return Default;
}


// Class AimGods.AGMMC_AbilityCooldown
// (None)

class UClass* UAGMMC_AbilityCooldown::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGMMC_AbilityCooldown");

	return Clss;
}


// AGMMC_AbilityCooldown AimGods.Default__AGMMC_AbilityCooldown
// (Public, ClassDefaultObject, ArchetypeObject)

class UAGMMC_AbilityCooldown* UAGMMC_AbilityCooldown::GetDefaultObj()
{
	static class UAGMMC_AbilityCooldown* Default = nullptr;

	if (!Default)
		Default = static_cast<UAGMMC_AbilityCooldown*>(UAGMMC_AbilityCooldown::StaticClass()->DefaultObject);

	return Default;
}


// Class AimGods.AGNewsFeedSubsystem
// (None)

class UClass* UAGNewsFeedSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGNewsFeedSubsystem");

	return Clss;
}


// AGNewsFeedSubsystem AimGods.Default__AGNewsFeedSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UAGNewsFeedSubsystem* UAGNewsFeedSubsystem::GetDefaultObj()
{
	static class UAGNewsFeedSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UAGNewsFeedSubsystem*>(UAGNewsFeedSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function AimGods.AGNewsFeedSubsystem.GetNewsFeedForCurrentPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAGNewsFeedSubsystem::GetNewsFeedForCurrentPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGNewsFeedSubsystem", "GetNewsFeedForCurrentPlayer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGNewsFeedSubsystem.CreateNewsFeedTest
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAGNewsFeedSubsystem::CreateNewsFeedTest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGNewsFeedSubsystem", "CreateNewsFeedTest");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class AimGods.AGPartySubsystem
// (None)

class UClass* UAGPartySubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGPartySubsystem");

	return Clss;
}


// AGPartySubsystem AimGods.Default__AGPartySubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UAGPartySubsystem* UAGPartySubsystem::GetDefaultObj()
{
	static class UAGPartySubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UAGPartySubsystem*>(UAGPartySubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function AimGods.AGPartySubsystem.SendPartyInvite
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      PlayerId                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAGPartySubsystem::SendPartyInvite(const class FString& PlayerId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPartySubsystem", "SendPartyInvite");

	Params::UAGPartySubsystem_SendPartyInvite_Params Parms{};

	Parms.PlayerId = PlayerId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGPartySubsystem.LeaveCurrentParty
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAGPartySubsystem::LeaveCurrentParty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPartySubsystem", "LeaveCurrentParty");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGPartySubsystem.IsPartyLeader
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAGPartySubsystem::IsPartyLeader()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPartySubsystem", "IsPartyLeader");

	Params::UAGPartySubsystem_IsPartyLeader_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.AGPartySubsystem.IsInParty
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAGPartySubsystem::IsInParty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPartySubsystem", "IsInParty");

	Params::UAGPartySubsystem_IsInParty_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.AGPartySubsystem.GetPartyInvites
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAGPartySubsystem::GetPartyInvites()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPartySubsystem", "GetPartyInvites");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGPartySubsystem.GetCurrentParty
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAGPartySubsystem::GetCurrentParty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPartySubsystem", "GetCurrentParty");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGPartySubsystem.CancelPartyInvite
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      PartyInviteId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAGPartySubsystem::CancelPartyInvite(const class FString& PartyInviteId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPartySubsystem", "CancelPartyInvite");

	Params::UAGPartySubsystem_CancelPartyInvite_Params Parms{};

	Parms.PartyInviteId = PartyInviteId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGPartySubsystem.AcceptPartyInvite
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      PartyInviteId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAGPartySubsystem::AcceptPartyInvite(const class FString& PartyInviteId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPartySubsystem", "AcceptPartyInvite");

	Params::UAGPartySubsystem_AcceptPartyInvite_Params Parms{};

	Parms.PartyInviteId = PartyInviteId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AimGods.AGPlayerController
// (Actor, PlayerController)

class UClass* AAGPlayerController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGPlayerController");

	return Clss;
}


// AGPlayerController AimGods.Default__AGPlayerController
// (Public, ClassDefaultObject, ArchetypeObject)

class AAGPlayerController* AAGPlayerController::GetDefaultObj()
{
	static class AAGPlayerController* Default = nullptr;

	if (!Default)
		Default = static_cast<AAGPlayerController*>(AAGPlayerController::StaticClass()->DefaultObject);

	return Default;
}


// Function AimGods.AGPlayerController.SuicidePoints
// (Final, Native, Public)
// Parameters:

void AAGPlayerController::SuicidePoints()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPlayerController", "SuicidePoints");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGPlayerController.ShowRespawnScreen
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              RespawnTimer                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGPlayerController::ShowRespawnScreen(float RespawnTimer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPlayerController", "ShowRespawnScreen");

	Params::AAGPlayerController_ShowRespawnScreen_Params Parms{};

	Parms.RespawnTimer = RespawnTimer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AimGods.AGPlayerController.ShowDamageNumber
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class AAGCharacterBase*            Avatar                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAGDamageNumber             DamageNumber                                                     (Parm, NativeAccessSpecifierPublic)

void AAGPlayerController::ShowDamageNumber(class AAGCharacterBase* Avatar, const struct FAGDamageNumber& DamageNumber)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPlayerController", "ShowDamageNumber");

	Params::AAGPlayerController_ShowDamageNumber_Params Parms{};

	Parms.Avatar = Avatar;
	Parms.DamageNumber = DamageNumber;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGPlayerController.ServerSetIsPlaying
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
// bool                               bCond                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGPlayerController::ServerSetIsPlaying(bool bCond)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPlayerController", "ServerSetIsPlaying");

	Params::AAGPlayerController_ServerSetIsPlaying_Params Parms{};

	Parms.bCond = bCond;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGPlayerController.ServerAddToReadyToSpawnList
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
// class APlayerController*           ReadyPC                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGPlayerController::ServerAddToReadyToSpawnList(class APlayerController* ReadyPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPlayerController", "ServerAddToReadyToSpawnList");

	Params::AAGPlayerController_ServerAddToReadyToSpawnList_Params Parms{};

	Parms.ReadyPC = ReadyPC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGPlayerController.ReportPlayer
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
// class FString                      PlayerToReport                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReportCategory                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGPlayerController::ReportPlayer(const class FString& PlayerToReport, const class FString& ReportCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPlayerController", "ReportPlayer");

	Params::AAGPlayerController_ReportPlayer_Params Parms{};

	Parms.PlayerToReport = PlayerToReport;
	Parms.ReportCategory = ReportCategory;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGPlayerController.OnGameOver
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      InstigatorPawn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWonGame                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGPlayerController::OnGameOver(class AActor* InstigatorPawn, bool bWonGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPlayerController", "OnGameOver");

	Params::AAGPlayerController_OnGameOver_Params Parms{};

	Parms.InstigatorPawn = InstigatorPawn;
	Parms.bWonGame = bWonGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AimGods.AGPlayerController.LoadSoundSettings
// (Event, Public, BlueprintEvent)
// Parameters:

void AAGPlayerController::LoadSoundSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPlayerController", "LoadSoundSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AimGods.AGPlayerController.LoadInputSettings
// (Event, Public, BlueprintEvent)
// Parameters:

void AAGPlayerController::LoadInputSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPlayerController", "LoadInputSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AimGods.AGPlayerController.KillPawn
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:

void AAGPlayerController::KillPawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPlayerController", "KillPawn");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGPlayerController.GetTimeLeft
// (Net, Native, Event, Public, NetServer)
// Parameters:

void AAGPlayerController::GetTimeLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPlayerController", "GetTimeLeft");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGPlayerController.GetTime
// (Net, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:

void AAGPlayerController::GetTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPlayerController", "GetTime");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGPlayerController.GetPlayerName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText AAGPlayerController::GetPlayerName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPlayerController", "GetPlayerName");

	Params::AAGPlayerController_GetPlayerName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.AGPlayerController.ClientUpdateJoinInProgressTime
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGPlayerController::ClientUpdateJoinInProgressTime(float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPlayerController", "ClientUpdateJoinInProgressTime");

	Params::AAGPlayerController_ClientUpdateJoinInProgressTime_Params Parms{};

	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGPlayerController.ClientShowRespawnScreen
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// float                              RespawnTimer                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGPlayerController::ClientShowRespawnScreen(float RespawnTimer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPlayerController", "ClientShowRespawnScreen");

	Params::AAGPlayerController_ClientShowRespawnScreen_Params Parms{};

	Parms.RespawnTimer = RespawnTimer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGPlayerController.BPUpdateHealth
// (Event, Public, BlueprintEvent)
// Parameters:

void AAGPlayerController::BPUpdateHealth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPlayerController", "BPUpdateHealth");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AimGods.AGPlayerController.BPShowDamageText
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DamageToDo                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWasHeadshot                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWasImmune                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGPlayerController::BPShowDamageText(float DamageToDo, bool bWasHeadshot, bool bWasImmune)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPlayerController", "BPShowDamageText");

	Params::AAGPlayerController_BPShowDamageText_Params Parms{};

	Parms.DamageToDo = DamageToDo;
	Parms.bWasHeadshot = bWasHeadshot;
	Parms.bWasImmune = bWasImmune;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AimGods.AGPlayerController.BPKicked
// (Event, Public, BlueprintEvent)
// Parameters:

void AAGPlayerController::BPKicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPlayerController", "BPKicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AimGods.AGPlayerController.BPCloseWidgets
// (Event, Public, BlueprintEvent)
// Parameters:

void AAGPlayerController::BPCloseWidgets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPlayerController", "BPCloseWidgets");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AimGods.AGPlayerController.BPCloseCharacterSelection
// (Event, Public, BlueprintEvent)
// Parameters:

void AAGPlayerController::BPCloseCharacterSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPlayerController", "BPCloseCharacterSelection");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AimGods.AGPlayerController.AddDamageNumber
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
// float                              DamageAmount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      TargetCharacter                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EDamageTextType         DamageTextType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UTexture2D*>          EffectIcons                                                      (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void AAGPlayerController::AddDamageNumber(float DamageAmount, class AActor* TargetCharacter, enum class EDamageTextType DamageTextType, TArray<class UTexture2D*>& EffectIcons)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPlayerController", "AddDamageNumber");

	Params::AAGPlayerController_AddDamageNumber_Params Parms{};

	Parms.DamageAmount = DamageAmount;
	Parms.TargetCharacter = TargetCharacter;
	Parms.DamageTextType = DamageTextType;
	Parms.EffectIcons = EffectIcons;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AimGods.AGPlayerSpawn
// (Actor)

class UClass* AAGPlayerSpawn::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGPlayerSpawn");

	return Clss;
}


// AGPlayerSpawn AimGods.Default__AGPlayerSpawn
// (Public, ClassDefaultObject, ArchetypeObject)

class AAGPlayerSpawn* AAGPlayerSpawn::GetDefaultObj()
{
	static class AAGPlayerSpawn* Default = nullptr;

	if (!Default)
		Default = static_cast<AAGPlayerSpawn*>(AAGPlayerSpawn::StaticClass()->DefaultObject);

	return Default;
}


// Class AimGods.AGPlayerState
// (Actor)

class UClass* AAGPlayerState::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGPlayerState");

	return Clss;
}


// AGPlayerState AimGods.Default__AGPlayerState
// (Public, ClassDefaultObject, ArchetypeObject)

class AAGPlayerState* AAGPlayerState::GetDefaultObj()
{
	static class AAGPlayerState* Default = nullptr;

	if (!Default)
		Default = static_cast<AAGPlayerState*>(AAGPlayerState::StaticClass()->DefaultObject);

	return Default;
}


// Function AimGods.AGPlayerState.TrySwapAbilities
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EAGAbilityInputID       AbilityA                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAGAbilityInputID       AbilityB                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AAGPlayerState::TrySwapAbilities(enum class EAGAbilityInputID AbilityA, enum class EAGAbilityInputID AbilityB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPlayerState", "TrySwapAbilities");

	Params::AAGPlayerState_TrySwapAbilities_Params Parms{};

	Parms.AbilityA = AbilityA;
	Parms.AbilityB = AbilityB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.AGPlayerState.TryBuyAbility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UAGGameplayAbility>AbilityToBuy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AAGPlayerState::TryBuyAbility(TSubclassOf<class UAGGameplayAbility> AbilityToBuy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPlayerState", "TryBuyAbility");

	Params::AAGPlayerState_TryBuyAbility_Params Parms{};

	Parms.AbilityToBuy = AbilityToBuy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.AGPlayerState.Suicide
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AAGPlayerState::Suicide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPlayerState", "Suicide");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGPlayerState.ServerTrySwapAbilities
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// enum class EAGAbilityInputID       AbilityA                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAGAbilityInputID       AbilityB                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGPlayerState::ServerTrySwapAbilities(enum class EAGAbilityInputID AbilityA, enum class EAGAbilityInputID AbilityB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPlayerState", "ServerTrySwapAbilities");

	Params::AAGPlayerState_ServerTrySwapAbilities_Params Parms{};

	Parms.AbilityA = AbilityA;
	Parms.AbilityB = AbilityB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGPlayerState.ServerTryBuyAbility
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// TSubclassOf<class UAGGameplayAbility>AbilityToBuy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGPlayerState::ServerTryBuyAbility(TSubclassOf<class UAGGameplayAbility> AbilityToBuy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPlayerState", "ServerTryBuyAbility");

	Params::AAGPlayerState_ServerTryBuyAbility_Params Parms{};

	Parms.AbilityToBuy = AbilityToBuy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGPlayerState.ResetScore
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AAGPlayerState::ResetScore()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPlayerState", "ResetScore");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGPlayerState.OnRep_ReplicatedPurchasedAbilities
// (Final, Native, Public)
// Parameters:

void AAGPlayerState::OnRep_ReplicatedPurchasedAbilities()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPlayerState", "OnRep_ReplicatedPurchasedAbilities");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGPlayerState.OnRep_Gold
// (Final, Native, Public)
// Parameters:
// int32                              OldGold                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGPlayerState::OnRep_Gold(int32 OldGold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPlayerState", "OnRep_Gold");

	Params::AAGPlayerState_OnRep_Gold_Params Parms{};

	Parms.OldGold = OldGold;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGPlayerState.OnRep_ConnectedGameSessionId
// (Final, Native, Public)
// Parameters:
// class FString                      OldGameSessionId                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGPlayerState::OnRep_ConnectedGameSessionId(const class FString& OldGameSessionId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPlayerState", "OnRep_ConnectedGameSessionId");

	Params::AAGPlayerState_OnRep_ConnectedGameSessionId_Params Parms{};

	Parms.OldGameSessionId = OldGameSessionId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGPlayerState.OnRep_ConnectedFleetId
// (Final, Native, Public)
// Parameters:
// class FString                      OldFleetId                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGPlayerState::OnRep_ConnectedFleetId(const class FString& OldFleetId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPlayerState", "OnRep_ConnectedFleetId");

	Params::AAGPlayerState_OnRep_ConnectedFleetId_Params Parms{};

	Parms.OldFleetId = OldFleetId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGPlayerState.OnMainMenuStatsReceived
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               Success                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FStatsError                 StatError                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameStatsPayload           ReceivedGameStats                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AAGPlayerState::OnMainMenuStatsReceived(bool Success, struct FStatsError& StatError, struct FGameStatsPayload& ReceivedGameStats)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPlayerState", "OnMainMenuStatsReceived");

	Params::AAGPlayerState_OnMainMenuStatsReceived_Params Parms{};

	Parms.Success = Success;
	Parms.StatError = StatError;
	Parms.ReceivedGameStats = ReceivedGameStats;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGPlayerState.OnEndGameStatsReceived
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               Success                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FStatsError                 StatError                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FGameStatsPayload>   ReceivedGameStats                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void AAGPlayerState::OnEndGameStatsReceived(bool Success, struct FStatsError& StatError, TArray<struct FGameStatsPayload>& ReceivedGameStats)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPlayerState", "OnEndGameStatsReceived");

	Params::AAGPlayerState_OnEndGameStatsReceived_Params Parms{};

	Parms.Success = Success;
	Parms.StatError = StatError;
	Parms.ReceivedGameStats = ReceivedGameStats;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGPlayerState.OnCustomGameEndReceieved
// (Final, Native, Public)
// Parameters:

void AAGPlayerState::OnCustomGameEndReceieved()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPlayerState", "OnCustomGameEndReceieved");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGPlayerState.GetUniqueIdAsString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString AAGPlayerState::GetUniqueIdAsString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPlayerState", "GetUniqueIdAsString");

	Params::AAGPlayerState_GetUniqueIdAsString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.AGPlayerState.GetEndGameStatsByPlayerId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InPlayerId                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameStatsPayload           ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameStatsPayload AAGPlayerState::GetEndGameStatsByPlayerId(const class FString& InPlayerId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPlayerState", "GetEndGameStatsByPlayerId");

	Params::AAGPlayerState_GetEndGameStatsByPlayerId_Params Parms{};

	Parms.InPlayerId = InPlayerId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.AGPlayerState.ClientShowScore
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// float                              Points                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        Text                                                             (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void AAGPlayerState::ClientShowScore(float Points, class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPlayerState", "ClientShowScore");

	Params::AAGPlayerState_ClientShowScore_Params Parms{};

	Parms.Points = Points;
	Parms.Text = Text;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGPlayerState.BPShowScore
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Points                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AAGPlayerState::BPShowScore(float Points, class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPlayerState", "BPShowScore");

	Params::AAGPlayerState_BPShowScore_Params Parms{};

	Parms.Points = Points;
	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AimGods.AGPlayerState.BPShowDebuffIcon
// (Event, Public, BlueprintEvent)
// Parameters:
// class UAGGameplayEffect*           AppliedEffect                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGPlayerState::BPShowDebuffIcon(class UAGGameplayEffect* AppliedEffect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPlayerState", "BPShowDebuffIcon");

	Params::AAGPlayerState_BPShowDebuffIcon_Params Parms{};

	Parms.AppliedEffect = AppliedEffect;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AimGods.AGPlayerState.AwardGold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Amount                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGPlayerState::AwardGold(int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPlayerState", "AwardGold");

	Params::AAGPlayerState_AwardGold_Params Parms{};

	Parms.Amount = Amount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGPlayerState.AddScorePoints
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// float                              Points                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        Reason                                                           (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void AAGPlayerState::AddScorePoints(float Points, class FText& Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPlayerState", "AddScorePoints");

	Params::AAGPlayerState_AddScorePoints_Params Parms{};

	Parms.Points = Points;
	Parms.Reason = Reason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGPlayerState.AddHealing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Amount                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGPlayerState::AddHealing(float Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPlayerState", "AddHealing");

	Params::AAGPlayerState_AddHealing_Params Parms{};

	Parms.Amount = Amount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGPlayerState.AddDeath
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AAGPlayerState::AddDeath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPlayerState", "AddDeath");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGPlayerState.AddDamageTaken
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Amount                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGPlayerState::AddDamageTaken(float Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPlayerState", "AddDamageTaken");

	Params::AAGPlayerState_AddDamageTaken_Params Parms{};

	Parms.Amount = Amount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGPlayerState.AddDamage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Amount                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGPlayerState::AddDamage(float Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGPlayerState", "AddDamage");

	Params::AAGPlayerState_AddDamage_Params Parms{};

	Parms.Amount = Amount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AimGods.AGSaveGame
// (None)

class UClass* UAGSaveGame::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGSaveGame");

	return Clss;
}


// AGSaveGame AimGods.Default__AGSaveGame
// (Public, ClassDefaultObject, ArchetypeObject)

class UAGSaveGame* UAGSaveGame::GetDefaultObj()
{
	static class UAGSaveGame* Default = nullptr;

	if (!Default)
		Default = static_cast<UAGSaveGame*>(UAGSaveGame::StaticClass()->DefaultObject);

	return Default;
}


// Class AimGods.AGSheep
// (Actor, Pawn)

class UClass* AAGSheep::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGSheep");

	return Clss;
}


// AGSheep AimGods.Default__AGSheep
// (Public, ClassDefaultObject, ArchetypeObject)

class AAGSheep* AAGSheep::GetDefaultObj()
{
	static class AAGSheep* Default = nullptr;

	if (!Default)
		Default = static_cast<AAGSheep*>(AAGSheep::StaticClass()->DefaultObject);

	return Default;
}


// Class AimGods.AGStatics
// (None)

class UClass* UAGStatics::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGStatics");

	return Clss;
}


// AGStatics AimGods.Default__AGStatics
// (Public, ClassDefaultObject, ArchetypeObject)

class UAGStatics* UAGStatics::GetDefaultObj()
{
	static class UAGStatics* Default = nullptr;

	if (!Default)
		Default = static_cast<UAGStatics*>(UAGStatics::StaticClass()->DefaultObject);

	return Default;
}


// Function AimGods.AGStatics.ReplaceTableReferenceStringsWithCorrespondingValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCurveTable*                 CurveTable                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        Text                                                             (Parm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UAGStatics::ReplaceTableReferenceStringsWithCorrespondingValue(class UCurveTable* CurveTable, class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGStatics", "ReplaceTableReferenceStringsWithCorrespondingValue");

	Params::UAGStatics_ReplaceTableReferenceStringsWithCorrespondingValue_Params Parms{};

	Parms.CurveTable = CurveTable;
	Parms.Text = Text;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.AGStatics.RemoveAllLowercase
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InString                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAGStatics::RemoveAllLowercase(const class FString& InString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGStatics", "RemoveAllLowercase");

	Params::UAGStatics_RemoveAllLowercase_Params Parms{};

	Parms.InString = InString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.AGStatics.IsSameTeam
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      ActorA                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ActorB                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAGStatics::IsSameTeam(class AActor* ActorA, class AActor* ActorB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGStatics", "IsSameTeam");

	Params::UAGStatics_IsSameTeam_Params Parms{};

	Parms.ActorA = ActorA;
	Parms.ActorB = ActorB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.AGStatics.IsRedTeam
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      TestActor                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAGStatics::IsRedTeam(class AActor* TestActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGStatics", "IsRedTeam");

	Params::UAGStatics_IsRedTeam_Params Parms{};

	Parms.TestActor = TestActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.AGStatics.IsEffectSpecHandleValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectSpecHandle   EffectSpecHandle                                                 (Parm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAGStatics::IsEffectSpecHandleValid(const struct FGameplayEffectSpecHandle& EffectSpecHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGStatics", "IsEffectSpecHandleValid");

	Params::UAGStatics_IsEffectSpecHandleValid_Params Parms{};

	Parms.EffectSpecHandle = EffectSpecHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.AGStatics.IsChargeEffect
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UGameplayEffect*             GameplayEffect                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAGStatics::IsChargeEffect(class UGameplayEffect* GameplayEffect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGStatics", "IsChargeEffect");

	Params::UAGStatics_IsChargeEffect_Params Parms{};

	Parms.GameplayEffect = GameplayEffect;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.AGStatics.GetHandleFromAbilitySpec
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilitySpec        AbilitySpec                                                      (Parm, NativeAccessSpecifierPublic)
// struct FGameplayAbilitySpecHandle  ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGameplayAbilitySpecHandle UAGStatics::GetHandleFromAbilitySpec(const struct FGameplayAbilitySpec& AbilitySpec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGStatics", "GetHandleFromAbilitySpec");

	Params::UAGStatics_GetHandleFromAbilitySpec_Params Parms{};

	Parms.AbilitySpec = AbilitySpec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.AGStatics.GetGameDefaultMapName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAGStatics::GetGameDefaultMapName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGStatics", "GetGameDefaultMapName");

	Params::UAGStatics_GetGameDefaultMapName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.AGStatics.GetEffectSpecDuration
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectSpec         EffectSpec                                                       (Parm, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAGStatics::GetEffectSpecDuration(const struct FGameplayEffectSpec& EffectSpec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGStatics", "GetEffectSpecDuration");

	Params::UAGStatics_GetEffectSpecDuration_Params Parms{};

	Parms.EffectSpec = EffectSpec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.AGStatics.GetCurrentTowerForTeam
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWorld*                      World                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsRedTeam                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AAGTowerBase*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AAGTowerBase* UAGStatics::GetCurrentTowerForTeam(class UWorld* World, bool bIsRedTeam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGStatics", "GetCurrentTowerForTeam");

	Params::UAGStatics_GetCurrentTowerForTeam_Params Parms{};

	Parms.World = World;
	Parms.bIsRedTeam = bIsRedTeam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.AGStatics.GetAbilityActivationBlockedTags
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilitySpec        AbilitySpec                                                      (Parm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer UAGStatics::GetAbilityActivationBlockedTags(const struct FGameplayAbilitySpec& AbilitySpec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGStatics", "GetAbilityActivationBlockedTags");

	Params::UAGStatics_GetAbilityActivationBlockedTags_Params Parms{};

	Parms.AbilitySpec = AbilitySpec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.AGStatics.DrawDebugSphereShippingIncluded
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Center                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Segments                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                LineColor                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Thickness                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAGStatics::DrawDebugSphereShippingIncluded(class UObject* WorldContextObject, const struct FVector& Center, float Radius, int32 Segments, const struct FLinearColor& LineColor, float Duration, float Thickness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGStatics", "DrawDebugSphereShippingIncluded");

	Params::UAGStatics_DrawDebugSphereShippingIncluded_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Center = Center;
	Parms.Radius = Radius;
	Parms.Segments = Segments;
	Parms.LineColor = LineColor;
	Parms.Duration = Duration;
	Parms.Thickness = Thickness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AimGods.AGStatsSubsystem
// (None)

class UClass* UAGStatsSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGStatsSubsystem");

	return Clss;
}


// AGStatsSubsystem AimGods.Default__AGStatsSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UAGStatsSubsystem* UAGStatsSubsystem::GetDefaultObj()
{
	static class UAGStatsSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UAGStatsSubsystem*>(UAGStatsSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function AimGods.AGStatsSubsystem.GetTimeLeftInCurrentSeason
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDateTime                   CurrentSeasonEndDateTime                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAGStatsSubsystem::GetTimeLeftInCurrentSeason(const struct FDateTime& CurrentSeasonEndDateTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGStatsSubsystem", "GetTimeLeftInCurrentSeason");

	Params::UAGStatsSubsystem_GetTimeLeftInCurrentSeason_Params Parms{};

	Parms.CurrentSeasonEndDateTime = CurrentSeasonEndDateTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.AGStatsSubsystem.GetSeasonInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAGStatsSubsystem::GetSeasonInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGStatsSubsystem", "GetSeasonInfo");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGStatsSubsystem.GetPreviousPlayerStatsFromServer
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAGStatsSubsystem::GetPreviousPlayerStatsFromServer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGStatsSubsystem", "GetPreviousPlayerStatsFromServer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGStatsSubsystem.GetPlayerStatsFromServer
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAGStatsSubsystem::GetPlayerStatsFromServer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGStatsSubsystem", "GetPlayerStatsFromServer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class AimGods.AGTeamComponent
// (None)

class UClass* UAGTeamComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGTeamComponent");

	return Clss;
}


// AGTeamComponent AimGods.Default__AGTeamComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAGTeamComponent* UAGTeamComponent::GetDefaultObj()
{
	static class UAGTeamComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAGTeamComponent*>(UAGTeamComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class AimGods.AGTowerBase
// (Actor)

class UClass* AAGTowerBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGTowerBase");

	return Clss;
}


// AGTowerBase AimGods.Default__AGTowerBase
// (Public, ClassDefaultObject, ArchetypeObject)

class AAGTowerBase* AAGTowerBase::GetDefaultObj()
{
	static class AAGTowerBase* Default = nullptr;

	if (!Default)
		Default = static_cast<AAGTowerBase*>(AAGTowerBase::StaticClass()->DefaultObject);

	return Default;
}


// Function AimGods.AGTowerBase.SpawnTarget
// (Final, Native, Protected)
// Parameters:

void AAGTowerBase::SpawnTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGTowerBase", "SpawnTarget");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGTowerBase.ShootPlayer
// (Final, Native, Public)
// Parameters:
// class AAGCharacterBase*            Character                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGTowerBase::ShootPlayer(class AAGCharacterBase* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGTowerBase", "ShootPlayer");

	Params::AAGTowerBase_ShootPlayer_Params Parms{};

	Parms.Character = Character;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGTowerBase.ShootBestTarget
// (Final, Native, Public)
// Parameters:

void AAGTowerBase::ShootBestTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGTowerBase", "ShootBestTarget");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGTowerBase.SetTowerGlow
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bNewEnabled                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGTowerBase::SetTowerGlow(bool bNewEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGTowerBase", "SetTowerGlow");

	Params::AAGTowerBase_SetTowerGlow_Params Parms{};

	Parms.bNewEnabled = bNewEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AimGods.AGTowerBase.RespawnMissingTargets
// (Final, Native, Public)
// Parameters:

void AAGTowerBase::RespawnMissingTargets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGTowerBase", "RespawnMissingTargets");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGTowerBase.OnRep_bShieldEnabled
// (Final, Native, Protected)
// Parameters:

void AAGTowerBase::OnRep_bShieldEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGTowerBase", "OnRep_bShieldEnabled");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGTowerBase.OnRep_bIsDestroyed
// (Final, Native, Protected)
// Parameters:

void AAGTowerBase::OnRep_bIsDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGTowerBase", "OnRep_bIsDestroyed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGTowerBase.OnDeath
// (Final, Native, Protected)
// Parameters:
// class AActor*                      KilledActor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*                 Killer                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGTowerBase::OnDeath(class AActor* KilledActor, class AController* Killer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGTowerBase", "OnDeath");

	Params::AAGTowerBase_OnDeath_Params Parms{};

	Parms.KilledActor = KilledActor;
	Parms.Killer = Killer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGTowerBase.EnemyLeftAggroRadius
// (Final, Native, Public)
// Parameters:
// class AActor*                      EnemyActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGTowerBase::EnemyLeftAggroRadius(class AActor* EnemyActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGTowerBase", "EnemyLeftAggroRadius");

	Params::AAGTowerBase_EnemyLeftAggroRadius_Params Parms{};

	Parms.EnemyActor = EnemyActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGTowerBase.EnemyEnteredAggroRadius
// (Final, Native, Public)
// Parameters:
// class AActor*                      EnemyActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGTowerBase::EnemyEnteredAggroRadius(class AActor* EnemyActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGTowerBase", "EnemyEnteredAggroRadius");

	Params::AAGTowerBase_EnemyEnteredAggroRadius_Params Parms{};

	Parms.EnemyActor = EnemyActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGTowerBase.BPPlayTowerDestroyedEffects
// (Event, Public, BlueprintEvent)
// Parameters:

void AAGTowerBase::BPPlayTowerDestroyedEffects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGTowerBase", "BPPlayTowerDestroyedEffects");



	UObject::ProcessEvent(Func, nullptr);

}


// Class AimGods.AGProjectile
// (Actor)

class UClass* AAGProjectile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGProjectile");

	return Clss;
}


// AGProjectile AimGods.Default__AGProjectile
// (Public, ClassDefaultObject, ArchetypeObject)

class AAGProjectile* AAGProjectile::GetDefaultObj()
{
	static class AAGProjectile* Default = nullptr;

	if (!Default)
		Default = static_cast<AAGProjectile*>(AAGProjectile::StaticClass()->DefaultObject);

	return Default;
}


// Class AimGods.AGTowerTarget
// (Actor)

class UClass* AAGTowerTarget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGTowerTarget");

	return Clss;
}


// AGTowerTarget AimGods.Default__AGTowerTarget
// (Public, ClassDefaultObject, ArchetypeObject)

class AAGTowerTarget* AAGTowerTarget::GetDefaultObj()
{
	static class AAGTowerTarget* Default = nullptr;

	if (!Default)
		Default = static_cast<AAGTowerTarget*>(AAGTowerTarget::StaticClass()->DefaultObject);

	return Default;
}


// Function AimGods.AGTowerTarget.OnHealthModified
// (Final, Native, Protected)
// Parameters:
// float                              NewHealth                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OldHealth                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGTowerTarget::OnHealthModified(float NewHealth, float OldHealth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGTowerTarget", "OnHealthModified");

	Params::AAGTowerTarget_OnHealthModified_Params Parms{};

	Parms.NewHealth = NewHealth;
	Parms.OldHealth = OldHealth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AimGods.AGWeapon
// (Actor)

class UClass* AAGWeapon::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGWeapon");

	return Clss;
}


// AGWeapon AimGods.Default__AGWeapon
// (Public, ClassDefaultObject, ArchetypeObject)

class AAGWeapon* AAGWeapon::GetDefaultObj()
{
	static class AAGWeapon* Default = nullptr;

	if (!Default)
		Default = static_cast<AAGWeapon*>(AAGWeapon::StaticClass()->DefaultObject);

	return Default;
}


// Function AimGods.AGWeapon.ServerNotifyMiss
// (Net, Native, Event, Public, NetServer, HasDefaults, NetValidate)
// Parameters:
// struct FHitResult                  Impact                                                           (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FVector                     Origin                                                           (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGWeapon::ServerNotifyMiss(struct FHitResult& Impact, struct FVector& Origin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGWeapon", "ServerNotifyMiss");

	Params::AAGWeapon_ServerNotifyMiss_Params Parms{};

	Parms.Impact = Impact;
	Parms.Origin = Origin;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGWeapon.ServerNotifyHitscan
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FHitResult                  Impact                                                           (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FVector_NetQuantizeNormal   ShootDir                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAGWeapon::ServerNotifyHitscan(struct FHitResult& Impact, const struct FVector_NetQuantizeNormal& ShootDir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGWeapon", "ServerNotifyHitscan");

	Params::AAGWeapon_ServerNotifyHitscan_Params Parms{};

	Parms.Impact = Impact;
	Parms.ShootDir = ShootDir;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGWeapon.RegenAmmo
// (Final, Native, Protected)
// Parameters:

void AAGWeapon::RegenAmmo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGWeapon", "RegenAmmo");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AGWeapon.OnRep_HitNotify
// (Final, Native, Protected)
// Parameters:

void AAGWeapon::OnRep_HitNotify()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AGWeapon", "OnRep_HitNotify");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class AimGods.AnimNotify_PlayLocalSound
// (None)

class UClass* UAnimNotify_PlayLocalSound::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_PlayLocalSound");

	return Clss;
}


// AnimNotify_PlayLocalSound AimGods.Default__AnimNotify_PlayLocalSound
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotify_PlayLocalSound* UAnimNotify_PlayLocalSound::GetDefaultObj()
{
	static class UAnimNotify_PlayLocalSound* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_PlayLocalSound*>(UAnimNotify_PlayLocalSound::StaticClass()->DefaultObject);

	return Default;
}


// Class AimGods.AsyncTaskAttributeChanged
// (None)

class UClass* UAsyncTaskAttributeChanged::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AsyncTaskAttributeChanged");

	return Clss;
}


// AsyncTaskAttributeChanged AimGods.Default__AsyncTaskAttributeChanged
// (Public, ClassDefaultObject, ArchetypeObject)

class UAsyncTaskAttributeChanged* UAsyncTaskAttributeChanged::GetDefaultObj()
{
	static class UAsyncTaskAttributeChanged* Default = nullptr;

	if (!Default)
		Default = static_cast<UAsyncTaskAttributeChanged*>(UAsyncTaskAttributeChanged::StaticClass()->DefaultObject);

	return Default;
}


// Function AimGods.AsyncTaskAttributeChanged.ListenForAttributesChange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAbilitySystemComponent*     AbilitySystemComponent                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FGameplayAttribute>  Attributes                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UAsyncTaskAttributeChanged*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAsyncTaskAttributeChanged* UAsyncTaskAttributeChanged::ListenForAttributesChange(class UAbilitySystemComponent* AbilitySystemComponent, const TArray<struct FGameplayAttribute>& Attributes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncTaskAttributeChanged", "ListenForAttributesChange");

	Params::UAsyncTaskAttributeChanged_ListenForAttributesChange_Params Parms{};

	Parms.AbilitySystemComponent = AbilitySystemComponent;
	Parms.Attributes = Attributes;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.AsyncTaskAttributeChanged.ListenForAttributeChange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAbilitySystemComponent*     AbilitySystemComponent                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          Attribute                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAsyncTaskAttributeChanged*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAsyncTaskAttributeChanged* UAsyncTaskAttributeChanged::ListenForAttributeChange(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayAttribute& Attribute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncTaskAttributeChanged", "ListenForAttributeChange");

	Params::UAsyncTaskAttributeChanged_ListenForAttributeChange_Params Parms{};

	Parms.AbilitySystemComponent = AbilitySystemComponent;
	Parms.Attribute = Attribute;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.AsyncTaskAttributeChanged.EndTask
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAsyncTaskAttributeChanged::EndTask()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncTaskAttributeChanged", "EndTask");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class AimGods.AsyncTaskCooldownChanged
// (None)

class UClass* UAsyncTaskCooldownChanged::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AsyncTaskCooldownChanged");

	return Clss;
}


// AsyncTaskCooldownChanged AimGods.Default__AsyncTaskCooldownChanged
// (Public, ClassDefaultObject, ArchetypeObject)

class UAsyncTaskCooldownChanged* UAsyncTaskCooldownChanged::GetDefaultObj()
{
	static class UAsyncTaskCooldownChanged* Default = nullptr;

	if (!Default)
		Default = static_cast<UAsyncTaskCooldownChanged*>(UAsyncTaskCooldownChanged::StaticClass()->DefaultObject);

	return Default;
}


// Function AimGods.AsyncTaskCooldownChanged.ListenForCooldownChange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAbilitySystemComponent*     AbilitySystemComponent                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       CooldownTags                                                     (Parm, NativeAccessSpecifierPublic)
// bool                               UseServerCooldown                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAsyncTaskCooldownChanged*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAsyncTaskCooldownChanged* UAsyncTaskCooldownChanged::ListenForCooldownChange(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayTagContainer& CooldownTags, bool UseServerCooldown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncTaskCooldownChanged", "ListenForCooldownChange");

	Params::UAsyncTaskCooldownChanged_ListenForCooldownChange_Params Parms{};

	Parms.AbilitySystemComponent = AbilitySystemComponent;
	Parms.CooldownTags = CooldownTags;
	Parms.UseServerCooldown = UseServerCooldown;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.AsyncTaskCooldownChanged.EndTask
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAsyncTaskCooldownChanged::EndTask()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncTaskCooldownChanged", "EndTask");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class AimGods.AsyncTaskEffectStackChanged
// (None)

class UClass* UAsyncTaskEffectStackChanged::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AsyncTaskEffectStackChanged");

	return Clss;
}


// AsyncTaskEffectStackChanged AimGods.Default__AsyncTaskEffectStackChanged
// (Public, ClassDefaultObject, ArchetypeObject)

class UAsyncTaskEffectStackChanged* UAsyncTaskEffectStackChanged::GetDefaultObj()
{
	static class UAsyncTaskEffectStackChanged* Default = nullptr;

	if (!Default)
		Default = static_cast<UAsyncTaskEffectStackChanged*>(UAsyncTaskEffectStackChanged::StaticClass()->DefaultObject);

	return Default;
}


// Function AimGods.AsyncTaskEffectStackChanged.ListenForGameplayEffectStackChange
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UAbilitySystemComponent*     AbilitySystemComponent                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                EffectGameplayTag                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAsyncTaskEffectStackChanged*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAsyncTaskEffectStackChanged* UAsyncTaskEffectStackChanged::ListenForGameplayEffectStackChange(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayTag& EffectGameplayTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncTaskEffectStackChanged", "ListenForGameplayEffectStackChange");

	Params::UAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Params Parms{};

	Parms.AbilitySystemComponent = AbilitySystemComponent;
	Parms.EffectGameplayTag = EffectGameplayTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.AsyncTaskEffectStackChanged.EndTask
// (Final, Native, Private, BlueprintCallable)
// Parameters:

void UAsyncTaskEffectStackChanged::EndTask()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncTaskEffectStackChanged", "EndTask");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class AimGods.AsyncTaskOwnedTagChanged
// (None)

class UClass* UAsyncTaskOwnedTagChanged::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AsyncTaskOwnedTagChanged");

	return Clss;
}


// AsyncTaskOwnedTagChanged AimGods.Default__AsyncTaskOwnedTagChanged
// (Public, ClassDefaultObject, ArchetypeObject)

class UAsyncTaskOwnedTagChanged* UAsyncTaskOwnedTagChanged::GetDefaultObj()
{
	static class UAsyncTaskOwnedTagChanged* Default = nullptr;

	if (!Default)
		Default = static_cast<UAsyncTaskOwnedTagChanged*>(UAsyncTaskOwnedTagChanged::StaticClass()->DefaultObject);

	return Default;
}


// Function AimGods.AsyncTaskOwnedTagChanged.ListenForOwnedTagChange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAbilitySystemComponent*     AbilitySystemComponent                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       OwnedTags                                                        (Parm, NativeAccessSpecifierPublic)
// class UAsyncTaskOwnedTagChanged*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAsyncTaskOwnedTagChanged* UAsyncTaskOwnedTagChanged::ListenForOwnedTagChange(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayTagContainer& OwnedTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncTaskOwnedTagChanged", "ListenForOwnedTagChange");

	Params::UAsyncTaskOwnedTagChanged_ListenForOwnedTagChange_Params Parms{};

	Parms.AbilitySystemComponent = AbilitySystemComponent;
	Parms.OwnedTags = OwnedTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.AsyncTaskOwnedTagChanged.EndTask
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAsyncTaskOwnedTagChanged::EndTask()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncTaskOwnedTagChanged", "EndTask");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class AimGods.AsyncTaskWalkInDirection
// (None)

class UClass* UAsyncTaskWalkInDirection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AsyncTaskWalkInDirection");

	return Clss;
}


// AsyncTaskWalkInDirection AimGods.Default__AsyncTaskWalkInDirection
// (Public, ClassDefaultObject, ArchetypeObject)

class UAsyncTaskWalkInDirection* UAsyncTaskWalkInDirection::GetDefaultObj()
{
	static class UAsyncTaskWalkInDirection* Default = nullptr;

	if (!Default)
		Default = static_cast<UAsyncTaskWalkInDirection*>(UAsyncTaskWalkInDirection::StaticClass()->DefaultObject);

	return Default;
}


// Function AimGods.AsyncTaskWalkInDirection.WalkInDirectionAndWait
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class APawn*                       PawnToMove                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     WorldDirection                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ScaleValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForce                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAsyncTaskWalkInDirection*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAsyncTaskWalkInDirection* UAsyncTaskWalkInDirection::WalkInDirectionAndWait(class APawn* PawnToMove, float Duration, const struct FVector& WorldDirection, float ScaleValue, bool bForce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncTaskWalkInDirection", "WalkInDirectionAndWait");

	Params::UAsyncTaskWalkInDirection_WalkInDirectionAndWait_Params Parms{};

	Parms.PawnToMove = PawnToMove;
	Parms.Duration = Duration;
	Parms.WorldDirection = WorldDirection;
	Parms.ScaleValue = ScaleValue;
	Parms.bForce = bForce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.AsyncTaskWalkInDirection.EndTask
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAsyncTaskWalkInDirection::EndTask()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncTaskWalkInDirection", "EndTask");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class AimGods.AwsHttpRequestLibrary
// (None)

class UClass* UAwsHttpRequestLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AwsHttpRequestLibrary");

	return Clss;
}


// AwsHttpRequestLibrary AimGods.Default__AwsHttpRequestLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAwsHttpRequestLibrary* UAwsHttpRequestLibrary::GetDefaultObj()
{
	static class UAwsHttpRequestLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAwsHttpRequestLibrary*>(UAwsHttpRequestLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AimGods.AwsHttpRequestLibrary.SetAuthDetails
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ID                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Access                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Refresh                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RefreshExpiresIn                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAwsHttpRequestLibrary::SetAuthDetails(const class FString& ID, const class FString& Access, const class FString& Refresh, int32 RefreshExpiresIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AwsHttpRequestLibrary", "SetAuthDetails");

	Params::UAwsHttpRequestLibrary_SetAuthDetails_Params Parms{};

	Parms.ID = ID;
	Parms.Access = Access;
	Parms.Refresh = Refresh;
	Parms.RefreshExpiresIn = RefreshExpiresIn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.AwsHttpRequestLibrary.IsLoggedIn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAwsHttpRequestLibrary::IsLoggedIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AwsHttpRequestLibrary", "IsLoggedIn");

	Params::UAwsHttpRequestLibrary_IsLoggedIn_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AimGods.EacSubsystem
// (None)

class UClass* UEacSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EacSubsystem");

	return Clss;
}


// EacSubsystem AimGods.Default__EacSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UEacSubsystem* UEacSubsystem::GetDefaultObj()
{
	static class UEacSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UEacSubsystem*>(UEacSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function AimGods.EacSubsystem.SendPlayerReport
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ReportedPlayerGUID                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReportingPlayerGUID                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFPlayerReportCategory  ReportCategoryID                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReportDescription                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEacSubsystem::SendPlayerReport(const class FString& ReportedPlayerGUID, const class FString& ReportingPlayerGUID, enum class EFPlayerReportCategory ReportCategoryID, const class FString& ReportDescription)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EacSubsystem", "SendPlayerReport");

	Params::UEacSubsystem_SendPlayerReport_Params Parms{};

	Parms.ReportedPlayerGUID = ReportedPlayerGUID;
	Parms.ReportingPlayerGUID = ReportingPlayerGUID;
	Parms.ReportCategoryID = ReportCategoryID;
	Parms.ReportDescription = ReportDescription;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AimGods.FriendsLibrary
// (None)

class UClass* UFriendsLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FriendsLibrary");

	return Clss;
}


// FriendsLibrary AimGods.Default__FriendsLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UFriendsLibrary* UFriendsLibrary::GetDefaultObj()
{
	static class UFriendsLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UFriendsLibrary*>(UFriendsLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AimGods.FriendsLibrary.UnblockPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      UsernameToUnblock                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFriendsLibrary::UnblockPlayer(const class FString& UsernameToUnblock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendsLibrary", "UnblockPlayer");

	Params::UFriendsLibrary_UnblockPlayer_Params Parms{};

	Parms.UsernameToUnblock = UsernameToUnblock;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.FriendsLibrary.SendFriendRequest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Username                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFriendsLibrary::SendFriendRequest(const class FString& Username)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendsLibrary", "SendFriendRequest");

	Params::UFriendsLibrary_SendFriendRequest_Params Parms{};

	Parms.Username = Username;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.FriendsLibrary.RemoveFriend
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FriendId                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFriendsLibrary::RemoveFriend(const class FString& FriendId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendsLibrary", "RemoveFriend");

	Params::UFriendsLibrary_RemoveFriend_Params Parms{};

	Parms.FriendId = FriendId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.FriendsLibrary.GetPendingOutgoingFriendRequests
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFriendsLibrary::GetPendingOutgoingFriendRequests()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendsLibrary", "GetPendingOutgoingFriendRequests");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.FriendsLibrary.GetPendingIncomingFriendRequests
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFriendsLibrary::GetPendingIncomingFriendRequests()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendsLibrary", "GetPendingIncomingFriendRequests");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.FriendsLibrary.GetFriendsList
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFriendsLibrary::GetFriendsList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendsLibrary", "GetFriendsList");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.FriendsLibrary.GetFriendNameByPlayerId
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      PlayerId                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UFriendsLibrary::GetFriendNameByPlayerId(const class FString& PlayerId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendsLibrary", "GetFriendNameByPlayerId");

	Params::UFriendsLibrary_GetFriendNameByPlayerId_Params Parms{};

	Parms.PlayerId = PlayerId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.FriendsLibrary.GetBlockedPlayers
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFriendsLibrary::GetBlockedPlayers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendsLibrary", "GetBlockedPlayers");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.FriendsLibrary.CancelOutgoingFriendshipRequest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      RequestId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFriendsLibrary::CancelOutgoingFriendshipRequest(const class FString& RequestId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendsLibrary", "CancelOutgoingFriendshipRequest");

	Params::UFriendsLibrary_CancelOutgoingFriendshipRequest_Params Parms{};

	Parms.RequestId = RequestId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.FriendsLibrary.BlockPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Username                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFriendsLibrary::BlockPlayer(const class FString& Username)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendsLibrary", "BlockPlayer");

	Params::UFriendsLibrary_BlockPlayer_Params Parms{};

	Parms.Username = Username;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.FriendsLibrary.AcceptFriendRequest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Username                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFriendsLibrary::AcceptFriendRequest(const class FString& Username)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendsLibrary", "AcceptFriendRequest");

	Params::UFriendsLibrary_AcceptFriendRequest_Params Parms{};

	Parms.Username = Username;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AimGods.GameLiftClientUtils
// (None)

class UClass* UGameLiftClientUtils::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameLiftClientUtils");

	return Clss;
}


// GameLiftClientUtils AimGods.Default__GameLiftClientUtils
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameLiftClientUtils* UGameLiftClientUtils::GetDefaultObj()
{
	static class UGameLiftClientUtils* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameLiftClientUtils*>(UGameLiftClientUtils::StaticClass()->DefaultObject);

	return Default;
}


// Function AimGods.GameLiftClientUtils.StopMatchmaking
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGameLiftClientUtils::StopMatchmaking()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLiftClientUtils", "StopMatchmaking");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.GameLiftClientUtils.StartMatchmaking
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGameLiftClientUtils::StartMatchmaking()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLiftClientUtils", "StartMatchmaking");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.GameLiftClientUtils.StartGameSessionPlacement
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGameLiftClientUtils::StartGameSessionPlacement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLiftClientUtils", "StartGameSessionPlacement");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.GameLiftClientUtils.SetLastPotentialMatchCreatedTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Time                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameLiftClientUtils::SetLastPotentialMatchCreatedTime(const class FString& Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLiftClientUtils", "SetLastPotentialMatchCreatedTime");

	Params::UGameLiftClientUtils_SetLastPotentialMatchCreatedTime_Params Parms{};

	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.GameLiftClientUtils.SetLastMatchmakingSearchingTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Time                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameLiftClientUtils::SetLastMatchmakingSearchingTime(const class FString& Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLiftClientUtils", "SetLastMatchmakingSearchingTime");

	Params::UGameLiftClientUtils_SetLastMatchmakingSearchingTime_Params Parms{};

	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.GameLiftClientUtils.ResetTicket
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGameLiftClientUtils::ResetTicket()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLiftClientUtils", "ResetTicket");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.GameLiftClientUtils.ResetPlacement
// (Final, Native, Public)
// Parameters:

void UGameLiftClientUtils::ResetPlacement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLiftClientUtils", "ResetPlacement");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.GameLiftClientUtils.PollMatchmaking
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGameLiftClientUtils::PollMatchmaking()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLiftClientUtils", "PollMatchmaking");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.GameLiftClientUtils.NewLastPotentialMatchCreatedTimeIsGreater
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Time                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameLiftClientUtils::NewLastPotentialMatchCreatedTimeIsGreater(const class FString& Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLiftClientUtils", "NewLastPotentialMatchCreatedTimeIsGreater");

	Params::UGameLiftClientUtils_NewLastPotentialMatchCreatedTimeIsGreater_Params Parms{};

	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.GameLiftClientUtils.NewLastMatchmakingSearchingTimeIsGreater
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Time                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameLiftClientUtils::NewLastMatchmakingSearchingTimeIsGreater(const class FString& Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLiftClientUtils", "NewLastMatchmakingSearchingTimeIsGreater");

	Params::UGameLiftClientUtils_NewLastMatchmakingSearchingTimeIsGreater_Params Parms{};

	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimGods.GameLiftClientUtils.GetResponseTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Region                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameLiftClientUtils::GetResponseTime(const class FString& Region)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLiftClientUtils", "GetResponseTime");

	Params::UGameLiftClientUtils_GetResponseTime_Params Parms{};

	Parms.Region = Region;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.GameLiftClientUtils.DescribeGameSessionPlacement
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGameLiftClientUtils::DescribeGameSessionPlacement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLiftClientUtils", "DescribeGameSessionPlacement");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.GameLiftClientUtils.AcceptMatch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AcceptanceType                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameLiftClientUtils::AcceptMatch(const class FString& AcceptanceType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLiftClientUtils", "AcceptMatch");

	Params::UGameLiftClientUtils_AcceptMatch_Params Parms{};

	Parms.AcceptanceType = AcceptanceType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AimGods.ShopVolume
// (Actor)

class UClass* AShopVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShopVolume");

	return Clss;
}


// ShopVolume AimGods.Default__ShopVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class AShopVolume* AShopVolume::GetDefaultObj()
{
	static class AShopVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<AShopVolume*>(AShopVolume::StaticClass()->DefaultObject);

	return Default;
}


// Class AimGods.WebSocketManager
// (None)

class UClass* UWebSocketManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WebSocketManager");

	return Clss;
}


// WebSocketManager AimGods.Default__WebSocketManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UWebSocketManager* UWebSocketManager::GetDefaultObj()
{
	static class UWebSocketManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UWebSocketManager*>(UWebSocketManager::StaticClass()->DefaultObject);

	return Default;
}


// Function AimGods.WebSocketManager.UpdateInMatchStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsInMatch                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebSocketManager::UpdateInMatchStatus(bool bIsInMatch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSocketManager", "UpdateInMatchStatus");

	Params::UWebSocketManager_UpdateInMatchStatus_Params Parms{};

	Parms.bIsInMatch = bIsInMatch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.WebSocketManager.SendMessageToWebSocketApi
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebSocketManager::SendMessageToWebSocketApi(const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSocketManager", "SendMessageToWebSocketApi");

	Params::UWebSocketManager_SendMessageToWebSocketApi_Params Parms{};

	Parms.Message = Message;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.WebSocketManager.SendLatencyUpdate
// (Final, Native, Public, HasOutParams)
// Parameters:
// TArray<struct FRegionLatency>      RegionLatencies                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UWebSocketManager::SendLatencyUpdate(TArray<struct FRegionLatency>& RegionLatencies)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSocketManager", "SendLatencyUpdate");

	Params::UWebSocketManager_SendLatencyUpdate_Params Parms{};

	Parms.RegionLatencies = RegionLatencies;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.WebSocketManager.SendHeartbeat
// (Final, Native, Public)
// Parameters:

void UWebSocketManager::SendHeartbeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSocketManager", "SendHeartbeat");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.WebSocketManager.SendChatMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ToUserId                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MessageText                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebSocketManager::SendChatMessage(const class FString& ToUserId, const class FString& MessageText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSocketManager", "SendChatMessage");

	Params::UWebSocketManager_SendChatMessage_Params Parms{};

	Parms.ToUserId = ToUserId;
	Parms.MessageText = MessageText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.WebSocketManager.Reconnect
// (Final, Native, Public)
// Parameters:

void UWebSocketManager::Reconnect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSocketManager", "Reconnect");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.WebSocketManager.OpenConnection
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UWebSocketManager::OpenConnection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSocketManager", "OpenConnection");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.WebSocketManager.OnWebSocketConnectionClosed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              StatusCode                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Reason                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWasClean                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebSocketManager::OnWebSocketConnectionClosed(int32 StatusCode, const class FString& Reason, bool bWasClean)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSocketManager", "OnWebSocketConnectionClosed");

	Params::UWebSocketManager_OnWebSocketConnectionClosed_Params Parms{};

	Parms.StatusCode = StatusCode;
	Parms.Reason = Reason;
	Parms.bWasClean = bWasClean;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.WebSocketManager.OnReceivedWebSocketApiMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebSocketManager::OnReceivedWebSocketApiMessage(const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSocketManager", "OnReceivedWebSocketApiMessage");

	Params::UWebSocketManager_OnReceivedWebSocketApiMessage_Params Parms{};

	Parms.Message = Message;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.WebSocketManager.OnConnectToWebSocketApiError
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebSocketManager::OnConnectToWebSocketApiError(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSocketManager", "OnConnectToWebSocketApiError");

	Params::UWebSocketManager_OnConnectToWebSocketApiError_Params Parms{};

	Parms.Error = Error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.WebSocketManager.OnConnectToWebSocketApi
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UWebSocketManager::OnConnectToWebSocketApi()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSocketManager", "OnConnectToWebSocketApi");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimGods.WebSocketManager.CloseWebSocketConnection
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UWebSocketManager::CloseWebSocketConnection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSocketManager", "CloseWebSocketConnection");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}


