
#include "pressed_0.h"
#include "a_pressed_0/a_pressed_0.h"
#include "w_pressed_0/w_pressed_0.h"
#include "s_pressed_0/s_pressed_0.h"
#include "d_pressed_0/d_pressed_0.h"
#include "up_pressed_0/up_pressed_0.h"
#include "down_pressed_0/down_pressed_0.h"
#include "left_pressed_0/left_pressed_0.h"
#include "right_pressed_0/right_pressed_0.h"
#include "esc_pressed_0/esc_pressed_0.h"
#include "ent_pressed_0/ent_pressed_0.h"

void init_pressed_0(){
	
	init_a_pressed_0();
	init_w_pressed_0();
	init_s_pressed_0();
	init_d_pressed_0();
	init_up_pressed_0();
	init_down_pressed_0();
	init_left_pressed_0();
	init_right_pressed_0();
	init_esc_pressed_0();
	init_ent_pressed_0();
	
	pressed_0.shapes[0] = a_pressed_0;
	pressed_0.shapes[1] = w_pressed_0;
	pressed_0.shapes[2] = s_pressed_0;
	pressed_0.shapes[3] = d_pressed_0;
	pressed_0.shapes[4] = up_pressed_0;
	pressed_0.shapes[5] = down_pressed_0;
	pressed_0.shapes[6] = left_pressed_0;
	pressed_0.shapes[7] = right_pressed_0;
	pressed_0.shapes[8] = esc_pressed_0;
	pressed_0.shapes[9] = ent_pressed_0;
	pressed_0.real = 10;
	
}
