
#include "gameover_logic.h"
#include "gameover_logic_shapes.c"

void gameover_logic(state_t* state, window_t *window){
	
	
	if(state->k.ent == 1 ){
		state->over = 0;
		state->menu = 1;
		state->k.ent = 0;
	}

	// HEARTS
	
	if(state->frame < 4){
		go_heart0_disabled0(window);
		go_heart1_disabled0(window);
		go_heart2_disabled0(window);
		if (state->lives > 0) go_heart0_enabled0(window);
		if (state->lives > 1) go_heart1_enabled0(window);
		if (state->lives > 2) go_heart2_enabled0(window);
	} else if (state->frame < 8){
		go_heart0_disabled1(window);
		go_heart1_disabled1(window);
		go_heart2_disabled1(window);
		if (state->lives > 0) go_heart0_enabled1(window);
		if (state->lives > 1) go_heart1_enabled1(window);
		if (state->lives > 2) go_heart2_enabled1(window);
	} else {
		go_heart0_disabled2(window);
		go_heart1_disabled2(window);
		go_heart2_disabled2(window);
		if (state->lives > 0) go_heart0_enabled2(window);
		if (state->lives > 1) go_heart1_enabled2(window);
		if (state->lives > 2) go_heart2_enabled2(window);
	}

	
	// TOP WALL PADS
	
	if(state->frame < 4){
		go_top_wall0(window);
		go_pad0_0(window);
		go_pad1_0(window);
		go_pad2_0(window);
		go_pad3_0(window);
		if(state->hole_open)
			go_hole_open0(window);
		else
			go_hole_closed0(window);
	} else if (state->frame < 8){
		go_top_wall1(window);
		go_pad0_1(window);
		go_pad1_1(window);
		go_pad2_1(window);
		go_pad3_1(window);
		if(state->hole_open)
			go_hole_open1(window);
		else
			go_hole_closed1(window);
	} else {
		go_top_wall2(window);
		go_pad0_2(window);
		go_pad1_2(window);
		go_pad2_2(window);
		go_pad3_2(window);
		if(state->hole_open)
			go_hole_open2(window);
		else
			go_hole_closed2(window);
	}
	
	if(state->frame < 4){
		if (state->pad0_dir == -1){
			go_pad0_arrow_left0_0(window);
			go_pad0_arrow_left0_1(window);
		} else {
			go_pad0_arrow_right0_0(window);
			go_pad0_arrow_right0_1(window);
		}
		if (state->pad1_dir == -1){
			go_pad1_arrow_left0_0(window);
			go_pad1_arrow_left0_1(window);
		} else {
			go_pad1_arrow_right0_0(window);
			go_pad1_arrow_right0_1(window);
		}
		if (state->pad2_dir == -1){
			go_pad2_arrow_left0_0(window);
			go_pad2_arrow_left0_1(window);
		} else {
			go_pad2_arrow_right0_0(window);
			go_pad2_arrow_right0_1(window);
		}
		if (state->pad3_dir == -1){
			go_pad3_arrow_left0_0(window);
			go_pad3_arrow_left0_1(window);
		} else {
			go_pad3_arrow_right0_0(window);
			go_pad3_arrow_right0_1(window);
		}
	} else if (state->frame < 8){
		if (state->pad0_dir == -1){
			go_pad0_arrow_left1_0(window);
			go_pad0_arrow_left1_1(window);
		} else {
			go_pad0_arrow_right1_0(window);
			go_pad0_arrow_right1_1(window);
		}
		if (state->pad1_dir == -1){
			go_pad1_arrow_left1_0(window);
			go_pad1_arrow_left1_1(window);
		} else {
			go_pad1_arrow_right1_0(window);
			go_pad1_arrow_right1_1(window);
		}
		if (state->pad2_dir == -1){
			go_pad2_arrow_left1_0(window);
			go_pad2_arrow_left1_1(window);
		} else {
			go_pad2_arrow_right1_0(window);
			go_pad2_arrow_right1_1(window);
		}
		if (state->pad3_dir == -1){
			go_pad3_arrow_left1_0(window);
			go_pad3_arrow_left1_1(window);
		} else {
			go_pad3_arrow_right1_0(window);
			go_pad3_arrow_right1_1(window);
		}
	} else {
		if (state->pad0_dir == -1){
			go_pad0_arrow_left2_0(window);
			go_pad0_arrow_left2_1(window);
		} else {
			go_pad0_arrow_right2_0(window);
			go_pad0_arrow_right2_1(window);
		}
		if (state->pad1_dir == -1){
			go_pad1_arrow_left2_0(window);
			go_pad1_arrow_left2_1(window);
		} else {
			go_pad1_arrow_right2_0(window);
			go_pad1_arrow_right2_1(window);
		}
		if (state->pad2_dir == -1){
			go_pad2_arrow_left2_0(window);
			go_pad2_arrow_left2_1(window);
		} else {
			go_pad2_arrow_right2_0(window);
			go_pad2_arrow_right2_1(window);
		}
		if (state->pad3_dir == -1){
			go_pad3_arrow_left2_0(window);
			go_pad3_arrow_left2_1(window);
		} else {
			go_pad3_arrow_right2_0(window);
			go_pad3_arrow_right2_1(window);
		}
	}
	
	if(state->frame < 4){
		go_paddle0(window, state->paddle_x, 0, state->paddle_color);
	} else if (state->frame < 8){
		go_paddle1(window, state->paddle_x, 0, state->paddle_color);
	} else {
		go_paddle2(window, state->paddle_x, 0, state->paddle_color);
	}
		
	// GAMEOVER
	
	gameover_shade(window);
	
	if(state->frame < 4){
		gameover0_G0_0(window);
		gameover0_A0_0(window);
		gameover0_A0_1(window);
		gameover0_M0_0(window);
		gameover0_E0_0(window);
		gameover0_O0_0(window);
		gameover0_O0_1(window);
		gameover0_V0_0(window);
		gameover0_E1_0(window);
		gameover0_R0_0(window);
		gameover0_R0_1(window);
		
		house0_0(window);
		house0_1(window);
		
		select_house0(window);
	} else if (state->frame < 8){
		gameover1_G0_0(window);
		gameover1_A0_0(window);
		gameover1_A0_1(window);
		gameover1_M0_0(window);
		gameover1_E0_0(window);
		gameover1_O0_0(window);
		gameover1_O0_1(window);
		gameover1_V0_0(window);
		gameover1_E1_0(window);
		gameover1_R0_0(window);
		gameover1_R0_1(window);
		
		house1_0(window);
		house1_1(window);
		
		select_house1(window);
	} else {
		gameover2_G0_0(window);
		gameover2_A0_0(window);
		gameover2_A0_1(window);
		gameover2_M0_0(window);
		gameover2_E0_0(window);
		gameover2_O0_0(window);
		gameover2_O0_1(window);
		gameover2_V0_0(window);
		gameover2_E1_0(window);
		gameover2_R0_0(window);
		gameover2_R0_1(window);
		
		house2_0(window);
		house2_1(window);
		
		select_house2(window);
	}
	
}
