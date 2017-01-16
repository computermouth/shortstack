
#ifndef _SWINDOW_H_
#define _SWINDOW_H_

#include <SDL2/SDL.h>

#include "state.h"
#include "structs.h"

window_t init_window();
int init_sdl(window_t *);
void set_scaler(window_t *);
int window_event(window_t *);
void key_event(SDL_Event *, state_t *);
void parse_event(window_t *, state_t *);

#endif
