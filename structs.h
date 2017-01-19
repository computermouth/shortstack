
#ifndef _GFX_STRUCTS_
#define _GFX_STRUCTS_

#include <SDL2/SDL.h>
#include <SDL2/SDL_mixer.h>

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
	int 			d_w;
	int 			d_h;
	int 			n_w;
	int 			n_h;
	int 			cached_w;
	int 			cached_h;
	float			r;
	unsigned char	scale;
	int				p_x;
	int				p_y;
	int				focus;
	int				fs;
	int				min;
	int 			quit;
} scalar_t;

typedef struct{
	SDL_Window*		window;
	SDL_Renderer*	renderer;
	SDL_Event		e;	
} sdl_t;

typedef struct{
	unsigned char esc;
	unsigned char ent;
	unsigned char w;
	unsigned char a;
	unsigned char s;
	unsigned char d;
	unsigned char up;
	unsigned char dn;
	unsigned char lt;
	unsigned char rt;
} keystate_t;

typedef struct{
	unsigned short frame;
	unsigned short triplet;
	unsigned short settings;
	unsigned short settings_select;
	unsigned short settings_volume;
	unsigned short menu;
	unsigned short menu_select;
	unsigned short game;
	unsigned short score;
	unsigned short high_score;
	short lives;
	unsigned short ball_color;
	short ball_x;
	short ball_y;
	short ball_x_speed;
	short ball_y_speed;
	short ball_x_dir;
	short ball_y_dir;
	short pad0_dir;
	short pad1_dir;
	short pad2_dir;
	short pad3_dir;
	unsigned short hole_open;
	unsigned short bounced;
	unsigned short paddle_color;
	unsigned short paddle_color_delay;
	short paddle_x;
	unsigned short over;
} state_t;

typedef struct{
	Mix_Chunk *sound_ball_death;
	Mix_Chunk *sound_menu_change;
	Mix_Chunk *sound_menu_select;
	Mix_Chunk *sound_paddle_hit;
	Mix_Chunk *sound_portal;
	Mix_Chunk *sound_top_hit;
	Mix_Chunk *sound_wall_hit;
} audio_t;

typedef struct{
	scalar_t scalar;
	state_t state;
	keystate_t keystate;
	sdl_t sdl;
	audio_t audio;
} god_t;

#endif
