
#include <SDL2/SDL.h>
#include "nano_poly.h"
//~ #include "SDL2_gfxPrimitives.h"

#include "draw.h"
//~ #include "actors.h"
#include "stack.h"

SDL_Renderer* draw_shape(shape drsh, SDL_Renderer* renderer, float r){
	
	if (r != drsh.lastr){
		int i;
		for(i = 0; i < drsh.points; i++){
			drsh.x[i] = (float)drsh.x[i] * r;
			drsh.y[i] = (float)drsh.y[i] * r;
		}
		drsh.lastr = r;
	}
	
	filledPolygonRGBA(renderer, 
		drsh.x, 
		drsh.y,
		drsh.points,
		drsh.color[0], 
		drsh.color[1], 
		drsh.color[2], 
		drsh.color[3]);
	
	return renderer;
}

SDL_Renderer* draw_stack(stack g_stack, SDL_Renderer* renderer, float r){
	
	SDL_SetRenderDrawColor( renderer, 0x00, 0x00, 0x00, 0x00 );
	SDL_RenderClear( renderer );
	
	while(g_stack.top >= 0){
		int i;
		for(i = g_stack.stk[g_stack.top].real; i >= 0; i--){
			draw_shape(g_stack.stk[g_stack.top].shapes[i], renderer, r);
		}
		g_stack = pop_stack(g_stack);
	}
	
	return renderer;
}
