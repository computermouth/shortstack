
#include <SDL2/SDL.h>
#include "nano_poly.h"

#include "../stack/stack.h"

#ifndef _DRAW_H_
#define _DRAW_H_

SDL_Renderer* draw_shape(shape, SDL_Renderer*, float);
SDL_Renderer* draw_stack(stack, SDL_Renderer*, float);

#endif
