
#include "state.h"
#include "structs.h"
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
	
	state_t state = {
	
		.k.esc = 0,
		.k.ent = 0,
		.k.w = 0,
		.k.a = 0,
		.k.s = 0,
		.k.d = 0,
		.k.up = 0,
		.k.dn = 0,
		.k.lt = 0,
		.k.rt = 0,

		.frame = 0,
		.settings_select = 0,
		.settings_volume = 7,
		.menu = 1,
		.menu_select = 1,
		.game = 0,

		.pad0_dir = 1,
		.pad1_dir = -1,
		.pad2_dir = 1,
		.pad3_dir = -1,
		.hole_open = 1,

		.ball_x = 50,
		.ball_x_dir = 1,
		.ball_y_dir = 1,

		.over = 0
	
	};

	return state;
}


void logic(god_t *god){
		
	active_bg(god);
	
	if (god->state.frame == 11)
		god->state.frame = 0;
	else
		god->state.frame++;
	
	god->state.triplet = god->state.frame / 4;
	
	if(god->state.menu == 1){
		menu_logic(god);
	} else if (god->state.settings == 1){
		settings_logic(god);
	} else if(god->state.game == 1){
		game_logic(god);
	} else if(god->state.over) {
		gameover_logic(god);
	}
	
}
