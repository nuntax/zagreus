#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x1340 - 0x12E8)
// Class AimGods.AGAbilitySystemComponent
class UAGAbilitySystemComponent : public UAbilitySystemComponent
{
public:
	UMulticastInlineDelegateProperty_            OnAGGameplayEffectAdded;                           // 0x12E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnAGGameplayEffectRemoved;                         // 0x12F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnAGGameplayAbilityAdded;                          // 0x1308(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnLocalAbilityInputPressed;                        // 0x1318(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_821[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastInlineDelegateProperty_            ReceivedDamage;                                    // 0x1330(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAGAbilitySystemComponent* GetDefaultObj();

	void RemoveActiveEffectsByAssetTags(const struct FGameplayTagContainer& GameplayCueTag);
	void OnActiveGameplayEffectRemoved(struct FActiveGameplayEffect& RemovedEffect);
	void OnActiveGameplayEffectAddedToSelf(class UAbilitySystemComponent* AbilitySystemComponent, struct FGameplayEffectSpec& EffectSpec, const struct FActiveGameplayEffectHandle& EffectHandle);
	class FString GetActionNamePairedWithAbilityTag(const struct FGameplayTag& AbilityTag);
	void CancelAbility(const struct FGameplayTag& AbilityTag);
	void BP_RemoveLooseGameplayTag(const struct FGameplayTag& GameplayCueTag, int32 Amount);
	void BP_RemoveGameplayCue(const struct FGameplayTag& GameplayCueTag);
	void BP_RemoveAllGameplayCues();
	float BP_GetGameplayEffectRemainingDuration(const struct FActiveGameplayEffectHandle& Handle);
	struct FGameplayTagContainer BP_GetBlockedAbilityTags();
	struct FGameplayAbilitySpec BP_FindAbilitySpecFromClass(TSubclassOf<class UGameplayAbility> InAbilityClass);
	void BP_ExecuteGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& EffectParameters);
	void BP_AddGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& EffectParameters);
};

// 0x48 (0x440 - 0x3F8)
// Class AimGods.AGAggroSphereComponent
class UAGAggroSphereComponent : public USphereComponent
{
public:
	UMulticastInlineDelegateProperty_            OnEnemyEnterAggroSphere;                           // 0x3F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnEnemyLeftAggroSphere;                            // 0x408(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        AggroActors;                                       // 0x418(0x10)(Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class AActor>>            AggroFilter;                                       // 0x428(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class AActor*                                BestTarget;                                        // 0x438(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAGAggroSphereComponent* GetDefaultObj();

