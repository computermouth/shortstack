
#include <stdio.h>
#include <SDL2/SDL.h>

#include "window.h"
#include "state.h"
#include "structs.h"

#include "macros.h"

int main(int argc, char* argv[]){
		
	// INITIALIZE
	god_t god;
	god.window = init_window();
	god.state = init_state();
	god.window.quit = init_sdl(&god);
	
	
	while( !god.window.quit ){
		
		// INPUT
		parse_event(&god);
		
		// CLEAR SCREEN
		SDL_SetRenderDrawColor( god.sdl.renderer,
			0x1C, 0x1F, 0x20, 0xFF );
		SDL_RenderClear( god.sdl.renderer );
		
		// UPDATE/DRAW
		logic(&god);
		
		// PRESENT
		SDL_RenderPresent( god.sdl.renderer );
		
	}
	
	// CLEANUP SDL
	SDL_DestroyRenderer(god.sdl.renderer);
	SDL_DestroyWindow(god.sdl.window);
	SDL_Quit();
	
	return 0;
}
