
#include "state.h"
#include "structs.h"
#include "window.h"
#include "macros.h"

#include "menu_logic.h"
#include "settings_logic.h"
#include "game_logic.h"
#include "gameover_logic.h"

NP_SH(
	active_bg,
	NP_VS(4),
	NP_VX(4),
	NP_VY(4), 
	NP_AX(0, 800, 800, 0), 
	NP_AY(0, 0, 500, 500), 
	NP_CO(3, 30, 33, 255)
);

state_t init_state(){
	state_t state;
	
	state.k.esc = 0;
	state.k.ent = 0;
	state.k.w = 0;
	state.k.a = 0;
	state.k.s = 0;
	state.k.d = 0;
	state.k.up = 0;
	state.k.dn = 0;
	state.k.lt = 0;
	state.k.rt = 0;

	state.frame = 0;
	state.settings_select = 0;
	state.settings_volume = 7;
	state.menu = 1;
	state.menu_select = 1;
	state.game = 0;

	state.pad0_dir = 1;
	state.pad1_dir = -1;
	state.pad2_dir = 1;
	state.pad3_dir = -1;
	state.hole_open = 1;

	state.ball_x = 50;
	state.ball_x_dir = 1;
	state.ball_y_dir = 1;

	state.over = 0;

	return state;
}


void logic(state_t* state, window_t *window){
		
	active_bg(window);
	
	if (state->frame == 11)
		state->frame = 0;
	else
		state->frame++;
	
	if(state->menu == 1){
		menu_logic(state, window);
	} else if (state->settings == 1){
		settings_logic(state, window);
	} else if(state->game == 1){
		game_logic(state, window);
	} else if(state->over) {
		gameover_logic(state, window);
	}
	
}
