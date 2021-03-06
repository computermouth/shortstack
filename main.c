
#include <stdio.h>
#include <SDL2/SDL.h>

#include "god.h"
#include "state.h"
#include "scalar.h"
#include "structs.h"
#include "config.h"

int main(int argc, char* argv[]){
		
	// INITIALIZE
	god_t god = init_god();
	
	while( !god.scalar.quit ){
		
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
	
	save_config(&god);
	destroy_god(&god);
	
	// CLEANUP SDL
	SDL_DestroyRenderer(god.sdl.renderer);
	SDL_DestroyWindow(god.sdl.window);
	Mix_Quit();
	SDL_Quit();
	
	return 0;
}
