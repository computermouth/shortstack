
#include "gameover_logic.h"
#include "gameover_logic_shapes.c"

void gameover_logic(state* g_state, swindow *g_swindow){
	
	
	if(g_state->k.ent == 1 ){
		g_state->over = 0;
		g_state->menu = 1;
		g_state->k.ent = 0;
	}

	// HEARTS
	
	if(g_state->frame < 4){
		go_heart0_disabled0(g_swindow);
		go_heart1_disabled0(g_swindow);
		go_heart2_disabled0(g_swindow);
		if (g_state->lives > 0) go_heart0_enabled0(g_swindow);
		if (g_state->lives > 1) go_heart1_enabled0(g_swindow);
		if (g_state->lives > 2) go_heart2_enabled0(g_swindow);
	} else if (g_state->frame < 8){
		go_heart0_disabled1(g_swindow);
		go_heart1_disabled1(g_swindow);
		go_heart2_disabled1(g_swindow);
		if (g_state->lives > 0) go_heart0_enabled1(g_swindow);
		if (g_state->lives > 1) go_heart1_enabled1(g_swindow);
		if (g_state->lives > 2) go_heart2_enabled1(g_swindow);
	} else {
		go_heart0_disabled2(g_swindow);
		go_heart1_disabled2(g_swindow);
		go_heart2_disabled2(g_swindow);
		if (g_state->lives > 0) go_heart0_enabled2(g_swindow);
		if (g_state->lives > 1) go_heart1_enabled2(g_swindow);
		if (g_state->lives > 2) go_heart2_enabled2(g_swindow);
	}

	
	// TOP WALL PADS
	
	if(g_state->frame < 4){
		go_top_wall0(g_swindow);
		go_pad0_0(g_swindow);
		go_pad1_0(g_swindow);
		go_pad2_0(g_swindow);
		go_pad3_0(g_swindow);
		if(g_state->hole_open)
			go_hole_open0(g_swindow);
		else
			go_hole_closed0(g_swindow);
	} else if (g_state->frame < 8){
		go_top_wall1(g_swindow);
		go_pad0_1(g_swindow);
		go_pad1_1(g_swindow);
		go_pad2_1(g_swindow);
		go_pad3_1(g_swindow);
		if(g_state->hole_open)
			go_hole_open1(g_swindow);
		else
			go_hole_closed1(g_swindow);
	} else {
		go_top_wall2(g_swindow);
		go_pad0_2(g_swindow);
		go_pad1_2(g_swindow);
		go_pad2_2(g_swindow);
		go_pad3_2(g_swindow);
		if(g_state->hole_open)
			go_hole_open2(g_swindow);
		else
			go_hole_closed2(g_swindow);
	}
	
	if(g_state->frame < 4){
		if (g_state->pad0_dir == -1){
			go_pad0_arrow_left0_0(g_swindow);
			go_pad0_arrow_left0_1(g_swindow);
		} else {
			go_pad0_arrow_right0_0(g_swindow);
			go_pad0_arrow_right0_1(g_swindow);
		}
		if (g_state->pad1_dir == -1){
			go_pad1_arrow_left0_0(g_swindow);
			go_pad1_arrow_left0_1(g_swindow);
		} else {
			go_pad1_arrow_right0_0(g_swindow);
			go_pad1_arrow_right0_1(g_swindow);
		}
		if (g_state->pad2_dir == -1){
			go_pad2_arrow_left0_0(g_swindow);
			go_pad2_arrow_left0_1(g_swindow);
		} else {
			go_pad2_arrow_right0_0(g_swindow);
			go_pad2_arrow_right0_1(g_swindow);
		}
		if (g_state->pad3_dir == -1){
			go_pad3_arrow_left0_0(g_swindow);
			go_pad3_arrow_left0_1(g_swindow);
		} else {
			go_pad3_arrow_right0_0(g_swindow);
			go_pad3_arrow_right0_1(g_swindow);
		}
	} else if (g_state->frame < 8){
		if (g_state->pad0_dir == -1){
			go_pad0_arrow_left1_0(g_swindow);
			go_pad0_arrow_left1_1(g_swindow);
		} else {
			go_pad0_arrow_right1_0(g_swindow);
			go_pad0_arrow_right1_1(g_swindow);
		}
		if (g_state->pad1_dir == -1){
			go_pad1_arrow_left1_0(g_swindow);
			go_pad1_arrow_left1_1(g_swindow);
		} else {
			go_pad1_arrow_right1_0(g_swindow);
			go_pad1_arrow_right1_1(g_swindow);
		}
		if (g_state->pad2_dir == -1){
			go_pad2_arrow_left1_0(g_swindow);
			go_pad2_arrow_left1_1(g_swindow);
		} else {
			go_pad2_arrow_right1_0(g_swindow);
			go_pad2_arrow_right1_1(g_swindow);
		}
		if (g_state->pad3_dir == -1){
			go_pad3_arrow_left1_0(g_swindow);
			go_pad3_arrow_left1_1(g_swindow);
		} else {
			go_pad3_arrow_right1_0(g_swindow);
			go_pad3_arrow_right1_1(g_swindow);
		}
	} else {
		if (g_state->pad0_dir == -1){
			go_pad0_arrow_left2_0(g_swindow);
			go_pad0_arrow_left2_1(g_swindow);
		} else {
			go_pad0_arrow_right2_0(g_swindow);
			go_pad0_arrow_right2_1(g_swindow);
		}
		if (g_state->pad1_dir == -1){
			go_pad1_arrow_left2_0(g_swindow);
			go_pad1_arrow_left2_1(g_swindow);
		} else {
			go_pad1_arrow_right2_0(g_swindow);
			go_pad1_arrow_right2_1(g_swindow);
		}
		if (g_state->pad2_dir == -1){
			go_pad2_arrow_left2_0(g_swindow);
			go_pad2_arrow_left2_1(g_swindow);
		} else {
			go_pad2_arrow_right2_0(g_swindow);
			go_pad2_arrow_right2_1(g_swindow);
		}
		if (g_state->pad3_dir == -1){
			go_pad3_arrow_left2_0(g_swindow);
			go_pad3_arrow_left2_1(g_swindow);
		} else {
			go_pad3_arrow_right2_0(g_swindow);
			go_pad3_arrow_right2_1(g_swindow);
		}
	}
	
	if(g_state->frame < 4){
		go_paddle0(g_swindow, g_state->paddle_x, 0, g_state->paddle_color);
	} else if (g_state->frame < 8){
		go_paddle1(g_swindow, g_state->paddle_x, 0, g_state->paddle_color);
	} else {
		go_paddle2(g_swindow, g_state->paddle_x, 0, g_state->paddle_color);
	}
		
	// GAMEOVER
	
	gameover_shade(g_swindow);
	
	if(g_state->frame < 4){
		gameover0_G0_0(g_swindow);
		gameover0_A0_0(g_swindow);
		gameover0_A0_1(g_swindow);
		gameover0_M0_0(g_swindow);
		gameover0_E0_0(g_swindow);
		gameover0_O0_0(g_swindow);
		gameover0_O0_1(g_swindow);
		gameover0_V0_0(g_swindow);
		gameover0_E1_0(g_swindow);
		gameover0_R0_0(g_swindow);
		gameover0_R0_1(g_swindow);
		
		house0_0(g_swindow);
		house0_1(g_swindow);
		
		select_house0(g_swindow);
	} else if (g_state->frame < 8){
		gameover1_G0_0(g_swindow);
		gameover1_A0_0(g_swindow);
		gameover1_A0_1(g_swindow);
		gameover1_M0_0(g_swindow);
		gameover1_E0_0(g_swindow);
		gameover1_O0_0(g_swindow);
		gameover1_O0_1(g_swindow);
		gameover1_V0_0(g_swindow);
		gameover1_E1_0(g_swindow);
		gameover1_R0_0(g_swindow);
		gameover1_R0_1(g_swindow);
		
		house1_0(g_swindow);
		house1_1(g_swindow);
		
		select_house1(g_swindow);
	} else {
		gameover2_G0_0(g_swindow);
		gameover2_A0_0(g_swindow);
		gameover2_A0_1(g_swindow);
		gameover2_M0_0(g_swindow);
		gameover2_E0_0(g_swindow);
		gameover2_O0_0(g_swindow);
		gameover2_O0_1(g_swindow);
		gameover2_V0_0(g_swindow);
		gameover2_E1_0(g_swindow);
		gameover2_R0_0(g_swindow);
		gameover2_R0_1(g_swindow);
		
		house2_0(g_swindow);
		house2_1(g_swindow);
		
		select_house2(g_swindow);
	}
	
}
