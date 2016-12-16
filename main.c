
#include <stdio.h>
#include "window.h"
#include "stack.h"
#include "state.h"
#include "structs.h"
#include "logic.h"
#include "draw.h"
#include <SDL2/SDL.h>
#include "nano_poly.h"

//~ struct Test{
	//~ liner *lines;
	//~ short line_cnt;
	//~ float old_ratio;
	//~ short *test_x;
	//~ short *test_y;
	//~ ushort *test_color;
//~ };
//~ typedef struct Test test;

void test_shape (int new_ratio, SDL_Renderer* renderer){
	
	ushort verts = 4;
	
	static short orig_x[4] = { 50, 100, 100, 50 };
	static short orig_y[4] = { 50, 50, 100, 100 };
	static ushort orig_color[4]  = { 0, 255, 125, 255};
	
	static short curr_x[4] = { 0 };
	static short curr_y[4] = { 0 };
	
	static test test_t = { 
		.line_cnt	= 0,
		.old_ratio 	= 0,
		.test_x 	= orig_x,
		.test_y 	= orig_y,
		.test_color = orig_color
		};
	
	if (test_t.old_ratio != new_ratio){
		ushort i;
		for(i = 0; i < verts; i++){
			curr_x[i] = orig_x[i] * new_ratio;
			curr_y[i] = orig_y[i] * new_ratio;
		}
		test_t.test_x = curr_x;
		test_t.test_y = curr_y;
		test_t.old_ratio = new_ratio;
		
		filledPolygonRGBA(
			&test_t.lines,
			&test_t.line_cnt, 
			curr_x,
			curr_y,
			verts,
			test_t.test_color[0],
			test_t.test_color[1],
			test_t.test_color[2],
			test_t.test_color[3]
			);
	}

	SDL_SetRenderDrawColor( renderer, 0x00, 0x00, 0x00, 0x00 );
	SDL_RenderClear( renderer );

	draw_shape(&test_t, renderer);
		
	SDL_RenderPresent( renderer );
}

int main(){
	
	swindow g_swindow = init_swindow(g_swindow);
	state g_state = init_state();
	stack g_stack = init_stack();
	
	if(init_sdl(&g_swindow) == 1)
		g_swindow.quit = 1;
		
	while( !g_swindow.quit ){
		
		parse_event(&g_swindow.e, &g_swindow, &g_state);
		
		//~ if(g_swindow.r_changed){
			//~ cache_actors(g_swindow.r, g_swindow.p_x, g_swindow.p_y);
			//~ g_swindow.r_changed = 0;
		//~ }
		
		//~ g_state = logic(&g_stack, g_state);
		test_shape(2, g_swindow.renderer );
				
		//~ g_stack = push_stack(g_stack, keys.anims[0].frames[0]);
		
		//~ g_swindow.renderer = draw_stack(&g_stack, g_swindow.renderer);
		
		//~ SDL_RenderPresent( g_swindow.renderer );
	}
	
	
	del_stack(g_stack);
	//~ del_actors();
	
	SDL_DestroyWindow(g_swindow.window);
	SDL_DestroyRenderer(g_swindow.renderer);
	SDL_Quit();
	
	return 0;
}
