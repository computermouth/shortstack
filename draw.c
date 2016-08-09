
#include <SDL2/SDL.h>
#include "nano_poly.h"
#include "draw.h"
#include "stack.h"
#include "structs.h"
#include "window.h"

void cache_shape(shape *drsh, float r, int p_x, int p_y){
	
	int i;
	short x[50];
	short y[50];
	for(i = 0; i < drsh->points; i++){
		x[i] = (float)drsh->x[i] * r + p_x;
		y[i] = (float)drsh->y[i] * r + p_y;
	}
	
	filledPolygonRGBA(&drsh->lines,
		&drsh->real,
		x, 
		y,
		drsh->points,
		drsh->color[0], 
		drsh->color[1], 
		drsh->color[2], 
		drsh->color[3]);

}

SDL_Renderer* draw_shape(shape *drsh, SDL_Renderer* renderer){
	
	SDL_SetRenderDrawBlendMode(renderer, (drsh->color[3] == 255) ? SDL_BLENDMODE_NONE : SDL_BLENDMODE_BLEND);
	SDL_SetRenderDrawColor(renderer, drsh->color[0], drsh->color[1], drsh->color[2], drsh->color[3]);	
		//~ printf("%d\n", drsh->lines);
	int i;
	for(i = 0; i < drsh->real; i++){
		SDL_RenderDrawLine(renderer, drsh->lines[i].xa, 
			drsh->lines[i].y, drsh->lines[i].xb, drsh->lines[i].y);
	}
		
	return renderer;
}

SDL_Renderer* draw_stack(stack *g_stack, SDL_Renderer* renderer){
	
	SDL_SetRenderDrawColor( renderer, 0x00, 0x00, 0x00, 0x00 );
	SDL_RenderClear( renderer );
	
	while(g_stack->top >= 0){
		int i;
		for(i = g_stack->stk[g_stack->top].real; i >= 0; i--){
			draw_shape(&g_stack->stk[g_stack->top].shapes[i], renderer);
		}
		pop_stack(g_stack);
	}
	
	return renderer;
}
