
#ifndef _GFX_STRUCTS_
#define _GFX_STRUCTS_

struct Line{
	int xa;
	int xb;
	int y;
};
typedef struct Line liner;

struct Shape{
	liner *lines;
	short line_cnt;
	float old_ratio;
	short *x;
	short *y;
	unsigned short *color;
};
typedef struct Shape shape;

struct Swindow{
	SDL_Window*		window;
	SDL_Renderer*	renderer;
	SDL_Event		e;
	int 			d_w;
	int 			d_h;
	int 			n_w;
	int 			n_h;
	float			r;
	int				p_x;
	int				p_y;
	int				focus;
	int				fs;
	int				min;
	int 			quit;
	liner**			lines;
	int				lines_count;
	int				lines_max;
};
typedef struct Swindow swindow;

#endif
