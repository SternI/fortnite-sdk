#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: GameplayGraph
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/GameplayGraph.EGraphElementType
	enum EGraphElementType
	{
		EGraphElementType__Node = 0,
		EGraphElementType__Edge = 1,
		EGraphElementType__Island = 2,
		EGraphElementType__Unknown = 3,
	};


	// Enum /Script/GameplayGraph.EGraphIslandOperations
	enum EGraphIslandOperations
	{
		EGraphIslandOperations__None = 0,
		EGraphIslandOperations__Add = 1,
		EGraphIslandOperations__Split = 2,
		EGraphIslandOperations__Merge = 4,
		EGraphIslandOperations__Destroy = 8,
		EGraphIslandOperations__All = F,
	};


	// Enum /Script/GameplayGraph.EGraphIslandConnectivityChange
	enum EGraphIslandConnectivityChange
	{
		EGraphIslandConnectivityChange__VertexAdd = 0,
		EGraphIslandConnectivityChange__SplitFrom = 1,
		EGraphIslandConnectivityChange__SplitTo = 2,
		EGraphIslandConnectivityChange__Other = 3,
	};

}
