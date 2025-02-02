#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: RidingCodeRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class RidingCodeRuntime.FortVehicleLayerAnimInstance_Riding
	// Inherited from UFortVehicleOccupantAnimInstance -> UFortAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x2C0 (0xB40 - 0x880)
	class UFortVehicleLayerAnimInstance_Riding : public UFortVehicleOccupantAnimInstance	
	{
	public:
		FCachedAnimRelevancyData IntoVehicleCachedData; // 0x880(0x14)
		FCachedAnimRelevancyData OutOfVehicleCachedData; // 0x894(0x14)
		float InTime; // 0x8A8(0x4)
		float OutTime; // 0x8AC(0x4)
		float BodyYawOffset; // 0x8B0(0x4)
		unsigned char UnknownData11_6[0x4]; // 0x8B4(0x4) UNKNOWN PROPERTY
		FRotator BodyCounterRotation; // 0x8B8(0x18)
		float BodyCounterRotationAlpha; // 0x8D0(0x4)
		bool bIsReloading; // 0x8D4(0x1)
		bool bIsTargeting; // 0x8D5(0x1)
		bool bIsFiring; // 0x8D6(0x1)
		bool bIsUsingConsumable; // 0x8D7(0x1)
		bool bIsInAction; // 0x8D8(0x1)
		bool bIsThrowConsumable; // 0x8D9(0x1)
		bool bIsTargetingOrThrowingConsumable; // 0x8DA(0x1)
		bool bIsTurningInPlace; // 0x8DB(0x1)
		bool bIsRidingSprinting; // 0x8DC(0x1)
		bool bIsRidingPetting; // 0x8DD(0x1)
		unsigned char UnknownData12_6[0x2]; // 0x8DE(0x2) UNKNOWN PROPERTY
		float TurnInPlaceRotationSpeed; // 0x8E0(0x4)
		float TurnInPlaceAngleDelta; // 0x8E4(0x4)
		bool bIsRidingMovingBackward; // 0x8E8(0x1)
		bool bIsSlopeSliding; // 0x8E9(0x1)
		unsigned char UnknownData13_6[0x2]; // 0x8EA(0x2) UNKNOWN PROPERTY
		float SlopeSlidingPitch; // 0x8EC(0x4)
		float SlopeSlidingRoll; // 0x8F0(0x4)
		float RiderReferentialRidableYaw; // 0x8F4(0x4)
		float AimYawDegreesCoverage; // 0x8F8(0x4)
		float SmoothedAimYaw; // 0x8FC(0x4)
		bool bJustEntered; // 0x900(0x1)
		bool bIsRidableMoving; // 0x901(0x1)
		bool bIsRideMode; // 0x902(0x1)
		unsigned char UnknownData14_6[0x1]; // 0x903(0x1) UNKNOWN PROPERTY
		float RidableVelocity; // 0x904(0x4)
		float BodyYaw; // 0x908(0x4)
		float BoostPlayRate; // 0x90C(0x4)
		float RidingMovePlayRate; // 0x910(0x4)
		float FalseBlendTime; // 0x914(0x4)
		float CombatToRideYaw; // 0x918(0x4)
		float InPlaceYaw; // 0x91C(0x4)
		float HeadAOAlpha; // 0x920(0x4)
		unsigned char UnknownData15_6[0x4]; // 0x924(0x4) UNKNOWN PROPERTY
		FRotator MeleeTwistRot; // 0x928(0x18)
		bool bIsDualWield; // 0x940(0x1)
		bool bIsOneHandedDualWield; // 0x941(0x1)
		bool bIsTwoHandedSword; // 0x942(0x1)
		bool bShouldAdjustBodyTwistForMelee; // 0x943(0x1)
		unsigned char UnknownData16_6[0x4]; // 0x944(0x4) UNKNOWN PROPERTY
		FVector PlayerOffset; // 0x948(0x18)
		float NoiseAlpha; // 0x960(0x4)
		bool bIsLobsterBlockActive; // 0x964(0x1)
		unsigned char UnknownData17_6[0x3]; // 0x965(0x3) UNKNOWN PROPERTY
		float SlopePitch; // 0x968(0x4)
		float RiderHeightAdjustmentSpringConstant; // 0x96C(0x4)
		float MinSlopePitchForRiderHeightAdjustment; // 0x970(0x4)
		float MaxSlopePitchForRiderHeightAdjustment; // 0x974(0x4)
		float RiderHeightAdjustmentForMinSlopePitch; // 0x978(0x4)
		float RiderHeightAdjustmentForMaxSlopePitch; // 0x97C(0x4)
		float PettingRotAlpha; // 0x980(0x4)
		unsigned char UnknownData18_6[0x4]; // 0x984(0x4) UNKNOWN PROPERTY
		FRotator PettingRot; // 0x988(0x18)
		float PettingPitchFactor; // 0x9A0(0x4)
		float PettingRollFactor; // 0x9A4(0x4)
		FVector HandAttachLeft; // 0x9A8(0x18)
		FVector HandAttachRight; // 0x9C0(0x18)
		float HandAttachAlpha; // 0x9D8(0x4)
		ERidingFootPhase FootPhase; // 0x9DC(0x1)
		bool bIsFootPhase_FeetInAir; // 0x9DD(0x1)
		bool bIsFootPhase_FrontFeetPlanted; // 0x9DE(0x1)
		bool bIsFootPhase_BackFeetPlanted; // 0x9DF(0x1)
		bool bIsFootPhase_LeftBackFeetForward; // 0x9E0(0x1)
		bool bIsFootPhase_RightBackFeetForward; // 0x9E1(0x1)
		bool bIsFootPhase_LeftPlantedRightPass; // 0x9E2(0x1)
		bool bIsFootPhase_RightPlantedLeftPass; // 0x9E3(0x1)
		float TurnInPlaceModulatedSpeed; // 0x9E4(0x4)
		bool bIsTurnInPlaceAngleDeltaPositive; // 0x9E8(0x1)
		unsigned char UnknownData19_6[0x3]; // 0x9E9(0x3) UNKNOWN PROPERTY
		float SlopeRoll; // 0x9EC(0x4)
		float MovingVelocityLowerBound; // 0x9F0(0x4)
		float JustEnteredDelayTimeSec; // 0x9F4(0x4)
		float FalseBlendTime_Moving; // 0x9F8(0x4)
		float FalseBlendTime_NotMoving; // 0x9FC(0x4)
		FVector PlayerOffsetMale; // 0xA00(0x18)
		FVector PlayerOffsetFemale; // 0xA18(0x18)
		FSoftObjectPath ScytheMontage; // 0xA30(0x18)
		FSoftObjectPath BRSwordMontage; // 0xA48(0x18)
		TEnumAsByte MeleeDualWieldCoreAnimation; // 0xA60(0x1)
		unsigned char UnknownData20_6[0x7]; // 0xA61(0x7) UNKNOWN PROPERTY
		FVector SlopePitchTraceStart; // 0xA68(0x18)
		FVector SlopePitchTraceEnd; // 0xA80(0x18)
		FVector HandAttachLocationLeftMale; // 0xA98(0x18)
		FVector HandAttachLocationRightMale; // 0xAB0(0x18)
		FVector HandAttachLocationLeftFemale; // 0xAC8(0x18)
		FVector HandAttachLocationRightFemale; // 0xAE0(0x18)
		FName PlayerHandAttachLeft; // 0xAF8(0x4)
		FName PlayerHandAttachRight; // 0xAFC(0x4)
		FName DisableHandAttachCurveName; // 0xB00(0x4)
		FName AllowRidingNoiseAdditiveCurveName; // 0xB04(0x4)
		unsigned char UnknownData21_7[0x38]; // 0xB08(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RidingCodeRuntime.FortVehicleLayerAnimInstance_Riding");
			return ret;
		}

		void UpdateSlopePitchForRiding(); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414BEEF98
		void UpdateBoostPlayRate(); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414BEEEB8
		void SetFootPhase(ERidingFootPhase InFootPhase); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BEEDD8
		void PlaceHandIKTargets(); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414BEECF8
		void BlueprintCollectRidableAnimBPData(UAnimInstance RidableAnimInstance); // Flags: Event|Protected|BlueprintEvent 0x7FF414BEEC18
	};


	// Class RidingCodeRuntime.RidingCheatManager
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class URidingCheatManager : public UChildCheatManager	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RidingCodeRuntime.RidingCheatManager");
			return ret;
		}

		void StopRidingActor(); // Flags: BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414BEF238
		void StartRidingActor(); // Flags: BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414BEF158
		void RidingSetStaminaPercent(float StaminaPercent); // Flags: BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414BEF078
	};


	// Class RidingCodeRuntime.RidableComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x370 (0x410 - 0xA0)
	class URidableComponent : public UGameFrameworkComponent	
	{
	public:
		unsigned char UnknownData09_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnRiderStartedRiding; // 0xA8(0x10)
		FMulticastInlineDelegate OnRiderStoppedRiding; // 0xB8(0x10)
		UClass RiderAnimLayerOverlayClass; // 0xC8(0x8)
		FName AttachSocket; // 0xD0(0x4)
		unsigned char UnknownData10_6[0x4]; // 0xD4(0x4) UNKNOWN PROPERTY
		FVector AttachLocationOffset; // 0xD8(0x18)
		FRotator AttachRotationOffset; // 0xF0(0x18)
		FName ClientAttachGuideSocket; // 0x108(0x4)
		unsigned char UnknownData11_6[0x4]; // 0x10C(0x4) UNKNOWN PROPERTY
		FVector ClientAttachGuideLocationOffset; // 0x110(0x18)
		FName RidablePropAttachSocket; // 0x128(0x4)
		unsigned char UnknownData12_6[0x4]; // 0x12C(0x4) UNKNOWN PROPERTY
		FVector RidablePropAttachLocationOffset; // 0x130(0x18)
		FRotator RidablePropAttachRotationOffset; // 0x148(0x18)
		float RidablePropAttachScale; // 0x160(0x4)
		float RidablePropAttachRiderVerticalBuffer; // 0x164(0x4)
		FRidingAttachmentBoundsOverride RiderPropAttachBoundsOverride; // 0x168(0x38)
		bool bOverrideNoiseGeneration; // 0x1A0(0x1)
		unsigned char UnknownData13_6[0x3]; // 0x1A1(0x3) UNKNOWN PROPERTY
		FFortPlayerPawnAthenaMovementNoiseOverride RiderMovementNoiseOverride; // 0x1A4(0xC)
		bool bUsesCameraOverride; // 0x1B0(0x1)
		unsigned char UnknownData14_6[0x7]; // 0x1B1(0x7) UNKNOWN PROPERTY
		UClass CameraModeClassOverride; // 0x1B8(0x8)
		UClass SprintCameraModeClassOverride; // 0x1C0(0x8)
		FScalableFloat UseTargetingAdditionalViewTargetSpaceViewOffsetOverride; // 0x1C8(0x28)
		FInterpOffset TargetingAdditionalViewTargetSpaceViewOffsetOverride; // 0x1F0(0x38)
		FVector WeaponTargetingSourceOffsetModifier; // 0x228(0x18)
		FGameplayTag RidableTag; // 0x240(0x4)
		FGameplayTag EnergyDepletedTag; // 0x244(0x4)
		FDataTableRowHandle PlaylistTagBlacklistRowHandle; // 0x248(0x10)
		URiderComponent ActiveRider; // 0x258(0x8)
		URiderComponent LastRider; // 0x260(0x8)
		USceneComponent RidableProp; // 0x268(0x8)
		float OriginalCapsuleRadius; // 0x270(0x4)
		float OriginalCapsuleHalfHeight; // 0x274(0x4)
		float RidingCapsuleRadius; // 0x278(0x4)
		float RidingCapsuleHalfHeight; // 0x27C(0x4)
		bool bOriginalClientPositionSmoothingThrottlingSetting; // 0x280(0x1)
		bool LockRotationToRidableActor; // 0x281(0x1)
		unsigned char UnknownData15_6[0x6]; // 0x282(0x6) UNKNOWN PROPERTY
		FScalableFloat MaxHalfAimingAngle; // 0x288(0x28)
		TArray PrimaryFireMontageAnimCoreTypeOverrides; // 0x2B0(0x10)
		TArray PrimaryFireMontageTagOverrides; // 0x2C0(0x10)
		FRidingPettingData PettingData; // 0x2D0(0x110)
		FTimerHandle RestoreCollisionHandle; // 0x3E0(0x8)
		unsigned char UnknownData16_6[0x10]; // 0x3E8(0x10) UNKNOWN PROPERTY
		bool bIsSprinting; // 0x3F8(0x1)
		unsigned char UnknownData17_7[0x17]; // 0x3F9(0x17) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RidingCodeRuntime.RidableComponent");
			return ret;
		}

		bool ShouldCameraFocusOnRidable(URiderComponent Rider); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414BF0118
		void OnRep_ActiveRider(); // Flags: Final|Native|Protected 0x7FF414BF0038
		bool IsSprinting(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BEFF58
		bool IsFlying(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BEFE78
		bool IsBeingRidden(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BEFD98
		void HandleRiderStoppedRiding(URiderComponent Rider); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414BEFCB8
		void HandleRiderStartedRiding(URiderComponent Rider); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414BEFBD8
		void HandleRiderEndPlay(AActor Actor, TEnumAsByte EndPlayReason); // Flags: Final|Native|Protected 0x7FF414BEFAF8
		void GetRidingEmoteCapsuleSize(URiderComponent Rider, float OriginalRadius, float OriginalHalfHeight, float& OutRadius, float& OutHalfHeight); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414BEFA18
		void GetRidingCapsuleSize(URiderComponent Rider, float OriginalRadius, float OriginalHalfHeight, float& OutRadius, float& OutHalfHeight); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414BEF938
		USceneComponent GetRidingAttachComponent(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414BEF858
		FRidingPettingData GetPettingData(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BEF778
		FVector GetDismountLaunchVectorOverride(URiderComponent Rider); // Flags: Native|Event|Public|HasDefaults|BlueprintEvent|Const 0x7FF414BEF698
		void CheatSetStaminaPercent(float StaminaPercent); // Flags: BlueprintAuthorityOnly|Event|Public|BlueprintEvent 0x7FF414BEF5B8
		bool CanRiderPlayEmote(URiderComponent Rider); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414BEF4D8
		bool CanBeRiddenBP(URiderComponent Rider); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414BEF3F8
		bool CanBePet(URiderComponent Rider); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414BEF318
	};


	// Class RidingCodeRuntime.ControllableRidableComponent
	// Inherited from URidableComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x3D0 (0x7E0 - 0x410)
	class UControllableRidableComponent : public URidableComponent	
	{
	public:
		FMulticastInlineDelegate OnPrimaryAbilityStarted; // 0x410(0x10)
		FMulticastInlineDelegate OnPrimaryAbilityHeld; // 0x420(0x10)
		FMulticastInlineDelegate OnPrimaryAbilityStopped; // 0x430(0x10)
		FMulticastInlineDelegate OnSecondaryAbilityStarted; // 0x440(0x10)
		FMulticastInlineDelegate OnSecondaryAbilityHeld; // 0x450(0x10)
		FMulticastInlineDelegate OnSecondaryAbilityStopped; // 0x460(0x10)
		FMulticastInlineDelegate OnTertiaryAbilityStarted; // 0x470(0x10)
		FMulticastInlineDelegate OnTertiaryAbilityHeld; // 0x480(0x10)
		FMulticastInlineDelegate OnTertiaryAbilityStopped; // 0x490(0x10)
		bool bUseGravityJump; // 0x4A0(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x4A1(0x7) UNKNOWN PROPERTY
		FGameplayTagQuery IgnoreGravityJumpTagQuery; // 0x4A8(0x48)
		bool bIsControllable; // 0x4F0(0x1)
		bool bHasAbility; // 0x4F1(0x1)
		bool bHasSecondaryAbility; // 0x4F2(0x1)
		bool bHasTertiaryAbility; // 0x4F3(0x1)
		unsigned char UnknownData06_6[0x4]; // 0x4F4(0x4) UNKNOWN PROPERTY
		FText AbilityDisplayText; // 0x4F8(0x10)
		FText SecondaryAbilityDisplayText; // 0x508(0x10)
		FText TertiaryAbilityDisplayText; // 0x518(0x10)
		bool bCanJump; // 0x528(0x1)
		bool bAlwaysMoveForward; // 0x529(0x1)
		unsigned char UnknownData07_6[0x2]; // 0x52A(0x2) UNKNOWN PROPERTY
		float ForwardMoveSpeedMultiplier; // 0x52C(0x4)
		float BackwardMoveSpeedMultiplier; // 0x530(0x4)
		float SidewaysMoveRotationOffset; // 0x534(0x4)
		TEnumAsByte MovementUrgency; // 0x538(0x1)
		bool bIsBeingControlled; // 0x539(0x1)
		unsigned char UnknownData08_6[0x26]; // 0x53A(0x26) UNKNOWN PROPERTY
		FRidableControlParams RidableControlParams; // 0x560(0x208)
		unsigned char UnknownData09_6[0x28]; // 0x768(0x28) UNKNOWN PROPERTY
		FScalableFloat JumpUpwardGravityScale; // 0x790(0x28)
		FScalableFloat JumpDownwardGravityScale; // 0x7B8(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RidingCodeRuntime.ControllableRidableComponent");
			return ret;
		}

		void ServerDoJumpExit(); // Flags: Net|NetReliableNative|Event|Protected|NetServer|BlueprintCallable 0x7FF414BF1618
		void OnRep_IsBeingControlled(); // Flags: Final|Native|Protected 0x7FF414BF1538
		void OnCapsuleBeginOverlap(UPrimitiveComponent OverlappedComp, AActor OtherActor, UPrimitiveComponent OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // Flags: Final|Native|Protected|HasOutParms 0x7FF414BF1458
		bool IsSprintToggleable(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BF1378
		void HandleTertiaryAbilityStopped(); // Flags: Event|Public|BlueprintEvent 0x7FF414BF1298
		void HandleTertiaryAbilityStarted(); // Flags: Event|Public|BlueprintEvent 0x7FF414BF11B8
		void HandleTertiaryAbilityHeld(); // Flags: Event|Public|BlueprintEvent 0x7FF414BF10D8
		void HandleSecondaryAbilityStopped(); // Flags: Event|Public|BlueprintEvent 0x7FF414BF0FF8
		void HandleSecondaryAbilityStarted(); // Flags: Event|Public|BlueprintEvent 0x7FF414BF0F18
		void HandleSecondaryAbilityHeld(); // Flags: Event|Public|BlueprintEvent 0x7FF414BF0E38
		void HandleJumpStopped(); // Flags: Event|Public|BlueprintEvent 0x7FF414BF0D58
		void HandleJumpStarted(); // Flags: Event|Public|BlueprintEvent 0x7FF414BF0C78
		void HandleJumpHeld(); // Flags: Event|Public|BlueprintEvent 0x7FF414BF0B98
		void HandleCancelSprint(bool bAbilityInputHeld, bool bForceCancel); // Flags: Event|Public|BlueprintEvent 0x7FF414BF0AB8
		void HandleAbilityStopped(); // Flags: Event|Public|BlueprintEvent 0x7FF414BF09D8
		void HandleAbilityStarted(); // Flags: Event|Public|BlueprintEvent 0x7FF414BF08F8
		void HandleAbilityHeld(); // Flags: Event|Public|BlueprintEvent 0x7FF414BF0818
		FText GetTertiaryAbilityDisplayText(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BF0738
		FText GetSecondaryAbilityDisplayText(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BF0658
		FText GetAbilityDisplayText(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BF0578
		bool CanStartSprinting(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BF0498
		bool CanJump(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414BF03B8
		void CancelBuildBar(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414BF02D8
		bool CanBeControlled(URiderComponent Rider); // Flags: Native|Event|Public|BlueprintEvent|Const 0x7FF414BF01F8
	};


	// Class RidingCodeRuntime.RiderComponent
	// Inherited from UFortPawnOverrideComponent -> UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x5F0 (0x698 - 0xA8)
	class URiderComponent : public UFortPawnOverrideComponent	
	{
	public:
		unsigned char UnknownData13_3[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnStartedRiding; // 0xB0(0x10)
		FMulticastInlineDelegate OnStoppedRiding; // 0xC0(0x10)
		UClass RidingCameraModeClass; // 0xD0(0x8)
		UClass RidingSprintCameraModeClass; // 0xD8(0x8)
		float RidingCameraModeBlendTime; // 0xE0(0x4)
		unsigned char UnknownData14_6[0x4]; // 0xE4(0x4) UNKNOWN PROPERTY
		FInterpOffset TargetingAdditionalViewTargetSpaceViewOffset; // 0xE8(0x38)
		UClass RiderPropClass; // 0x120(0x8)
		UClass RidablePropClass; // 0x128(0x8)
		FVector RiderPropAttachLocationOffset; // 0x130(0x18)
		FRotator RiderPropAttachRotationOffset; // 0x148(0x18)
		float RiderPropAttachScale; // 0x160(0x4)
		FName RiderPropAttachSocket; // 0x164(0x4)
		bool bUseClientAttachGuideSocket; // 0x168(0x1)
		unsigned char UnknownData15_6[0x7]; // 0x169(0x7) UNKNOWN PROPERTY
		FVector RiderPropAttachSoftBounds; // 0x170(0x18)
		float RiderPropAttachSoftBoundsScalar; // 0x188(0x4)
		unsigned char UnknownData16_6[0x4]; // 0x18C(0x4) UNKNOWN PROPERTY
		FVector RiderPropAttachHardBounds; // 0x190(0x18)
		float RiderPropAttachSoftBoundsTargetingScalar; // 0x1A8(0x4)
		float RiderPropAttachHardBoundsTargetingScalar; // 0x1AC(0x4)
		float RiderPropAttachVerticalBufferTargetingScalar; // 0x1B0(0x4)
		float RidingExitHoldTime; // 0x1B4(0x4)
		FScalableFloat TimeBeforeReenteringRiding; // 0x1B8(0x28)
		FGameplayTag RidingExitStartedEventTag; // 0x1E0(0x4)
		FGameplayTag RidingExitStoppedEventTag; // 0x1E4(0x4)
		UFortInputMappingContext RidingInputContext; // 0x1E8(0x8)
		UInputAction RidingExit; // 0x1F0(0x8)
		UInputAction GamepadRidingExit; // 0x1F8(0x8)
		UFXSystemAsset ConnectorFXAsset; // 0x200(0x8)
		FName ConnectorPropSourceMeshParameterName; // 0x208(0x4)
		FName ConnectorPropTargetMeshParameterName; // 0x20C(0x4)
		float SimulatedSmoothedRotationSpeed; // 0x210(0x4)
		unsigned char UnknownData17_6[0x4]; // 0x214(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer ExcludedEmoteTags; // 0x218(0x20)
		unsigned char UnknownData18_6[0x8]; // 0x238(0x8) UNKNOWN PROPERTY
		URidableComponent ActiveRidable; // 0x240(0x8)
		URidableComponent LastRidable; // 0x248(0x8)
		USceneComponent RiderProp; // 0x250(0x8)
		UFXSystemComponent ConnectorProp; // 0x258(0x8)
		FVector PropAttachSeparation; // 0x260(0x18)
		FVector AdditionalAttachOffset; // 0x278(0x18)
		FVector SoftBoundsAttachmentOffset; // 0x290(0x18)
		FVector HardBoundsAttachmentOffset; // 0x2A8(0x18)
		FDataTableRowHandle PlaylistTagDenylistRowHandle; // 0x2C0(0x10)
		UFortInputComponent RiderInputComponent; // 0x2D0(0x8)
		FGameplayTagContainer PendingFailedEmoteErrorTags; // 0x2D8(0x20)
		FRiderDismountLaunchVelocity ExitLaunchVelocity; // 0x2F8(0xA8)
		FRiderDismountLaunchVelocity JumpExitLaunchVelocity; // 0x3A0(0xA8)
		unsigned char UnknownData19_6[0x8]; // 0x448(0x8) UNKNOWN PROPERTY
		FRidingAnalyticsData_Stopped ActiveAnaltyicsData; // 0x450(0x80)
		FVector RidableLocationLastFrame; // 0x4D0(0x18)
		unsigned char UnknownData20_6[0x8]; // 0x4E8(0x8) UNKNOWN PROPERTY
		FTimerHandle RestoreCollisionHandle; // 0x4F0(0x8)
		FRidableControlRuntimeData RidableControlRuntimeData; // 0x4F8(0x40)
		bool bIsSprintingReplay : 1; // 0x538:0(0x1)
		unsigned char UnknownData21_5[0x3]; // 0x539(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr ClampedController; // 0x53C(0x8)
		bool bIsPetting; // 0x544(0x1)
		unsigned char UnknownData22_6[0x3]; // 0x545(0x3) UNKNOWN PROPERTY
		FScalableFloat RidingCapsuleHalfHeight; // 0x548(0x28)
		FScalableFloat RidingCapsuleRadius; // 0x570(0x28)
		unsigned char UnknownData23_6[0x10]; // 0x598(0x10) UNKNOWN PROPERTY
		FCollisionProfileName CollisionProfileName; // 0x5A8(0x4)
		unsigned char UnknownData24_6[0x4]; // 0x5AC(0x4) UNKNOWN PROPERTY
		FScalableFloat TraceRadius; // 0x5B0(0x28)
		FScalableFloat TraceLength; // 0x5D8(0x28)
		bool bPreventExitRidingFromInput; // 0x600(0x1)
		unsigned char UnknownData25_7[0x97]; // 0x601(0x97) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RidingCodeRuntime.RiderComponent");
			return ret;
		}

		bool StopRidingActor(bool bLaunchRider, bool bFindDismountLocation, bool bIsJumpExit); // Flags: BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414BF2CD8
		bool StartRidingActor(AActor TargetActor); // Flags: BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414BF2BF8
		void SetRidingInputEnabled(bool bEnabled); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BF2B18
		void ServerRidingExit(); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate 0x7FF414BF2A38
		void OnRep_RidableControlRuntimeUpdated(); // Flags: Final|Native|Protected 0x7FF414BF2958
		void OnRep_IsSprintingReplay(); // Flags: Final|Native|Protected 0x7FF414BF2878
		void OnRep_ActiveRidable(); // Flags: Final|Native|Protected 0x7FF414BF2798
		void OnMovementModeChanged(ACharacter InCharacter, TEnumAsByte PrevMovementMode, char PreviousCustomMode); // Flags: Final|Native|Protected 0x7FF414BF26B8
		bool IsRidingActor(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BF25D8
		void HandleStoppedRiding(URidableComponent Ridable); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414BF24F8
		void HandleStartedRiding(URidableComponent Ridable); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414BF2418
		void HandleRidingExitReleased(); // Flags: Final|Native|Protected 0x7FF414BF2338
		void HandleRidingExitPressed(); // Flags: Final|Native|Protected 0x7FF414BF2258
		void HandleRiderTakenDamage(AActor DamageOnOwnerPawnDamageddActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Protected|HasDefaults 0x7FF414BF2178
		void HandleRiderDidDamage(AActor DamagedActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent HitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Protected|HasDefaults 0x7FF414BF2098
		void HandleRidableMovementModeChanged(ACharacter InCharacter, TEnumAsByte PrevMovementMode, char PreviousCustomMode); // Flags: Final|Native|Protected 0x7FF414BF1FB8
		void HandleRidableFound(FHitResult& HitResult); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414BF1ED8
		void HandlePawnTeleported(AFortPawn TeleportedPawn); // Flags: Final|Native|Protected 0x7FF414BF1DF8
		void HandlePawnDiedWhileRiding(AFortPawn DeadPawn); // Flags: Final|Native|Protected 0x7FF414BF1D18
		void HandleOnWeaponEquipped(AFortWeapon NewWeapon, AFortWeapon PrevWeapon); // Flags: Final|Native|Protected 0x7FF414BF1C38
		void HandleGamepadRidingExitReleased(); // Flags: Final|Native|Protected 0x7FF414BF1B58
		void HandleDeferredExitVelocity(FVector ExitVelocity); // Flags: Final|Native|Protected|HasDefaults 0x7FF414BF1A78
		void HandleDBNOWhileRiding(); // Flags: Final|Native|Protected 0x7FF414BF1998
		void HandleActorEndPlayWhileRiding(AActor Actor, TEnumAsByte EndPlayReason); // Flags: Final|Native|Protected 0x7FF414BF18B8
		void ClientNotifyEmoteFailure(FGameplayTagContainer ErrorTags); // Flags: Net|NetReliableNative|Event|Protected|NetClient 0x7FF414BF17D8
		void ClientHandleFinishedCharacterCustomization(AFortPlayerPawn PlayerPawn); // Flags: Final|Native|Protected 0x7FF414BF16F8
	};


	// Class RidingCodeRuntime.ControllingRiderComponent
	// Inherited from URiderComponent -> UFortPawnOverrideComponent -> UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x78 (0x710 - 0x698)
	class UControllingRiderComponent : public URiderComponent	
	{
	public:
		UFortInputMappingContext ControllingRidingInputContext; // 0x698(0x8)
		UInputAction RidingAbility; // 0x6A0(0x8)
		UInputAction GamepadRidingAbility; // 0x6A8(0x8)
		UInputAction SecondaryRidingAbility; // 0x6B0(0x8)
		UInputAction GamepadSecondaryRidingAbility; // 0x6B8(0x8)
		UInputAction TertiaryRidingAbility; // 0x6C0(0x8)
		UInputAction GamepadTertiaryRidingAbility; // 0x6C8(0x8)
		bool bCanControlRidable; // 0x6D0(0x1)
		bool bIsControllingRidable; // 0x6D1(0x1)
		ERidingControlInputStyle ControlInputStyle; // 0x6D2(0x1)
		unsigned char UnknownData04_6[0xD]; // 0x6D3(0xD) UNKNOWN PROPERTY
		FRidingControlInputState ReplicatedControlInputState; // 0x6E0(0xC)
		FRidingControlInputStateReliable ReplicatedControlInputStateReliable; // 0x6EC(0x1)
		FRidingControlInputStateUnreliable ReplicatedControlInputStateUnreliable; // 0x6ED(0x2)
		unsigned char UnknownData05_6[0x1]; // 0x6EF(0x1) UNKNOWN PROPERTY
		UFortInputComponent ControllingRiderInputComponent; // 0x6F0(0x8)
		unsigned char UnknownData06_6[0x10]; // 0x6F8(0x10) UNKNOWN PROPERTY
		float AutoRunDoubleTapTimestamp; // 0x708(0x4)
		bool bCanBePet; // 0x70C(0x1)
		unsigned char UnknownData07_7[0x3]; // 0x70D(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RidingCodeRuntime.ControllingRiderComponent");
			return ret;
		}

		void UpdateFromInput(float DeltaTime, FRidingControlInputState& InputState); // Flags: Native|Event|Protected|HasOutParms|BlueprintEvent 0x7FF414BF4398
		void ServerUpdateControlInputStateUnreliable(FRidingControlInputStateUnreliable InputState); // Flags: Net|Native|Event|Protected|NetServer|NetValidate 0x7FF414BF42B8
		void ServerUpdateControlInputStateReliable(FRidingControlInputStateReliable InputState); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate 0x7FF414BF41D8
		void ServerCancelPetting(); // Flags: Net|NetReliableNative|Event|Protected|NetServer 0x7FF414BF40F8
		void ReloadPressed(); // Flags: Final|Native|Protected 0x7FF414BF4018
		void OnSprintCanceled(); // Flags: Net|NetReliableNative|Event|Protected|NetServer 0x7FF414BF3F38
		void OnRep_IsControllingRidable(); // Flags: Final|Native|Protected 0x7FF414BF3E58
		void OnRep_ControlInputUnreliable(); // Flags: Final|Native|Protected 0x7FF414BF3D78
		void OnRep_ControlInputReliable(); // Flags: Final|Native|Protected 0x7FF414BF3C98
		bool IsTryingToMove(float Tolerance); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414BF3BB8
		void HandleTertiaryRidingAbilityReleased(); // Flags: Final|Native|Protected 0x7FF414BF3AD8
		void HandleTertiaryRidingAbilityPressed(); // Flags: Final|Native|Protected 0x7FF414BF39F8
		void HandleSpotActorOrPettingAbilityReleased(); // Flags: Final|Native|Protected 0x7FF414BF3918
		void HandleSpotActorOrPettingAbilityPressed(); // Flags: Final|Native|Protected 0x7FF414BF3838
		void HandleSecondaryRidingAbilityReleased(); // Flags: Final|Native|Protected 0x7FF414BF3758
		void HandleSecondaryRidingAbilityPressed(); // Flags: Final|Native|Protected 0x7FF414BF3678
		void HandleRidingAbilityReleased(); // Flags: Final|Native|Protected 0x7FF414BF3598
		void HandleRidingAbilityPressed(); // Flags: Final|Native|Protected 0x7FF414BF34B8
		void HandleRequestPettingStop(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BF33D8
		void HandleRequestPettingStart(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BF32F8
		void HandlePettingAbilityPressed(); // Flags: Final|Native|Protected 0x7FF414BF3218
		void HandleGamepadRidingAbilityPressed(); // Flags: Final|Native|Protected 0x7FF414BF3138
		FRidingControlInputState GetControlInputState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BF3058
		void ControllingActor_OnMoveRight(float Val); // Flags: Final|Native|Protected 0x7FF414BF2F78
		void ControllingActor_OnMoveForward(float Val); // Flags: Final|Native|Protected 0x7FF414BF2E98
		void ControllingActor_OnJumpInput(bool bPressed); // Flags: Final|Native|Protected 0x7FF414BF2DB8
	};


	// Class RidingCodeRuntime.FortCameraMode_Riding
	// Inherited from UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x20 (0x1D20 - 0x1D00)
	class UFortCameraMode_Riding : public UFortCameraMode_ThirdPerson	
	{
	public:
		FVector OriginOffset; // 0x1D00(0x18)
		unsigned char UnknownData01_7[0x8]; // 0x1D18(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RidingCodeRuntime.FortCameraMode_Riding");
			return ret;
		}
	};


	// Class RidingCodeRuntime.RidingGameStateMutator
	// Inherited from AFortAthenaMutator -> AFortGameplayMutator -> AInfo -> AActor -> UObject
	// Size: 0x0 (0x338 - 0x338)
	class ARidingGameStateMutator : public AFortAthenaMutator	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RidingCodeRuntime.RidingGameStateMutator");
			return ret;
		}
	};


	// Class RidingCodeRuntime.RidingAnalytics
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class URidingAnalytics : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RidingCodeRuntime.RidingAnalytics");
			return ret;
		}
	};


	// Class RidingCodeRuntime.FortAthenaPettingWildlifeTelemetryData
	// Inherited from UFortAthenaAITelemetryData -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UFortAthenaPettingWildlifeTelemetryData : public UFortAthenaAITelemetryData	
	{
	public:
		int32_t PetCount; // 0x28(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RidingCodeRuntime.FortAthenaPettingWildlifeTelemetryData");
			return ret;
		}

		void OnPetted(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BF4478
	};

}
