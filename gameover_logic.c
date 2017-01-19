
#include <SDL2/SDL_mixer.h>

#include "gameover_logic.h"
#include "gameover_logic_shapes.c"

void gameover_logic(god_t *god){
	
	
	if(god->keystate.ent == 1 ){
		god->state.over = 0;
		god->state.menu = 1;
		god->keystate.ent = 0;
		Mix_PlayChannel( -1, god->audio.sound_menu_select, 0 );		
	}

	// HEARTS
	
	switch (god->state.triplet) {
		case 0:
			go_heart0_disabled0(god);
			go_heart1_disabled0(god);
			go_heart2_disabled0(god);
			if (god->state.lives > 0) go_heart0_enabled0(god);
			if (god->state.lives > 1) go_heart1_enabled0(god);
			if (god->state.lives > 2) go_heart2_enabled0(god);
			break;
		case 1:
			go_heart0_disabled1(god);
			go_heart1_disabled1(god);
			go_heart2_disabled1(god);
			if (god->state.lives > 0) go_heart0_enabled1(god);
			if (god->state.lives > 1) go_heart1_enabled1(god);
			if (god->state.lives > 2) go_heart2_enabled1(god);
			break;
		case 2:
			go_heart0_disabled2(god);
			go_heart1_disabled2(god);
			go_heart2_disabled2(god);
			if (god->state.lives > 0) go_heart0_enabled2(god);
			if (god->state.lives > 1) go_heart1_enabled2(god);
			if (god->state.lives > 2) go_heart2_enabled2(god);
			break;
	}

	
	// TOP WALL PADS
	
	if(god->state.frame < 4){
		go_top_wall0(god);
		go_pad0_0(god);
		go_pad1_0(god);
		go_pad2_0(god);
		go_pad3_0(god);
		if(god->state.hole_open)
			go_hole_open0(god);
		else
			go_hole_closed0(god);
	} else if (god->state.frame < 8){
		go_top_wall1(god);
		go_pad0_1(god);
		go_pad1_1(god);
		go_pad2_1(god);
		go_pad3_1(god);
		if(god->state.hole_open)
			go_hole_open1(god);
		else
			go_hole_closed1(god);
	} else {
		go_top_wall2(god);
		go_pad0_2(god);
		go_pad1_2(god);
		go_pad2_2(god);
		go_pad3_2(god);
		if(god->state.hole_open)
			go_hole_open2(god);
		else
			go_hole_closed2(god);
	}
	
	if(god->state.frame < 4){
		if (god->state.pad0_dir == -1){
			go_pad0_arrow_left0_0(god);
			go_pad0_arrow_left0_1(god);
		} else {
			go_pad0_arrow_right0_0(god);
			go_pad0_arrow_right0_1(god);
		}
		if (god->state.pad1_dir == -1){
			go_pad1_arrow_left0_0(god);
			go_pad1_arrow_left0_1(god);
		} else {
			go_pad1_arrow_right0_0(god);
			go_pad1_arrow_right0_1(god);
		}
		if (god->state.pad2_dir == -1){
			go_pad2_arrow_left0_0(god);
			go_pad2_arrow_left0_1(god);
		} else {
			go_pad2_arrow_right0_0(god);
			go_pad2_arrow_right0_1(god);
		}
		if (god->state.pad3_dir == -1){
			go_pad3_arrow_left0_0(god);
			go_pad3_arrow_left0_1(god);
		} else {
			go_pad3_arrow_right0_0(god);
			go_pad3_arrow_right0_1(god);
		}
	} else if (god->state.frame < 8){
		if (god->state.pad0_dir == -1){
			go_pad0_arrow_left1_0(god);
			go_pad0_arrow_left1_1(god);
		} else {
			go_pad0_arrow_right1_0(god);
			go_pad0_arrow_right1_1(god);
		}
		if (god->state.pad1_dir == -1){
			go_pad1_arrow_left1_0(god);
			go_pad1_arrow_left1_1(god);
		} else {
			go_pad1_arrow_right1_0(god);
			go_pad1_arrow_right1_1(god);
		}
		if (god->state.pad2_dir == -1){
			go_pad2_arrow_left1_0(god);
			go_pad2_arrow_left1_1(god);
		} else {
			go_pad2_arrow_right1_0(god);
			go_pad2_arrow_right1_1(god);
		}
		if (god->state.pad3_dir == -1){
			go_pad3_arrow_left1_0(god);
			go_pad3_arrow_left1_1(god);
		} else {
			go_pad3_arrow_right1_0(god);
			go_pad3_arrow_right1_1(god);
		}
	} else {
		if (god->state.pad0_dir == -1){
			go_pad0_arrow_left2_0(god);
			go_pad0_arrow_left2_1(god);
		} else {
			go_pad0_arrow_right2_0(god);
			go_pad0_arrow_right2_1(god);
		}
		if (god->state.pad1_dir == -1){
			go_pad1_arrow_left2_0(god);
			go_pad1_arrow_left2_1(god);
		} else {
			go_pad1_arrow_right2_0(god);
			go_pad1_arrow_right2_1(god);
		}
		if (god->state.pad2_dir == -1){
			go_pad2_arrow_left2_0(god);
			go_pad2_arrow_left2_1(god);
		} else {
			go_pad2_arrow_right2_0(god);
			go_pad2_arrow_right2_1(god);
		}
		if (god->state.pad3_dir == -1){
			go_pad3_arrow_left2_0(god);
			go_pad3_arrow_left2_1(god);
		} else {
			go_pad3_arrow_right2_0(god);
			go_pad3_arrow_right2_1(god);
		}
	}
	
	if(god->state.frame < 4){
		go_paddle0(god, god->state.paddle_x, 0, god->state.paddle_color);
	} else if (god->state.frame < 8){
		go_paddle1(god, god->state.paddle_x, 0, god->state.paddle_color);
	} else {
		go_paddle2(god, god->state.paddle_x, 0, god->state.paddle_color);
	}
		
	// GAMEOVER
	
	gameover_shade(god);
	
	if(god->state.frame < 4){
		gameover0_G0_0(god);
		gameover0_A0_0(god);
		gameover0_A0_1(god);
		gameover0_M0_0(god);
		gameover0_E0_0(god);
		gameover0_O0_0(god);
		gameover0_O0_1(god);
		gameover0_V0_0(god);
		gameover0_E1_0(god);
		gameover0_R0_0(god);
		gameover0_R0_1(god);
		
		house0_0(god);
		house0_1(god);
		
		select_house0(god);
	} else if (god->state.frame < 8){
		gameover1_G0_0(god);
		gameover1_A0_0(god);
		gameover1_A0_1(god);
		gameover1_M0_0(god);
		gameover1_E0_0(god);
		gameover1_O0_0(god);
		gameover1_O0_1(god);
		gameover1_V0_0(god);
		gameover1_E1_0(god);
		gameover1_R0_0(god);
		gameover1_R0_1(god);
		
		house1_0(god);
		house1_1(god);
		
		select_house1(god);
	} else {
		gameover2_G0_0(god);
		gameover2_A0_0(god);
		gameover2_A0_1(god);
		gameover2_M0_0(god);
		gameover2_E0_0(god);
		gameover2_O0_0(god);
		gameover2_O0_1(god);
		gameover2_V0_0(god);
		gameover2_E1_0(god);
		gameover2_R0_0(god);
		gameover2_R0_1(god);
		
		house2_0(god);
		house2_1(god);
		
		select_house2(god);
	}
	
}
