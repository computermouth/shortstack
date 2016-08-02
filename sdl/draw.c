
#include <SDL2/SDL.h>
#include <SDL2/SDL2_gfxPrimitives.h>

#include "draw.h"
#include "../stack/stack.h"

SDL_Renderer* draw_shape(shape drsh, SDL_Renderer* renderer, float r){
	
	if (r != 1.0){
		int i;
		for(i = 0; i < drsh.points; i++){
			drsh.x[i] = (float)drsh.x[i] * r;
			drsh.y[i] = (float)drsh.y[i] * r;
		}
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
		while(g_stack.stk[g_stack.top].top >= 0){
			frame *top_frame = &g_stack.stk[g_stack.top];
			draw_shape(top_frame->shapes[top_frame->top], renderer, r);
			//~ *top_frame = pop_frame(*top_frame);
		}
		//~ g_stack = pop_stack(g_stack);
	}
	
	return renderer;
}
