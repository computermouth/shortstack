
#ifndef _GFX_STRUCTS_
#define _GFX_STRUCTS_

#include <SDL2/SDL.h>

typedef struct{
	int xa;
	int xb;
	int y;
} line_t;

typedef struct{
	line_t *lines;
	short line_cnt;
	float old_ratio;
	short *x;
	short *y;
	unsigned short *color;
} shape_t;

typedef struct{
	SDL_Window*		window;
	SDL_Renderer*	renderer;
	SDL_Event		e;
	int 			d_w;
	int 			d_h;
	int 			n_w;
	int 			n_h;
	int 			cached_w;
	int 			cached_h;
	float			r;
	unsigned char	scaler;
	int				p_x;
	int				p_y;
	int				focus;
	int				fs;
	int				min;
	int 			quit;
} window_t;

#endif
