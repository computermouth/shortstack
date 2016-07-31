
#ifndef _SETUP_
#define _SETUP_

struct Shape{
	short x[50];
	short y[50];
	short points;
	short color[4];
	short z;
};
typedef struct Shape shape;

struct Frame{
	shape shapes[100];
	short real;
};
typedef struct Frame frame;

struct Anim{
	frame frames[50]; 
	short real;
};
typedef struct Anim anim;

struct Actor{
	anim anims[25];
	short real;
};
typedef struct Actor actor;

void init_gfx_assets();

extern actor keys;
	extern anim idle;
		extern frame idle_0;
			extern shape a_idle_0;
			extern shape w_idle_0;
		extern frame idle_1;
			extern shape a_idle_1;
			extern shape w_idle_1;
		extern frame idle_2;
			extern shape a_idle_2;
			extern shape w_idle_2;
	extern anim pressed;
		extern frame pressed_0;
			extern shape a_pressed_0;
			extern shape w_pressed_0;
		extern frame pressed_1;
			extern shape a_pressed_1;
			extern shape w_pressed_1;
		extern frame pressed_2;
			extern shape a_pressed_2;
			extern shape w_pressed_2;


#endif
