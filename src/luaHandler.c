#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
#include <luaHandler.h>

int initLua(void) {
    lua_State *mainLua = luaL_newstate();
    luaL_openlibs(mainLua);  
}
