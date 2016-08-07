
#ifndef _DRAW_H_
#define _DRAW_H_

#include <SDL2/SDL.h>
#include "nano_poly.h"

#include "stack.h"

void cache_shape(shape*, float);
SDL_Renderer* draw_shape(shape *, SDL_Renderer*);
SDL_Renderer* draw_stack(stack, SDL_Renderer*, float);

#endif
