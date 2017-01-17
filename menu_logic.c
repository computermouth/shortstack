
#include "menu_logic.h"
#include "menu_logic_shapes.c"

void menu_logic(god_t *god){
	
	if(god->state.frame < 4){
		crunchball0_C0_0(god);
		crunchball0_R0_0(god);
		crunchball0_R0_1(god);
		crunchball0_U0_0(god);
		crunchball0_N0_0(god);
		crunchball0_C1_0(god);
		crunchball0_H0_0(god);
		crunchball0_B0_0(god);
		crunchball0_B0_1(god);
		crunchball0_B0_2(god);
		crunchball0_A0_0(god);
		crunchball0_A0_1(god);
		crunchball0_L0_0(god);
		crunchball0_L0_1(god);
		
		settings0_0(god);
		settings0_1(god);
		play0_0(god);
		stop0_0(god);
	} else if(god->state.frame < 8){
		crunchball1_C0_0(god);
		crunchball1_R0_0(god);
		crunchball1_R0_1(god);
		crunchball1_U0_0(god);
		crunchball1_N0_0(god);
		crunchball1_C1_0(god);
		crunchball1_H0_0(god);
		crunchball1_B0_0(god);
		crunchball1_B0_1(god);
		crunchball1_B0_2(god);
		crunchball1_A0_0(god);
		crunchball1_A0_1(god);
		crunchball1_L0_0(god);
		crunchball1_L1_0(god);
		
		settings1_0(god);
		settings1_1(god);
		play1_0(god);
		stop1_0(god);
	} else {
		crunchball2_C0_0(god);
		crunchball2_R0_0(god);
		crunchball2_R0_1(god);
		crunchball2_U0_0(god);
		crunchball2_N0_0(god);
		crunchball2_C1_0(god);
		crunchball2_H0_0(god);
		crunchball2_B0_0(god);
		crunchball2_B0_1(god);
		crunchball2_B0_2(god);
		crunchball2_A0_0(god);
		crunchball2_A0_1(god);
		crunchball2_L0_0(god);
		crunchball2_L1_0(god);
		
		settings2_0(god);
		settings2_1(god);
		play2_0(god);
		stop2_0(god);
	}
	
	if(god->state.frame < 4){
		if(god->state.menu_select == 0)
			select_settings0(god);
		else if(god->state.menu_select == 1)
			select_play0(god);
		else
			select_stop0(god);
	} else if(god->state.frame < 4){
		if(god->state.menu_select == 0)
			select_settings1(god);
		else if(god->state.menu_select == 1)
			select_play1(god);
		else
			select_stop1(god);
	} else { 
		if(god->state.menu_select == 0)
			select_settings2(god);
		else if(god->state.menu_select == 1)
			select_play2(god);
		else
			select_stop2(god);
	}
	
	if(god->keystate.lt == 1 && god->state.menu_select > 0){
		god->state.menu_select--;
		god->keystate.lt = 0;
	}
	if(god->keystate.rt == 1 && god->state.menu_select < 2){
		god->state.menu_select++;
		god->keystate.rt = 0;
	}
	
	if(god->keystate.ent == 1 ){
		if(god->state.menu_select == 0){
			god->state.menu = 0;
			god->keystate.ent = 0;
			god->state.settings = 1;
			god->state.settings_select = 0;
		} else if(god->state.menu_select == 1){
			god->keystate.ent = 0;
			god->state.menu = 0;
			god->state.game = 1;
			god->state.score = 0;
			god->state.lives = 2;
			god->state.bounced = 0;
			god->state.ball_color = 15;
			god->state.ball_y = 50;
			god->state.paddle_x = 300;
			god->state.paddle_color = 12;
			god->state.paddle_color_delay = 0;
			god->state.ball_x_speed = 3;
			god->state.ball_y_speed = 2;
		} else {
			god->scalar.quit = 1;
		}
	}
	
}
