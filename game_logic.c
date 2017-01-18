
#include "game_logic.h"
#include "game_logic_shapes.c"

#include "config.h"

void game_logic(god_t *god){
	
	// HEARTS
	
	if(god->state.frame < 4){
		heart0_disabled0(god);
		heart1_disabled0(god);
		heart2_disabled0(god);
		if (god->state.lives > 0) heart0_enabled0(god);
		if (god->state.lives > 1) heart1_enabled0(god);
		if (god->state.lives > 2) heart2_enabled0(god);
	} else if (god->state.frame < 8){
		heart0_disabled1(god);
		heart1_disabled1(god);
		heart2_disabled1(god);
		if (god->state.lives > 0) heart0_enabled1(god);
		if (god->state.lives > 1) heart1_enabled1(god);
		if (god->state.lives > 2) heart2_enabled1(god);
	} else {
		heart0_disabled2(god);
		heart1_disabled2(god);
		heart2_disabled2(god);
		if (god->state.lives > 0) heart0_enabled2(god);
		if (god->state.lives > 1) heart1_enabled2(god);
		if (god->state.lives > 2) heart2_enabled2(god);
	}

	
	// TOP WALL PADS
	
	if(god->state.frame < 4){
		top_wall0(god);
		pad0_0(god);
		pad1_0(god);
		pad2_0(god);
		pad3_0(god);
		if(god->state.hole_open)
			hole_open0(god);
		else
			hole_closed0(god);
	} else if (god->state.frame < 8){
		top_wall1(god);
		pad0_1(god);
		pad1_1(god);
		pad2_1(god);
		pad3_1(god);
		if(god->state.hole_open)
			hole_open1(god);
		else
			hole_closed1(god);
	} else {
		top_wall2(god);
		pad0_2(god);
		pad1_2(god);
		pad2_2(god);
		pad3_2(god);
		if(god->state.hole_open)
			hole_open2(god);
		else
			hole_closed2(god);
	}
	
	if(god->state.frame < 4){
		if (god->state.pad0_dir == -1){
			pad0_arrow_left0_0(god);
			pad0_arrow_left0_1(god);
		} else {
			pad0_arrow_right0_0(god);
			pad0_arrow_right0_1(god);
		}
		if (god->state.pad1_dir == -1){
			pad1_arrow_left0_0(god);
			pad1_arrow_left0_1(god);
		} else {
			pad1_arrow_right0_0(god);
			pad1_arrow_right0_1(god);
		}
		if (god->state.pad2_dir == -1){
			pad2_arrow_left0_0(god);
			pad2_arrow_left0_1(god);
		} else {
			pad2_arrow_right0_0(god);
			pad2_arrow_right0_1(god);
		}
		if (god->state.pad3_dir == -1){
			pad3_arrow_left0_0(god);
			pad3_arrow_left0_1(god);
		} else {
			pad3_arrow_right0_0(god);
			pad3_arrow_right0_1(god);
		}
	} else if (god->state.frame < 8){
		if (god->state.pad0_dir == -1){
			pad0_arrow_left1_0(god);
			pad0_arrow_left1_1(god);
		} else {
			pad0_arrow_right1_0(god);
			pad0_arrow_right1_1(god);
		}
		if (god->state.pad1_dir == -1){
			pad1_arrow_left1_0(god);
			pad1_arrow_left1_1(god);
		} else {
			pad1_arrow_right1_0(god);
			pad1_arrow_right1_1(god);
		}
		if (god->state.pad2_dir == -1){
			pad2_arrow_left1_0(god);
			pad2_arrow_left1_1(god);
		} else {
			pad2_arrow_right1_0(god);
			pad2_arrow_right1_1(god);
		}
		if (god->state.pad3_dir == -1){
			pad3_arrow_left1_0(god);
			pad3_arrow_left1_1(god);
		} else {
			pad3_arrow_right1_0(god);
			pad3_arrow_right1_1(god);
		}
	} else {
		if (god->state.pad0_dir == -1){
			pad0_arrow_left2_0(god);
			pad0_arrow_left2_1(god);
		} else {
			pad0_arrow_right2_0(god);
			pad0_arrow_right2_1(god);
		}
		if (god->state.pad1_dir == -1){
			pad1_arrow_left2_0(god);
			pad1_arrow_left2_1(god);
		} else {
			pad1_arrow_right2_0(god);
			pad1_arrow_right2_1(god);
		}
		if (god->state.pad2_dir == -1){
			pad2_arrow_left2_0(god);
			pad2_arrow_left2_1(god);
		} else {
			pad2_arrow_right2_0(god);
			pad2_arrow_right2_1(god);
		}
		if (god->state.pad3_dir == -1){
			pad3_arrow_left2_0(god);
			pad3_arrow_left2_1(god);
		} else {
			pad3_arrow_right2_0(god);
			pad3_arrow_right2_1(god);
		}
	}
	
	
	// BALL MOVEMENT
	if (god->state.ball_x <= 0){
		god->state.ball_x = 1;
		god->state.ball_x_dir *= -1;
	} else if (god->state.ball_x >=760){
		god->state.ball_x = 759;
		god->state.ball_x_dir *= -1;
	}
	
	if (god->state.bounced == 0 && god->state.ball_y > 300){
		int i, j, k = 0;
		for(i = 0; i < god->state.ball_x_speed; i++){
			if ((god->state.ball_x + (i * god->state.ball_x_dir)) >= (god->state.paddle_x - 19)){
				
				for(j = 0; j < god->state.ball_x_speed; j++){
					if ( god->state.ball_x <= (god->state.paddle_x + (j * god->state.ball_x_dir) + 179)){
						
						for(k = 0; k < god->state.ball_y_speed; k++){
							if ((god->state.ball_y - k) > 395 && (god->state.ball_y - k) < 405) {
								
								god->state.score += 1;
								god->state.paddle_color = 12;
								god->state.paddle_color_delay = 8;
								god->state.ball_y = 395;
								
								if (god->state.score % 5 == 0){
									if(god->state.ball_color > 0){
										
										if(god->state.ball_color != 2){
											god->state.ball_color--;
										}else if(god->state.ball_color > 0){
											god->state.ball_color -= 2;
										}
										
											god->state.ball_x_speed++;
											god->state.ball_y_speed++;
									}
								}
								if (god->state.score % 10 == 0 && god->state.lives < 3){
									god->state.lives++;
								}
									
								god->state.ball_y_dir *= -1;
								god->state.bounced = 1;
								
								short diff = god->state.ball_x - god->state.paddle_x + 19;
								if ( (diff <= 79 && god->state.ball_x_dir == 1) ||
										(diff > 159 && god->state.ball_x_dir == -1))
									god->state.ball_x_dir *= -1;
															
							}
								
							if (god->state.bounced) break;
						}
					}
					if (god->state.bounced) break;
				}
			}
			if (god->state.bounced) break;
		}
	}
	
	
	if (god->state.ball_y >= 500){
		god->state.ball_y = 50;
		god->state.bounced = 0;
		god->state.lives--;
		if (god->state.lives < 0){
			if(god->state.score > god->state.high_score){
				god->state.high_score = god->state.score;
				save_config(god);
			}
			god->state.over = 1;
			god->state.game = 0;
		}
	}
	
	if ((god->state.ball_x + 21) > 30 && 
			(god->state.ball_x + 21) < 109 && 
			god->state.ball_y <= 20){
		//PAD 0
		god->state.bounced = 0;
		god->state.ball_y_dir *= -1;
		god->state.ball_x_dir = god->state.pad0_dir;
		god->state.pad0_dir *= -1;
		god->state.hole_open = 1;
	} else if ((god->state.ball_x + 21) > 180 && 
			(god->state.ball_x + 21) < 259 && 
			god->state.ball_y <= 20){
		//PAD 1
		god->state.bounced = 0;
		god->state.ball_y_dir *= -1;
		god->state.ball_x_dir = god->state.pad1_dir;
		god->state.pad1_dir *= -1;
		god->state.hole_open = 1;
	} else if ((god->state.ball_x + 21) > 350 && 
			(god->state.ball_x + 21) < 450 && 
			god->state.ball_y <= 20 &&
			god->state.hole_open == 1){
		//HOLE
		god->state.ball_y = 499;
		god->state.bounced = 1;
		god->state.hole_open = 0;
	} else if ((god->state.ball_x + 21) > 540 && 
			(god->state.ball_x + 21) < 619 && 
			god->state.ball_y <= 20){
		//PAD 2
		god->state.bounced = 0;
		god->state.ball_y_dir *= -1;
		god->state.ball_x_dir = god->state.pad2_dir;
		god->state.pad2_dir *= -1;
	} else if ((god->state.ball_x + 21) > 690 && 
			(god->state.ball_x + 21) < 769 && 
			god->state.ball_y <= 20){
		//PAD 3
		god->state.bounced = 0;
		god->state.ball_y_dir *= -1;
		god->state.ball_x_dir = god->state.pad3_dir;
		god->state.pad3_dir *= -1;
		god->state.hole_open = 1;
	} else if (god->state.ball_y <= 20 ){
		god->state.ball_y_dir *= -1;
		god->state.bounced = 0;
		god->state.hole_open = 1;
	}

			
	god->state.ball_x += (god->state.ball_x_dir * god->state.ball_x_speed);
	god->state.ball_y += (god->state.ball_y_dir * god->state.ball_y_speed);
	
	if(god->state.frame < 4){
		ball0(god, god->state.ball_x, god->state.ball_y, god->state.ball_color);
	} else if (god->state.frame < 8){
		ball1(god, god->state.ball_x, god->state.ball_y, god->state.ball_color);
	} else {
		ball2(god, god->state.ball_x, god->state.ball_y, god->state.ball_color);
	}
	
	
	// PADDLE MOVEMENT
	if(god->keystate.lt && god->state.paddle_x > 0){
		god->state.paddle_x -= 20;
		god->keystate.lt = 0;
	}
	if(god->keystate.rt && god->state.paddle_x < 600){
		god->state.paddle_x += 20;
		god->keystate.rt = 0;
	}
	
	if(god->state.frame < 4){
		paddle0(god, god->state.paddle_x, 0, god->state.paddle_color);
	} else if (god->state.frame < 8){
		paddle1(god, god->state.paddle_x, 0, god->state.paddle_color);
	} else {
		paddle2(god, god->state.paddle_x, 0, god->state.paddle_color);
	}
	
	if (god->state.paddle_color_delay == 0)
		god->state.paddle_color = 13;
	else
		god->state.paddle_color_delay--;
	
}
