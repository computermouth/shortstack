
#include <stdio.h>
#include <SDL2/SDL.h>

#include "window.h"
#include "state.h"
#include "structs.h"
#include "draw.h"
#include "nano_poly.h"
#include "shapes.h"

int main(){
	
	// INITIALIZE
	swindow g_swindow = init_swindow(g_swindow);
	state g_state = init_state();
	
	if(init_sdl(&g_swindow) == 1)
		g_swindow.quit = 1;

	while( !g_swindow.quit ){

		// INPUT
		parse_event(&g_swindow.e, &g_swindow, &g_state);
		
		// CLEAR SCREEN
		SDL_SetRenderDrawColor( g_swindow.renderer,
			0x1C, 0x1F, 0x20, 0xFF );
		SDL_RenderClear( g_swindow.renderer );

		// UPDATE/DRAW
		//~ g_state = logic(&g_stack, g_state);
		active_bg(&g_swindow);
		//~ test_square(&g_swindow);
		
		crunchball0_C0_0(&g_swindow);
		crunchball0_R0_0(&g_swindow);
		crunchball0_R0_1(&g_swindow);
		crunchball0_U0_0(&g_swindow);
		crunchball0_N0_0(&g_swindow);
		crunchball0_C1_0(&g_swindow);
		crunchball0_H0_0(&g_swindow);
		crunchball0_B0_0(&g_swindow);
		crunchball0_B0_1(&g_swindow);
		crunchball0_B0_2(&g_swindow);
		crunchball0_A0_0(&g_swindow);
		crunchball0_A0_1(&g_swindow);
		crunchball0_L0_0(&g_swindow);
		crunchball0_L0_1(&g_swindow);
		
		crunchball1_C0_0(&g_swindow);
		crunchball1_R0_0(&g_swindow);
		crunchball1_R0_1(&g_swindow);
		crunchball1_U0_0(&g_swindow);
		crunchball1_N0_0(&g_swindow);
		crunchball1_C1_0(&g_swindow);
		crunchball1_H0_0(&g_swindow);
		crunchball1_B0_0(&g_swindow);
		crunchball1_B0_1(&g_swindow);
		crunchball1_B0_2(&g_swindow);
		crunchball1_A0_0(&g_swindow);
		crunchball1_A0_1(&g_swindow);
		crunchball1_L0_0(&g_swindow);
		crunchball1_L1_0(&g_swindow);
		
		crunchball2_C0_0(&g_swindow);
		crunchball2_R0_0(&g_swindow);
		crunchball2_R0_1(&g_swindow);
		crunchball2_U0_0(&g_swindow);
		crunchball2_N0_0(&g_swindow);
		crunchball2_C1_0(&g_swindow);
		crunchball2_H0_0(&g_swindow);
		crunchball2_B0_0(&g_swindow);
		crunchball2_B0_1(&g_swindow);
		crunchball2_B0_2(&g_swindow);
		crunchball2_A0_0(&g_swindow);
		crunchball2_A0_1(&g_swindow);
		crunchball2_L0_0(&g_swindow);
		crunchball2_L1_0(&g_swindow);
		
		// PRESENT
		SDL_RenderPresent( g_swindow.renderer );
				
	}
	
	// CLEANUP SDL
	SDL_DestroyRenderer(g_swindow.renderer);
	SDL_DestroyWindow(g_swindow.window);
	SDL_Quit();
	
	return 0;
}
