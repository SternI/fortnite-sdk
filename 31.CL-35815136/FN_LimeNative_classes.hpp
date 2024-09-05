#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: LimeNative
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class LimeNative.LimeAnalytics
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class ULimeAnalytics : public UObject	
	{
	public:
		TArray<FLimeAnalyticsContext> AnalyticsContexts; // 0x28(0x10)
		unsigned char UnknownData00_7[0x20]; // 0x38(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LimeNative.LimeAnalytics");
			return ret;
		}
	};


	// Class LimeNative.LimeBaseLayerAnimInstance
	// Inherited from UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x8 (0x4B0 - 0x4A8)
	class ULimeBaseLayerAnimInstance : public UFortBaseAnimInstance	
	{
	public:
		TWeakObjectPtr<UJunoPlayerAnimInstance*> MainAnimInstanceWeakPtr; // 0x4A8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LimeNative.LimeBaseLayerAnimInstance");
			return ret;
		}
	};


	// Class LimeNative.LimeDBNOAnimInstance
	// Inherited from ULimeBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x40 (0x4F0 - 0x4B0)
	class ULimeDBNOAnimInstance : public ULimeBaseLayerAnimInstance	
	{
	public:
		EFortPlayerAnimBodyType AnimBodyType; // 0x4B0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x4B1(0x3) UNKNOWN PROPERTY
		float LeanAngle; // 0x4B4(0x4)
		float SpeedAdjustedPlayrate; // 0x4B8(0x4)
		float LeanAdditiveAlpha; // 0x4BC(0x4)
		float Speed2D; // 0x4C0(0x4)
		float MovementBlendSpaceSpeed2D; // 0x4C4(0x4)
		float MaxMovementBlendSpaceSpeed; // 0x4C8(0x4)
		float LocalVelocityYawAngle; // 0x4CC(0x4)
		float DBNOTurnPlayRate; // 0x4D0(0x4)
		float YawDeltaCurrentTick; // 0x4D4(0x4)
		float YawDeltaLastTick; // 0x4D8(0x4)
		float YawDeltaSmoothed; // 0x4DC(0x4)
		bool bIsOnGround : 1; // 0x4E0:0(0x1)
		bool bTransition_FullBody_DBNOMove : 1; // 0x4E0:1(0x1)
		bool bTransition_FullBody_DBNOTurn : 1; // 0x4E0:2(0x1)
		bool bIsLargeBodyType : 1; // 0x4E0:3(0x1)
		unsigned char UnknownData01_7[0xF]; // 0x4E1(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LimeNative.LimeDBNOAnimInstance");
			return ret;
		}
	};


	// Class LimeNative.LimeOverrideManager
	// Inherited from UObject
	// Size: 0x68 (0x90 - 0x28)
	class ULimeOverrideManager : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x68]; // 0x28(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LimeNative.LimeOverrideManager");
			return ret;
		}

		void OnEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason); // Flags: Final|Native|Private, Memory Exec: 0x7FF751AD5064(relative to base address)
	};


	// Class LimeNative.LimePawnComponentOverrides
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x88 (0x130 - 0xA8)
	class ULimePawnComponentOverrides : public UFortPawnComponent	
	{
	public:
		TArray<FLimePawnComponentOverride> ObjectOverrides; // 0xA8(0x10)
		UClass* ClamberingMME; // 0xB8(0x8)
		TMap<FGameplayTag, UClass*> VehicleAnimLayerOverlayClass; // 0xC0(0x50)
		UClass* DBNOAnimLayerClass; // 0x110(0x8)
		UClass* DBNOCarriedAnimLayerClass; // 0x118(0x8)
		UClass* SkydiveAnimLayerClass; // 0x120(0x8)
		UClass* CurrentAnimLayerClass; // 0x128(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LimeNative.LimePawnComponentOverrides");
			return ret;
		}

		void HandleEnterVehicle(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751AD4F98(relative to base address)
	};


	// Class LimeNative.LimeSkydivingAnimInstance
	// Inherited from ULimeBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0xA0 (0x550 - 0x4B0)
	class ULimeSkydivingAnimInstance : public ULimeBaseLayerAnimInstance	
	{
	public:
		FFortAnimInput_Skydiving Skydiving; // 0x4B0(0x88)
		float FreeFall_AimPitch; // 0x538(0x4)
		float AimPitch; // 0x53C(0x4)
		bool bIsAccelerating2D : 1; // 0x540:0(0x1)
		unsigned char UnknownData00_7[0xF]; // 0x541(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LimeNative.LimeSkydivingAnimInstance");
			return ret;
		}
	};


	// Class LimeNative.LimeGameFeatureAction_AddLimeAnalytics
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x28 (0x50 - 0x28)
	class ULimeGameFeatureAction_AddLimeAnalytics : public UGameFeatureAction	
	{
	public:
		TWeakObjectPtr<UClass*> LimeAnalyticsClass; // 0x28(0x20)
		ULimeAnalytics* LimeAnalyticsInstance; // 0x48(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LimeNative.LimeGameFeatureAction_AddLimeAnalytics");
			return ret;
		}
	};


	// Class LimeNative.LimeArmedPlayerAnimInstance
	// Inherited from UJunoPlayerAnimInstance -> UJunoPawnAnimInstance -> UJunoAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x10 (0x9A0 - 0x990)
	class ULimeArmedPlayerAnimInstance : public UJunoPlayerAnimInstance	
	{
	public:
		bool bPlayerFiredCooldownActive : 1; // 0x990:0(0x1)
		bool bPlayerAimDownSights : 1; // 0x990:1(0x1)
		unsigned char UnknownData00_7[0xF]; // 0x991(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LimeNative.LimeArmedPlayerAnimInstance");
			return ret;
		}
	};


	// Class LimeNative.LimePlayerAnimInstance
	// Inherited from UJunoPlayerAnimInstance -> UJunoPawnAnimInstance -> UJunoAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x0 (0x990 - 0x990)
	class ULimePlayerAnimInstance : public UJunoPlayerAnimInstance	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LimeNative.LimePlayerAnimInstance");
			return ret;
		}
	};


	// Class LimeNative.LimeCameraMode_OrbitCam
	// Inherited from UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E30 - 0x1E30)
	class ULimeCameraMode_OrbitCam : public UFortCameraMode_ThirdPerson	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LimeNative.LimeCameraMode_OrbitCam");
			return ret;
		}

		void UpdateCameraBP(AActor* ViewTarget, float DeltaTime, FTViewTarget& OutVT); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBecomeActiveBP(AActor* ViewTarget); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class LimeNative.DebugObserveLimePlugin
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UDebugObserveLimePlugin : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LimeNative.DebugObserveLimePlugin");
			return ret;
		}
	};


	// Class LimeNative.GameFeatureAction_LimeDebug
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UGameFeatureAction_LimeDebug : public UGameFeatureAction	
	{
	public:
		TArray<UGameFeatureAction*> ForcePawnActions; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LimeNative.GameFeatureAction_LimeDebug");
			return ret;
		}
	};


	// Class LimeNative.LimePawnComponentMood
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x30 (0xD8 - 0xA8)
	class ULimePawnComponentMood : public UFortPawnComponent	
	{
	public:
		FMulticastInlineDelegate OnLimeMoodChangedDelegate; // 0xA8(0x10)
		unsigned char UnknownData00_6[0x18]; // 0xB8(0x18) UNKNOWN PROPERTY
		FLimeMoodStateData CurrentMoodState; // 0xD0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xD4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LimeNative.LimePawnComponentMood");
			return ret;
		}

		void OnRep_CurrentMoodState(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751AD5128(relative to base address)
		FLimeMoodStateData GetCurrentMoodState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E8277E0(relative to base address)
	};


	// Class LimeNative.LimePawnComponent
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class ULimePawnComponent : public UFortPawnComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LimeNative.LimePawnComponent");
			return ret;
		}
	};


	// Class LimeNative.LimePawnComponent_EmotionalState
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x90 (0x138 - 0xA8)
	class ULimePawnComponent_EmotionalState : public UFortPawnComponent	
	{
	public:
		FMulticastInlineDelegate OnLimeCurrentEmotionalStateChangedDelegate; // 0xA8(0x10)
		FMulticastInlineDelegate OnLimeCurrentEmotionalStateStartedChange; // 0xB8(0x10)
		FMulticastInlineDelegate OnLimeCurrentEmotionChangeFinished; // 0xC8(0x10)
		FMulticastInlineDelegate OnCheatEmotionIndexChanged; // 0xD8(0x10)
		ELimePawnEmotionalState CurrentEmotionalState; // 0xE8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xE9(0x3) UNKNOWN PROPERTY
		FLimeEmotionalStateData TargetEmotionalState; // 0xEC(0x10)
		char CheatEmotionIndex; // 0xFC(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xFD(0x3) UNKNOWN PROPERTY
		TArray<FLimePawnEmotionalStateMappingFromAwesomeLevel> LimePawnEmotionalStateMappingFromAwesomeLevel; // 0x100(0x10)
		unsigned char UnknownData02_6[0x8]; // 0x110(0x8) UNKNOWN PROPERTY
		float ResetToDefaultEmotionRate; // 0x118(0x4)
		float TimeToStayAtEmotionInSeconds; // 0x11C(0x4)
		unsigned char UnknownData03_6[0x8]; // 0x120(0x8) UNKNOWN PROPERTY
		FTimerHandle DefaultEmotionHandle; // 0x128(0x8)
		unsigned char UnknownData04_7[0x8]; // 0x130(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LimeNative.LimePawnComponent_EmotionalState");
			return ret;
		}

		void SetEmotionalState(FLimeEmotionalStateData Emotion); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751AD5164(relative to base address)
		void SetCurrentEmotionalState(ELimePawnEmotionalState NewEmotion); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750EEA4D8(relative to base address)
		void ResetToDefaultEmotionalState(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751AD5150(relative to base address)
		void OnRep_TargetEmotionalState(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751AD513C(relative to base address)
		void OnRep_CurrentEmotionalState(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750EE9790(relative to base address)
		void OnRep_CheatEmotionIndex(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750EE975C(relative to base address)
		void HandleLimeAwesomeLevelChanged(int32_t NewAwesomeLevel); // Flags: Final|Native|Private, Memory Exec: 0x7FF751AD4FAC(relative to base address)
		float GetCurrentEmotionalStateValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750EE8B50(relative to base address)
		ELimePawnEmotionalState GetCurrentEmotionalState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EA7E60C(relative to base address)
	};


	// Class LimeNative.LimeGlobals
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class ULimeGlobals : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LimeNative.LimeGlobals");
			return ret;
		}
	};

}