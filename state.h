
#ifndef _STATE_H_
#define _STATE_H_

#include "structs.h"

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
	keystate_t k;
	
	unsigned short frame;
	unsigned short triplet;
	unsigned short settings;
	unsigned short settings_select;
	unsigned short settings_volume;
	unsigned short menu;
	unsigned short menu_select;
	unsigned short game;
	unsigned short score;
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

state_t init_state();
void logic(state_t *, window_t *);

#endif
