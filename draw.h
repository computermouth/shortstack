
#ifndef _DRAW_H_
#define _DRAW_H_

#include <SDL2/SDL.h>
#include "nano_poly.h"

#include "stack.h"
#include "window.h"

void cache_shape(shape *, float, int, int);
SDL_Renderer* draw_shape(test *, SDL_Renderer*);
SDL_Renderer* draw_stack(stack *, SDL_Renderer*);

#endif
