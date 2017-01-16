
#include "game_logic.h"
#include "game_logic_shapes.c"

void game_logic(state_t* state, window_t *window){
	
	// HEARTS
	
	if(state->frame < 4){
		heart0_disabled0(window);
		heart1_disabled0(window);
		heart2_disabled0(window);
		if (state->lives > 0) heart0_enabled0(window);
		if (state->lives > 1) heart1_enabled0(window);
		if (state->lives > 2) heart2_enabled0(window);
	} else if (state->frame < 8){
		heart0_disabled1(window);
		heart1_disabled1(window);
		heart2_disabled1(window);
		if (state->lives > 0) heart0_enabled1(window);
		if (state->lives > 1) heart1_enabled1(window);
		if (state->lives > 2) heart2_enabled1(window);
	} else {
		heart0_disabled2(window);
		heart1_disabled2(window);
		heart2_disabled2(window);
		if (state->lives > 0) heart0_enabled2(window);
		if (state->lives > 1) heart1_enabled2(window);
		if (state->lives > 2) heart2_enabled2(window);
	}

	
	// TOP WALL PADS
	
	if(state->frame < 4){
		top_wall0(window);
		pad0_0(window);
		pad1_0(window);
		pad2_0(window);
		pad3_0(window);
		if(state->hole_open)
			hole_open0(window);
		else
			hole_closed0(window);
	} else if (state->frame < 8){
		top_wall1(window);
		pad0_1(window);
		pad1_1(window);
		pad2_1(window);
		pad3_1(window);
		if(state->hole_open)
			hole_open1(window);
		else
			hole_closed1(window);
	} else {
		top_wall2(window);
		pad0_2(window);
		pad1_2(window);
		pad2_2(window);
		pad3_2(window);
		if(state->hole_open)
			hole_open2(window);
		else
			hole_closed2(window);
	}
	
	if(state->frame < 4){
		if (state->pad0_dir == -1){
			pad0_arrow_left0_0(window);
			pad0_arrow_left0_1(window);
		} else {
			pad0_arrow_right0_0(window);
			pad0_arrow_right0_1(window);
		}
		if (state->pad1_dir == -1){
			pad1_arrow_left0_0(window);
			pad1_arrow_left0_1(window);
		} else {
			pad1_arrow_right0_0(window);
			pad1_arrow_right0_1(window);
		}
		if (state->pad2_dir == -1){
			pad2_arrow_left0_0(window);
			pad2_arrow_left0_1(window);
		} else {
			pad2_arrow_right0_0(window);
			pad2_arrow_right0_1(window);
		}
		if (state->pad3_dir == -1){
			pad3_arrow_left0_0(window);
			pad3_arrow_left0_1(window);
		} else {
			pad3_arrow_right0_0(window);
			pad3_arrow_right0_1(window);
		}
	} else if (state->frame < 8){
		if (state->pad0_dir == -1){
			pad0_arrow_left1_0(window);
			pad0_arrow_left1_1(window);
		} else {
			pad0_arrow_right1_0(window);
			pad0_arrow_right1_1(window);
		}
		if (state->pad1_dir == -1){
			pad1_arrow_left1_0(window);
			pad1_arrow_left1_1(window);
		} else {
			pad1_arrow_right1_0(window);
			pad1_arrow_right1_1(window);
		}
		if (state->pad2_dir == -1){
			pad2_arrow_left1_0(window);
			pad2_arrow_left1_1(window);
		} else {
			pad2_arrow_right1_0(window);
			pad2_arrow_right1_1(window);
		}
		if (state->pad3_dir == -1){
			pad3_arrow_left1_0(window);
			pad3_arrow_left1_1(window);
		} else {
			pad3_arrow_right1_0(window);
			pad3_arrow_right1_1(window);
		}
	} else {
		if (state->pad0_dir == -1){
			pad0_arrow_left2_0(window);
			pad0_arrow_left2_1(window);
		} else {
			pad0_arrow_right2_0(window);
			pad0_arrow_right2_1(window);
		}
		if (state->pad1_dir == -1){
			pad1_arrow_left2_0(window);
			pad1_arrow_left2_1(window);
		} else {
			pad1_arrow_right2_0(window);
			pad1_arrow_right2_1(window);
		}
		if (state->pad2_dir == -1){
			pad2_arrow_left2_0(window);
			pad2_arrow_left2_1(window);
		} else {
			pad2_arrow_right2_0(window);
			pad2_arrow_right2_1(window);
		}
		if (state->pad3_dir == -1){
			pad3_arrow_left2_0(window);
			pad3_arrow_left2_1(window);
		} else {
			pad3_arrow_right2_0(window);
			pad3_arrow_right2_1(window);
		}
	}
	
	
	// BALL MOVEMENT
	if (state->ball_x <= 0){
		state->ball_x = 1;
		state->ball_x_dir *= -1;
	} else if (state->ball_x >=760){
		state->ball_x = 759;
		state->ball_x_dir *= -1;
	}
	
	if (state->bounced == 0 && state->ball_y > 300){
		int i, j, k = 0;
		for(i = 0; i < state->ball_x_speed; i++){
			if ((state->ball_x + (i * state->ball_x_dir)) >= (state->paddle_x - 19)){
				
				for(j = 0; j < state->ball_x_speed; j++){
					if ( state->ball_x <= (state->paddle_x + (j * state->ball_x_dir) + 179)){
						
						for(k = 0; k < state->ball_y_speed; k++){
							if ((state->ball_y - k) > 395 && (state->ball_y - k) < 405) {
								
								state->score += 1;
								state->paddle_color = 12;
								state->paddle_color_delay = 8;
								state->ball_y = 395;
								
								if (state->score % 5 == 0){
									if(state->ball_color > 0){
										
										if(state->ball_color != 2){
											state->ball_color--;
										}else if(state->ball_color > 0){
											state->ball_color -= 2;
										}
										
											state->ball_x_speed++;
											state->ball_y_speed++;
									}
								}
								if (state->score % 10 == 0 && state->lives < 3){
									state->lives++;
								}
									
								state->ball_y_dir *= -1;
								state->bounced = 1;
								
								short diff = state->ball_x - state->paddle_x + 19;
								if ( (diff <= 79 && state->ball_x_dir == 1) ||
										(diff > 159 && state->ball_x_dir == -1))
									state->ball_x_dir *= -1;
															
							}
								
							if (state->bounced) break;
						}
					}
					if (state->bounced) break;
				}
			}
			if (state->bounced) break;
		}
	}
	
	
	if (state->ball_y >= 500){
		state->ball_y = 50;
		state->bounced = 0;
		state->lives--;
		if (state->lives < 0){
			state->over = 1;
			state->game = 0;
		}
	}
	
	if ((state->ball_x + 21) > 30 && 
			(state->ball_x + 21) < 109 && 
			state->ball_y <= 20){
		//PAD 0
		state->bounced = 0;
		state->ball_y_dir *= -1;
		state->ball_x_dir = state->pad0_dir;
		state->pad0_dir *= -1;
		state->hole_open = 1;
	} else if ((state->ball_x + 21) > 180 && 
			(state->ball_x + 21) < 259 && 
			state->ball_y <= 20){
		//PAD 1
		state->bounced = 0;
		state->ball_y_dir *= -1;
		state->ball_x_dir = state->pad1_dir;
		state->pad1_dir *= -1;
		state->hole_open = 1;
	} else if ((state->ball_x + 21) > 350 && 
			(state->ball_x + 21) < 450 && 
			state->ball_y <= 20 &&
			state->hole_open == 1){
		//HOLE
		state->ball_y = 499;
		state->bounced = 1;
		state->hole_open = 0;
	} else if ((state->ball_x + 21) > 540 && 
			(state->ball_x + 21) < 619 && 
			state->ball_y <= 20){
		//PAD 2
		state->bounced = 0;
		state->ball_y_dir *= -1;
		state->ball_x_dir = state->pad2_dir;
		state->pad2_dir *= -1;
	} else if ((state->ball_x + 21) > 690 && 
			(state->ball_x + 21) < 769 && 
			state->ball_y <= 20){
		//PAD 3
		state->bounced = 0;
		state->ball_y_dir *= -1;
		state->ball_x_dir = state->pad3_dir;
		state->pad3_dir *= -1;
		state->hole_open = 1;
	} else if (state->ball_y <= 20 ){
		state->ball_y_dir *= -1;
		state->bounced = 0;
		state->hole_open = 1;
	}

			
	state->ball_x += (state->ball_x_dir * state->ball_x_speed);
	state->ball_y += (state->ball_y_dir * state->ball_y_speed);
	
	if(state->frame < 4){
		ball0(window, state->ball_x, state->ball_y, state->ball_color);
	} else if (state->frame < 8){
		ball1(window, state->ball_x, state->ball_y, state->ball_color);
	} else {
		ball2(window, state->ball_x, state->ball_y, state->ball_color);
	}
	
	
	// PADDLE MOVEMENT
	if(state->k.lt && state->paddle_x > 0){
		state->paddle_x -= 20;
		state->k.lt = 0;
	}
	if(state->k.rt && state->paddle_x < 600){
		state->paddle_x += 20;
		state->k.rt = 0;
	}
	
	if(state->frame < 4){
		paddle0(window, state->paddle_x, 0, state->paddle_color);
	} else if (state->frame < 8){
		paddle1(window, state->paddle_x, 0, state->paddle_color);
	} else {
		paddle2(window, state->paddle_x, 0, state->paddle_color);
	}
	
	if (state->paddle_color_delay == 0)
		state->paddle_color = 13;
	else
		state->paddle_color_delay--;
	
}
