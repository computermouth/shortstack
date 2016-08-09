
#ifndef _STATE_H_
#define _STATE_H_

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
	int key_delay;
	int key_idle_stg;
	int key_pressed_stg;
};
typedef struct State state;

state init_state();

#endif
