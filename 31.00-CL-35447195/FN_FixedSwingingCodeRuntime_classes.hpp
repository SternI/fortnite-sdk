#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FixedSwingingCodeRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class FixedSwingingCodeRuntime.FixedSwingingCheatManager
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFixedSwingingCheatManager : public UChildCheatManager	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FixedSwingingCodeRuntime.FixedSwingingCheatManager");
			return ret;
		}

		void SpawnFixedSwingingProp(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414CF6E78
	};


	// Class FixedSwingingCodeRuntime.FixedSwingingComponent
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xA8 (0x150 - 0xA8)
	class UFixedSwingingComponent : public UFortPawnComponent	
	{
	public:
		FGameplayTag MovementModeExtensionTag; // 0xA8(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		UClass SwingingMovementModeExtension; // 0xB0(0x8)
		FScalableFloat MinimumHorizontalDistanceToSwingTarget; // 0xB8(0x28)
		FScalableFloat MaximumAngleDeflectionToSwing; // 0xE0(0x28)
		TWeakObjectPtr CHEAT_FixedSwingingPropClass; // 0x108(0x20)
		UClass CHEAT_CachedFixedSwingingPropClass; // 0x128(0x8)
		unsigned char UnknownData03_7[0x20]; // 0x130(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FixedSwingingCodeRuntime.FixedSwingingComponent");
			return ret;
		}

		void OnShowSwingPrompt(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CF7118
		void OnHideSwingPrompt(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CF7038
		void HandleOwnerJumpInput(bool bPressed); // Flags: Final|Native|Private 0x7FF414CF6F58
	};


	// Class FixedSwingingCodeRuntime.FixedSwingingProp
	// Inherited from ABuildingProp -> ABuildingTimeOfDayLights -> ABuildingAutoNav -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x8 (0xBE0 - 0xBD8)
	class AFixedSwingingProp : public ABuildingProp	
	{
	public:
		bool bIsOccupied; // 0xBD8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xBD9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FixedSwingingCodeRuntime.FixedSwingingProp");
			return ret;
		}
	};


	// Class FixedSwingingCodeRuntime.FixedSwingingRegionComponent
	// Inherited from UBoxComponent -> UShapeComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x20 (0x520 - 0x500)
	class UFixedSwingingRegionComponent : public UBoxComponent	
	{
	public:
		FVector LocalSwingDirection; // 0x500(0x18)
		unsigned char UnknownData01_7[0x8]; // 0x518(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FixedSwingingCodeRuntime.FixedSwingingRegionComponent");
			return ret;
		}
	};


	// Class FixedSwingingCodeRuntime.FortMovementMode_FixedSwingingRuntimeData
	// Inherited from UFortMovementMode_BaseExtRuntimeData -> UObject
	// Size: 0x50 (0x90 - 0x40)
	class UFortMovementMode_FixedSwingingRuntimeData : public UFortMovementMode_BaseExtRuntimeData	
	{
	public:
		unsigned char UnknownData01_1[0x50]; // 0x40(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FixedSwingingCodeRuntime.FortMovementMode_FixedSwingingRuntimeData");
			return ret;
		}
	};


	// Class FixedSwingingCodeRuntime.FortMovementMode_ExtLogicFixedSwinging
	// Inherited from UFortMovementMode_BaseExtLogic -> UObject
	// Size: 0x198 (0x2B8 - 0x120)
	class UFortMovementMode_ExtLogicFixedSwinging : public UFortMovementMode_BaseExtLogic	
	{
	public:
		UClass SwingingAnimationLayer; // 0x120(0x8)
		FScalableFloat AttachPointWarpSpeed; // 0x128(0x28)
		FScalableFloat GravitationalAcceleration; // 0x150(0x28)
		FRuntimeFloatCurve SpeedCurve; // 0x178(0x88)
		FScalableFloat ExitAngleThreshold; // 0x200(0x28)
		FScalableFloat ExitLaunchSpeed; // 0x228(0x28)
		FScalableFloat ExitLaunchAngle; // 0x250(0x28)
		FScalableFloat RotationInterpSpeed; // 0x278(0x28)
		unsigned char UnknownData01_7[0x18]; // 0x2A0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FixedSwingingCodeRuntime.FortMovementMode_ExtLogicFixedSwinging");
			return ret;
		}

		void HandleOwnerTeleported(AFortPawn TeleportedOwner); // Flags: Final|Native|Protected 0x7FF414CF72D8
		void HandleOwnerJumpInput(bool bPressed); // Flags: Final|Native|Protected 0x7FF414CF71F8
	};


	// Class FixedSwingingCodeRuntime.FortPlayerAnimInstance_FixedSwinging
	// Inherited from UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x18 (0x4D0 - 0x4B8)
	class UFortPlayerAnimInstance_FixedSwinging : public UFortBaseLayerAnimInstance	
	{
	public:
		float SwingPitch; // 0x4B8(0x4)
		unsigned char UnknownData01_7[0x14]; // 0x4BC(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FixedSwingingCodeRuntime.FortPlayerAnimInstance_FixedSwinging");
			return ret;
		}
	};

}
