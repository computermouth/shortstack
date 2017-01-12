
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

	g_state.frame = 0;
	g_state.settings_select = 0;
	g_state.settings_volume = 7;
	g_state.menu = 1;
	g_state.menu_select = 1;
	g_state.game = 0;

	g_state.pad0_dir = 1;
	g_state.pad1_dir = -1;
	g_state.pad2_dir = 1;
	g_state.pad3_dir = -1;
	g_state.hole_open = 1;

	g_state.ball_x = 50;
	g_state.ball_x_dir = 1;
	g_state.ball_y_dir = 1;

	g_state.over = 0;

	return g_state;
}


state logic(state g_state, swindow *g_swindow){
		
	active_bg(g_swindow);
	
	if (g_state.frame == 11)
		g_state.frame = 0;
	else
		g_state.frame++;
	
	if(g_state.menu == 1){
		menu_logic(&g_state, g_swindow);
	} else if (g_state.settings == 1){
		settings_logic(&g_state, g_swindow);
	} else if(g_state.game == 1){
		game_logic(&g_state, g_swindow);
	} else if(g_state.over) {
		gameover_logic(&g_state, g_swindow);
	}
	
	
	return g_state;
}
