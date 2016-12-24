
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
	
	// INIT POLYS
	// TODO(init_poly_stack();)
	
	if(init_sdl(&g_swindow) == 1)
		g_swindow.quit = 1;
		
	while( !g_swindow.quit ){
		
		// INPUT
		parse_event(&g_swindow.e, &g_swindow, &g_state);
		
		// UPDATE
		//~ g_state = logic(&g_stack, g_state);
		
		// CLEAR SCREEN
		SDL_SetRenderDrawColor( g_swindow.renderer,
			0x00, 0x00, 0x00, 0x00 );
		SDL_RenderClear( g_swindow.renderer );

		// DRAW
		//~ test_square(&g_swindow);
		new_test_square(&g_swindow);

		// PRESENT
		SDL_RenderPresent( g_swindow.renderer );
		
	}
	
	// CLEANUP POLYS
	// TODO(del_poly_stack();)
	
	// CLEANUP SDL
	SDL_DestroyRenderer(g_swindow.renderer);
	SDL_DestroyWindow(g_swindow.window);
	SDL_Quit();
	
	return 0;
}
