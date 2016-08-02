
#include <stdio.h>
#include "actors/actors.h"
#include "stack/stack.h"
#include "state/state.h"
#include "sdl/draw.h"
#include "sdl/swindow.h"

int main(){
	
	swindow g_swindow = init_swindow(g_swindow);
	
	if(init_sdl(&g_swindow) == 1)
		g_swindow.quit = 1;
	
	state g_state = init_state();
	init_actors();
		
	while( !g_swindow.quit ){
		stack g_stack = init_stack();
		
		parse_event(&g_swindow.e, &g_swindow, &g_state);
	
		//~ g_stack = push_stack(g_stack, keys.anims[1].frames[1]);
		//~ printf("%d\n", keys.anims[1].frames[1].shapes[1].points );
		
		g_swindow.renderer = draw_stack(g_stack, g_swindow.renderer, g_swindow.r);
		
		del_stack(g_stack);
		
		SDL_RenderPresent( g_swindow.renderer );
	}
	
	SDL_DestroyWindow(g_swindow.window);
	SDL_DestroyRenderer(g_swindow.renderer);
	SDL_Quit();
	
	return 0;
}
