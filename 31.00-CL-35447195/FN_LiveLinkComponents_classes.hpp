#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: LiveLinkComponents
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class LiveLinkComponents.LiveLinkComponentSettings
	// Inherited from UObject
	// Size: 0x58 (0x80 - 0x28)
	class ULiveLinkComponentSettings : public UObject	
	{
	public:
		TMap DefaultControllerForRole; // 0x28(0x50)
		bool bUpdateSubjectsImmediatelyInPIE; // 0x78(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x79(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLinkComponents.LiveLinkComponentSettings");
			return ret;
		}
	};


	// Class LiveLinkComponents.LiveLinkControllerBase
	// Inherited from UObject
	// Size: 0x40 (0x68 - 0x28)
	class ULiveLinkControllerBase : public UObject	
	{
	public:
		FComponentReference ComponentPicker; // 0x28(0x28)
		unsigned char UnknownData01_7[0x18]; // 0x50(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLinkComponents.LiveLinkControllerBase");
			return ret;
		}
	};


	// Class LiveLinkComponents.LiveLinkLightController
	// Inherited from ULiveLinkControllerBase -> UObject
	// Size: 0x0 (0x68 - 0x68)
	class ULiveLinkLightController : public ULiveLinkControllerBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLinkComponents.LiveLinkLightController");
			return ret;
		}
	};


	// Class LiveLinkComponents.LiveLinkTransformController
	// Inherited from ULiveLinkControllerBase -> UObject
	// Size: 0x8 (0x70 - 0x68)
	class ULiveLinkTransformController : public ULiveLinkControllerBase	
	{
	public:
		FLiveLinkTransformControllerData TransformData; // 0x68(0x6)
		unsigned char UnknownData01_7[0x2]; // 0x6E(0x2) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLinkComponents.LiveLinkTransformController");
			return ret;
		}
	};


	// Class LiveLinkComponents.LiveLinkComponentController
	// Inherited from UActorComponent -> UObject
	// Size: 0xA8 (0x148 - 0xA0)
	class ULiveLinkComponentController : public UActorComponent	
	{
	public:
		FLiveLinkSubjectRepresentation SubjectRepresentation; // 0xA0(0x10)
		TMap ControllerMap; // 0xB0(0x50)
		bool bUpdateInEditor; // 0x100(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x101(0x7) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnLiveLinkUpdated; // 0x108(0x10)
		FMulticastInlineDelegate OnControllerMapUpdatedDelegate; // 0x118(0x10)
		bool bDisableEvaluateLiveLinkWhenSpawnable; // 0x128(0x1)
		bool bEvaluateLiveLink; // 0x129(0x1)
		bool bUpdateInPreviewEditor; // 0x12A(0x1)
		unsigned char UnknownData03_7[0x1D]; // 0x12B(0x1D) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLinkComponents.LiveLinkComponentController");
			return ret;
		}

		void SetSubjectRepresentation(FLiveLinkSubjectRepresentation InSubjectRepresentation); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EB3C00
		FLiveLinkSubjectRepresentation GetSubjectRepresentation(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EB3B20
	};

}
