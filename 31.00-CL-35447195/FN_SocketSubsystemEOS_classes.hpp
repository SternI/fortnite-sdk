#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SocketSubsystemEOS
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class SocketSubsystemEOS.NetConnectionEOS
	// Inherited from UIpConnection -> UNetConnection -> UPlayer -> UObject
	// Size: 0x8 (0x1EA8 - 0x1EA0)
	class UNetConnectionEOS : public UIpConnection	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x1EA0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SocketSubsystemEOS.NetConnectionEOS");
			return ret;
		}
	};


	// Class SocketSubsystemEOS.NetDriverEOSBase
	// Inherited from UIpNetDriver -> UNetDriver -> UObject
	// Size: 0x8 (0x948 - 0x940)
	class UNetDriverEOSBase : public UIpNetDriver	
	{
	public:
		bool bIsPassthrough; // 0x940(0x1)
		bool bIsUsingP2PSockets; // 0x941(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x942(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SocketSubsystemEOS.NetDriverEOSBase");
			return ret;
		}
	};

}
