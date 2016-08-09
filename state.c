
#include "state.h"

state init_state(){
	state g_state;
	
	g_state.k.esc = 0;
	g_state.k.ent = 0;
    g_state.k.w = 0;
    g_state.k.a = 0;
    g_state.k.s = 0;
    g_state.k.d = 0;
    g_state.k.up = 0;
    g_state.k.dn = 0;
    g_state.k.lt = 0;
    g_state.k.rt = 0;
    
    g_state.key_delay = 0;
	g_state.key_idle_stg = 0;
	g_state.key_pressed_stg = 1;

	return g_state;
}