	TArray<class AActor*> GetAggroActors();
	void ActorLeftAggroRadius(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ActorEnteredAggroRadius(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void ActorDiedInAggroRadius(class AActor* KilledActor, class AController* Killer);
};

// 0xF0 (0x718 - 0x628)
// Class AimGods.AGCharacterBase
class AAGCharacterBase : public ACharacter
{
public:
	uint8                                        Pad_836[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAGTeamComponent*                      TeamComponent;                                     // 0x640(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAGHealthComponent*                    HealthComp;                                        // 0x648(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAGAttributes*                         Attributes;                                        // 0x650(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAGAbilitySystemComponent*             AbilitySystemComponent;                            // 0x658(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_837[0x40];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UAGDamageTextWidgetComponent> DamageNumberClass;                                 // 0x6A0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_838[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RewardedMoneyToKiller;                             // 0x6C0(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCanMove;                                          // 0x6C4(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_839[0x13];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AAGTowerBase*                          CurrentTower;                                      // 0x6D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffect>>   DefaultAttributeEffects;                           // 0x6E0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UAGGameplayAbility>> DefaultCharacterAbilities;                         // 0x6F0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	class UAGAggroSphereComponent*               CurrentAggroSphere;                                // 0x700(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       DamageTextSpawn;                                   // 0x708(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSheeped;                                          // 0x710(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AAGCharacterBase* GetDefaultObj();

	void SetCanMove(bool CanMove);
	void Server_ShowDamageNumberOnSpectators(class AAGCharacterBase* DamagedCharacter, const struct FAGDamageNumber& DamageNumber);
	bool IsDead();
	bool IsAlive();
	float GetMoveSpeed();
};

// 0xB8 (0x7D0 - 0x718)
// Class AimGods.AGAICharacter
class AAGAICharacter : public AAGCharacterBase
{
public:
	class UStaticMeshComponent*                  BallMesh;                                          // 0x718(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGAggroSphereComponent*               AggroSphere;                                       // 0x720(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPawnSensingComponent*                 PawnSensingComp;                                   // 0x728(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  TargetShieldMesh;                                  // 0x730(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BouncesPerSecond;                                  // 0x738(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeBetweenShots;                                  // 0x73C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProjectileDamage;                                  // 0x740(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NavMoveSpeed;                                      // 0x744(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttackingMoveSpeed;                                // 0x748(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         TargetsToSpawn;                                    // 0x74C(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TargetShieldRadius;                                // 0x750(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class AAGMinionTarget>           TargetClass;                                       // 0x758(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AAGProjectile>             ProjectileClass;                                   // 0x760(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGameplayEffect>           WeaponDamageEffect;                                // 0x768(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<class AAGMinionTarget*>                 Targets;                                           // 0x770(0x50)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	class AActor*                                Killer;                                            // 0x7C0(0x8)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_840[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AAGAICharacter* GetDefaultObj();

	void ShootTarget(class AActor* Target);
	void OnRep_Killer();
	void EnemyLeftAggroRadius(class AActor* EnemyActor);
	void EnemyEnteredAggroRadius(class AActor* EnemyActor);
	void BPHandleDeath(class AActor* KillerActor);
	void ActivateShieldFX(bool bEnableFX);
};

// 0x38 (0x358 - 0x320)
// Class AimGods.AGAIController
class AAGAIController : public AAIController
{
public:
	class UAGTeamComponent*                      TeamComponent;                                     // 0x320(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBehaviorTree*                         BehaviorTree;                                      // 0x328(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  BlackboardKey_TargetActor;                         // 0x330(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  BlackboardKey_DestinationActor;                    // 0x338(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  BlackboardKey_BeginAttackLocation;                 // 0x340(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  BlackboardKey_IsOddBounce;                         // 0x348(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AAGAICharacter*                        AICharacter;                                       // 0x350(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AAGAIController* GetDefaultObj();

	class AAGTowerBase* GetTowerToAttack();
	void FindTarget();
	void EnemyLeftAggroRadius(class AActor* EnemyActor);
	void EnemyEnteredAggroRadius(class AActor* EnemADetourCrowdAIControlleryActor);
};

// 0x0 (0x58 - 0x58)
// Class AimGods.AGAnimNotify_PlayLocalSound
class UAGAnimNotify_PlayLocalSound : public UAnimNotify_PlaySound
{
public:

	static class UClass* StaticClass();
	static class UAGAnimNotify_PlayLocalSound* GetDefaultObj();

};

// 0x0 (0x80 - 0x80)
// Class AimGods.AGAT_WaitTargetDataUsingActor
class UAGAT_WaitTargetDataUsingActor : public UAbilityTask
{
public:

	static class UClass* StaticClass();
	static class UAGAT_WaitTargetDataUsingActor* GetDefaultObj();

};

// 0xC0 (0xF0 - 0x30)
// Class AimGods.AGAttributes
class UAGAttributes : public UAttributeSet
{
public:
	struct FGameplayAttributeData                DelayBetweenShots;                                 // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                LifeSteal;                                         // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                MoveSpeed;                                         // 0x50(0x10)(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                AttackPower;                                       // 0x60(0x10)(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                HeadshotDamageMultiplier;                          // 0x70(0x10)(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                Health;                                            // 0x80(0x10)(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                MaxHealth;                                         // 0x90(0x10)(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                HealthRegeneration;                                // 0xA0(0x10)(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                Defense;                                           // 0xB0(0x10)(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                HeadshotDefense;                                   // 0xC0(0x10)(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                IncomingHealMultiplier;                            // 0xD0(0x10)(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                Damage;                                            // 0xE0(0x10)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAGAttributes* GetDefaultObj();

	void OnRep_MoveSpeed(struct FGameplayAttributeData& OldMoveSpeed);
	void OnRep_MaxHealth(struct FGameplayAttributeData& OldMaxHealth);
	void OnRep_Lifesteal(struct FGameplayAttributeData& OldLifesteal);
	void OnRep_IncomingHealMultiplier(struct FGameplayAttributeData& OldIncomingHealMultiplier);
	void OnRep_HealthRegeneration(struct FGameplayAttributeData& OldHealthRegeneration);
	void OnRep_Health(struct FGameplayAttributeData& OldHealth);
	void OnRep_HeadshotDefense(struct FGameplayAttributeData& OldHeadshotDefense);
	void OnRep_HeadshotDamageMultiplier(struct FGameplayAttributeData& OldHeadshotDamageMultiplier);
	void OnRep_DelayBetweenShots(struct FGameplayAttributeData& OldDelayBetweenShots);
	void OnRep_Defense(struct FGameplayAttributeData& OldDefense);
	void OnRep_AttackPower(struct FGameplayAttributeData& OldAttackPower);
};

// 0x0 (0x30 - 0x30)
// Class AimGods.AGAttributeSetBase
class UAGAttributeSetBase : public UAttributeSet
{
public:

	static class UClass* StaticClass();
	static class UAGAttributeSetBase* GetDefaultObj();

};

// 0x30 (0x60 - 0x30)
// Class AimGods.AGAttributeSetPlayer
class UAGAttributeSetPlayer : public UAttributeSet
{
public:
	struct FGameplayAttributeData                Gold;                                              // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                TimeBetweenShots;                                  // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                HeadshotDamageMultiplier;                          // 0x50(0x10)(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAGAttributeSetPlayer* GetDefaultObj();

	void OnRep_TimeBetweenShots(struct FGameplayAttributeData& OldTimeBetweenShots);
	void OnRep_HeadshotDamageMultiplier(struct FGameplayAttributeData& OldHeadshotDamageMultiplier);
	void OnRep_Gold(struct FGameplayAttributeData& OldGold);
};

// 0x88 (0xB8 - 0x30)
// Class AimGods.AGAuthSubsystem
class UAGAuthSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_867[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastInlineDelegateProperty_            OnLogin;                                           // 0x48(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnGetUserInfo;                                     // 0x58(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnPlayerAlreadyLoggedIn;                           // 0x68(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_868[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AutoTokenRefreshTime;                              // 0x80(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_869[0x34];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAGAuthSubsystem* GetDefaultObj();

	void Login(const class FString& Username, const class FString& Password);
	void GetUserInfo();
	void ForceLogin(const class FString& Username, const class FString& Password);
	void AutoRefreshToken();
};

// 0x8 (0x220 - 0x218)
// Class AimGods.AGBaseLocation
class AAGBaseLocation : public ATargetPoint
{
public:
	class UAGTeamComponent*                      TeamComp;                                          // 0x218(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AAGBaseLocation* GetDefaultObj();

};

// 0x168 (0x880 - 0x718)
// Class AimGods.AGCharacter
class AAGCharacter : public AAGCharacterBase
{
public:
	uint8                                        Pad_89A[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAGAttributeSetPlayer*                 PlayerAttributeSet;                                // 0x728(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_89B[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastInlineDelegateProperty_            OnASCInitialized;                                  // 0x738(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	class USpringArmComponent*                   SpringArmComponent;                                // 0x748(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCameraComponent*                      CameraComponent;                                   // 0x750(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USkeletalMeshComponent*                Mesh1PComponent;                                   // 0x758(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USkeletalMeshComponent*                WeaponMesh1P;                                      // 0x760(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USkeletalMeshComponent*                WeaponMesh3P;                                      // 0x768(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HighAccuracyRemoteViewPitch;                       // 0x770(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DefaultFOV;                                        // 0x774(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AAGWeapon*                             CurrentWeapon;                                     // 0x778(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCameraShake>              FireCameraShake;                                   // 0x780(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UAnimMontage*>                  FireMontages1P;                                    // 0x788(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UAnimMontage*                          FireMontage1POverride;                             // 0x798(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimMontage*                          FireMontage1P;                                     // 0x7A0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimMontage*                          FireMontage3P;                                     // 0x7A8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class AAGWeapon>                 StarterWeaponClass;                                // 0x7B0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_89E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bReloading;                                        // 0x7BC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsWalking;                                        // 0x7BD(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsTeamChat;                                       // 0x7BE(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsChatOpen;                                       // 0x7BF(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bWasSheep;                                         // 0x7C0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8A1[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WalkSpeedModifier;                                 // 0x7D0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DefaultMoveSpeed;                                  // 0x7D4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RagdollImpulseStrength;                            // 0x7D8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCrouching;                                        // 0x7DC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8A3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeBetweenShots;                                  // 0x7E0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          TimeBetweenShotsTimer;                             // 0x7E8(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A6[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          ReloadMontage1P;                                   // 0x7F8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          ReloadMontage3P;                                   // 0x800(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A8[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReloadTime;                                        // 0x810(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AA[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ShowHitOverlayTime;                                // 0x820(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RegenRate;                                         // 0x824(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AC[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDeathInfo                            DeathInfo;                                         // 0x830(0x18)(Net, RepNotify, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B0[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        SpawnedTraps;                                      // 0x858(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FVector                               ImpactPoint;                                       // 0x868(0xC)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShotPlayerWhilstInAggroSphere;                    // 0x874(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TowerDamageMultipler;                              // 0x878(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsVanished;                                       // 0x87C(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8B7[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AAGCharacter* GetDefaultObj();

	void StunTagChanged(const struct FGameplayTag& CallbackTag, int32 NewCount);
	void SpawnWeapon();
	void ShowHitIndicator(struct FVector& DamagerLocation);
	void SetupPlayerCard();
	void SetLastImpact(const struct FVector& Point);
	void ServerReload();
	void ServerGrantLoadoutAbilities(TArray<struct FLoadoutAbility>& LoadoutAbilities);
	void ServerEndWalk();
	void ServerBeginWalk();
	void Play3PReloadEffects();
	void OnRep_DeathInfo();
	void OnRep_bIsDead();
	void OnDeath(class AActor* KilledActor, class AController* KillerController);
	void HandleLocalDeath();
	bool Fire();
	void EndCrouch();
	void CheatOpenShop();
	void CheatGold(int32 Gold);
	void BPUpdateKillFeed(class AAGPlayerState* KillerPC, class AAGCharacter* DeadActor);
	void BPShowHitIndicator(struct FVector& DamagerLocation);
	void BPShowGameplayUI(class AAGPlayerController* NewController);
	void BPShowDamageDirection(class AActor* DamageCauser);
	void BPSendInfoToKillFeed(class AController* KillerPC, class AAGCharacter* DeadActor);
	void BPOnDeath(class AAGPlayerState* Killer);
};

// 0x50 (0x720 - 0x6D0)
// Class AimGods.AGCharacterMovementComponent
class UAGCharacterMovementComponent : public UCharacterMovementComponent
{
public:
	float                                        SlowWalkSpeedMultiplier;                           // 0x6D0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bWantsToSlowWalk;                                  // 0x6D4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8CB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CrouchSpeedMultiplier;                             // 0x6D8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8CC[0x44];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAGCharacterMovementComponent* GetDefaultObj();

	void SetSlowWalking(bool bSlowWalk);
};

// 0x78 (0xA8 - 0x30)
// Class AimGods.AGChatSubsystem
class UAGChatSubsystem : public UGameInstanceSubsystem
{
public:
	class UAwsHttpRequestLibrary*                HttpRequestLibrary;                                // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAGGameInstance*                       MyGameInstance;                                    // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                ChatApiBaseUrl;                                    // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldFilterProfanity;                            // 0x50(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8D8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FChatConversation>             AllChatConversations;                              // 0x58(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnChatError;                                       // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnSendChatMessage;                                 // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnReceiveChatMessage;                              // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnShowChatBox;                                     // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAGChatSubsystem* GetDefaultObj();

	void ShowChatBox(const class FString& OtherPlayerId, const class FString& OtherPlayerUsername);
	void SendChatMessage(const class FString& ToUserId, const class FString& MessageText);
	void GetChatConversationsFromServer();
	struct FChatConversation GetChatConversationById(const class FString& ChatConversationId);
	struct FChatMessage CreateChatMessage(const class FString& FromUserId, const class FString& FromUsername, int64& MessageTimeStamp, const class FString& MessageText);
};

// 0x8 (0x80 - 0x78)
// Class AimGods.AGCheatManager
class UAGCheatManager : public UCheatManager
{
public:
	class APlayerController*                     PlayerController;                                  // 0x78(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAGCheatManager* GetDefaultObj();

	void Cheat_OpenShop();
	void Cheat_Gold(int32 Gold);
};

// 0x240 (0x540 - 0x300)
// Class AimGods.AGGameMode
class AAGGameMode : public AGameMode
{
public:
	enum class EGameModeType                     GameModeType;                                      // 0x300(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameModeName                     GameModeName;                                      // 0x301(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8EC[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AAGPlayerSpawn*>                PossibleSpawnsRed;                                 // 0x308(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class AAGPlayerSpawn*>                PossibleSpawnsBlue;                                // 0x318(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class AAGPlayerSpawn*>                RedPlayerSpawns;                                   // 0x328(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class AAGPlayerSpawn*>                BluePlayerSpawns;                                  // 0x338(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class AAGMinionPlayerStart*>          RedMinionSpawns;                                   // 0x348(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class AAGMinionPlayerStart*>          BlueMinionSpawns;                                  // 0x358(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	float                                        MinSpawnEnemyDistance;                             // 0x368(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8EE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class AAGCharacter>              RedTeamCharacterClass;                             // 0x370(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class AAGCharacter>              BlueTeamCharacterClass;                            // 0x378(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class AAGPlayerSpawn>            PlayerSpawnClass;                                  // 0x380(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                GameSessionId;                                     // 0x388(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        KillerGoldReward;                                  // 0x398(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NonKillerGoldReward;                               // 0x39C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8F0[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastInlineDelegateProperty_            OnPlayerRageQuit;                                  // 0x3A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	bool                                         bGameOver;                                         // 0x3B8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8F1[0x1F];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStartGameSessionState                StartGameSessionState;                             // 0x3D8(0x88)(NativeAccessSpecifierPrivate)
	struct FProcessTerminateState                ProcessTerminateState;                             // 0x460(0x18)(NativeAccessSpecifierPrivate)
	struct FHealthCheckState                     HealthCheckState;                                  // 0x478(0x18)(NativeAccessSpecifierPrivate)
	class FString                                ServerPassword;                                    // 0x490(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CheckIfGameSessionActivatedInterval;               // 0x4A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CheckIfPlayersJoinedInterval;                      // 0x4A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         PlayerSessionsReserved;                            // 0x4A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8F3[0x1F];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeGameSessionActivated;                          // 0x4C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NumPlayersRequested;                               // 0x4CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TimeGameStarted;                                   // 0x4D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8F5[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PrematchTime;                                      // 0x4E0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8F6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class AAGGhost>                  GhostClass;                                        // 0x4E8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RespawnMultiplierInterval;                         // 0x4F0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BaseRespawnTime;                                   // 0x4F4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8F8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RespawnTimeMultiplierCap;                          // 0x4FC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FRespawnTimerMultiplier>       RespawnMultipliers;                                // 0x500(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_8F9[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class AAGAICharacter>            BlueTeamMinionClass;                               // 0x518(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class AAGAICharacter>            RedTeamMinionClass;                                // 0x520(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSpawnDebugWave;                                   // 0x528(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAutoWin;                                          // 0x529(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8FA[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AutoWinTime;                                       // 0x52C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MinionsPerWave;                                    // 0x530(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinionWaveInterval;                                // 0x534(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8FD[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AAGGameMode* GetDefaultObj();

	void TerminateGame();
	void SpawnMinions();
	void ResetSpawns();
	void QuitIfNotInEditor();
	void QueueEndGame(bool bGameEndedEarly, bool bServerShutdownEarly);
	void OnServerToBeTerminated();
	void OnServerHealthCheck();
	void Logout(class AController* Exiting);
	void KickAllPlayers();
	void InitPlayerSpawns();
	void HandleRageQuit(class AController* Exiting);
	void HandleDisconnectDuringMatchLoad(class AAGCharacter* Character);
	TArray<class AAGMinionPlayerStart*> GetMinionPlayerStarts(bool bIsRedTeam);
	void EndGameQueueExpired();
	void EndGame(bool bRedTeamWon);
	void CheckIfPlayersJoined();
	void CheckIfGameSessionActivated();
	void AutoWin();
	void ApplyRespawnMultipliers();
	void AddToDamageTaken(class AActor* DamagedActor, float DamageDone);
	void AddToDamageDone(class AAGPlayerState* InPlayerState, float DamageDone);
};

// 0x0 (0x540 - 0x540)
// Class AimGods.AGCustomGameMode
class AAGCustomGameMode : public AAGGameMode
{
public:

	static class UClass* StaticClass();
	static class AAGCustomGameMode* GetDefaultObj();

};

// 0x1D8 (0x208 - 0x30)
// Class AimGods.AGCustomGameSubsystem
class UAGCustomGameSubsystem : public UGameInstanceSubsystem
{
public:
	class UAwsHttpRequestLibrary*                HttpRequestLibrary;                                // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_913[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCustomGame                           CurrentCustomGame;                                 // 0x40(0x58)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FIncomingCustomGameInvite>     IncomingCustomGameInvites;                         // 0x98(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                CustomGameApiBaseUrl;                              // 0xA8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FlexMatchApiBaseUrl;                               // 0xB8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnCustomGameError;                                 // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnGetCurrentGame;                                  // 0xD8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnCreateCustomGame;                                // 0xE8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnStartCustomLobbyGameSessionPlacement;            // 0xF8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnDescribeGameSessionPlacement;                    // 0x108(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnLeave;                                           // 0x118(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnSendInvite;                                      // 0x128(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnAcceptInvite;                                    // 0x138(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnGetIncomingInvites;                              // 0x148(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnCustomGameInviteReceivedWs;                      // 0x158(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnCustomGameDisbandedWs;                           // 0x168(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnCustomGameInviteCancelledWs;                     // 0x178(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnPlayerLeftCustomGameWs;                          // 0x188(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnPlayerReadyStateChangedWs;                       // 0x198(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnPlayerKickedWs;                                  // 0x1A8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnPlayerJoinedCustomGameWs;                        // 0x1B8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnPlayerChangedTeamWs;                             // 0x1C8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnCustomGamePlacementStartedWs;                    // 0x1D8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnCustomGamePlacementCanceledWs;                   // 0x1E8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnCustomGamePlacementFulfilledWs;                  // 0x1F8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAGCustomGameSubsystem* GetDefaultObj();

	void StartCustomLobbyGameSessionPlacement();
	void SetPlayerIsReady(bool bIsReady);
	void SendCustomGameInvite(const class FString& PlayerId);
	void LeaveCurrentGame();
	void KickPlayer(const class FString& PlayerId);
	bool GetIsReady();
	bool GetIsLeader();
	void GetIncomingInvites();
	void GetCurrentGame();
	void DescribeGameSessionPlacement();
	void CreateCustomGame();
	void ChangeTeam(enum class EFCustomGameTeam NewTeam);
	void CancelOutgoingInvite(const class FString& InviteId);
	void CancelInvite(const class FString& InviteId);
	void CancelIncomingInvite(const class FString& InviteId);
	bool AllPlayersReady();
	void AcceptInvite(const class FString& InviteId);
};

// 0x0 (0x40 - 0x40)
// Class AimGods.AGDamageExecutionCalc
class UAGDamageExecutionCalc : public UGameplayEffectExecutionCalculation
{
public:

	static class UClass* StaticClass();
	static class UAGDamageExecutionCalc* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AimGods.AGDamageTextInterface
class IAGDamageTextInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IAGDamageTextInterface* GetDefaultObj();

};

// 0x0 (0x520 - 0x520)
// Class AimGods.AGDamageTextWidgetComponent
class UAGDamageTextWidgetComponent : public UWidgetComponent
{
public:

	static class UClass* StaticClass();
	static class UAGDamageTextWidgetComponent* GetDefaultObj();

	void SetDamageText(float Damage, enum class EDamageTextType DamageTextType, int32 GoldAmount, class UTexture2D* DebuffIcon);
	void AddDebuffIcon(class UImage* DebuffImage);
};

// 0x0 (0x40 - 0x40)
// Class AimGods.AGDTDefault
class UAGDTDefault : public UDamageType
{
public:

	static class UClass* StaticClass();
	static class UAGDTDefault* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class AimGods.AGDTTower
class UAGDTTower : public UDamageType
{
public:

	static class UClass* StaticClass();
	static class UAGDTTower* GetDefaultObj();

};

// 0xE8 (0x250 - 0x168)
// Class AimGods.AGGameInstance
class UAGGameInstance : public UGameInstance
{
public:
	enum class EGameEnvironment                  CurrentEnvironment;                                // 0x168(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_958[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWebSocketManager*                     Socket;                                            // 0x170(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFriendsLibrary*                       Friends;                                           // 0x178(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAwsHttpRequestLibrary*                AwsHttpRequestLibrary;                             // 0x180(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGPartySubsystem*                     PartySubsystem;                                    // 0x188(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGAuthSubsystem*                      AuthSubsystem;                                     // 0x190(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGStatsSubsystem*                     StatsSubSystem;                                    // 0x198(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGGameliftSubsystem*                  GameliftSubsystem;                                 // 0x1A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGChatSubsystem*                      ChatSubsystem;                                     // 0x1A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGCustomGameSubsystem*                CustomGameSubsystem;                               // 0x1B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGNewsFeedSubsystem*                  CustomNewsFeedSubsystem;                           // 0x1B8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGSaveGame*                           SaveGameInstance;                                  // 0x1C0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Username;                                          // 0x1C8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserId;                                            // 0x1D8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnDowntimeNotification;                            // 0x1E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bForceExit;                                        // 0x1F8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_95F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCrosshairParams                      CrosshairParams;                                   // 0x1FC(0x24)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FLoadoutAbility>               LoadoutAbilities;                                  // 0x220(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UDataTable*                            AbilityTable;                                      // 0x230(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnLoadoutAbilityChanged;                           // 0x238(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_962[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAGGameInstance* GetDefaultObj();

	bool SwapAbilities(enum class EAGAbilityInputID SlotA, enum class EAGAbilityInputID SlotB, bool bSaveToDisk);
	void SetUserInfo(const class FString& InUsername, const class FString& InUserId);
	bool SetAbility(enum class EAGAbilityInputID Slot, TSubclassOf<class UAGGameplayAbility> Ability, bool bSaveToDisk);
	void SaveGame();
	void LoadGame();
	void HandleDowntimeNotification(const class FString& Message, bool bHasStarted);
	void ExitGame();
	void BPRemoveSettingsMenu();
};

// 0x1A8 (0x1D8 - 0x30)
// Class AimGods.AGGameliftSubsystem
class UAGGameliftSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_971[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAwsHttpRequestLibrary*                AwsHttpRequestLibrary;                             // 0x50(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFlexmatchTicket                      FmTicket;                                          // 0x58(0x30)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	enum class EMatchmakingStatus                MatchmakingStatus;                                 // 0x88(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_972[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AcceptanceTimeout;                                 // 0x8C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_973[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameliftMatch                        CurrentMatch;                                      // 0xC0(0x80)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnAcceptMatch;                                     // 0x140(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnCancelMatchmaking;                               // 0x150(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnGetMatchmakingTicket;                            // 0x160(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnStartMatchmaking;                                // 0x170(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnMatchmakingStatusChanged;                        // 0x180(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_975[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        SupportedRegions;                                  // 0x1A0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FRegionLatency>                RegionLatencies;                                   // 0x1B0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        TimeBetweenLatencyChecks;                          // 0x1C0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_979[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastInlineDelegateProperty_            OnLatencyCheckComplete;                            // 0x1C8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAGGameliftSubsystem* GetDefaultObj();

	void UpdatePlayersInMatchStatus(const class FString& PlayerId, bool& bPlayerIsInMatch);
	void StartMatchmaking();
	void StartCustomGame();
	void ResetMatchmaking();
	void JoinMatch();
	void GetMatchmakingTicket();
	void CancelMatchmaking();
	void AcceptMatch(bool bDidAccept);
};

// 0x28 (0x2E0 - 0x2B8)
// Class AimGods.AGGameModeTest
class AAGGameModeTest : public AGameModeBase
{
public:
	TSubclassOf<class AActor>                    SpectatingViewpointClass;                          // 0x2B8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_97F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastInlineDelegateProperty_            OnActorKilled;                                     // 0x2C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_980[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AAGGameModeTest* GetDefaultObj();

	void RespondToOnActorKilled(class AActor* VictimActor, class AActor* KillerActor, class AController* KillerController);
	void OnGameOver(class AActor* InstigatorPawn, bool bWonGame);
};

// 0xB0 (0x4B0 - 0x400)
// Class AimGods.AGGameplayAbility
class UAGGameplayAbility : public UGameplayAbility
{
public:
	enum class EAGAbilityInputID                 AbilityInputID;                                    // 0x400(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_983[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        GoldCost;                                          // 0x404(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  AbilityDisplayName;                                // 0x408(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  AbilityDescription;                                // 0x420(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UTexture2D*                            AbilityIcon;                                       // 0x438(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGameplayEffect>           PassiveEffect;                                     // 0x440(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ActivateAbilityOnGranted;                          // 0x448(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_984[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        CooldownDuration;                                  // 0x450(0x20)(BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 CooldownTags;                                      // 0x470(0x20)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 TempCooldownTags;                                  // 0x490(0x20)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAGGameplayAbility* GetDefaultObj();

	struct FGameplayTagContainer GetActivationBlockedTags();
};

// 0x30 (0x2B8 - 0x288)
// Class AimGods.AGGameplayCueNotify_Actor
class AAGGameplayCueNotify_Actor : public AGameplayCueNotify_Actor
{
public:
	TArray<struct FParticleAttachInfo>           ParticleSystemsToAttach;                           // 0x288(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	uint8                                        Pad_986[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AAGGameplayCueNotify_Actor* GetDefaultObj();

	int32 GetNumberOfSameActiveGameplayCues();
};

// 0x18 (0x788 - 0x770)
// Class AimGods.AGGameplayEffect
class UAGGameplayEffect : public UGameplayEffect
{
public:
	TSubclassOf<class UAGGameplayAbility>        ParentAbility;                                     // 0x770(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEffectType                       EffectType;                                        // 0x778(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_98A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            EffectIcon;                                        // 0x780(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAGGameplayEffect* GetDefaultObj();

};

// 0xD0 (0x348 - 0x278)
// Class AimGods.AGGameState
class AAGGameState : public AGameState
{
public:
	TArray<class APlayerController*>             PlayersReadyToSpawn;                               // 0x278(0x10)(Net, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        RedTeamPoints;                                     // 0x288(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BlueTeamPoints;                                    // 0x28C(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PointsToWin;                                       // 0x290(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GameLengthInSeconds;                               // 0x294(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                          TimeToSpawnHandle;                                 // 0x298(0x8)(Net, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                          TimeLimitHandle;                                   // 0x2A0(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                          TimerHandle_IncrementMatchTimer;                   // 0x2A8(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MatchTimeSeconds;                                  // 0x2B0(0x4)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PrematchTimeRemaining;                             // 0x2B4(0x4)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeToSpawn;                                       // 0x2B8(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPostMatch;                                      // 0x2BC(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRedTeamWon;                                       // 0x2BD(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_99E[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AAGPlayerController*>           CurrentlyConnectedPlayers;                         // 0x2C0(0x10)(BlueprintVisible, Net, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMatchPlayer>                  AllMatchPlayers;                                   // 0x2D0(0x10)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnEndGameStatsReceived_Delegate;                   // 0x2E0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnPreMatchBegin;                                   // 0x2F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnPostMatchBegin;                                  // 0x300(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnTowerDestroyed;                                  // 0x310(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class AAGTowerBase*>                  Towers;                                            // 0x320(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIsInCustomGame;                                   // 0x330(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9A3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AAGBaseLocation*                       RedBaseLocation;                                   // 0x338(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AAGBaseLocation*                       BlueBaseLocation;                                  // 0x340(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AAGGameState* GetDefaultObj();

	void OnRep_PrematchTimeRemaining();
	void OnRep_MatchTimeSeconds();
	void OnRep_bIsPostMatch();
	void OnEndGameStatsReceived(bool Success, struct FStatsError& StatError, TArray<struct FGameStatsPayload>& EndGameStats);
	void OnCustomGameEnded();
	void IncrementMatchTimer();
	TArray<class AAGPlayerController*> GetTeam(bool bRedTeam);
	struct FVector GetBaseLocation(bool bIsRedTeam);
	void EndGame();
	void CheckElapsedTime();
	void AddTeamPoints(bool bOnBlueTeam, int32 AwardedPoints);
	void AddPlayerToReadyList(class APlayerController* ReadyPC);
};

// 0x8 (0x2F0 - 0x2E8)
// Class AimGods.AGGameViewportClient
class UAGGameViewportClient : public UGameViewportClient
{
public:
	uint8                                        Pad_9B0[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAGGameViewportClient* GetDefaultObj();

};

// 0x28 (0x650 - 0x628)
// Class AimGods.AGGhost
class AAGGhost : public ACharacter
{
public:
	bool                                         bIsFreeMode;                                       // 0x628(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_9BB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USpringArmComponent*                   SpringArmComp;                                     // 0x630(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCameraComponent*                      CameraComp;                                        // 0x638(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AAGCharacter*                          Teammate;                                          // 0x640(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_9BC[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AAGGhost* GetDefaultObj();

	void Server_SendGhostPCToTeammate();
	void Server_RemoveGhostPCFromTeammate();
	void BPOnSpectateModeChanged(bool bFreeMode);
};

// 0x40 (0xF0 - 0xB0)
// Class AimGods.AGHealthComponent
class UAGHealthComponent : public UActorComponent
{
public:
	UMulticastInlineDelegateProperty_            OnDeath;                                           // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnHealthModified;                                  // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class USceneComponent*                       AttackVisualComponent;                             // 0xD0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HP;                                                // 0xD8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxHP;                                             // 0xDC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                LastDamageCauser;                                  // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AController*                           LastInstigator;                                    // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAGHealthComponent* GetDefaultObj();

	void OnRep_HP(float OldHP);
};

// 0x10 (0x258 - 0x248)
// Class AimGods.AGMinionPlayerStart
class AAGMinionPlayerStart : public APlayerStart
{
public:
	class UAGTeamComponent*                      TeamComponent;                                     // 0x248(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTestingSpawn;                                     // 0x250(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9C3[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AAGMinionPlayerStart* GetDefaultObj();

};

// 0x18 (0x230 - 0x218)
// Class AimGods.AGMinionTarget
class AAGMinionTarget : public AActor
{
public:
	class USphereComponent*                      TargetCollision;                                   // 0x218(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  TargetMesh;                                        // 0x220(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGTeamComponent*                      TeamComponent;                                     // 0x228(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AAGMinionTarget* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class AimGods.AGMMC_AbilityCooldown
class UAGMMC_AbilityCooldown : public UGameplayModMagnitudeCalculation
{
public:

	static class UClass* StaticClass();
	static class UAGMMC_AbilityCooldown* GetDefaultObj();

};

// 0x28 (0x58 - 0x30)
// Class AimGods.AGNewsFeedSubsystem
class UAGNewsFeedSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_9D0[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastInlineDelegateProperty_            OnNewsFeedForCurrentPlayer;                        // 0x48(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAGNewsFeedSubsystem* GetDefaultObj();

	void GetNewsFeedForCurrentPlayer();
	void CreateNewsFeedTest();
};

// 0x138 (0x168 - 0x30)
// Class AimGods.AGPartySubsystem
class UAGPartySubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_9F8[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCurrentParty                         CurrentParty;                                      // 0x38(0x40)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnSendPartyInvite;                                 // 0x78(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnGetPartyInvites;                                 // 0x88(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnGetCurrentParty;                                 // 0x98(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnLeaveCurrentParty;                               // 0xA8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnCancelPartyInvite;                               // 0xB8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnAcceptPartyInvite;                               // 0xC8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_9F9[0x40];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastInlineDelegateProperty_            OnPartyInviteReceivedWs;                           // 0x118(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnIncomingPartyInviteCancelledWs;                  // 0x128(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnPartyDisbandedWs;                                // 0x138(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnOutgoingPartyInviteAcceptedWs;                   // 0x148(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnPartyMemberInMatchStatusChangedWs;               // 0x158(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAGPartySubsystem* GetDefaultObj();

	void SendPartyInvite(const class FString& PlayerId);
	void LeaveCurrentParty();
	bool IsPartyLeader();
	bool IsInParty();
	void GetPartyInvites();
	void GetCurrentParty();
	void CancelPartyInvite(const class FString& PartyInviteId);
	void AcceptPartyInvite(const class FString& PartyInviteId);
};

// 0x40 (0x5A8 - 0x568)
// Class AimGods.AGPlayerController
class AAGPlayerController : public APlayerController
{
public:
	class UAGTeamComponent*                      TeamComponent;                                     // 0x568(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReadyToSpawn;                                     // 0x570(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPlaying;                                        // 0x571(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1E[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MasterVolume;                                      // 0x574(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MusicVolume;                                       // 0x578(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CharacterVolume;                                   // 0x57C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AmbientVolume;                                     // 0x580(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeaponVolume;                                      // 0x584(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MouseSensitivity;                                  // 0x588(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowFps;                                          // 0x58C(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVerticalAxisInverted;                             // 0x58D(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHorizontalAxisInverted;                           // 0x58E(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A21[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeTillRespawn;                                   // 0x590(0x4)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          CrosshairColor;                                    // 0x594(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A22[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AAGPlayerController* GetDefaultObj();

	void SuicidePoints();
	void ShowRespawnScreen(float RespawnTimer);
	void ShowDamageNumber(class AAGCharacterBase* Avatar, const struct FAGDamageNumber& DamageNumber);
	void ServerSetIsPlaying(bool bCond);
	void ServerAddToReadyToSpawnList(class APlayerController* ReadyPC);
	void ReportPlayer(const class FString& PlayerToReport, const class FString& ReportCategory);
	void OnGameOver(class AActor* InstigatorPawn, bool bWonGame);
	void LoadSoundSettings();
	void LoadInputSettings();
	void KillPawn();
	void GetTimeLeft();
	void GetTime();
	class FText GetPlayerName();
	void ClientUpdateJoinInProgressTime(float Time);
	void ClientShowRespawnScreen(float RespawnTimer);
	void BPUpdateHealth();
	void BPShowDamageText(float DamageToDo, bool bWasHeadshot, bool bWasImmune);
	void BPKicked();
	void BPCloseWidgets();
	void BPCloseCharacterSelection();
	void AddDamageNumber(float DamageAmount, class AActor* TargetCharacter, enum class EDamageTextType DamageTextType, TArray<class UTexture2D*>& EffectIcons);
};

// 0x10 (0x258 - 0x248)
// Class AimGods.AGPlayerSpawn
class AAGPlayerSpawn : public APlayerStart
{
public:
	class UAGTeamComponent*                      TeamComponent;                                     // 0x248(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanBeUsed;                                        // 0x250(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNearEnemy;                                        // 0x251(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTestingSpawn;                                     // 0x252(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A27[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AAGPlayerSpawn* GetDefaultObj();

};

// 0x158 (0x498 - 0x340)
// Class AimGods.AGPlayerState
class AAGPlayerState : public APlayerState
{
public:
	uint8                                        Pad_A7F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAGTeamComponent*                      TeamComponent;                                     // 0x348(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGAbilitySystemComponent*             AbilitySystemComp;                                 // 0x350(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class EAGAbilityInputID, TSubclassOf<class UAGGameplayAbility>> PurchasedAbilities;                                // 0x358(0x50)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FLoadoutAbility>               ReplicatedPurchasedAbilities;                      // 0x3A8(0x10)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPublic)
	uint8                                        Pad_A81[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        KillingSpreeResetTime;                             // 0x3C8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A82[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastInlineDelegateProperty_            OnGoldChanged;                                     // 0x3D0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                ConnectedFleetId;                                  // 0x3E0(0x10)(Net, ZeroConstructor, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ConnectedGameSessionId;                            // 0x3F0(0x10)(Net, ZeroConstructor, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Gold;                                              // 0x400(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Kills;                                             // 0x404(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Deaths;                                            // 0x408(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A85[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        KillStreak;                                        // 0x40C(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayerScore;                                       // 0x410(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageDone;                                        // 0x414(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageTaken;                                       // 0x418(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HealingReceived;                                   // 0x41C(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        KillingSpree;                                      // 0x420(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentRank;                                       // 0x424(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewRank;                                           // 0x428(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentElo;                                        // 0x42C(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewElo;                                            // 0x430(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EloChangeAmount;                                   // 0x434(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TopPercentage;                                     // 0x438(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalGamesPlayed;                                  // 0x43C(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             LastDatePlayed;                                    // 0x440(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameStatsPayload>             EndGameStatsForAllPlayers;                         // 0x448(0x10)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        MyTeamCurrentElo;                                  // 0x458(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EnemyTeamCurrentElo;                               // 0x45C(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEndGameStatsLoaded;                               // 0x460(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCustomGameEndStatsLoaded;                         // 0x461(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A8D[0x16];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAGStatsSubsystem*                     StatsSubSystem;                                    // 0x478(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            JustNowAppliedDebuffGETexture;                     // 0x480(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A8E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAGAttributes*                         Attributes;                                        // 0x490(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AAGPlayerState* GetDefaultObj();

	bool TrySwapAbilities(enum class EAGAbilityInputID AbilityA, enum class EAGAbilityInputID AbilityB);
	bool TryBuyAbility(TSubclassOf<class UAGGameplayAbility> AbilityToBuy);
	void Suicide();
	void ServerTrySwapAbilities(enum class EAGAbilityInputID AbilityA, enum class EAGAbilityInputID AbilityB);
	void ServerTryBuyAbility(TSubclassOf<class UAGGameplayAbility> AbilityToBuy);
	void ResetScore();
	void OnRep_ReplicatedPurchasedAbilities();
	void OnRep_Gold(int32 OldGold);
	void OnRep_ConnectedGameSessionId(const class FString& OldGameSessionId);
	void OnRep_ConnectedFleetId(const class FString& OldFleetId);
	void OnMainMenuStatsReceived(bool Success, struct FStatsError& StatError, struct FGameStatsPayload& ReceivedGameStats);
	void OnEndGameStatsReceived(bool Success, struct FStatsError& StatError, TArray<struct FGameStatsPayload>& ReceivedGameStats);
	void OnCustomGameEndReceieved();
	class FString GetUniqueIdAsString();
	struct FGameStatsPayload GetEndGameStatsByPlayerId(const class FString& InPlayerId);
	void ClientShowScore(float Points, class FText& Text);
	void BPShowScore(float Points, class FText& Text);
	void BPShowDebuffIcon(class UAGGameplayEffect* AppliedEffect);
	void AwardGold(int32 Amount);
	void AddScorePoints(float Points, class FText& Reason);
	void AddHealing(float Amount);
	void AddDeath();
	void AddDamageTaken(float Amount);
	void AddDamage(float Amount);
};

// 0x40 (0x68 - 0x28)
// Class AimGods.AGSaveGame
class UAGSaveGame : public USaveGame
{
public:
	float                                        MasterVolume;                                      // 0x28(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MusicVolume;                                       // 0x2C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CharacterVolume;                                   // 0x30(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AmbientVolume;                                     // 0x34(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeaponVolume;                                      // 0x38(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MouseSensitivity;                                  // 0x3C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowFps;                                          // 0x40(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVerticalAxisInverted;                             // 0x41(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHorizontalAxisInverted;                           // 0x42(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A90[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLoadoutAbility>               SavedLoadoutAbilities;                             // 0x48(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FLinearColor                          CrosshairColor;                                    // 0x58(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAGSaveGame* GetDefaultObj();

};

// 0x28 (0x650 - 0x628)
// Class AimGods.AGSheep
class AAGSheep : public ACharacter
{
public:
	uint8                                        Pad_A93[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BaseTurnRightRate;                                 // 0x630(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BaseLookUpRate;                                    // 0x634(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A94[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AAGSheep* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AimGods.AGStatics
class UAGStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAGStatics* GetDefaultObj();

	class FText ReplaceTableReferenceStringsWithCorrespondingValue(class UCurveTable* CurveTable, class FText Text);
	class FString RemoveAllLowercase(const class FString& InString);
	bool IsSameTeam(class AActor* ActorA, class AActor* ActorB);
	bool IsRedTeam(class AActor* TestActor);
	bool IsEffectSpecHandleValid(const struct FGameplayEffectSpecHandle& EffectSpecHandle);
	bool IsChargeEffect(class UGameplayEffect* GameplayEffect);
	struct FGameplayAbilitySpecHandle GetHandleFromAbilitySpec(const struct FGameplayAbilitySpec& AbilitySpec);
	class FString GetGameDefaultMapName();
	float GetEffectSpecDuration(const struct FGameplayEffectSpec& EffectSpec);
	class AAGTowerBase* GetCurrentTowerForTeam(class UWorld* World, bool bIsRedTeam);
	struct FGameplayTagContainer GetAbilityActivationBlockedTags(const struct FGameplayAbilitySpec& AbilitySpec);
	void DrawDebugSphereShippingIncluded(class UObject* WorldContextObject, const struct FVector& Center, float Radius, int32 Segments, const struct FLinearColor& LineColor, float Duration, float Thickness);
};

// 0x98 (0xC8 - 0x30)
// Class AimGods.AGStatsSubsystem
class UAGStatsSubsystem : public UGameInstanceSubsystem
{
public:
	class FString                                StatsBaseUrl;                                      // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAwsHttpRequestLibrary*                AwsHttpRequestLibrary;                             // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnGetPlayerStatsFromServer;                        // 0x48(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnSaveEndGameStats;                                // 0x58(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_ACA[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastInlineDelegateProperty_            OnGetSeasonInfo;                                   // 0x78(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnGetPreviousSeasonInfoRequestComplete;            // 0x88(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_ACB[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAGStatsSubsystem* GetDefaultObj();

	class FString GetTimeLeftInCurrentSeason(const struct FDateTime& CurrentSeasonEndDateTime);
	void GetSeasonInfo();
	void GetPreviousPlayerStatsFromServer();
	void GetPlayerStatsFromServer();
};

// 0x8 (0xB8 - 0xB0)
// Class AimGods.AGTeamComponent
class UAGTeamComponent : public UActorComponent
{
public:
	bool                                         bIsRedTeam;                                        // 0xB0(0x1)(Edit, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ACD[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAGTeamComponent* GetDefaultObj();

};

// 0x1C0 (0x3D8 - 0x218)
// Class AimGods.AGTowerBase
class AAGTowerBase : public AActor
{
public:
	uint8                                        Pad_AD9[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  TowerBaseMesh;                                     // 0x220(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TowerShootLocation;                                // 0x228(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  TowerShieldMesh;                                   // 0x230(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TowerAttackVisual;                                 // 0x238(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGTeamComponent*                      TeamComponent;                                     // 0x240(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGHealthComponent*                    HealthComponent;                                   // 0x248(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGAggroSphereComponent*               AggroSphere;                                       // 0x250(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       DamageTextSpawn;                                   // 0x258(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGAttributes*                         Attributes;                                        // 0x260(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGameplayEffect>           DefaultAttributeEffect;                            // 0x268(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGAbilitySystemComponent*             AbilitySystemComp;                                 // 0x270(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGameplayEffect>           WeaponDamageEffect;                                // 0x278(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AAGTowerTarget>            TowerTargetClass;                                  // 0x280(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AAGProjectile>             TowerProjectileClass;                              // 0x288(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        KillGoldAward;                                     // 0x290(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TowerSequenceNumber;                               // 0x294(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BaseDamage;                                        // 0x298(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageMultiplier;                                  // 0x29C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageMultiplierCap;                               // 0x2A0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DelayBetweenShots;                                 // 0x2A4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ADD[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class AAGTowerTarget*>                  Targets;                                           // 0x2B0(0x50)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_ADE[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AAGCharacterBase*                      Target;                                            // 0x308(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsDestroyed;                                      // 0x310(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShieldEnabled;                                    // 0x311(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int8                                         TargetsToSpawn;                                    // 0x312(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AE0[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TowerInteriorHalfHeight;                           // 0x314(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TowerInteriorRadius;                               // 0x318(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AE1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              ShieldMaterial;                                    // 0x320(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              TowerBaseMaterial;                                 // 0x328(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          ShieldEnabledColor;                                // 0x330(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          ShieldDisabledColor;                               // 0x340(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          ShieldKilledColor;                                 // 0x350(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class AAGCharacter*, int32>             ConsecutiveShotMap;                                // 0x360(0x50)(Edit, ZeroConstructor, Transient, EditConst, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UAGDamageTextWidgetComponent> DamageNumberClass;                                 // 0x3B0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        RewardedMoneyToKiller;                             // 0x3B8(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AE5[0x1C];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AAGTowerBase* GetDefaultObj();

	void SpawnTarget();
	void ShootPlayer(class AAGCharacterBase* Character);
	void ShootBestTarget();
	void SetTowerGlow(bool bNewEnabled);
	void RespawnMissingTargets();
	void OnRep_bShieldEnabled();
	void OnRep_bIsDestroyed();
	void OnDeath(class AActor* KilledActor, class AController* Killer);
	void EnemyLeftAggroRadius(class AActor* EnemyActor);
	void EnemyEnteredAggroRadius(class AActor* EnemyActor);
	void BPPlayTowerDestroyedEffects();
};

// 0x28 (0x240 - 0x218)
// Class AimGods.AGProjectile
class AAGProjectile : public AActor
{
public:
	class UStaticMeshComponent*                  ProjectileMesh;                                    // 0x218(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UProjectileMovementComponent*          ProjectileMovement;                                // 0x220(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Target;                                            // 0x228(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x230(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AEB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UGameplayEffect>           ProjectileDamageEffect;                            // 0x238(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AAGProjectile* GetDefaultObj();

};

// 0x50 (0x268 - 0x218)
// Class AimGods.AGTowerTarget
class AAGTowerTarget : public AActor
{
public:
	class USphereComponent*                      TargetCollision;                                   // 0x218(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  TargetMesh;                                        // 0x220(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGTeamComponent*                      TeamComponent;                                     // 0x228(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGHealthComponent*                    HealthComponent;                                   // 0x230(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              BallMaterial;                                      // 0x238(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          HealthyColor;                                      // 0x240(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          DeadColor;                                         // 0x250(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AF4[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AAGTowerTarget* GetDefaultObj();

	void OnHealthModified(float NewHealth, float OldHealth);
};

// 0x140 (0x358 - 0x218)
// Class AimGods.AGWeapon
class AAGWeapon : public AActor
{
public:
	class USkeletalMeshComponent*                WeaponMesh1P;                                      // 0x218(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USkeletalMeshComponent*                WeaponMesh3P;                                      // 0x220(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UGameplayEffect>           WeaponDamageEffect;                                // 0x228(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UDamageType>               DamageType;                                        // 0x230(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UParticleSystem*                       MuzzleEffect;                                      // 0x238(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstance*                     ImpactDecal;                                       // 0x240(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               ImpactDecalSize;                                   // 0x248(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B03[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       DefaultImpactEffect;                               // 0x258(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UParticleSystem*                       BrickImpactEffect;                                 // 0x260(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UParticleSystem*                       WoodImpactEffect;                                  // 0x268(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UParticleSystem*                       FleshImpactEffect;                                 // 0x270(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             DefaultImpactSound;                                // 0x278(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             BrickImpactSound;                                  // 0x280(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             WoodImpactSound;                                   // 0x288(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             FleshImpactSound;                                  // 0x290(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class AActor>                    TracerActor;                                       // 0x298(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  MuzzleSocketName;                                  // 0x2A0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  MuzzleSocketName1P;                                // 0x2A8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  TracerTargetName;                                  // 0x2B0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  WeaponAttachSocketName1P;                          // 0x2B8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  WeaponAttachSocketName3P;                          // 0x2C0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCameraShake>              FireCamShake;                                      // 0x2C8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BaseDamage;                                        // 0x2D0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HeadshotDamageModifier;                            // 0x2D4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ClientSideHitLeeway;                               // 0x2D8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B04[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          WeaponFireMontage;                                 // 0x2E0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimMontage*                          WeaponReloadMontage1P;                             // 0x2E8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimMontage*                          WeaponReloadMontage3P;                             // 0x2F0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundBase*                            WeaponFireSound;                                   // 0x2F8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B07[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WeaponRange;                                       // 0x310(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FWeaponBehavior                       WeaponBehavior;                                    // 0x314(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	int32                                        AmmoInClip;                                        // 0x320(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B0A[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AmmoRegenInterval;                                 // 0x330(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        AmmoRegenAmount;                                   // 0x334(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        AmmoPerClip;                                       // 0x338(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               HitNotify;                                         // 0x33C(0xC)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LastProcessHitTime;                                // 0x348(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ServerMinTimeBetweenHits;                          // 0x34C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumHitTimeInfringements;                           // 0x350(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B0D[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AAGWeapon* GetDefaultObj();

	void ServerNotifyMiss(struct FHitResult& Impact, struct FVector& Origin);
	void ServerNotifyHitscan(struct FHitResult& Impact, const struct FVector_NetQuantizeNormal& ShootDir);
	void RegenAmmo();
	void OnRep_HitNotify();
};

// 0x0 (0x58 - 0x58)
// Class AimGods.AnimNotify_PlayLocalSound
class UAnimNotify_PlayLocalSound : public UAnimNotify_PlaySound
{
public:

	static class UClass* StaticClass();
	static class UAnimNotify_PlayLocalSound* GetDefaultObj();

};

// 0x48 (0x78 - 0x30)
// Class AimGods.AsyncTaskAttributeChanged
class UAsyncTaskAttributeChanged : public UBlueprintAsyncActionBase
{
public:
	UMulticastInlineDelegateProperty_            OnAttributeChanged;                                // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UAbilitySystemComponent*               ASC;                                               // 0x40(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B1F[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAsyncTaskAttributeChanged* GetDefaultObj();

	class UAsyncTaskAttributeChanged* ListenForAttributesChange(class UAbilitySystemComponent* AbilitySystemComponent, const TArray<struct FGameplayAttribute>& Attributes);
	class UAsyncTaskAttributeChanged* ListenForAttributeChange(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayAttribute& Attribute);
	void EndTask();
};

// 0x50 (0x80 - 0x30)
// Class AimGods.AsyncTaskCooldownChanged
class UAsyncTaskCooldownChanged : public UBlueprintAsyncActionBase
{
public:
	UMulticastInlineDelegateProperty_            OnCooldownBegin;                                   // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnCooldownEnd;                                     // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UAbilitySystemComponent*               ASC;                                               // 0x50(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B27[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAsyncTaskCooldownChanged* GetDefaultObj();

	class UAsyncTaskCooldownChanged* ListenForCooldownChange(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayTagContainer& CooldownTags, bool UseServerCooldown);
	void EndTask();
};

// 0x20 (0x50 - 0x30)
// Class AimGods.AsyncTaskEffectStackChanged
class UAsyncTaskEffectStackChanged : public UBlueprintAsyncActionBase
{
public:
	UMulticastInlineDelegateProperty_            OnGameplayEffectStackChange;                       // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	class UAbilitySystemComponent*               ASC;                                               // 0x40(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B30[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAsyncTaskEffectStackChanged* GetDefaultObj();

	class UAsyncTaskEffectStackChanged* ListenForGameplayEffectStackChange(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayTag& EffectGameplayTag);
	void EndTask();
};

// 0x38 (0x68 - 0x30)
// Class AimGods.AsyncTaskOwnedTagChanged
class UAsyncTaskOwnedTagChanged : public UBlueprintAsyncActionBase
{
public:
	UMulticastInlineDelegateProperty_            OnOwnedTagChanged;                                 // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UAbilitySystemComponent*               ASC;                                               // 0x40(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B42[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAsyncTaskOwnedTagChanged* GetDefaultObj();

	class UAsyncTaskOwnedTagChanged* ListenForOwnedTagChange(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayTagContainer& OwnedTags);
	void EndTask();
};

// 0x38 (0x68 - 0x30)
// Class AimGods.AsyncTaskWalkInDirection
class UAsyncTaskWalkInDirection : public UBlueprintAsyncActionBase
{
public:
	UMulticastInlineDelegateProperty_            OnWalkDurationEnded;                               // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_B52[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAsyncTaskWalkInDirection* GetDefaultObj();

	class UAsyncTaskWalkInDirection* WalkInDirectionAndWait(class APawn* PawnToMove, float Duration, const struct FVector& WorldDirection, float ScaleValue, bool bForce);
	void EndTask();
};

// 0xC0 (0xF0 - 0x30)
// Class AimGods.AwsHttpRequestLibrary
class UAwsHttpRequestLibrary : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_B62[0xB0];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AccessToken;                                       // 0xE0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAwsHttpRequestLibrary* GetDefaultObj();

	void SetAuthDetails(const class FString& ID, const class FString& Access, const class FString& Refresh, int32 RefreshExpiresIn);
	bool IsLoggedIn();
};

// 0x28 (0x58 - 0x30)
// Class AimGods.EacSubsystem
class UEacSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_B72[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAwsHttpRequestLibrary*                AwsHttpRequestLibrary;                             // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnSendPlayerReportComplete;                        // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEacSubsystem* GetDefaultObj();

	void SendPlayerReport(const class FString& ReportedPlayerGUID, const class FString& ReportingPlayerGUID, enum class EFPlayerReportCategory ReportCategoryID, const class FString& ReportDescription);
};

// 0x158 (0x188 - 0x30)
// Class AimGods.FriendsLibrary
class UFriendsLibrary : public UGameInstanceSubsystem
{
public:
	class UAwsHttpRequestLibrary*                HttpRequestLibrary;                                // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            FriendErrorDelegate;                               // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnGetFriendsList;                                  // 0x48(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnGetBlockedPlayers;                               // 0x58(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnBlockPlayer;                                     // 0x68(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnUnblockPlayer;                                   // 0x78(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnSendFriendRequest;                               // 0x88(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnGetPendingOutgoingFriendRequests;                // 0x98(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnGetPendingIncomingFriendsRequets;                // 0xA8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnAcceptFriendRequest;                             // 0xB8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnCancelOutgoingFriendshipRequest;                 // 0xC8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnRemoveFriend;                                    // 0xD8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_B88[0x50];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastInlineDelegateProperty_            OnOutgoingFriendRequestAcceptedWs;                 // 0x138(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnIncomingFriendRequestCancelledWs;                // 0x148(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnFriendRequestReceivedWs;                         // 0x158(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnFriendOnlineStatusChangedWs;                     // 0x168(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnUnfriendedByPlayerWs;                            // 0x178(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFriendsLibrary* GetDefaultObj();

	void UnblockPlayer(const class FString& UsernameToUnblock);
	void SendFriendRequest(const class FString& Username);
	void RemoveFriend(const class FString& FriendId);
	void GetPendingOutgoingFriendRequests();
	void GetPendingIncomingFriendRequests();
	void GetFriendsList();
	class FString GetFriendNameByPlayerId(const class FString& PlayerId);
	void GetBlockedPlayers();
	void CancelOutgoingFriendshipRequest(const class FString& RequestId);
	void BlockPlayer(const class FString& Username);
	void AcceptFriendRequest(const class FString& Username);
};

// 0x1D8 (0x200 - 0x28)
// Class AimGods.GameLiftClientUtils
class UGameLiftClientUtils : public UObject
{
public:
	class UAGGameInstance*                       GameInstance;                                      // 0x28(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTicket                               Ticket;                                            // 0x30(0x70)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FPlacement                            Placement;                                         // 0xA0(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         SearchingForGame;                                  // 0xF0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SinglePlayer;                                      // 0xF1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CallingStartMatchmakingApi;                        // 0xF2(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CallingStopMatchmakingApi;                         // 0xF3(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CallingStartGameSessionPlacementApi;               // 0xF4(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CallingDescribeGameSessionPlacementApi;            // 0xF5(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CallingPollMatchmakingApi;                         // 0xF6(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CallingAcceptMatchApi;                             // 0xF7(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        LastMatchmakingSearchingTime;                      // 0xF8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        LastPotentialMatchCreatedTime;                     // 0x100(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B9F[0xF8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameLiftClientUtils* GetDefaultObj();

	void StopMatchmaking();
	void StartMatchmaking();
	void StartGameSessionPlacement();
	void SetLastPotentialMatchCreatedTime(const class FString& Time);
	void SetLastMatchmakingSearchingTime(const class FString& Time);
	void ResetTicket();
	void ResetPlacement();
	void PollMatchmaking();
	bool NewLastPotentialMatchCreatedTimeIsGreater(const class FString& Time);
	bool NewLastMatchmakingSearchingTimeIsGreater(const class FString& Time);
	void GetResponseTime(const class FString& Region);
	void DescribeGameSessionPlacement();
	void AcceptMatch(const class FString& AcceptanceType);
};

// 0x0 (0x218 - 0x218)
// Class AimGods.ShopVolume
class AShopVolume : public AActor
{
public:

	static class UClass* StaticClass();
	static class AShopVolume* GetDefaultObj();

};

// 0xB8 (0xE8 - 0x30)
// Class AimGods.WebSocketManager
class UWebSocketManager : public UGameInstanceSubsystem
{
public:
	class UAGGameInstance*                       MyGameInstance;                                    // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFriendsLibrary*                       FriendsLibrary;                                    // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGPartySubsystem*                     PartySubsystem;                                    // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGCustomGameSubsystem*                CustomGameSubsystem;                               // 0x48(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGAuthSubsystem*                      AuthSubsystem;                                     // 0x50(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAwsHttpRequestLibrary*                AwsHttpRequestLibrary;                             // 0x58(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BC3[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                WebSocketBaseUrl;                                  // 0x68(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BC4[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAGGameliftSubsystem*                  GameliftSubsystem;                                 // 0x88(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGChatSubsystem*                      ChatSubsystem;                                     // 0x90(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGNewsFeedSubsystem*                  NewsFeedSubsystem;                                 // 0x98(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInGame;                                         // 0xA0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BC6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastInlineDelegateProperty_            OnWebSocketError;                                  // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnDowntimeMessage;                                 // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_BC9[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsReconnecting;                                   // 0xD4(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BCA[0x13];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWebSocketManager* GetDefaultObj();

	void UpdateInMatchStatus(bool bIsInMatch);
	void SendMessageToWebSocketApi(const class FString& Message);
	void SendLatencyUpdate(TArray<struct FRegionLatency>& RegionLatencies);
	void SendHeartbeat();
	void SendChatMessage(const class FString& ToUserId, const class FString& MessageText);
	void Reconnect();
	void OpenConnection();
	void OnWebSocketConnectionClosed(int32 StatusCode, const class FString& Reason, bool bWasClean);
	void OnReceivedWebSocketApiMessage(const class FString& Message);
	void OnConnectToWebSocketApiError(const class FString& Error);
	void OnConnectToWebSocketApi();
	void CloseWebSocketConnection();
};

}


