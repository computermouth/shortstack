
#ifndef _STATE_H_
#define _STATE_H_

#include "structs.h"

struct Keystate{
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
};
typedef struct Keystate keystate;

struct State{
	keystate k;
	
	unsigned short frame;
	unsigned short menu;
	unsigned short game;
	unsigned short score;
	unsigned short lives;
	unsigned short ball_color;
	unsigned short ball_x;
	unsigned short ball_y;
	unsigned short paddle_x;
	unsigned short over;
};
typedef struct State state;

state init_state();
state logic(state, swindow *);

#endif
