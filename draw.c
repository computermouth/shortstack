
#include <SDL2/SDL.h>

#include "nano_poly.h"
#include "draw.h"
#include "structs.h"
#include "window.h"

SDL_Renderer* draw_shape(shape_t *shape, SDL_Renderer* renderer){
	
	SDL_SetRenderDrawBlendMode(renderer, (shape->color[3] == 255) ? 
		SDL_BLENDMODE_NONE : SDL_BLENDMODE_BLEND);
	SDL_SetRenderDrawColor(renderer, 
		shape->color[0], 
		shape->color[1], 
		shape->color[2], 
		shape->color[3]);	

	int i;
	for(i = 0; i < shape->line_cnt; i++){
		SDL_RenderDrawLine(renderer, 
			shape->lines[i].xa, 
			shape->lines[i].y, 
			shape->lines[i].xb, 
			shape->lines[i].y);
	}
		
	return renderer;
}
