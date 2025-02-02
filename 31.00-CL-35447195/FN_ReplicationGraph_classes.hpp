#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ReplicationGraph
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class ReplicationGraph.ReplicationGraph
	// Inherited from UReplicationDriver -> UObject
	// Size: 0x548 (0x570 - 0x28)
	class UReplicationGraph : public UReplicationDriver	
	{
	public:
		UClass ReplicationConnectionManagerClass; // 0x28(0x8)
		UNetDriver NetDriver; // 0x30(0x8)
		TArray Connections; // 0x38(0x10)
		TArray PendingConnections; // 0x48(0x10)
		unsigned char UnknownData03_6[0x40]; // 0x58(0x40) UNKNOWN PROPERTY
		TArray GlobalGraphNodes; // 0x98(0x10)
		TArray PrepareForReplicationNodes; // 0xA8(0x10)
		unsigned char UnknownData04_6[0xE8]; // 0xB8(0xE8) UNKNOWN PROPERTY
		TSet ActiveNetworkActors; // 0x1A0(0x50)
		unsigned char UnknownData05_7[0x380]; // 0x1F0(0x380) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ReplicationGraph.ReplicationGraph");
			return ret;
		}
	};


	// Class ReplicationGraph.BasicReplicationGraph
	// Inherited from UReplicationGraph -> UReplicationDriver -> UObject
	// Size: 0x30 (0x5A0 - 0x570)
	class UBasicReplicationGraph : public UReplicationGraph	
	{
	public:
		UReplicationGraphNode_GridSpatialization2D GridNode; // 0x570(0x8)
		UReplicationGraphNode_ActorList AlwaysRelevantNode; // 0x578(0x8)
		TArray AlwaysRelevantForConnectionList; // 0x580(0x10)
		TArray ActorsWithoutNetConnection; // 0x590(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ReplicationGraph.BasicReplicationGraph");
			return ret;
		}
	};


	// Class ReplicationGraph.ReplicationGraphNode
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UReplicationGraphNode : public UObject	
	{
	public:
		TArray AllChildNodes; // 0x28(0x10)
		unsigned char UnknownData01_7[0x18]; // 0x38(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ReplicationGraph.ReplicationGraphNode");
			return ret;
		}
	};


	// Class ReplicationGraph.ReplicationGraphNode_ActorList
	// Inherited from UReplicationGraphNode -> UObject
	// Size: 0x80 (0xD0 - 0x50)
	class UReplicationGraphNode_ActorList : public UReplicationGraphNode	
	{
	public:
		unsigned char UnknownData01_1[0x80]; // 0x50(0x80) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ReplicationGraph.ReplicationGraphNode_ActorList");
			return ret;
		}
	};


	// Class ReplicationGraph.ReplicationGraphNode_ActorListFrequencyBuckets
	// Inherited from UReplicationGraphNode -> UObject
	// Size: 0xB8 (0x108 - 0x50)
	class UReplicationGraphNode_ActorListFrequencyBuckets : public UReplicationGraphNode	
	{
	public:
		unsigned char UnknownData01_1[0xB8]; // 0x50(0xB8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ReplicationGraph.ReplicationGraphNode_ActorListFrequencyBuckets");
			return ret;
		}
	};


	// Class ReplicationGraph.ReplicationGraphNode_DynamicSpatialFrequency
	// Inherited from UReplicationGraphNode_ActorList -> UReplicationGraphNode -> UObject
	// Size: 0x30 (0x100 - 0xD0)
	class UReplicationGraphNode_DynamicSpatialFrequency : public UReplicationGraphNode_ActorList	
	{
	public:
		unsigned char UnknownData01_1[0x30]; // 0xD0(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ReplicationGraph.ReplicationGraphNode_DynamicSpatialFrequency");
			return ret;
		}
	};


	// Class ReplicationGraph.ReplicationGraphNode_ConnectionDormancyNode
	// Inherited from UReplicationGraphNode_ActorList -> UReplicationGraphNode -> UObject
	// Size: 0x80 (0x150 - 0xD0)
	class UReplicationGraphNode_ConnectionDormancyNode : public UReplicationGraphNode_ActorList	
	{
	public:
		unsigned char UnknownData01_1[0x80]; // 0xD0(0x80) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ReplicationGraph.ReplicationGraphNode_ConnectionDormancyNode");
			return ret;
		}
	};


	// Class ReplicationGraph.ReplicationGraphNode_DormancyNode
	// Inherited from UReplicationGraphNode_ActorList -> UReplicationGraphNode -> UObject
	// Size: 0x10 (0xE0 - 0xD0)
	class UReplicationGraphNode_DormancyNode : public UReplicationGraphNode_ActorList	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0xD0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ReplicationGraph.ReplicationGraphNode_DormancyNode");
			return ret;
		}
	};


	// Class ReplicationGraph.ReplicationGraphNode_GridCell
	// Inherited from UReplicationGraphNode_ActorList -> UReplicationGraphNode -> UObject
	// Size: 0x50 (0x120 - 0xD0)
	class UReplicationGraphNode_GridCell : public UReplicationGraphNode_ActorList	
	{
	public:
		unsigned char UnknownData01_3[0x40]; // 0xD0(0x40) UNKNOWN PROPERTY
		UReplicationGraphNode DynamicNode; // 0x110(0x8)
		UReplicationGraphNode_DormancyNode DormancyNode; // 0x118(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ReplicationGraph.ReplicationGraphNode_GridCell");
			return ret;
		}
	};


	// Class ReplicationGraph.ReplicationGraphNode_GridSpatialization2D
	// Inherited from UReplicationGraphNode -> UObject
	// Size: 0x230 (0x280 - 0x50)
	class UReplicationGraphNode_GridSpatialization2D : public UReplicationGraphNode	
	{
	public:
		unsigned char UnknownData01_1[0x230]; // 0x50(0x230) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ReplicationGraph.ReplicationGraphNode_GridSpatialization2D");
			return ret;
		}
	};


	// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant
	// Inherited from UReplicationGraphNode -> UObject
	// Size: 0x18 (0x68 - 0x50)
	class UReplicationGraphNode_AlwaysRelevant : public UReplicationGraphNode	
	{
	public:
		UReplicationGraphNode ChildNode; // 0x50(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x58(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ReplicationGraph.ReplicationGraphNode_AlwaysRelevant");
			return ret;
		}
	};


	// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection
	// Inherited from UReplicationGraphNode_ActorList -> UReplicationGraphNode -> UObject
	// Size: 0x70 (0x140 - 0xD0)
	class UReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode_ActorList	
	{
	public:
		unsigned char UnknownData02_3[0x10]; // 0xD0(0x10) UNKNOWN PROPERTY
		TArray PastRelevantActors; // 0xE0(0x10)
		unsigned char UnknownData03_7[0x50]; // 0xF0(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection");
			return ret;
		}
	};


	// Class ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection
	// Inherited from UReplicationGraphNode -> UObject
	// Size: 0x20 (0x70 - 0x50)
	class UReplicationGraphNode_TearOff_ForConnection : public UReplicationGraphNode	
	{
	public:
		TArray TearOffActors; // 0x50(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x60(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection");
			return ret;
		}
	};


	// Class ReplicationGraph.NetReplicationGraphConnection
	// Inherited from UReplicationConnectionDriver -> UObject
	// Size: 0x350 (0x378 - 0x28)
	class UNetReplicationGraphConnection : public UReplicationConnectionDriver	
	{
	public:
		UNetConnection NetConnection; // 0x28(0x8)
		unsigned char UnknownData04_6[0x144]; // 0x30(0x144) UNKNOWN PROPERTY
		TWeakObjectPtr DebugActor; // 0x174(0x8)
		unsigned char UnknownData05_6[0x4]; // 0x17C(0x4) UNKNOWN PROPERTY
		TArray LastGatherLocations; // 0x180(0x10)
		unsigned char UnknownData06_6[0xB0]; // 0x190(0xB0) UNKNOWN PROPERTY
		TArray ConnectionGraphNodes; // 0x240(0x10)
		UReplicationGraphNode_TearOff_ForConnection TearOffNode; // 0x250(0x8)
		unsigned char UnknownData07_7[0x120]; // 0x258(0x120) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ReplicationGraph.NetReplicationGraphConnection");
			return ret;
		}
	};


	// Class ReplicationGraph.ReplicationGraphDebugActor
	// Inherited from AActor -> UObject
	// Size: 0x10 (0x2A0 - 0x290)
	class AReplicationGraphDebugActor : public AActor	
	{
	public:
		UReplicationGraph ReplicationGraph; // 0x290(0x8)
		UNetReplicationGraphConnection ConnectionManager; // 0x298(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ReplicationGraph.ReplicationGraphDebugActor");
			return ret;
		}

		void ServerStopDebugging(); // Flags: Net|NetReliableNative|Event|Public|NetServer 0x7FF41462B4B8
		void ServerStartDebugging(); // Flags: Net|NetReliableNative|Event|Public|NetServer 0x7FF41462B3D8
		void ServerSetPeriodFrameForClass(UClass Class, int32_t PeriodFrame); // Flags: Net|NetReliableNative|Event|Public|NetServer 0x7FF41462B2F8
		void ServerSetCullDistanceForClass(UClass Class, float CullDistance); // Flags: Net|NetReliableNative|Event|Public|NetServer 0x7FF41462B218
		void ServerSetConditionalActorBreakpoint(AActor Actor); // Flags: Net|NetReliableNative|Event|Public|NetServer 0x7FF41462B138
		void ServerPrintCullDistances(); // Flags: Net|NetReliableNative|Event|Public|NetServer 0x7FF41462B058
		void ServerPrintAllActorInfo(FString Str); // Flags: Net|NetReliableNative|Event|Public|NetServer 0x7FF41462AF78
		void ServerCellInfo(); // Flags: Net|NetReliableNative|Event|Public|NetServer 0x7FF41462AE98
		void ClientCellInfo(FVector CellLocation, FVector CellExtent, TArray Actors); // Flags: Net|NetReliableNative|Event|Public|HasDefaults|NetClient 0x7FF41462ADB8
	};

}
