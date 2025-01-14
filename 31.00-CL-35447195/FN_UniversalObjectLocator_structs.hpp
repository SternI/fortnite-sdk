#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: UniversalObjectLocator
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct UniversalObjectLocator.DirectPathObjectLocator
	// Size: 0x18 (0x18 - 0x0)
	struct FDirectPathObjectLocator	
	{
	public:
		FSoftObjectPath Path; // 0x0(0x18)
	};


	// Struct UniversalObjectLocator.SubObjectLocator
	// Size: 0x10 (0x10 - 0x0)
	struct FSubObjectLocator	
	{
	public:
		FString PathWithinContext; // 0x0(0x10)
	};


	// Struct UniversalObjectLocator.UniversalObjectLocator
	// Size: 0x10 (0x10 - 0x0)
	struct FUniversalObjectLocator	
	{
	public:
		TArray Fragments; // 0x0(0x10)
	};


	// Struct UniversalObjectLocator.UniversalObjectLocatorFragment
	// Size: 0x20 (0x20 - 0x0)
	struct FUniversalObjectLocatorFragment	
	{
	public:
		unsigned char UnknownData01_2[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
	};


	// Struct UniversalObjectLocator.UniversalObjectLocatorEmptyPayload
	// Size: 0x1 (0x1 - 0x0)
	struct FUniversalObjectLocatorEmptyPayload	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};

}
