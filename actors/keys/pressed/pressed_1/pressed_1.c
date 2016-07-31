
#include "pressed_1.h"
#include "a_pressed_1/a_pressed_1.h"
#include "w_pressed_1/w_pressed_1.h"
#include "s_pressed_1/s_pressed_1.h"
#include "d_pressed_1/d_pressed_1.h"
#include "up_pressed_1/up_pressed_1.h"
#include "down_pressed_1/down_pressed_1.h"
#include "left_pressed_1/left_pressed_1.h"
#include "right_pressed_1/right_pressed_1.h"
#include "esc_pressed_1/esc_pressed_1.h"
#include "ent_pressed_1/ent_pressed_1.h"

void init_pressed_1(){
	
	init_a_pressed_1();
	init_w_pressed_1();
	init_s_pressed_1();
	init_d_pressed_1();
	init_up_pressed_1();
	init_down_pressed_1();
	init_left_pressed_1();
	init_right_pressed_1();
	init_esc_pressed_1();
	init_ent_pressed_1();
	
	pressed_1.shapes[0] = a_pressed_1;
	pressed_1.shapes[1] = w_pressed_1;
	pressed_1.shapes[2] = s_pressed_1;
	pressed_1.shapes[3] = d_pressed_1;
	pressed_1.shapes[4] = up_pressed_1;
	pressed_1.shapes[5] = down_pressed_1;
	pressed_1.shapes[6] = left_pressed_1;
	pressed_1.shapes[7] = right_pressed_1;
	pressed_1.shapes[8] = esc_pressed_1;
	pressed_1.shapes[9] = ent_pressed_1;
	pressed_1.real = 10;
	
}
