
#include <stdio.h>
#include <SDL2/SDL.h>

#include "window.h"
#include "state.h"
#include "structs.h"
#include "draw.h"
#include "nano_poly.h"

int main(int argc, char* argv[]){
		
	// INITIALIZE
	window_t window = init_window();
	state_t state = init_state();
	
	if(init_sdl(&window) == 1)
		window.quit = 1;
	
	while( !window.quit ){
		
		// INPUT
		parse_event(&window, &state);
		
		// CLEAR SCREEN
		SDL_SetRenderDrawColor( window.renderer,
			0x1C, 0x1F, 0x20, 0xFF );
		SDL_RenderClear( window.renderer );
		
		// UPDATE/DRAW
		logic(&state, &window);
		
		// PRESENT
		SDL_RenderPresent( window.renderer );
		
	}
	
	// CLEANUP SDL
	SDL_DestroyRenderer(window.renderer);
	SDL_DestroyWindow(window.window);
	SDL_Quit();
	
	return 0;
}
