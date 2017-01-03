
#ifndef _SWINDOW_H_
#define _SWINDOW_H_

#include <SDL2/SDL.h>

#include "state.h"
#include "structs.h"

swindow init_swindow(swindow);
int init_sdl(swindow *);
void window_event(SDL_Event *, swindow *);
void key_event(SDL_Event *, state *);
void parse_event(SDL_Event *, swindow *, state *);

#endif
