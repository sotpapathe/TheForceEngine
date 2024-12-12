#pragma once
//////////////////////////////////////////////////////////////////////
// The Force Engine Editor
// A system built to view and edit Dark Forces data files.
// The viewing aspect needs to be put in place at the beginning
// in order to properly test elements in isolation without having
// to "play" the game as intended.
//////////////////////////////////////////////////////////////////////
#include <TFE_System/system.h>
#ifdef ENABLE_FORCE_SCRIPT
#include <TFE_System/types.h>
#include <TFE_ForceScript/scriptInterface.h>

namespace TFE_DarkForces
{
	class GS_Game : public ScriptAPIClass
	{
	public:
		// System
		bool scriptRegister(ScriptAPI api) override;

		f32 getGameTime();
	};
}
#endif