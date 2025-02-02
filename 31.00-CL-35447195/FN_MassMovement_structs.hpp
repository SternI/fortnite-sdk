#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MassMovement
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct MassMovement.MassVelocityFragment
	// Inherited from FMassFragment
	// Size: 0x18 (0x18 - 0x0)
	struct FMassVelocityFragment : public FMassFragment	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct MassMovement.MassForceFragment
	// Inherited from FMassFragment
	// Size: 0x18 (0x18 - 0x0)
	struct FMassForceFragment : public FMassFragment	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct MassMovement.MassMovementParameters
	// Inherited from FMassConstSharedFragment
	// Size: 0x28 (0x28 - 0x0)
	struct FMassMovementParameters : public FMassConstSharedFragment	
	{
	public:
		float MaxSpeed; // 0x0(0x4)
		float MaxAcceleration; // 0x4(0x4)
		float DefaultDesiredSpeed; // 0x8(0x4)
		float DefaultDesiredSpeedVariance; // 0xC(0x4)
		float HeightSmoothingTime; // 0x10(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		TArray MovementStyles; // 0x18(0x10)
	};


	// Struct MassMovement.MassMovementStyleParameters
	// Size: 0x28 (0x28 - 0x0)
	struct FMassMovementStyleParameters	
	{
	public:
		FMassMovementStyleRef Style; // 0x0(0x14)
		unsigned char UnknownData01_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		TArray DesiredSpeeds; // 0x18(0x10)
	};


	// Struct MassMovement.MassMovementStyleSpeedParameters
	// Size: 0x10 (0x10 - 0x0)
	struct FMassMovementStyleSpeedParameters	
	{
	public:
		float Speed; // 0x0(0x4)
		float Variance; // 0x4(0x4)
		float Probability; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct MassMovement.MassMovementStyleRef
	// Size: 0x14 (0x14 - 0x0)
	struct FMassMovementStyleRef	
	{
	public:
		FName Name; // 0x0(0x4)
		FGuid ID; // 0x4(0x10)
	};


	// Struct MassMovement.MassMovementStyle
	// Size: 0x14 (0x14 - 0x0)
	struct FMassMovementStyle	
	{
	public:
		FName Name; // 0x0(0x4)
		FGuid ID; // 0x4(0x10)
	};


	// Struct MassMovement.MassSimpleMovementTag
	// Inherited from FMassTag
	// Size: 0x0 (0x1 - 0x1)
	struct FMassSimpleMovementTag : public FMassTag	
	{
	public:
	};

}
