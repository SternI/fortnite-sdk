#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: GrappleWeaponRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct GrappleWeaponRuntime.GrappleWeaponLedgeConfig
	// Size: 0x78 (0x78 - 0x0)
	struct FGrappleWeaponLedgeConfig	
	{
	public:
		FScalableFloat VerticalSurfaceThreshold; // 0x0(0x28)
		FScalableFloat LedgeHeightCapsuleMultiplier; // 0x28(0x28)
		FScalableFloat ShouldTreatWalkableSurfaceAsLedge; // 0x50(0x28)
	};


	// Struct GrappleWeaponRuntime.GrappleWeaponTargetingConfig
	// Size: 0x178 (0x178 - 0x0)
	struct FGrappleWeaponTargetingConfig	
	{
	public:
		FGrappleWeaponLedgeConfig LedgeConfig; // 0x0(0x78)
		FScalableFloat PawnTraceRadius; // 0x78(0x28)
		FScalableFloat SecondaryTraceRadius; // 0xA0(0x28)
		FScalableFloat SecondaryTraceStartDistance; // 0xC8(0x28)
		FScalableFloat MinHitDistance; // 0xF0(0x28)
		FScalableFloat MaxHitDistance; // 0x118(0x28)
		FScalableFloat TraceDownDistance; // 0x140(0x28)
		float ProjectileRadius; // 0x168(0x4)
		float TraceForwardOffset; // 0x16C(0x4)
		float TraceMaxAngle; // 0x170(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x174(0x4) UNKNOWN PROPERTY
	};


	// Struct GrappleWeaponRuntime.GrappleWeaponTargetInfo
	// Size: 0x38 (0x38 - 0x0)
	struct FGrappleWeaponTargetInfo	
	{
	public:
		bool bHitTarget; // 0x0(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr TargetActor; // 0x4(0x8)
		TWeakObjectPtr TargetComponent; // 0xC(0x8)
		unsigned char UnknownData04_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FVector TargetPoint; // 0x18(0x18)
		float HitDistance; // 0x30(0x4)
		unsigned char UnknownData05_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
	};

}
