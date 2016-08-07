
#ifndef _KEYS_H_
#define _KEYS_H_

#include "../../structs.h"

extern actor keys;
actor keys;
	extern anim idle;
	anim idle;
		extern frame idle_0;
		frame idle_0;
			extern shape esc_idle_0;
			shape esc_idle_0;
			extern shape ent_idle_0;
			shape ent_idle_0;
			extern shape w_idle_0;
			shape w_idle_0;
			extern shape a_idle_0;
			shape a_idle_0;
			extern shape s_idle_0;
			shape s_idle_0;
			extern shape d_idle_0;
			shape d_idle_0;
			extern shape up_idle_0;
			shape up_idle_0;
			extern shape down_idle_0;
			shape down_idle_0;
			extern shape left_idle_0;
			shape left_idle_0;
			extern shape right_idle_0;
			shape right_idle_0;
		extern frame idle_1;
		frame idle_1;
			extern shape esc_idle_1;
			shape esc_idle_1;
			extern shape ent_idle_1;
			shape ent_idle_1;
			extern shape w_idle_1;
			shape w_idle_1;
			extern shape a_idle_1;
			shape a_idle_1;
			extern shape s_idle_1;
			shape s_idle_1;
			extern shape d_idle_1;
			shape d_idle_1;
			extern shape up_idle_1;
			shape up_idle_1;
			extern shape down_idle_1;
			shape down_idle_1;
			extern shape left_idle_1;
			shape left_idle_1;
			extern shape right_idle_1;
			shape right_idle_1;
		extern frame idle_2;
		frame idle_2;
			extern shape esc_idle_2;
			shape esc_idle_2;
			extern shape ent_idle_2;
			shape ent_idle_2;
			extern shape w_idle_2;
			shape w_idle_2;
			extern shape a_idle_2;
			shape a_idle_2;
			extern shape s_idle_2;
			shape s_idle_2;
			extern shape d_idle_2;
			shape d_idle_2;
			extern shape up_idle_2;
			shape up_idle_2;
			extern shape down_idle_2;
			shape down_idle_2;
			extern shape left_idle_2;
			shape left_idle_2;
			extern shape right_idle_2;
			shape right_idle_2;
	extern anim pressed;
	anim pressed;
		extern frame pressed_0;
		frame pressed_0;
			extern shape esc_pressed_0;
			shape esc_pressed_0;
			extern shape ent_pressed_0;
			shape ent_pressed_0;
			extern shape w_pressed_0;
			shape w_pressed_0;
			extern shape a_pressed_0;
			shape a_pressed_0;
			extern shape s_pressed_0;
			shape s_pressed_0;
			extern shape d_pressed_0;
			shape d_pressed_0;
			extern shape up_pressed_0;
			shape up_pressed_0;
			extern shape down_pressed_0;
			shape down_pressed_0;
			extern shape left_pressed_0;
			shape left_pressed_0;
			extern shape right_pressed_0;
			shape right_pressed_0;
		extern frame pressed_1;
		frame pressed_1;
			extern shape esc_pressed_1;
			shape esc_pressed_1;
			extern shape ent_pressed_1;
			shape ent_pressed_1;
			extern shape w_pressed_1;
			shape w_pressed_1;
			extern shape a_pressed_1;
			shape a_pressed_1;
			extern shape s_pressed_1;
			shape s_pressed_1;
			extern shape d_pressed_1;
			shape d_pressed_1;
			extern shape up_pressed_1;
			shape up_pressed_1;
			extern shape down_pressed_1;
			shape down_pressed_1;
			extern shape left_pressed_1;
			shape left_pressed_1;
			extern shape right_pressed_1;
			shape right_pressed_1;
		extern frame pressed_2;
		frame pressed_2;
			extern shape esc_pressed_2;
			shape esc_pressed_2;
			extern shape ent_pressed_2;
			shape ent_pressed_2;
			extern shape w_pressed_2;
			shape w_pressed_2;
			extern shape a_pressed_2;
			shape a_pressed_2;
			extern shape s_pressed_2;
			shape s_pressed_2;
			extern shape d_pressed_2;
			shape d_pressed_2;
			extern shape up_pressed_2;
			shape up_pressed_2;
			extern shape down_pressed_2;
			shape down_pressed_2;
			extern shape left_pressed_2;
			shape left_pressed_2;
			extern shape right_pressed_2;
			shape right_pressed_2;

void init_keys();
void cache_keys(float, int, int);
void del_keys();

void init_idle();
void init_pressed();

void cache_idle(float, int, int);
void cache_pressed(float, int, int);

void del_idle();
void del_pressed();

#endif
