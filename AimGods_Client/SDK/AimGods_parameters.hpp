#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// Function AimGods.AGAbilitySystemComponent.RemoveActiveEffectsByAssetTags
struct UAGAbilitySystemComponent_RemoveActiveEffectsByAssetTags_Params
{
public:
	struct FGameplayTagContainer                 GameplayCueTag;                                    // 0x0(0x20)(Parm, NativeAccessSpecifierPublic)
};

// 0x370 (0x370 - 0x0)
// Function AimGods.AGAbilitySystemComponent.OnActiveGameplayEffectRemoved
struct UAGAbilitySystemComponent_OnActiveGameplayEffectRemoved_Params
{
public:
	struct FActiveGameplayEffect                 RemovedEffect;                                     // 0x0(0x370)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x2A8 (0x2A8 - 0x0)
// Function AimGods.AGAbilitySystemComponent.OnActiveGameplayEffectAddedToSelf
struct UAGAbilitySystemComponent_OnActiveGameplayEffectAddedToSelf_Params
{
public:
	class UAbilitySystemComponent*               AbilitySystemComponent;                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpec                   EffectSpec;                                        // 0x8(0x298)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle           EffectHandle;                                      // 0x2A0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AimGods.AGAbilitySystemComponent.GetActionNamePairedWithAbilityTag
struct UAGAbilitySystemComponent_GetActionNamePairedWithAbilityTag_Params
{
public:
	struct FGameplayTag                          AbilityTag;                                        // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AimGods.AGAbilitySystemComponent.CancelAbility
struct UAGAbilitySystemComponent_CancelAbility_Params
{
public:
	struct FGameplayTag                          AbilityTag;                                        // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function AimGods.AGAbilitySystemComponent.BP_RemoveLooseGameplayTag
struct UAGAbilitySystemComponent_BP_RemoveLooseGameplayTag_Params
{
public:
	struct FGameplayTag                          GameplayCueTag;                                    // 0x0(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Amount;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AimGods.AGAbilitySystemComponent.BP_RemoveGameplayCue
struct UAGAbilitySystemComponent_BP_RemoveGameplayCue_Params
{
public:
	struct FGameplayTag                          GameplayCueTag;                                    // 0x0(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function AimGods.AGAbilitySystemComponent.BP_GetGameplayEffectRemainingDuration
struct UAGAbilitySystemComponent_BP_GetGameplayEffectRemainingDuration_Params
{
public:
	struct FActiveGameplayEffectHandle           Handle;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AimGods.AGAbilitySystemComponent.BP_GetBlockedAbilityTags
struct UAGAbilitySystemComponent_BP_GetBlockedAbilityTags_Params
{
public:
	struct FGameplayTagContainer                 ReturnValue;                                       // 0x0(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function AimGods.AGAbilitySystemComponent.BP_FindAbilitySpecFromClass
struct UAGAbilitySystemComponent_BP_FindAbilitySpecFromClass_Params
{
public:
	TSubclassOf<class UGameplayAbility>          InAbilityClass;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilitySpec                  ReturnValue;                                       // 0x8(0xC8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// Function AimGods.AGAbilitySystemComponent.BP_ExecuteGameplayCue
struct UAGAbilitySystemComponent_BP_ExecuteGameplayCue_Params
{
public:
	struct FGameplayTag                          GameplayCueTag;                                    // 0x0(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                EffectParameters;                                  // 0x8(0xB8)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// Function AimGods.AGAbilitySystemComponent.BP_AddGameplayCue
struct UAGAbilitySystemComponent_BP_AddGameplayCue_Params
{
public:
	struct FGameplayTag                          GameplayCueTag;                                    // 0x0(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                EffectParameters;                                  // 0x8(0xB8)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.AGAggroSphereComponent.GetAggroActors
struct UAGAggroSphereComponent_GetAggroActors_Params
{
public:
	TArray<class AActor*>                        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AimGods.AGAggroSphereComponent.ActorLeftAggroRadius
struct UAGAggroSphereComponent_ActorLeftAggroRadius_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_82B[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0xA8 - 0x0)
// Function AimGods.AGAggroSphereComponent.ActorEnteredAggroRadius
struct UAGAggroSphereComponent_ActorEnteredAggroRadius_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFromSweep;                                        // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_82F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            SweepResult;                                       // 0x20(0x88)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.AGAggroSphereComponent.ActorDiedInAggroRadius
struct UAGAggroSphereComponent_ActorDiedInAggroRadius_Params
{
public:
	class AActor*                                KilledActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                           Killer;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AimGods.AGCharacterBase.SetCanMove
struct AAGCharacterBase_SetCanMove_Params
{
public:
	bool                                         CanMove;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AimGods.AGCharacterBase.Server_ShowDamageNumberOnSpectators
struct AAGCharacterBase_Server_ShowDamageNumberOnSpectators_Params
{
public:
	class AAGCharacterBase*                      DamagedCharacter;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAGDamageNumber                       DamageNumber;                                      // 0x8(0x20)(Parm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AimGods.AGCharacterBase.IsDead
struct AAGCharacterBase_IsDead_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AimGods.AGCharacterBase.IsAlive
struct AAGCharacterBase_IsAlive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AimGods.AGCharacterBase.GetMoveSpeed
struct AAGCharacterBase_GetMoveSpeed_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AimGods.AGAICharacter.ShootTarget
struct AAGAICharacter_ShootTarget_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AimGods.AGAICharacter.EnemyLeftAggroRadius
struct AAGAICharacter_EnemyLeftAggroRadius_Params
{
public:
	class AActor*                                EnemyActor;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AimGods.AGAICharacter.EnemyEnteredAggroRadius
struct AAGAICharacter_EnemyEnteredAggroRadius_Params
{
public:
	class AActor*                                EnemyActor;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AimGods.AGAICharacter.BPHandleDeath
struct AAGAICharacter_BPHandleDeath_Params
{
public:
	class AActor*                                KillerActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AimGods.AGAICharacter.ActivateShieldFX
struct AAGAICharacter_ActivateShieldFX_Params
{
public:
	bool                                         bEnableFX;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AimGods.AGAIController.GetTowerToAttack
struct AAGAIController_GetTowerToAttack_Params
{
public:
	class AAGTowerBase*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AimGods.AGAIController.EnemyLeftAggroRadius
struct AAGAIController_EnemyLeftAggroRadius_Params
{
public:
	class AActor*                                EnemyActor;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AimGods.AGAIController.EnemyEnteredAggroRadius
struct AAGAIController_EnemyEnteredAggroRadius_Params
{
public:
	class AActor*                                EnemADetourCrowdAIControlleryActor;                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.AGAttributes.OnRep_MoveSpeed
struct UAGAttributes_OnRep_MoveSpeed_Params
{
public:
	struct FGameplayAttributeData                OldMoveSpeed;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.AGAttributes.OnRep_MaxHealth
struct UAGAttributes_OnRep_MaxHealth_Params
{
public:
	struct FGameplayAttributeData                OldMaxHealth;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.AGAttributes.OnRep_Lifesteal
struct UAGAttributes_OnRep_Lifesteal_Params
{
public:
	struct FGameplayAttributeData                OldLifesteal;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.AGAttributes.OnRep_IncomingHealMultiplier
struct UAGAttributes_OnRep_IncomingHealMultiplier_Params
{
public:
	struct FGameplayAttributeData                OldIncomingHealMultiplier;                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.AGAttributes.OnRep_HealthRegeneration
struct UAGAttributes_OnRep_HealthRegeneration_Params
{
public:
	struct FGameplayAttributeData                OldHealthRegeneration;                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.AGAttributes.OnRep_Health
struct UAGAttributes_OnRep_Health_Params
{
public:
	struct FGameplayAttributeData                OldHealth;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.AGAttributes.OnRep_HeadshotDefense
struct UAGAttributes_OnRep_HeadshotDefense_Params
{
public:
	struct FGameplayAttributeData                OldHeadshotDefense;                                // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.AGAttributes.OnRep_HeadshotDamageMultiplier
struct UAGAttributes_OnRep_HeadshotDamageMultiplier_Params
{
public:
	struct FGameplayAttributeData                OldHeadshotDamageMultiplier;                       // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.AGAttributes.OnRep_DelayBetweenShots
struct UAGAttributes_OnRep_DelayBetweenShots_Params
{
public:
	struct FGameplayAttributeData                OldDelayBetweenShots;                              // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.AGAttributes.OnRep_Defense
struct UAGAttributes_OnRep_Defense_Params
{
public:
	struct FGameplayAttributeData                OldDefense;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.AGAttributes.OnRep_AttackPower
struct UAGAttributes_OnRep_AttackPower_Params
{
public:
	struct FGameplayAttributeData                OldAttackPower;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.AGAttributeSetPlayer.OnRep_TimeBetweenShots
struct UAGAttributeSetPlayer_OnRep_TimeBetweenShots_Params
{
public:
	struct FGameplayAttributeData                OldTimeBetweenShots;                               // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.AGAttributeSetPlayer.OnRep_HeadshotDamageMultiplier
struct UAGAttributeSetPlayer_OnRep_HeadshotDamageMultiplier_Params
{
public:
	struct FGameplayAttributeData                OldHeadshotDamageMultiplier;                       // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.AGAttributeSetPlayer.OnRep_Gold
struct UAGAttributeSetPlayer_OnRep_Gold_Params
{
public:
	struct FGameplayAttributeData                OldGold;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AimGods.AGAuthSubsystem.Login
struct UAGAuthSubsystem_Login_Params
{
public:
	class FString                                Username;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Password;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AimGods.AGAuthSubsystem.ForceLogin
struct UAGAuthSubsystem_ForceLogin_Params
{
public:
	class FString                                Username;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Password;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function AimGods.AGCharacter.StunTagChanged
struct AAGCharacter_StunTagChanged_Params
{
public:
	struct FGameplayTag                          CallbackTag;                                       // 0x0(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewCount;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function AimGods.AGCharacter.ShowHitIndicator
struct AAGCharacter_ShowHitIndicator_Params
{
public:
	struct FVector                               DamagerLocation;                                   // 0x0(0xC)(ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function AimGods.AGCharacter.SetLastImpact
struct AAGCharacter_SetLastImpact_Params
{
public:
	struct FVector                               Point;                                             // 0x0(0xC)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.AGCharacter.ServerGrantLoadoutAbilities
struct AAGCharacter_ServerGrantLoadoutAbilities_Params
{
public:
	TArray<struct FLoadoutAbility>               LoadoutAbilities;                                  // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.AGCharacter.OnDeath
struct AAGCharacter_OnDeath_Params
{
public:
	class AActor*                                KilledActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                           KillerController;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AimGods.AGCharacter.Fire
struct AAGCharacter_Fire_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AimGods.AGCharacter.CheatGold
struct AAGCharacter_CheatGold_Params
{
public:
	int32                                        Gold;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.AGCharacter.BPUpdateKillFeed
struct AAGCharacter_BPUpdateKillFeed_Params
{
public:
	class AAGPlayerState*                        KillerPC;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AAGCharacter*                          DeadActor;                                         // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function AimGods.AGCharacter.BPShowHitIndicator
struct AAGCharacter_BPShowHitIndicator_Params
{
public:
	struct FVector                               DamagerLocation;                                   // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AimGods.AGCharacter.BPShowGameplayUI
struct AAGCharacter_BPShowGameplayUI_Params
{
public:
	class AAGPlayerController*                   NewController;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AimGods.AGCharacter.BPShowDamageDirection
struct AAGCharacter_BPShowDamageDirection_Params
{
public:
	class AActor*                                DamageCauser;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.AGCharacter.BPSendInfoToKillFeed
struct AAGCharacter_BPSendInfoToKillFeed_Params
{
public:
	class AController*                           KillerPC;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AAGCharacter*                          DeadActor;                                         // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AimGods.AGCharacter.BPOnDeath
struct AAGCharacter_BPOnDeath_Params
{
public:
	class AAGPlayerState*                        Killer;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AimGods.AGCharacterMovementComponent.SetSlowWalking
struct UAGCharacterMovementComponent_SetSlowWalking_Params
{
public:
	bool                                         bSlowWalk;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AimGods.AGChatSubsystem.ShowChatBox
struct UAGChatSubsystem_ShowChatBox_Params
{
public:
	class FString                                OtherPlayerId;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OtherPlayerUsername;                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AimGods.AGChatSubsystem.SendChatMessage
struct UAGChatSubsystem_SendChatMessage_Params
{
public:
	class FString                                ToUserId;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MessageText;                                       // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function AimGods.AGChatSubsystem.GetChatConversationById
struct UAGChatSubsystem_GetChatConversationById_Params
{
public:
	class FString                                ChatConversationId;                                // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FChatConversation                     ReturnValue;                                       // 0x10(0x40)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function AimGods.AGChatSubsystem.CreateChatMessage
struct UAGChatSubsystem_CreateChatMessage_Params
{
public:
	class FString                                FromUserId;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FromUsername;                                      // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        MessageTimeStamp;                                  // 0x20(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MessageText;                                       // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FChatMessage                          ReturnValue;                                       // 0x38(0x40)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AimGods.AGCheatManager.Cheat.Gold
struct UAGCheatManager_Cheat_Gold_Params
{
public:
	int32                                        Gold;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function AimGods.AGGameMode.QueueEndGame
struct AAGGameMode_QueueEndGame_Params
{
public:
	bool                                         bGameEndedEarly;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bServerShutdownEarly;                              // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AimGods.AGGameMode.Logout
struct AAGGameMode_Logout_Params
{
public:
	class AController*                           Exiting;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AimGods.AGGameMode.HandleRageQuit
struct AAGGameMode_HandleRageQuit_Params
{
public:
	class AController*                           Exiting;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AimGods.AGGameMode.HandleDisconnectDuringMatchLoad
struct AAGGameMode_HandleDisconnectDuringMatchLoad_Params
{
public:
	class AAGCharacter*                          Character;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AimGods.AGGameMode.GetMinionPlayerStarts
struct AAGGameMode_GetMinionPlayerStarts_Params
{
public:
	bool                                         bIsRedTeam;                                        // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8E6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AAGMinionPlayerStart*>          ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AimGods.AGGameMode.EndGame
struct AAGGameMode_EndGame_Params
{
public:
	bool                                         bRedTeamWon;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.AGGameMode.AddToDamageTaken
struct AAGGameMode_AddToDamageTaken_Params
{
public:
	class AActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageDone;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8E9[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AimGods.AGGameMode.AddToDamageDone
struct AAGGameMode_AddToDamageDone_Params
{
public:
	class AAGPlayerState*                        InPlayerState;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageDone;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8EB[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function AimGods.AGCustomGameSubsystem.SetPlayerIsReady
struct UAGCustomGameSubsystem_SetPlayerIsReady_Params
{
public:
	bool                                         bIsReady;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.AGCustomGameSubsystem.SendCustomGameInvite
struct UAGCustomGameSubsystem_SendCustomGameInvite_Params
{
public:
	class FString                                PlayerId;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.AGCustomGameSubsystem.KickPlayer
struct UAGCustomGameSubsystem_KickPlayer_Params
{
public:
	class FString                                PlayerId;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AimGods.AGCustomGameSubsystem.GetIsReady
struct UAGCustomGameSubsystem_GetIsReady_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AimGods.AGCustomGameSubsystem.GetIsLeader
struct UAGCustomGameSubsystem_GetIsLeader_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AimGods.AGCustomGameSubsystem.ChangeTeam
struct UAGCustomGameSubsystem_ChangeTeam_Params
{
public:
	enum class EFCustomGameTeam                  NewTeam;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.AGCustomGameSubsystem.CancelOutgoingInvite
struct UAGCustomGameSubsystem_CancelOutgoingInvite_Params
{
public:
	class FString                                InviteId;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.AGCustomGameSubsystem.CancelInvite
struct UAGCustomGameSubsystem_CancelInvite_Params
{
public:
	class FString                                InviteId;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.AGCustomGameSubsystem.CancelIncomingInvite
struct UAGCustomGameSubsystem_CancelIncomingInvite_Params
{
public:
	class FString                                InviteId;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AimGods.AGCustomGameSubsystem.AllPlayersReady
struct UAGCustomGameSubsystem_AllPlayersReady_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.AGCustomGameSubsystem.AcceptInvite
struct UAGCustomGameSubsystem_AcceptInvite_Params
{
public:
	class FString                                InviteId;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AimGods.AGDamageTextWidgetComponent.SetDamageText
struct UAGDamageTextWidgetComponent_SetDamageText_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDamageTextType                   DamageTextType;                                    // 0x4(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_92C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        GoldAmount;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_92D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            DebuffIcon;                                        // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AimGods.AGDamageTextWidgetComponent.AddDebuffIcon
struct UAGDamageTextWidgetComponent_AddDebuffIcon_Params
{
public:
	class UImage*                                DebuffImage;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AimGods.AGGameInstance.SwapAbilities
struct UAGGameInstance_SwapAbilities_Params
{
public:
	enum class EAGAbilityInputID                 SlotA;                                             // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAGAbilityInputID                 SlotB;                                             // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSaveToDisk;                                       // 0x2(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x3(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AimGods.AGGameInstance.SetUserInfo
struct UAGGameInstance_SetUserInfo_Params
{
public:
	class FString                                InUsername;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InUserId;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AimGods.AGGameInstance.SetAbility
struct UAGGameInstance_SetAbility_Params
{
public:
	enum class EAGAbilityInputID                 Slot;                                              // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_948[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UAGGameplayAbility>        Ability;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSaveToDisk;                                       // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_949[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function AimGods.AGGameInstance.HandleDowntimeNotification
struct UAGGameInstance_HandleDowntimeNotification_Params
{
public:
	class FString                                Message;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasStarted;                                       // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_952[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function AimGods.AGGameliftSubsystem.UpdatePlayersInMatchStatus
struct UAGGameliftSubsystem_UpdatePlayersInMatchStatus_Params
{
public:
	class FString                                PlayerId;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlayerIsInMatch;                                  // 0x10(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_96C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function AimGods.AGGameliftSubsystem.AcceptMatch
struct UAGGameliftSubsystem_AcceptMatch_Params
{
public:
	bool                                         bDidAccept;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AimGods.AGGameModeTest.RespondToOnActorKilled
struct AAGGameModeTest_RespondToOnActorKilled_Params
{
public:
	class AActor*                                VictimActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                KillerActor;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                           KillerController;                                  // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.AGGameModeTest.OnGameOver
struct AAGGameModeTest_OnGameOver_Params
{
public:
	class AActor*                                InstigatorPawn;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWonGame;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_97C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function AimGods.AGGameplayAbility.GetActivationBlockedTags
struct UAGGameplayAbility_GetActivationBlockedTags_Params
{
public:
	struct FGameplayTagContainer                 ReturnValue;                                       // 0x0(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AimGods.AGGameplayCueNotify_Actor.GetNumberOfSameActiveGameplayCues
struct AAGGameplayCueNotify_Actor_GetNumberOfSameActiveGameplayCues_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function AimGods.AGGameState.OnEndGameStatsReceived
struct AAGGameState_OnEndGameStatsReceived_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_98C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatsError                           StatError;                                         // 0x8(0x30)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FGameStatsPayload>             EndGameStats;                                      // 0x38(0x10)(ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AimGods.AGGameState.GetTeam
struct AAGGameState_GetTeam_Params
{
public:
	bool                                         bRedTeam;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_98D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AAGPlayerController*>           ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.AGGameState.GetBaseLocation
struct AAGGameState_GetBaseLocation_Params
{
public:
	bool                                         bIsRedTeam;                                        // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_990[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x4(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AimGods.AGGameState.AddTeamPoints
struct AAGGameState_AddTeamPoints_Params
{
public:
	bool                                         bOnBlueTeam;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_993[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AwardedPoints;                                     // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AimGods.AGGameState.AddPlayerToReadyList
struct AAGGameState_AddPlayerToReadyList_Params
{
public:
	class APlayerController*                     ReadyPC;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AimGods.AGGhost.BPOnSpectateModeChanged
struct AAGGhost_BPOnSpectateModeChanged_Params
{
public:
	bool                                         bFreeMode;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AimGods.AGHealthComponent.OnRep_HP
struct UAGHealthComponent_OnRep_HP_Params
{
public:
	float                                        OldHP;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.AGPartySubsystem.SendPartyInvite
struct UAGPartySubsystem_SendPartyInvite_Params
{
public:
	class FString                                PlayerId;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AimGods.AGPartySubsystem.IsPartyLeader
struct UAGPartySubsystem_IsPartyLeader_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AimGods.AGPartySubsystem.IsInParty
struct UAGPartySubsystem_IsInParty_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.AGPartySubsystem.CancelPartyInvite
struct UAGPartySubsystem_CancelPartyInvite_Params
{
public:
	class FString                                PartyInviteId;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.AGPartySubsystem.AcceptPartyInvite
struct UAGPartySubsystem_AcceptPartyInvite_Params
{
public:
	class FString                                PartyInviteId;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AimGods.AGPlayerController.ShowRespawnScreen
struct AAGPlayerController_ShowRespawnScreen_Params
{
public:
	float                                        RespawnTimer;                                      // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AimGods.AGPlayerController.ShowDamageNumber
struct AAGPlayerController_ShowDamageNumber_Params
{
public:
	class AAGCharacterBase*                      Avatar;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAGDamageNumber                       DamageNumber;                                      // 0x8(0x20)(Parm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AimGods.AGPlayerController.ServerSetIsPlaying
struct AAGPlayerController_ServerSetIsPlaying_Params
{
public:
	bool                                         bCond;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AimGods.AGPlayerController.ServerAddToReadyToSpawnList
struct AAGPlayerController_ServerAddToReadyToSpawnList_Params
{
public:
	class APlayerController*                     ReadyPC;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AimGods.AGPlayerController.ReportPlayer
struct AAGPlayerController_ReportPlayer_Params
{
public:
	class FString                                PlayerToReport;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReportCategory;                                    // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.AGPlayerController.OnGameOver
struct AAGPlayerController_OnGameOver_Params
{
public:
	class AActor*                                InstigatorPawn;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWonGame;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function AimGods.AGPlayerController.GetPlayerName
struct AAGPlayerController_GetPlayerName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AimGods.AGPlayerController.ClientUpdateJoinInProgressTime
struct AAGPlayerController_ClientUpdateJoinInProgressTime_Params
{
public:
	float                                        Time;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AimGods.AGPlayerController.ClientShowRespawnScreen
struct AAGPlayerController_ClientShowRespawnScreen_Params
{
public:
	float                                        RespawnTimer;                                      // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AimGods.AGPlayerController.BPShowDamageText
struct AAGPlayerController_BPShowDamageText_Params
{
public:
	float                                        DamageToDo;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasHeadshot;                                      // 0x4(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasImmune;                                        // 0x5(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A14[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function AimGods.AGPlayerController.AddDamageNumber
struct AAGPlayerController_AddDamageNumber_Params
{
public:
	float                                        DamageAmount;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                TargetCharacter;                                   // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDamageTextType                   DamageTextType;                                    // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UTexture2D*>                    EffectIcons;                                       // 0x18(0x10)(ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function AimGods.AGPlayerState.TrySwapAbilities
struct AAGPlayerState_TrySwapAbilities_Params
{
public:
	enum class EAGAbilityInputID                 AbilityA;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAGAbilityInputID                 AbilityB;                                          // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.AGPlayerState.TryBuyAbility
struct AAGPlayerState_TryBuyAbility_Params
{
public:
	TSubclassOf<class UAGGameplayAbility>        AbilityToBuy;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// Function AimGods.AGPlayerState.ServerTrySwapAbilities
struct AAGPlayerState_ServerTrySwapAbilities_Params
{
public:
	enum class EAGAbilityInputID                 AbilityA;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAGAbilityInputID                 AbilityB;                                          // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AimGods.AGPlayerState.ServerTryBuyAbility
struct AAGPlayerState_ServerTryBuyAbility_Params
{
public:
	TSubclassOf<class UAGGameplayAbility>        AbilityToBuy;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AimGods.AGPlayerState.OnRep_Gold
struct AAGPlayerState_OnRep_Gold_Params
{
public:
	int32                                        OldGold;                                           // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.AGPlayerState.OnRep_ConnectedGameSessionId
struct AAGPlayerState_OnRep_ConnectedGameSessionId_Params
{
public:
	class FString                                OldGameSessionId;                                  // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.AGPlayerState.OnRep_ConnectedFleetId
struct AAGPlayerState_OnRep_ConnectedFleetId_Params
{
public:
	class FString                                OldFleetId;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// Function AimGods.AGPlayerState.OnMainMenuStatsReceived
struct AAGPlayerState_OnMainMenuStatsReceived_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A40[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatsError                           StatError;                                         // 0x8(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameStatsPayload                     ReceivedGameStats;                                 // 0x38(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function AimGods.AGPlayerState.OnEndGameStatsReceived
struct AAGPlayerState_OnEndGameStatsReceived_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A48[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatsError                           StatError;                                         // 0x8(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FGameStatsPayload>             ReceivedGameStats;                                 // 0x38(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.AGPlayerState.GetUniqueIdAsString
struct AAGPlayerState_GetUniqueIdAsString_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function AimGods.AGPlayerState.GetEndGameStatsByPlayerId
struct AAGPlayerState_GetEndGameStatsByPlayerId_Params
{
public:
	class FString                                InPlayerId;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameStatsPayload                     ReturnValue;                                       // 0x10(0x70)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AimGods.AGPlayerState.ClientShowScore
struct AAGPlayerState_ClientShowScore_Params
{
public:
	float                                        Points;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A53[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Text;                                              // 0x8(0x18)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AimGods.AGPlayerState.BPShowScore
struct AAGPlayerState_BPShowScore_Params
{
public:
	float                                        Points;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A59[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Text;                                              // 0x8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AimGods.AGPlayerState.BPShowDebuffIcon
struct AAGPlayerState_BPShowDebuffIcon_Params
{
public:
	class UAGGameplayEffect*                     AppliedEffect;                                     // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AimGods.AGPlayerState.AwardGold
struct AAGPlayerState_AwardGold_Params
{
public:
	int32                                        Amount;                                            // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AimGods.AGPlayerState.AddScorePoints
struct AAGPlayerState_AddScorePoints_Params
{
public:
	float                                        Points;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A69[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Reason;                                            // 0x8(0x18)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AimGods.AGPlayerState.AddHealing
struct AAGPlayerState_AddHealing_Params
{
public:
	float                                        Amount;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AimGods.AGPlayerState.AddDamageTaken
struct AAGPlayerState_AddDamageTaken_Params
{
public:
	float                                        Amount;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AimGods.AGPlayerState.AddDamage
struct AAGPlayerState_AddDamage_Params
{
public:
	float                                        Amount;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function AimGods.AGStatics.ReplaceTableReferenceStringsWithCorrespondingValue
struct UAGStatics_ReplaceTableReferenceStringsWithCorrespondingValue_Params
{
public:
	class UCurveTable*                           CurveTable;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Text;                                              // 0x8(0x18)(Parm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x20(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AimGods.AGStatics.RemoveAllLowercase
struct UAGStatics_RemoveAllLowercase_Params
{
public:
	class FString                                InString;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AimGods.AGStatics.IsSameTeam
struct UAGStatics_IsSameTeam_Params
{
public:
	class AActor*                                ActorA;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ActorB;                                            // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AA2[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AimGods.AGStatics.IsRedTeam
struct UAGStatics_IsRedTeam_Params
{
public:
	class AActor*                                TestActor;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AA7[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function AimGods.AGStatics.IsEffectSpecHandleValid
struct UAGStatics_IsEffectSpecHandleValid_Params
{
public:
	struct FGameplayEffectSpecHandle             EffectSpecHandle;                                  // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AAD[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AimGods.AGStatics.IsChargeEffect
struct UAGStatics_IsChargeEffect_Params
{
public:
	class UGameplayEffect*                       GameplayEffect;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AAF[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD0 - 0x0)
// Function AimGods.AGStatics.GetHandleFromAbilitySpec
struct UAGStatics_GetHandleFromAbilitySpec_Params
{
public:
	struct FGameplayAbilitySpec                  AbilitySpec;                                       // 0x0(0xC8)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayAbilitySpecHandle            ReturnValue;                                       // 0xC8(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AB4[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AimGods.AGStatics.GetGameDefaultMapName
struct UAGStatics_GetGameDefaultMapName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2A0 (0x2A0 - 0x0)
// Function AimGods.AGStatics.GetEffectSpecDuration
struct UAGStatics_GetEffectSpecDuration_Params
{
public:
	struct FGameplayEffectSpec                   EffectSpec;                                        // 0x0(0x298)(Parm, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x298(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ABA[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function AimGods.AGStatics.GetCurrentTowerForTeam
struct UAGStatics_GetCurrentTowerForTeam_Params
{
public:
	class UWorld*                                World;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsRedTeam;                                        // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ABC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AAGTowerBase*                          ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE8 (0xE8 - 0x0)
// Function AimGods.AGStatics.GetAbilityActivationBlockedTags
struct UAGStatics_GetAbilityActivationBlockedTags_Params
{
public:
	struct FGameplayAbilitySpec                  AbilitySpec;                                       // 0x0(0xC8)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 ReturnValue;                                       // 0xC8(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function AimGods.AGStatics.DrawDebugSphereShippingIncluded
struct UAGStatics_DrawDebugSphereShippingIncluded_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Center;                                            // 0x8(0xC)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Segments;                                          // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          LineColor;                                         // 0x1C(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x2C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AC0[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function AimGods.AGStatsSubsystem.GetTimeLeftInCurrentSeason
struct UAGStatsSubsystem_GetTimeLeftInCurrentSeason_Params
{
public:
	struct FDateTime                             CurrentSeasonEndDateTime;                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AimGods.AGTowerBase.ShootPlayer
struct AAGTowerBase_ShootPlayer_Params
{
public:
	class AAGCharacterBase*                      Character;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AimGods.AGTowerBase.SetTowerGlow
struct AAGTowerBase_SetTowerGlow_Params
{
public:
	bool                                         bNewEnabled;                                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.AGTowerBase.OnDeath
struct AAGTowerBase_OnDeath_Params
{
public:
	class AActor*                                KilledActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                           Killer;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AimGods.AGTowerBase.EnemyLeftAggroRadius
struct AAGTowerBase_EnemyLeftAggroRadius_Params
{
public:
	class AActor*                                EnemyActor;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AimGods.AGTowerBase.EnemyEnteredAggroRadius
struct AAGTowerBase_EnemyEnteredAggroRadius_Params
{
public:
	class AActor*                                EnemyActor;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AimGods.AGTowerTarget.OnHealthModified
struct AAGTowerTarget_OnHealthModified_Params
{
public:
	float                                        NewHealth;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OldHealth;                                         // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x94 (0x94 - 0x0)
// Function AimGods.AGWeapon.ServerNotifyMiss
struct AAGWeapon_ServerNotifyMiss_Params
{
public:
	struct FHitResult                            Impact;                                            // 0x0(0x88)(ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector                               Origin;                                            // 0x88(0xC)(ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x94 (0x94 - 0x0)
// Function AimGods.AGWeapon.ServerNotifyHitscan
struct AAGWeapon_ServerNotifyHitscan_Params
{
public:
	struct FHitResult                            Impact;                                            // 0x0(0x88)(ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal             ShootDir;                                          // 0x88(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AimGods.AsyncTaskAttributeChanged.ListenForAttributesChange
struct UAsyncTaskAttributeChanged_ListenForAttributesChange_Params
{
public:
	class UAbilitySystemComponent*               AbilitySystemComponent;                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayAttribute>            Attributes;                                        // 0x8(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UAsyncTaskAttributeChanged*            ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function AimGods.AsyncTaskAttributeChanged.ListenForAttributeChange
struct UAsyncTaskAttributeChanged_ListenForAttributeChange_Params
{
public:
	class UAbilitySystemComponent*               AbilitySystemComponent;                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    Attribute;                                         // 0x8(0x20)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAsyncTaskAttributeChanged*            ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function AimGods.AsyncTaskCooldownChanged.ListenForCooldownChange
struct UAsyncTaskCooldownChanged_ListenForCooldownChange_Params
{
public:
	class UAbilitySystemComponent*               AbilitySystemComponent;                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 CooldownTags;                                      // 0x8(0x20)(Parm, NativeAccessSpecifierPublic)
	bool                                         UseServerCooldown;                                 // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B23[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAsyncTaskCooldownChanged*             ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AimGods.AsyncTaskEffectStackChanged.ListenForGameplayEffectStackChange
struct UAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Params
{
public:
	class UAbilitySystemComponent*               AbilitySystemComponent;                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          EffectGameplayTag;                                 // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAsyncTaskEffectStackChanged*          ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function AimGods.AsyncTaskOwnedTagChanged.ListenForOwnedTagChange
struct UAsyncTaskOwnedTagChanged_ListenForOwnedTagChange_Params
{
public:
	class UAbilitySystemComponent*               AbilitySystemComponent;                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 OwnedTags;                                         // 0x8(0x20)(Parm, NativeAccessSpecifierPublic)
	class UAsyncTaskOwnedTagChanged*             ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AimGods.AsyncTaskWalkInDirection.WalkInDirectionAndWait
struct UAsyncTaskWalkInDirection_WalkInDirectionAndWait_Params
{
public:
	class APawn*                                 PawnToMove;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WorldDirection;                                    // 0xC(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScaleValue;                                        // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForce;                                            // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B4E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAsyncTaskWalkInDirection*             ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function AimGods.AwsHttpRequestLibrary.SetAuthDetails
struct UAwsHttpRequestLibrary_SetAuthDetails_Params
{
public:
	class FString                                ID;                                                // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Access;                                            // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Refresh;                                           // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RefreshExpiresIn;                                  // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B5B[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function AimGods.AwsHttpRequestLibrary.IsLoggedIn
struct UAwsHttpRequestLibrary_IsLoggedIn_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function AimGods.EacSubsystem.SendPlayerReport
struct UEacSubsystem_SendPlayerReport_Params
{
public:
	class FString                                ReportedPlayerGUID;                                // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReportingPlayerGUID;                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFPlayerReportCategory            ReportCategoryID;                                  // 0x20(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B70[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReportDescription;                                 // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.FriendsLibrary.UnblockPlayer
struct UFriendsLibrary_UnblockPlayer_Params
{
public:
	class FString                                UsernameToUnblock;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.FriendsLibrary.SendFriendRequest
struct UFriendsLibrary_SendFriendRequest_Params
{
public:
	class FString                                Username;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.FriendsLibrary.RemoveFriend
struct UFriendsLibrary_RemoveFriend_Params
{
public:
	class FString                                FriendId;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AimGods.FriendsLibrary.GetFriendNameByPlayerId
struct UFriendsLibrary_GetFriendNameByPlayerId_Params
{
public:
	class FString                                PlayerId;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.FriendsLibrary.CancelOutgoingFriendshipRequest
struct UFriendsLibrary_CancelOutgoingFriendshipRequest_Params
{
public:
	class FString                                RequestId;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.FriendsLibrary.BlockPlayer
struct UFriendsLibrary_BlockPlayer_Params
{
public:
	class FString                                Username;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.FriendsLibrary.AcceptFriendRequest
struct UFriendsLibrary_AcceptFriendRequest_Params
{
public:
	class FString                                Username;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.GameLiftClientUtils.SetLastPotentialMatchCreatedTime
struct UGameLiftClientUtils_SetLastPotentialMatchCreatedTime_Params
{
public:
	class FString                                Time;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.GameLiftClientUtils.SetLastMatchmakingSearchingTime
struct UGameLiftClientUtils_SetLastMatchmakingSearchingTime_Params
{
public:
	class FString                                Time;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AimGods.GameLiftClientUtils.NewLastPotentialMatchCreatedTimeIsGreater
struct UGameLiftClientUtils_NewLastPotentialMatchCreatedTimeIsGreater_Params
{
public:
	class FString                                Time;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B97[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function AimGods.GameLiftClientUtils.NewLastMatchmakingSearchingTimeIsGreater
struct UGameLiftClientUtils_NewLastMatchmakingSearchingTimeIsGreater_Params
{
public:
	class FString                                Time;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B99[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AimGods.GameLiftClientUtils.GetResponseTime
struct UGameLiftClientUtils_GetResponseTime_Params
{
public:
	class FString                                Region;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.GameLiftClientUtils.AcceptMatch
struct UGameLiftClientUtils_AcceptMatch_Params
{
public:
	class FString                                AcceptanceType;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AimGods.WebSocketManager.UpdateInMatchStatus
struct UWebSocketManager_UpdateInMatchStatus_Params
{
public:
	bool                                         bIsInMatch;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.WebSocketManager.SendMessageToWebSocketApi
struct UWebSocketManager_SendMessageToWebSocketApi_Params
{
public:
	class FString                                Message;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.WebSocketManager.SendLatencyUpdate
struct UWebSocketManager_SendLatencyUpdate_Params
{
public:
	TArray<struct FRegionLatency>                RegionLatencies;                                   // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AimGods.WebSocketManager.SendChatMessage
struct UWebSocketManager_SendChatMessage_Params
{
public:
	class FString                                ToUserId;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MessageText;                                       // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AimGods.WebSocketManager.OnWebSocketConnectionClosed
struct UWebSocketManager_OnWebSocketConnectionClosed_Params
{
public:
	int32                                        StatusCode;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BBB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Reason;                                            // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasClean;                                         // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BBC[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AimGods.WebSocketManager.OnReceivedWebSocketApiMessage
struct UWebSocketManager_OnReceivedWebSocketApiMessage_Params
{
public:
	class FString                                Message;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimGods.WebSocketManager.OnConnectToWebSocketApiError
struct UWebSocketManager_OnConnectToWebSocketApiError_Params
{
public:
	class FString                                Error;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


