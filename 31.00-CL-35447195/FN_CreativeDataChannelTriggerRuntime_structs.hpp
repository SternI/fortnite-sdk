#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CreativeDataChannelTriggerRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct CreativeDataChannelTriggerRuntime.CDCStringFloatArrayMap
	// Size: 0x50 (0x50 - 0x0)
	struct FCDCStringFloatArrayMap	
	{
	public:
		TMap Data; // 0x0(0x50)
	};


	// Struct CreativeDataChannelTriggerRuntime.CDCFloatArray
	// Size: 0x10 (0x10 - 0x0)
	struct FCDCFloatArray	
	{
	public:
		TArray Data; // 0x0(0x10)
	};


	// Struct CreativeDataChannelTriggerRuntime.CDCStringFloatMap
	// Size: 0x50 (0x50 - 0x0)
	struct FCDCStringFloatMap	
	{
	public:
		TMap Data; // 0x0(0x50)
	};


	// Struct CreativeDataChannelTriggerRuntime.CDCStringIntMap
	// Size: 0x50 (0x50 - 0x0)
	struct FCDCStringIntMap	
	{
	public:
		TMap Data; // 0x0(0x50)
	};


	// Struct CreativeDataChannelTriggerRuntime.CDCInt
	// Size: 0x4 (0x4 - 0x0)
	struct FCDCInt	
	{
	public:
		int32_t Data; // 0x0(0x4)
	};


	// Struct CreativeDataChannelTriggerRuntime.CDCLargeInt
	// Size: 0x8 (0x8 - 0x0)
	struct FCDCLargeInt	
	{
	public:
		int64_t Data; // 0x0(0x8)
	};


	// Struct CreativeDataChannelTriggerRuntime.CDCStringStringMap
	// Size: 0xA0 (0xA0 - 0x0)
	struct FCDCStringStringMap	
	{
	public:
		TMap Data; // 0x0(0x50)
		TMap ExtraData; // 0x50(0x50)
	};


	// Struct CreativeDataChannelTriggerRuntime.CDCString
	// Size: 0x10 (0x10 - 0x0)
	struct FCDCString	
	{
	public:
		FString Data; // 0x0(0x10)
	};


	// Struct CreativeDataChannelTriggerRuntime.CDCStringArray
	// Size: 0x18 (0x18 - 0x0)
	struct FCDCStringArray	
	{
	public:
		TArray Data; // 0x0(0x10)
		int32_t ExtraData; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct CreativeDataChannelTriggerRuntime.CreativeDataChannelEvents
	// Size: 0x10 (0x10 - 0x0)
	struct FCreativeDataChannelEvents	
	{
	public:
		TArray Events; // 0x0(0x10)
	};


	// Struct CreativeDataChannelTriggerRuntime.CreativeDataChannelEvent
	// Size: 0xC (0xC - 0x0)
	struct FCreativeDataChannelEvent	
	{
	public:
		FName EventName; // 0x0(0x4)
		FName Parameters; // 0x4(0x4)
		FName TriggerCondition; // 0x8(0x4)
	};

}
