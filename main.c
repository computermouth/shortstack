
#include <stdio.h>
#include "window.h"
#include "state.h"
#include "structs.h"
#include "draw.h"
#include <SDL2/SDL.h>
#include "nano_poly.h"

void test_square (float new_ratio, SDL_Renderer* renderer){
	
	ushort verts = 4;
	
	static short orig_x[4] = { 50, 100, 100, 50 };
	static short orig_y[4] = { 50, 50, 100, 100 };
	static ushort orig_color[4]  = { 0, 255, 125, 255};
	
	static short curr_x[4] = { 0 };
	static short curr_y[4] = { 0 };
	
	static shape shape_s = { 
		.lines		= NULL,
		.line_cnt	= 0,
		.old_ratio 	= 0,
		.x 			= orig_x,
		.y 			= orig_y,
		.color 		= orig_color
		};
	
	if (shape_s.old_ratio != new_ratio){
		ushort i;
		for(i = 0; i < verts; i++){
			curr_x[i] = orig_x[i] * new_ratio;
			curr_y[i] = orig_y[i] * new_ratio;
		}
		shape_s.x = curr_x;
		shape_s.y = curr_y;
		shape_s.old_ratio = new_ratio;
		
		filledPolygonRGBA(
			&shape_s.lines,
			&shape_s.line_cnt, 
			curr_x,
			curr_y,
			verts,
			shape_s.color[0],
			shape_s.color[1],
			shape_s.color[2],
			shape_s.color[3]
			);
	}

	SDL_SetRenderDrawColor( renderer, 0x00, 0x00, 0x00, 0x00 );
	SDL_RenderClear( renderer );

	draw_shape(&shape_s, renderer);
		
	SDL_RenderPresent( renderer );

	//~ free(test_t.lines);
}

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
		SDL_SetRenderDrawColor( g_swindow.renderer, 0x00, 0x00, 0x00, 0x00 );
		SDL_RenderClear( g_swindow.renderer );

		// DRAW
		test_square(g_swindow.r, g_swindow.renderer );

		// PRESENT
		//~ SDL_RenderPresent( g_swindow.renderer );
		
	}
	
	// CLEANUP POLYS
	// TODO(del_poly_stack();)
	
	// CLEANUP SDL
	SDL_DestroyRenderer(g_swindow.renderer);
	SDL_DestroyWindow(g_swindow.window);
	SDL_Quit();
	
	return 0;
}
