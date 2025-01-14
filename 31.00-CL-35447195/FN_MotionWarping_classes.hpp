#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MotionWarping
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class MotionWarping.MotionWarpingBaseAdapter
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UMotionWarpingBaseAdapter : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotionWarping.MotionWarpingBaseAdapter");
			return ret;
		}
	};


	// Class MotionWarping.MotionWarpingCharacterAdapter
	// Inherited from UMotionWarpingBaseAdapter -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UMotionWarpingCharacterAdapter : public UMotionWarpingBaseAdapter	
	{
	public:
		ACharacter TargetCharacter; // 0x38(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotionWarping.MotionWarpingCharacterAdapter");
			return ret;
		}
	};


	// Class MotionWarping.AnimNotifyState_MotionWarping
	// Inherited from UAnimNotifyState -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UAnimNotifyState_MotionWarping : public UAnimNotifyState	
	{
	public:
		URootMotionModifier RootMotionModifier; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotionWarping.AnimNotifyState_MotionWarping");
			return ret;
		}

		void OnWarpUpdate(UMotionWarpingComponent MotionWarpingComp, URootMotionModifier Modifier); // Flags: Event|Public|BlueprintEvent|Const 0x7FF414650978
		void OnWarpEnd(UMotionWarpingComponent MotionWarpingComp, URootMotionModifier Modifier); // Flags: Event|Public|BlueprintEvent|Const 0x7FF414650898
		void OnWarpBegin(UMotionWarpingComponent MotionWarpingComp, URootMotionModifier Modifier); // Flags: Event|Public|BlueprintEvent|Const 0x7FF4146507B8
		void OnRootMotionModifierUpdate(UMotionWarpingComponent MotionWarpingComp, URootMotionModifier Modifier); // Flags: Final|Native|Public|Const 0x7FF4146506D8
		void OnRootMotionModifierDeactivate(UMotionWarpingComponent MotionWarpingComp, URootMotionModifier Modifier); // Flags: Final|Native|Public|Const 0x7FF4146505F8
		void OnRootMotionModifierActivate(UMotionWarpingComponent MotionWarpingComp, URootMotionModifier Modifier); // Flags: Final|Native|Public|Const 0x7FF414650518
		URootMotionModifier AddRootMotionModifier(UMotionWarpingComponent MotionWarpingComp, UAnimSequenceBase Animation, float StartTime, float EndTime); // Flags: Native|Event|Public|BlueprintEvent|Const 0x7FF414650438
	};


	// Class MotionWarping.AttributeBasedRootMotionComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0xE0 (0x180 - 0xA0)
	class UAttributeBasedRootMotionComponent : public UActorComponent	
	{
	public:
		bool bEnableRootMotion; // 0xA0(0x1)
		unsigned char UnknownData03_6[0x3]; // 0xA1(0x3) UNKNOWN PROPERTY
		EAttributeBasedRootMotionMode Mode; // 0xA4(0x4)
		unsigned char UnknownData04_6[0x30]; // 0xA8(0x30) UNKNOWN PROPERTY
		TWeakObjectPtr CharacterOwner; // 0xD8(0x8)
		unsigned char UnknownData05_7[0xA0]; // 0xE0(0xA0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotionWarping.AttributeBasedRootMotionComponent");
			return ret;
		}
	};


	// Class MotionWarping.MotionWarpingUtilities
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMotionWarpingUtilities : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotionWarping.MotionWarpingUtilities");
			return ret;
		}

		void GetMotionWarpingWindowsFromAnimation(UAnimSequenceBase Animation, TArray& OutWindows); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414650C18
		void GetMotionWarpingWindowsForWarpTargetFromAnimation(UAnimSequenceBase Animation, FName WarpTargetName, TArray& OutWindows); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414650B38
		FTransform ExtractRootMotionFromAnimation(UAnimSequenceBase Animation, float StartTime, float EndTime); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414650A58
	};


	// Class MotionWarping.MotionWarpingComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x40 (0xE0 - 0xA0)
	class UMotionWarpingComponent : public UActorComponent	
	{
	public:
		bool bSearchForWindowsInAnimsWithinMontages; // 0xA0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnPreUpdate; // 0xA8(0x10)
		UMotionWarpingBaseAdapter OwnerAdapter; // 0xB8(0x8)
		TArray Modifiers; // 0xC0(0x10)
		TArray WarpTargets; // 0xD0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotionWarping.MotionWarpingComponent");
			return ret;
		}

		int32_t RemoveWarpTargets(TArray& WarpTargetNames); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4146513F8
		int32_t RemoveWarpTarget(FName WarpTargetName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414651318
		int32_t RemoveAllWarpTargets(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414651238
		void DisableAllRootMotionModifiers(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414651158
		void AddOrUpdateWarpTargetFromTransform(FName WarpTargetName, FTransform TargetTransform); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414651078
		void AddOrUpdateWarpTargetFromLocationAndRotation(FName WarpTargetName, FVector TargetLocation, FRotator TargetRotation); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414650F98
		void AddOrUpdateWarpTargetFromLocation(FName WarpTargetName, FVector TargetLocation); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414650EB8
		void AddOrUpdateWarpTargetFromComponent(FName WarpTargetName, USceneComponent Component, FName BoneName, bool bFollowComponent, FVector LocationOffset, FRotator RotationOffset); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414650DD8
		void AddOrUpdateWarpTarget(FMotionWarpingTarget& WarpTarget); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414650CF8
	};


	// Class MotionWarping.RootMotionModifier
	// Inherited from UObject
	// Size: 0x128 (0x150 - 0x28)
	class URootMotionModifier : public UObject	
	{
	public:
		TWeakObjectPtr Animation; // 0x28(0x8)
		float StartTime; // 0x30(0x4)
		float EndTime; // 0x34(0x4)
		float PreviousPosition; // 0x38(0x4)
		float CurrentPosition; // 0x3C(0x4)
		float Weight; // 0x40(0x4)
		unsigned char UnknownData03_6[0xC]; // 0x44(0xC) UNKNOWN PROPERTY
		FTransform StartTransform; // 0x50(0x60)
		float ActualStartTime; // 0xB0(0x4)
		unsigned char UnknownData04_6[0xC]; // 0xB4(0xC) UNKNOWN PROPERTY
		FTransform TotalRootMotionWithinWindow; // 0xC0(0x60)
		FDelegateProperty OnActivateDelegate; // 0x120(0xC)
		FDelegateProperty OnUpdateDelegate; // 0x12C(0xC)
		FDelegateProperty OnDeactivateDelegate; // 0x138(0xC)
		ERootMotionModifierState State; // 0x144(0x1)
		unsigned char UnknownData05_7[0x3]; // 0x145(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotionWarping.RootMotionModifier");
			return ret;
		}
	};


	// Class MotionWarping.RootMotionModifier_Warp
	// Inherited from URootMotionModifier -> UObject
	// Size: 0x158 (0x2A0 - 0x148)
	class URootMotionModifier_Warp : public URootMotionModifier	
	{
	public:
		FName WarpTargetName; // 0x148(0x4)
		EWarpPointAnimProvider WarpPointAnimProvider; // 0x14C(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x14D(0x3) UNKNOWN PROPERTY
		FTransform WarpPointAnimTransform; // 0x150(0x60)
		FName WarpPointAnimBoneName; // 0x1B0(0x4)
		bool bWarpTranslation; // 0x1B4(0x1)
		bool bIgnoreZAxis; // 0x1B5(0x1)
		EAlphaBlendOption AddTranslationEasingFunc; // 0x1B6(0x1)
		unsigned char UnknownData06_6[0x1]; // 0x1B7(0x1) UNKNOWN PROPERTY
		UCurveFloat AddTranslationEasingCurve; // 0x1B8(0x8)
		bool bWarpRotation; // 0x1C0(0x1)
		EMotionWarpRotationType RotationType; // 0x1C1(0x1)
		EMotionWarpRotationMethod RotationMethod; // 0x1C2(0x1)
		unsigned char UnknownData07_6[0x1]; // 0x1C3(0x1) UNKNOWN PROPERTY
		float WarpRotationTimeMultiplier; // 0x1C4(0x4)
		float WarpMaxRotationRate; // 0x1C8(0x4)
		unsigned char UnknownData08_6[0x4]; // 0x1CC(0x4) UNKNOWN PROPERTY
		FTransform CachedTargetTransform; // 0x1D0(0x60)
		unsigned char UnknownData09_7[0x70]; // 0x230(0x70) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotionWarping.RootMotionModifier_Warp");
			return ret;
		}
	};


	// Class MotionWarping.RootMotionModifier_SimpleWarp
	// Inherited from URootMotionModifier_Warp -> URootMotionModifier -> UObject
	// Size: 0x0 (0x2A0 - 0x2A0)
	class URootMotionModifier_SimpleWarp : public URootMotionModifier_Warp	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotionWarping.RootMotionModifier_SimpleWarp");
			return ret;
		}
	};


	// Class MotionWarping.RootMotionModifier_Scale
	// Inherited from URootMotionModifier -> UObject
	// Size: 0x18 (0x160 - 0x148)
	class URootMotionModifier_Scale : public URootMotionModifier	
	{
	public:
		FVector Scale; // 0x148(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotionWarping.RootMotionModifier_Scale");
			return ret;
		}

		URootMotionModifier_Scale AddRootMotionModifierScale(UMotionWarpingComponent InMotionWarpingComp, UAnimSequenceBase InAnimation, float InStartTime, float InEndTime, FVector InScale); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF4146514D8
	};


	// Class MotionWarping.RootMotionModifier_AdjustmentBlendWarp
	// Inherited from URootMotionModifier_Warp -> URootMotionModifier -> UObject
	// Size: 0x160 (0x400 - 0x2A0)
	class URootMotionModifier_AdjustmentBlendWarp : public URootMotionModifier_Warp	
	{
	public:
		bool bWarpIKBones; // 0x2A0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x2A1(0x7) UNKNOWN PROPERTY
		TArray IKBones; // 0x2A8(0x10)
		unsigned char UnknownData03_6[0x8]; // 0x2B8(0x8) UNKNOWN PROPERTY
		FTransform CachedMeshTransform; // 0x2C0(0x60)
		FTransform CachedMeshRelativeTransform; // 0x320(0x60)
		FTransform CachedRootMotion; // 0x380(0x60)
		FAnimSequenceTrackContainer Result; // 0x3E0(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotionWarping.RootMotionModifier_AdjustmentBlendWarp");
			return ret;
		}
	};


	// Class MotionWarping.RootMotionModifier_SkewWarp
	// Inherited from URootMotionModifier_Warp -> URootMotionModifier -> UObject
	// Size: 0x0 (0x2A0 - 0x2A0)
	class URootMotionModifier_SkewWarp : public URootMotionModifier_Warp	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotionWarping.RootMotionModifier_SkewWarp");
			return ret;
		}

		URootMotionModifier_SkewWarp AddRootMotionModifierSkewWarp(UMotionWarpingComponent InMotionWarpingComp, UAnimSequenceBase InAnimation, float InStartTime, float InEndTime, FName InWarpTargetName, EWarpPointAnimProvider InWarpPointAnimProvider, FTransform InWarpPointAnimTransform, FName InWarpPointAnimBoneName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, EMotionWarpRotationType InRotationType, EMotionWarpRotationMethod InRotationMethod, float InWarpRotationTimeMultiplier, float InWarpMaxRotationRate); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF4146515B8
	};

}
