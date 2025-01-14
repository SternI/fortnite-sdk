#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AudioWorldization
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class AudioWorldization.AudioWorldizationReflectionProbe
	// Inherited from AActor -> UObject
	// Size: 0x58 (0x2E8 - 0x290)
	class AAudioWorldizationReflectionProbe : public AActor	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		USubmixSendVolumeComponent SubmixSends; // 0x298(0x8)
		USubmixOverrideVolumeComponent SubmixEffects; // 0x2A0(0x8)
		UAudioGameplayVolumeComponent AGVComponent; // 0x2A8(0x8)
		unsigned char UnknownData03_7[0x38]; // 0x2B0(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioWorldization.AudioWorldizationReflectionProbe");
			return ret;
		}
	};


	// Class AudioWorldization.AudioWorldizationSendsVolumeComponent
	// Inherited from UAudioGameplayVolumeComponentBase -> UAudioGameplayComponent -> UActorComponent -> UObject
	// Size: 0x18 (0xC8 - 0xB0)
	class UAudioWorldizationSendsVolumeComponent : public UAudioGameplayVolumeComponentBase	
	{
	public:
		FName Identifier; // 0xB0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY
		TArray Sends; // 0xB8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioWorldization.AudioWorldizationSendsVolumeComponent");
			return ret;
		}
	};


	// Class AudioWorldization.AudioWorldizationData
	// Inherited from UDataAsset -> UObject
	// Size: 0x78 (0xA8 - 0x30)
	class UAudioWorldizationData : public UDataAsset	
	{
	public:
		FAudioWorldizationSettings Settings; // 0x30(0x78)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioWorldization.AudioWorldizationData");
			return ret;
		}
	};


	// Class AudioWorldization.AudioWorldizationDefaultSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0xB8 (0xE8 - 0x30)
	class UAudioWorldizationDefaultSettings : public UDeveloperSettings	
	{
	public:
		FAudioWorldizationGlobalSettings GlobalSettings; // 0x30(0x30)
		FAudioWorldizationSettings DefaultSettings; // 0x60(0x78)
		TArray ModulationParameters; // 0xD8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioWorldization.AudioWorldizationDefaultSettings");
			return ret;
		}
	};


	// Class AudioWorldization.AudioWorldizationSubsystem
	// Inherited from UTickableWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x1F0 (0x230 - 0x40)
	class UAudioWorldizationSubsystem : public UTickableWorldSubsystem	
	{
	public:
		USoundControlBus EnclosureBus; // 0x40(0x8)
		USoundControlBus WallDistanceBus; // 0x48(0x8)
		USoundControlBus ListenerAzimuthBus; // 0x50(0x8)
		unsigned char UnknownData02_6[0x8]; // 0x58(0x8) UNKNOWN PROPERTY
		FAudioWorldizationSettings CurrentSettings; // 0x60(0x78)
		AAudioWorldizationReflectionProbe VolumeActor; // 0xD8(0x8)
		UAudioWorldizationTracePolicyBase TracePolicy; // 0xE0(0x8)
		UAudioWorldizationTraceDirectionPolicyBase TraceDirectionPolicy; // 0xE8(0x8)
		unsigned char UnknownData03_6[0xB0]; // 0xF0(0xB0) UNKNOWN PROPERTY
		TArray SettingsStack; // 0x1A0(0x10)
		TArray QuadrantEnclosureBuses; // 0x1B0(0x10)
		TArray QuadrantWallDistanceBuses; // 0x1C0(0x10)
		FTransform CachedTraceOrigin; // 0x1D0(0x60)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioWorldization.AudioWorldizationSubsystem");
			return ret;
		}

		void SetWorldizationSettings(FAudioWorldizationSettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4146626B8
		void SetEnabled(bool bNewEnabled); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146625D8
		void SetDefaultSettings(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146624F8
		void RemoveWorldizationSettings(FName InIdentifier); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414662418
		void RemoveEffectSendOverride(FName InIdentifier); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414662338
		void OverrideEffectSends(FName InIdentifier, TArray& InSends); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414662258
		float GetWallDistanceRatio(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414662178
		float GetEnclosureFactor(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414662098
	};


	// Class AudioWorldization.AudioWorldizationTraceDirectionPolicyBase
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UAudioWorldizationTraceDirectionPolicyBase : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioWorldization.AudioWorldizationTraceDirectionPolicyBase");
			return ret;
		}
	};


	// Class AudioWorldization.AudioWorldizationTraceDirectionPolicyDefault
	// Inherited from UAudioWorldizationTraceDirectionPolicyBase -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UAudioWorldizationTraceDirectionPolicyDefault : public UAudioWorldizationTraceDirectionPolicyBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioWorldization.AudioWorldizationTraceDirectionPolicyDefault");
			return ret;
		}
	};


	// Class AudioWorldization.AudioWorldizationTracePolicyBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAudioWorldizationTracePolicyBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioWorldization.AudioWorldizationTracePolicyBase");
			return ret;
		}
	};


	// Class AudioWorldization.AudioWorldizationTracePolicyDefault
	// Inherited from UAudioWorldizationTracePolicyBase -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAudioWorldizationTracePolicyDefault : public UAudioWorldizationTracePolicyBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioWorldization.AudioWorldizationTracePolicyDefault");
			return ret;
		}
	};


	// Class AudioWorldization.AudioWorldizationVolumeComponent
	// Inherited from UAudioGameplayVolumeComponentBase -> UAudioGameplayComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xB8 - 0xB0)
	class UAudioWorldizationVolumeComponent : public UAudioGameplayVolumeComponentBase	
	{
	public:
		UAudioWorldizationData Settings; // 0xB0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioWorldization.AudioWorldizationVolumeComponent");
			return ret;
		}
	};


	// Class AudioWorldization.GameFeatureAction_SetAudioWorldizationEffectSends
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x68 (0x90 - 0x28)
	class UGameFeatureAction_SetAudioWorldizationEffectSends : public UGameFeatureAction	
	{
	public:
		FName Identifier; // 0x28(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		TArray Sends; // 0x30(0x10)
		unsigned char UnknownData03_7[0x50]; // 0x40(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioWorldization.GameFeatureAction_SetAudioWorldizationEffectSends");
			return ret;
		}
	};


	// Class AudioWorldization.GameFeatureAction_SetAudioWorldizationSettings
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0xC8 (0xF0 - 0x28)
	class UGameFeatureAction_SetAudioWorldizationSettings : public UGameFeatureAction	
	{
	public:
		FAudioWorldizationSettings Settings; // 0x28(0x78)
		unsigned char UnknownData01_7[0x50]; // 0xA0(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioWorldization.GameFeatureAction_SetAudioWorldizationSettings");
			return ret;
		}
	};

}
