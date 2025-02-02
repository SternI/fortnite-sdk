#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: EntityLevel
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/EntityLevel.EEntityProxyFeature
	enum EEntityProxyFeature
	{
		EEntityProxyFeature__Selection = 1,
		EEntityProxyFeature__PropertyChanges = 4,
		EEntityProxyFeature__Duplication = 8,
		EEntityProxyFeature__CopyPaste = 10,
		EEntityProxyFeature__Deletion = 20,
		EEntityProxyFeature__DetailsPanel = 40,
		EEntityProxyFeature__Outliner = 80,
		EEntityProxyFeature__SelectionRender = 100,
		EEntityProxyFeature__UndoRedo = 200,
		EEntityProxyFeature__Gizmo = 400,
		EEntityProxyFeature__Groups = 800,
		EEntityProxyFeature__Naming = 1000,
		EEntityProxyFeature__ActorFactory = 2000,
		EEntityProxyFeature__Sync = 4000,
		EEntityProxyFeature__Transform = 8000,
		EEntityProxyFeature___Reserved = 0,
	};

}
