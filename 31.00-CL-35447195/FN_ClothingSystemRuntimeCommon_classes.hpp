#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ClothingSystemRuntimeCommon
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class ClothingSystemRuntimeCommon.ClothConfigCommon
	// Inherited from UClothConfigBase -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UClothConfigCommon : public UClothConfigBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ClothingSystemRuntimeCommon.ClothConfigCommon");
			return ret;
		}
	};


	// Class ClothingSystemRuntimeCommon.ClothSharedConfigCommon
	// Inherited from UClothConfigCommon -> UClothConfigBase -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UClothSharedConfigCommon : public UClothConfigCommon	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ClothingSystemRuntimeCommon.ClothSharedConfigCommon");
			return ret;
		}
	};


	// Class ClothingSystemRuntimeCommon.ClothingAssetCustomData
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UClothingAssetCustomData : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ClothingSystemRuntimeCommon.ClothingAssetCustomData");
			return ret;
		}
	};


	// Class ClothingSystemRuntimeCommon.ClothingAssetCommon
	// Inherited from UClothingAssetBase -> UObject
	// Size: 0xA0 (0xE8 - 0x48)
	class UClothingAssetCommon : public UClothingAssetBase	
	{
	public:
		UPhysicsAsset PhysicsAsset; // 0x48(0x8)
		TMap ClothConfigs; // 0x50(0x50)
		TArray LODData; // 0xA0(0x10)
		TArray LodMap; // 0xB0(0x10)
		TArray UsedBoneNames; // 0xC0(0x10)
		TArray UsedBoneIndices; // 0xD0(0x10)
		int32_t ReferenceBoneIndex; // 0xE0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xE4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ClothingSystemRuntimeCommon.ClothingAssetCommon");
			return ret;
		}
	};


	// Class ClothingSystemRuntimeCommon.ClothLODDataCommon_Legacy
	// Inherited from UObject
	// Size: 0x190 (0x1B8 - 0x28)
	class UClothLODDataCommon_Legacy : public UObject	
	{
	public:
		UClothPhysicalMeshDataBase_Legacy PhysicalMeshData; // 0x28(0x8)
		FClothPhysicalMeshData ClothPhysicalMeshData; // 0x30(0x128)
		FClothCollisionData CollisionData; // 0x158(0x40)
		unsigned char UnknownData01_7[0x20]; // 0x198(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ClothingSystemRuntimeCommon.ClothLODDataCommon_Legacy");
			return ret;
		}
	};

}
