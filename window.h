
#ifndef _WINDOW_H_
#define _WINDOW_H_

#include <SDL2/SDL.h>

#include "state.h"
#include "structs.h"

window_t init_window();
int init_sdl(god_t *);
void set_scaler(god_t *);
int window_event(god_t *);
void key_event(SDL_Event *, state_t *);
void parse_event(god_t *);

#endif
