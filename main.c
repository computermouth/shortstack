
#include <stdio.h>
#include <SDL2/SDL.h>

#include "window.h"
#include "state.h"
#include "structs.h"
#include "draw.h"
#include "nano_poly.h"
#include "shapes.h"

#include <unistd.h>

const int SCREEN_TICKS_PER_FRAME = 1000 / 60;

struct Timer{
	int startTicks;
	int pausedTicks;
};
typedef struct Timer timer;

void test_square (swindow *g_swindow){
	
	ushort verts = 4;
	
	static short orig_x[4] = { 0, 800, 800, 0 };
	static short orig_y[4] = { 0, 0, 500, 500 };
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
	
	if (shape_s.old_ratio != g_swindow->r){
		ushort i;
		for(i = 0; i < verts; i++){
			curr_x[i] = (orig_x[i] * g_swindow->r) + g_swindow->p_x;
			curr_y[i] = (orig_y[i] * g_swindow->r) + g_swindow->p_y;
		}
		shape_s.x = curr_x;
		shape_s.y = curr_y;
		shape_s.old_ratio = g_swindow->r;
		
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

	draw_shape(&shape_s, g_swindow->renderer);

}

struct P_a{
	SDL_Point* sdlp;
	unsigned int count;
};
typedef struct P_a p_a;

void point(swindow *g_swindow){

	static p_a points = { 
		.sdlp		= NULL,
		.count	= 0
		};
		
	if (points.sdlp == NULL){
		points.count = 800*500;
		points.sdlp = calloc((points.count), sizeof(SDL_Point));

		int l_x, l_y;
		unsigned int c = 0;
	
		for(l_y = 0; l_y < 500; l_y++){
			for(l_x = 0; l_x < 800; l_x++){
				(points.sdlp + (c))->x = l_x;
				(points.sdlp + (c))->y = l_y;
				c++;
			}
		}
	}
	
	//~ printf("800x500: %dx%d\n", (points.sdlp+(800*500 - 1))->x, (points.sdlp+(800*500 - 1))->y);
	//~ printf("123x123: %dx%d\n", (points.sdlp+((800*123)+123))->x, (points.sdlp+((800*123)+123))->y);
	//~ printf("00x00: %dx%d\n", (points.sdlp)->x, (points.sdlp)->y);
	
	SDL_SetRenderDrawColor( g_swindow->renderer,
	0xFF, 0x00, 0xFF, 0xFF );
	
	//~ int i;
	//~ for(i = 0; )
	SDL_RenderDrawPoints(g_swindow->renderer, points.sdlp, points.count);

}


int main(){
	
	// INITIALIZE
	swindow g_swindow = init_swindow(g_swindow);
	state g_state = init_state();
	
	// INIT POLYS
	// TODO(init_poly_stack();)
	
	if(init_sdl(&g_swindow) == 1)
		g_swindow.quit = 1;
		

	timer fpsTimer = { .startTicks = 0, .pausedTicks = 0};
	timer capTimer = { .startTicks = 0, .pausedTicks = 0};
	int countedFrames = 0;
	fpsTimer.startTicks = SDL_GetTicks();

	while( !g_swindow.quit ){
		capTimer.startTicks = SDL_GetTicks();
		float avgFPS = countedFrames / ((SDL_GetTicks() - fpsTimer.startTicks) / 1000.0 );
		if( avgFPS > 2000000 )
		{
			avgFPS = 0;
		}
		printf("avg: %f\n", avgFPS);

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
		point(&g_swindow);
		
		

		// PRESENT
		SDL_RenderPresent( g_swindow.renderer );
		
		countedFrames++;
		
		if ((SDL_GetTicks() - capTimer.startTicks) < SCREEN_TICKS_PER_FRAME )
			SDL_Delay(SCREEN_TICKS_PER_FRAME - (SDL_GetTicks() - capTimer.startTicks));
		
	}
	
	// CLEANUP POLYS
	// TODO(del_poly_stack();)
	
	// CLEANUP SDL
	SDL_DestroyRenderer(g_swindow.renderer);
	SDL_DestroyWindow(g_swindow.window);
	SDL_Quit();
	
	return 0;
}
