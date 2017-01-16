
#include "menu_logic.h"
#include "menu_logic_shapes.c"

void menu_logic(state_t* state, window_t *window){
	
	if(state->frame < 4){
		crunchball0_C0_0(window);
		crunchball0_R0_0(window);
		crunchball0_R0_1(window);
		crunchball0_U0_0(window);
		crunchball0_N0_0(window);
		crunchball0_C1_0(window);
		crunchball0_H0_0(window);
		crunchball0_B0_0(window);
		crunchball0_B0_1(window);
		crunchball0_B0_2(window);
		crunchball0_A0_0(window);
		crunchball0_A0_1(window);
		crunchball0_L0_0(window);
		crunchball0_L0_1(window);
		
		settings0_0(window);
		settings0_1(window);
		play0_0(window);
		stop0_0(window);
	} else if(state->frame < 8){
		crunchball1_C0_0(window);
		crunchball1_R0_0(window);
		crunchball1_R0_1(window);
		crunchball1_U0_0(window);
		crunchball1_N0_0(window);
		crunchball1_C1_0(window);
		crunchball1_H0_0(window);
		crunchball1_B0_0(window);
		crunchball1_B0_1(window);
		crunchball1_B0_2(window);
		crunchball1_A0_0(window);
		crunchball1_A0_1(window);
		crunchball1_L0_0(window);
		crunchball1_L1_0(window);
		
		settings1_0(window);
		settings1_1(window);
		play1_0(window);
		stop1_0(window);
	} else {
		crunchball2_C0_0(window);
		crunchball2_R0_0(window);
		crunchball2_R0_1(window);
		crunchball2_U0_0(window);
		crunchball2_N0_0(window);
		crunchball2_C1_0(window);
		crunchball2_H0_0(window);
		crunchball2_B0_0(window);
		crunchball2_B0_1(window);
		crunchball2_B0_2(window);
		crunchball2_A0_0(window);
		crunchball2_A0_1(window);
		crunchball2_L0_0(window);
		crunchball2_L1_0(window);
		
		settings2_0(window);
		settings2_1(window);
		play2_0(window);
		stop2_0(window);
	}
	
	if(state->frame < 4){
		if(state->menu_select == 0)
			select_settings0(window);
		else if(state->menu_select == 1)
			select_play0(window);
		else
			select_stop0(window);
	} else if(state->frame < 4){
		if(state->menu_select == 0)
			select_settings1(window);
		else if(state->menu_select == 1)
			select_play1(window);
		else
			select_stop1(window);
	} else { 
		if(state->menu_select == 0)
			select_settings2(window);
		else if(state->menu_select == 1)
			select_play2(window);
		else
			select_stop2(window);
	}
	
	if(state->k.lt == 1 && state->menu_select > 0){
		state->menu_select--;
		state->k.lt = 0;
	}
	if(state->k.rt == 1 && state->menu_select < 2){
		state->menu_select++;
		state->k.rt = 0;
	}
	
	if(state->k.ent == 1 ){
		if(state->menu_select == 0){
			state->menu = 0;
			state->k.ent = 0;
			state->settings = 1;
			state->settings_select = 0;
		} else if(state->menu_select == 1){
			state->k.ent = 0;
			state->menu = 0;
			state->game = 1;
			state->score = 0;
			state->lives = 2;
			state->bounced = 0;
			state->ball_color = 15;
			state->ball_y = 50;
			state->paddle_x = 300;
			state->paddle_color = 12;
			state->paddle_color_delay = 0;
			state->ball_x_speed = 3;
			state->ball_y_speed = 2;
		} else {
			window->quit = 1;
		}
	}
	
}
