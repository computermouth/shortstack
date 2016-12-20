
#include <SDL2/SDL.h>

#include "nano_poly.h"
#include "draw.h"
#include "structs.h"
#include "window.h"

SDL_Renderer* draw_shape(shape *shape_s, SDL_Renderer* renderer){
	
	SDL_SetRenderDrawBlendMode(renderer, (shape_s->color[3] == 255) ? 
		SDL_BLENDMODE_NONE : SDL_BLENDMODE_BLEND);
	SDL_SetRenderDrawColor(renderer, 
		shape_s->color[0], 
		shape_s->color[1], 
		shape_s->color[2], 
		shape_s->color[3]);	

	int i;
	for(i = 0; i < shape_s->line_cnt; i++){
		SDL_RenderDrawLine(renderer, 
			shape_s->lines[i].xa, 
			shape_s->lines[i].y, 
			shape_s->lines[i].xb, 
			shape_s->lines[i].y);
	}
		
	return renderer;
}
