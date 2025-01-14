#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: GameInputBase
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct GameInputBase.GameInputDeviceIdentifier
	// Size: 0x4 (0x4 - 0x0)
	struct FGameInputDeviceIdentifier	
	{
	public:
		uint16_t VendorId; // 0x0(0x2)
		uint16_t ProductID; // 0x2(0x2)
	};


	// Struct GameInputBase.GameInputControllerAxisData
	// Size: 0x10 (0x10 - 0x0)
	struct FGameInputControllerAxisData	
	{
	public:
		FName KeyName; // 0x0(0x4)
		float DeadZone; // 0x4(0x4)
		float Scalar; // 0x8(0x4)
		bool bIsPackedPositveAndNegative; // 0xC(0x1)
		unsigned char UnknownData01_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};


	// Struct GameInputBase.GameInputRawDeviceReportData
	// Size: 0x68 (0x68 - 0x0)
	struct FGameInputRawDeviceReportData	
	{
	public:
		FName KeyName; // 0x0(0x4)
		bool bIgnoreAnalogInputDeviceScopeForThisRawReport; // 0x4(0x1)
		ERawDeviceReportTranslationBehavior TranslationBehavior; // 0x5(0x1)
		char AnalogDeadzone; // 0x6(0x1)
		unsigned char UnknownData03_6[0x1]; // 0x7(0x1) UNKNOWN PROPERTY
		float Scalar; // 0x8(0x4)
		unsigned char UnknownData04_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		TMap ButtonBitMaskMappings; // 0x10(0x50)
		char LowerBitAxisIndex; // 0x60(0x1)
		char HigherBitAxisIndex; // 0x61(0x1)
		unsigned char UnknownData05_7[0x6]; // 0x62(0x6) UNKNOWN PROPERTY
	};


	// Struct GameInputBase.GameInputDeviceConfiguration
	// Size: 0x118 (0x118 - 0x0)
	struct FGameInputDeviceConfiguration	
	{
	public:
		FGameInputDeviceIdentifier DeviceIdentifier; // 0x0(0x4)
		bool bOverrideHardwareDeviceIdString; // 0x4(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		FString OverriddenHardwareDeviceId; // 0x8(0x10)
		bool bProcessControllerButtons; // 0x18(0x1)
		bool bProcessControllerSwitchState; // 0x19(0x1)
		bool bProcessControllerAxis; // 0x1A(0x1)
		unsigned char UnknownData04_6[0x5]; // 0x1B(0x5) UNKNOWN PROPERTY
		TMap ControllerButtonMappingData; // 0x20(0x50)
		TMap ControllerAxisMappingData; // 0x70(0x50)
		bool bProcessRawReportData; // 0xC0(0x1)
		unsigned char UnknownData05_6[0x3]; // 0xC1(0x3) UNKNOWN PROPERTY
		uint32_t RawReportReadingId; // 0xC4(0x4)
		TMap RawReportMappingData; // 0xC8(0x50)
	};

}
