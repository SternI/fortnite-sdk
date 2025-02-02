#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: OnlineSubsystem
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/OnlineSubsystem.EInAppPurchaseState
	enum EInAppPurchaseState
	{
		EInAppPurchaseState__Unknown = 0,
		EInAppPurchaseState__Success = 1,
		EInAppPurchaseState__Failed = 2,
		EInAppPurchaseState__Cancelled = 3,
		EInAppPurchaseState__Invalid = 4,
		EInAppPurchaseState__NotAllowed = 5,
		EInAppPurchaseState__Restored = 6,
		EInAppPurchaseState__AlreadyOwned = 7,
	};


	// Enum /Script/OnlineSubsystem.EMPMatchOutcome
	enum EMPMatchOutcome
	{
		EMPMatchOutcome__None = 0,
		EMPMatchOutcome__Quit = 1,
		EMPMatchOutcome__Won = 2,
		EMPMatchOutcome__Lost = 3,
		EMPMatchOutcome__Tied = 4,
		EMPMatchOutcome__TimeExpired = 5,
		EMPMatchOutcome__First = 6,
		EMPMatchOutcome__Second = 7,
		EMPMatchOutcome__Third = 8,
		EMPMatchOutcome__Fourth = 9,
	};

}
