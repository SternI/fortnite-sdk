#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SunRoseChainWhipGameplay
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class SunRoseChainWhipGameplay.Chains_SunRose_Sharp_Wep_AnimInstance
	// Inherited from UCustomCharacterPartAnimInstance -> UFortAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x40 (0x7B0 - 0x770)
	class UChains_SunRose_Sharp_Wep_AnimInstance : public UCustomCharacterPartAnimInstance	
	{
	public:
		float AttackRange; // 0x770(0x4)
		int32_t ActiveTechniqueIndex; // 0x774(0x4)
		bool bIsTechniqueActive; // 0x778(0x1)
		bool bHasIsTargetingTag; // 0x779(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x77A(0x2) UNKNOWN PROPERTY
		float PawnVelocitySpeed; // 0x77C(0x4)
		float PawnVelocitySpeedCutoff; // 0x780(0x4)
		bool bIsAttack_01; // 0x784(0x1)
		bool bIsAttack_02; // 0x785(0x1)
		bool bIsAttack_03; // 0x786(0x1)
		bool bIsAllowPhysics; // 0x787(0x1)
		bool bIsMantisDone; // 0x788(0x1)
		bool bIsUpperBodyAttack_01; // 0x789(0x1)
		bool bIsUpperBodyAttack_02; // 0x78A(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x78B(0x1) UNKNOWN PROPERTY
		float XMoveRight; // 0x78C(0x4)
		float XMoveLeft; // 0x790(0x4)
		float YMoveFwd; // 0x794(0x4)
		bool bIs700Distance; // 0x798(0x1)
		bool bIs1200Distance; // 0x799(0x1)
		bool bIsTurnOffPhysics; // 0x79A(0x1)
		unsigned char UnknownData02_6[0x1]; // 0x79B(0x1) UNKNOWN PROPERTY
		float AttackRange700; // 0x79C(0x4)
		float AttackRange1200; // 0x7A0(0x4)
		float AttackRange1500; // 0x7A4(0x4)
		FGameplayTag IsTargetingTag; // 0x7A8(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x7AC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SunRoseChainWhipGameplay.Chains_SunRose_Sharp_Wep_AnimInstance");
			return ret;
		}
	};


	// Class SunRoseChainWhipGameplay.Hades_Player_LayerAnimInstance
	// Inherited from UFortPlayerAnimInstanceProxy -> UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x20 (0x1440 - 0x1420)
	class UHades_Player_LayerAnimInstance : public UFortPlayerAnimInstanceProxy	
	{
	public:
		bool bIsMotorcycle; // 0x1420(0x1)
		bool bIsHookshot; // 0x1421(0x1)
		bool bIsTechniqueActive; // 0x1422(0x1)
		bool bIsHadesAO; // 0x1423(0x1)
		bool bIsUpperBodyReplacement; // 0x1424(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1425(0x3) UNKNOWN PROPERTY
		FGameplayTag MotorcycleTag; // 0x1428(0x4)
		FGameplayTag HookshotTag; // 0x142C(0x4)
		FGameplayTag DisableGrindRailUpperBodyCorrectTag; // 0x1430(0x4)
		unsigned char UnknownData01_7[0xC]; // 0x1434(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SunRoseChainWhipGameplay.Hades_Player_LayerAnimInstance");
			return ret;
		}
	};


	// Class SunRoseChainWhipGameplay.FortCheatManager_SunRoseChainWhip
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x40 (0x68 - 0x28)
	class UFortCheatManager_SunRoseChainWhip : public UChildCheatManager	
	{
	public:
		TWeakObjectPtr<UClass*> HookShotGameplayEffectClass; // 0x28(0x20)
		TWeakObjectPtr<UClass*> HookShooterAISpawnerData; // 0x48(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SunRoseChainWhipGameplay.FortCheatManager_SunRoseChainWhip");
			return ret;
		}

		void SunRoseSpawnHookShotShooter(); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void SunRoseRemoveHookShotShooter(); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF7513E55DC(relative to base address)
		void SunRoseApplyHookShot(float Delay); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF74C42CE74(relative to base address)
	};


	// Class SunRoseChainWhipGameplay.TargetingSelectionTask_SunRoseChainWhip
	// Inherited from UTargetingSelectionTask_Trace -> UTargetingTask -> UObject
	// Size: 0x0 (0x170 - 0x170)
	class UTargetingSelectionTask_SunRoseChainWhip : public UTargetingSelectionTask_Trace	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SunRoseChainWhipGameplay.TargetingSelectionTask_SunRoseChainWhip");
			return ret;
		}
	};


	// Class SunRoseChainWhipGameplay.TargetingSelectionTask_SunRoseChainWhip_Melee
	// Inherited from UTargetingSelectionTask_SunRoseChainWhip -> UTargetingSelectionTask_Trace -> UTargetingTask -> UObject
	// Size: 0x20 (0x190 - 0x170)
	class UTargetingSelectionTask_SunRoseChainWhip_Melee : public UTargetingSelectionTask_SunRoseChainWhip	
	{
	public:
		float YawOffsetDegrees; // 0x170(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x174(0x4) UNKNOWN PROPERTY
		FVector SourceLocationRelativeOffset; // 0x178(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SunRoseChainWhipGameplay.TargetingSelectionTask_SunRoseChainWhip_Melee");
			return ret;
		}
	};

}
