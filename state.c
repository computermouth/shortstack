
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
				g_state.ball_color = 0;
				g_state.ball_x = 100;
				g_state.ball_y = 100;
				g_state.paddle_x = 350;
			} else {
				g_swindow->quit = 1;
			}
		}
		
	}
	
	
	
	return g_state;
}
