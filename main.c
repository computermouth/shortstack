
#include <stdio.h>
#include <SDL2/SDL.h>

#include "window.h"
#include "state.h"
#include "structs.h"
#include "draw.h"
#include "nano_poly.h"

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
		g_state = logic(g_state, &g_swindow);
		
		// PRESENT
		SDL_RenderPresent( g_swindow.renderer );
		
	}
	
	// CLEANUP SDL
	SDL_DestroyRenderer(g_swindow.renderer);
	SDL_DestroyWindow(g_swindow.window);
	SDL_Quit();
	
	return 0;
}
