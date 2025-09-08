#include "cdll_client_int.h"

#include "GarrysMod/Lua/LuaShared.h"
#include "GarrysMod/Lua/Interface.h"
using namespace GarrysMod::Lua;

GMOD_MODULE_OPEN() {
	Msg("=====================================\n");
	Msg("加载成功! Hello World!\n");
	Msg("=====================================\n");
	return 0;
}

// Called when the module is unloaded
GMOD_MODULE_CLOSE() {
	return 0;
}