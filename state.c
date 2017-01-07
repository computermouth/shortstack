
#include "state.h"
#include "shapes.h"
#include "structs.h"

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
	g_state.menu = 1;
	g_state.menu_select = 1;
	g_state.game = 0;

	g_state.pad0_dir = -1;
	g_state.pad1_dir = 1;
	g_state.pad2_dir = -1;
	g_state.pad3_dir = 1;
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
		
		if(g_state.frame < 4){
			crunchball0_C0_0(g_swindow);
			crunchball0_R0_0(g_swindow);
			crunchball0_R0_1(g_swindow);
			crunchball0_U0_0(g_swindow);
			crunchball0_N0_0(g_swindow);
			crunchball0_C1_0(g_swindow);
			crunchball0_H0_0(g_swindow);
			crunchball0_B0_0(g_swindow);
			crunchball0_B0_1(g_swindow);
			crunchball0_B0_2(g_swindow);
			crunchball0_A0_0(g_swindow);
			crunchball0_A0_1(g_swindow);
			crunchball0_L0_0(g_swindow);
			crunchball0_L0_1(g_swindow);
			
			settings0_0(g_swindow);
			settings0_1(g_swindow);
			play0_0(g_swindow);
			stop0_0(g_swindow);
		} else if(g_state.frame < 8){
			crunchball1_C0_0(g_swindow);
			crunchball1_R0_0(g_swindow);
			crunchball1_R0_1(g_swindow);
			crunchball1_U0_0(g_swindow);
			crunchball1_N0_0(g_swindow);
			crunchball1_C1_0(g_swindow);
			crunchball1_H0_0(g_swindow);
			crunchball1_B0_0(g_swindow);
			crunchball1_B0_1(g_swindow);
			crunchball1_B0_2(g_swindow);
			crunchball1_A0_0(g_swindow);
			crunchball1_A0_1(g_swindow);
			crunchball1_L0_0(g_swindow);
			crunchball1_L1_0(g_swindow);
			
			settings1_0(g_swindow);
			settings1_1(g_swindow);
			play1_0(g_swindow);
			stop1_0(g_swindow);
		} else {
			crunchball2_C0_0(g_swindow);
			crunchball2_R0_0(g_swindow);
			crunchball2_R0_1(g_swindow);
			crunchball2_U0_0(g_swindow);
			crunchball2_N0_0(g_swindow);
			crunchball2_C1_0(g_swindow);
			crunchball2_H0_0(g_swindow);
			crunchball2_B0_0(g_swindow);
			crunchball2_B0_1(g_swindow);
			crunchball2_B0_2(g_swindow);
			crunchball2_A0_0(g_swindow);
			crunchball2_A0_1(g_swindow);
			crunchball2_L0_0(g_swindow);
			crunchball2_L1_0(g_swindow);
			
			settings2_0(g_swindow);
			settings2_1(g_swindow);
			play2_0(g_swindow);
			stop2_0(g_swindow);
		}
		
		if(g_state.frame < 4){
			if(g_state.menu_select == 0)
				select_settings0(g_swindow);
			else if(g_state.menu_select == 1)
				select_play0(g_swindow);
			else
				select_stop0(g_swindow);
		} else if(g_state.frame < 4){
			if(g_state.menu_select == 0)
				select_settings1(g_swindow);
			else if(g_state.menu_select == 1)
				select_play1(g_swindow);
			else
				select_stop1(g_swindow);
		} else { 
			if(g_state.menu_select == 0)
				select_settings2(g_swindow);
			else if(g_state.menu_select == 1)
				select_play2(g_swindow);
			else
				select_stop2(g_swindow);
		}
		
		if(g_state.k.lt == 1 && g_state.menu_select > 0){
			g_state.menu_select--;
			g_state.k.lt = 0;
		}
		if(g_state.k.rt == 1 && g_state.menu_select < 3){
			g_state.menu_select++;
			g_state.k.rt = 0;
		}
		
		if(g_state.k.ent == 1 ){
			if(g_state.menu_select == 0){
				//SETTINGS
			} else if(g_state.menu_select == 1){
				g_state.k.ent = 0;
				g_state.menu = 0;
				g_state.game = 1;
				g_state.score = 0;
				g_state.lives = 2;
				g_state.bounced = 0;
				g_state.ball_color = 15;
				g_state.ball_y = 50;
				g_state.paddle_x = 300;
				g_state.paddle_color_delay = 0;
				g_state.ball_x_speed = 3;
				g_state.ball_y_speed = 2;
			} else {
				g_swindow->quit = 1;
			}
		}
		
	} else if(g_state.game == 1){
		
		if(g_state.frame < 4){
			top_wall0(g_swindow);
			pad0_0(g_swindow);
			pad1_0(g_swindow);
			pad2_0(g_swindow);
			pad3_0(g_swindow);
			if(g_state.hole_open)
				hole_open0(g_swindow);
			else
				hole_closed0(g_swindow);
		} else if (g_state.frame < 8){
			top_wall1(g_swindow);
			pad0_1(g_swindow);
			pad1_1(g_swindow);
			pad2_1(g_swindow);
			pad3_1(g_swindow);
			if(g_state.hole_open)
				hole_open1(g_swindow);
			else
				hole_closed1(g_swindow);
		} else {
			top_wall2(g_swindow);
			pad0_2(g_swindow);
			pad1_2(g_swindow);
			pad2_2(g_swindow);
			pad3_2(g_swindow);
			if(g_state.hole_open)
				hole_open2(g_swindow);
			else
				hole_closed2(g_swindow);
		}
		
		// TOP WALL PADS
		
		if(g_state.frame < 4){
			if (g_state.pad0_dir == -1){
				pad0_arrow_left0_0(g_swindow);
				pad0_arrow_left0_1(g_swindow);
			} else {
				pad0_arrow_right0_0(g_swindow);
				pad0_arrow_right0_1(g_swindow);
			}
			if (g_state.pad1_dir == -1){
				pad1_arrow_left0_0(g_swindow);
				pad1_arrow_left0_1(g_swindow);
			} else {
				pad1_arrow_right0_0(g_swindow);
				pad1_arrow_right0_1(g_swindow);
			}
			if (g_state.pad2_dir == -1){
				pad2_arrow_left0_0(g_swindow);
				pad2_arrow_left0_1(g_swindow);
			} else {
				pad2_arrow_right0_0(g_swindow);
				pad2_arrow_right0_1(g_swindow);
			}
			if (g_state.pad3_dir == -1){
				pad3_arrow_left0_0(g_swindow);
				pad3_arrow_left0_1(g_swindow);
			} else {
				pad3_arrow_right0_0(g_swindow);
				pad3_arrow_right0_1(g_swindow);
			}
		} else if (g_state.frame < 8){
			if (g_state.pad0_dir == -1){
				pad0_arrow_left1_0(g_swindow);
				pad0_arrow_left1_1(g_swindow);
			} else {
				pad0_arrow_right1_0(g_swindow);
				pad0_arrow_right1_1(g_swindow);
			}
			if (g_state.pad1_dir == -1){
				pad1_arrow_left1_0(g_swindow);
				pad1_arrow_left1_1(g_swindow);
			} else {
				pad1_arrow_right1_0(g_swindow);
				pad1_arrow_right1_1(g_swindow);
			}
			if (g_state.pad2_dir == -1){
				pad2_arrow_left1_0(g_swindow);
				pad2_arrow_left1_1(g_swindow);
			} else {
				pad2_arrow_right1_0(g_swindow);
				pad2_arrow_right1_1(g_swindow);
			}
			if (g_state.pad3_dir == -1){
				pad3_arrow_left1_0(g_swindow);
				pad3_arrow_left1_1(g_swindow);
			} else {
				pad3_arrow_right1_0(g_swindow);
				pad3_arrow_right1_1(g_swindow);
			}
		} else {
			if (g_state.pad0_dir == -1){
				pad0_arrow_left2_0(g_swindow);
				pad0_arrow_left2_1(g_swindow);
			} else {
				pad0_arrow_right2_0(g_swindow);
				pad0_arrow_right2_1(g_swindow);
			}
			if (g_state.pad1_dir == -1){
				pad1_arrow_left2_0(g_swindow);
				pad1_arrow_left2_1(g_swindow);
			} else {
				pad1_arrow_right2_0(g_swindow);
				pad1_arrow_right2_1(g_swindow);
			}
			if (g_state.pad2_dir == -1){
				pad2_arrow_left2_0(g_swindow);
				pad2_arrow_left2_1(g_swindow);
			} else {
				pad2_arrow_right2_0(g_swindow);
				pad2_arrow_right2_1(g_swindow);
			}
			if (g_state.pad3_dir == -1){
				pad3_arrow_left2_0(g_swindow);
				pad3_arrow_left2_1(g_swindow);
			} else {
				pad3_arrow_right2_0(g_swindow);
				pad3_arrow_right2_1(g_swindow);
			}
		}
		
		
		// BALL MOVEMENT
		if (g_state.ball_x <= 0 || g_state.ball_x >=760){
			g_state.ball_x_dir *= -1;
		}
		
		if (g_state.bounced == 0 && g_state.ball_y > 300){
			int i, j, k = 0;
			for(i = 0; i < g_state.ball_x_speed; i++){
				if ((g_state.ball_x + (i * g_state.ball_x_dir)) >= (g_state.paddle_x - 19)){
					
					for(j = 0; j < g_state.ball_x_speed; j++){
						if ( g_state.ball_x <= (g_state.paddle_x + (j * g_state.ball_x_dir) + 179)){
							
							for(k = 0; k < g_state.ball_y_speed; k++){
								if ((g_state.ball_y - k) > 395 && (g_state.ball_y - k) < 405) {
									
									g_state.score += 1;
									g_state.paddle_color = 12;
									g_state.paddle_color_delay = 8;
									g_state.ball_y = 395;
									
									if (g_state.score % 5 == 0){
										if(g_state.ball_color > 0){
											
											if(g_state.ball_color != 2){
												g_state.ball_color--;
											}else if(g_state.ball_color > 0){
												g_state.ball_color -= 2;
											}
											
												g_state.ball_x_speed++;
												g_state.ball_y_speed++;
										}
									}
										
									g_state.ball_y_dir *= -1;
									g_state.bounced = 1;
									
									short diff = g_state.ball_x - g_state.paddle_x + 19;
									if ( diff <= 79 || diff > 159)
										g_state.ball_x_dir *= -1;
																
								}
									
								if (g_state.bounced) break;
							}
						}
						if (g_state.bounced) break;
					}
				}
				if (g_state.bounced) break;
			}
		}
		
		
		if (g_state.ball_y >= 500){
			g_state.ball_y = 50;
			g_state.bounced = 0;
			g_state.lives--;
			if (g_state.lives < 0)
				g_swindow->quit = 1;
		}
		
		if ((g_state.ball_x + 21) > 30 && 
				(g_state.ball_x + 21) < 109 && 
				g_state.ball_y <= 20){
			//PAD 0
			g_state.bounced = 0;
			g_state.ball_y_dir *= -1;
			g_state.ball_x_dir = g_state.pad0_dir;
			g_state.pad0_dir *= -1;
			g_state.hole_open = 1;
		} else if ((g_state.ball_x + 21) > 180 && 
				(g_state.ball_x + 21) < 259 && 
				g_state.ball_y <= 20){
			//PAD 1
			g_state.bounced = 0;
			g_state.ball_y_dir *= -1;
			g_state.ball_x_dir = g_state.pad1_dir;
			g_state.pad1_dir *= -1;
			g_state.hole_open = 1;
		} else if ((g_state.ball_x + 21) > 350 && 
				(g_state.ball_x + 21) < 450 && 
				g_state.ball_y <= 20 &&
				g_state.hole_open == 1){
			//HOLE
			g_state.ball_y = 499;
			g_state.bounced = 1;
			g_state.hole_open = 0;
		} else if ((g_state.ball_x + 21) > 540 && 
				(g_state.ball_x + 21) < 619 && 
				g_state.ball_y <= 20){
			//PAD 2
			g_state.bounced = 0;
			g_state.ball_y_dir *= -1;
			g_state.ball_x_dir = g_state.pad2_dir;
			g_state.pad2_dir *= -1;
		} else if ((g_state.ball_x + 21) > 690 && 
				(g_state.ball_x + 21) < 769 && 
				g_state.ball_y <= 20){
			//PAD 3
			g_state.bounced = 0;
			g_state.ball_y_dir *= -1;
			g_state.ball_x_dir = g_state.pad3_dir;
			g_state.pad3_dir *= -1;
			g_state.hole_open = 1;
		} else if (g_state.ball_y <= 20 ){
			g_state.ball_y_dir *= -1;
			g_state.bounced = 0;
			g_state.hole_open = 1;
		}

				
		g_state.ball_x += (g_state.ball_x_dir * g_state.ball_x_speed);
		g_state.ball_y += (g_state.ball_y_dir * g_state.ball_y_speed);
		
		if(g_state.frame < 4){
			ball0(g_swindow, g_state.ball_x, g_state.ball_y, g_state.ball_color);
		} else if (g_state.frame < 8){
			ball1(g_swindow, g_state.ball_x, g_state.ball_y, g_state.ball_color);
		} else {
			ball2(g_swindow, g_state.ball_x, g_state.ball_y, g_state.ball_color);
		}
		
		
		// PADDLE MOVEMENT
		if(g_state.k.lt && g_state.paddle_x > 0){
			g_state.paddle_x -= 20;
			g_state.k.lt = 0;
		}
		if(g_state.k.rt && g_state.paddle_x < 600){
			g_state.paddle_x += 20;
			g_state.k.rt = 0;
		}
		
		if(g_state.frame < 4){
			paddle0(g_swindow, g_state.paddle_x, 0, g_state.paddle_color);
		} else if (g_state.frame < 8){
			paddle1(g_swindow, g_state.paddle_x, 0, g_state.paddle_color);
		} else {
			paddle2(g_swindow, g_state.paddle_x, 0, g_state.paddle_color);
		}
		
		if (g_state.paddle_color_delay == 0)
			g_state.paddle_color = 13;
		else
			g_state.paddle_color_delay--;
	}
	
	
	
	return g_state;
}
