
#include <stdio.h>

#include "logic.h"
#include "stack.h"
#include "state.h"

state logic(stack *g_stack, state g_state){
	
	//~ g_state.k.esc = 0;
	//~ g_state.k.ent = 0;
    //~ g_state.k.w = 0;
    //~ g_state.k.a = 0;
    //~ g_state.k.s = 0;
    //~ g_state.k.d = 0;
    //~ g_state.k.up = 0;
    //~ g_state.k.dn = 0;
    //~ g_state.k.lt = 0;
    //~ g_state.k.rt = 0;
    
	//~ g_state.key_idle_stg = 0;
	//~ g_state.key_pressed_stg = 1;
	
	//~ (*g_stack) = push_stack((*g_stack), keys.anims[0].frames[g_state.key_idle_stg]);
	
	//~ if(g_state.k.esc)
		//~ (*g_stack) = push_stack((*g_stack), keys.anims[1].frames[g_state.key_pressed_stg]);
	
	//~ g_state.key_delay = (g_state.key_delay + 1) % 6;
	//~ if(g_state.key_delay == 5){
		//~ g_state.key_idle_stg = (g_state.key_idle_stg + 1) % 3;
		//~ g_state.key_pressed_stg = (g_state.key_pressed_stg + 1) % 3;
	//~ }
	
	
	
	//~ printf("%d", g_state->key_idle_stg);
	//~ g_state->key_pressed_stg = (g_state->key_pressed_stg++ % 3);
	
	return g_state;	
}
