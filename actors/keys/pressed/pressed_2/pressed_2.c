
#include "pressed_2.h"
#include "a_pressed_2/a_pressed_2.h"
#include "w_pressed_2/w_pressed_2.h"
#include "s_pressed_2/s_pressed_2.h"
#include "d_pressed_2/d_pressed_2.h"
#include "up_pressed_2/up_pressed_2.h"
#include "down_pressed_2/down_pressed_2.h"
#include "left_pressed_2/left_pressed_2.h"
#include "right_pressed_2/right_pressed_2.h"
#include "esc_pressed_2/esc_pressed_2.h"
#include "ent_pressed_2/ent_pressed_2.h"

void init_pressed_2(){
	
	init_a_pressed_2();
	init_w_pressed_2();
	init_s_pressed_2();
	init_d_pressed_2();
	init_up_pressed_2();
	init_down_pressed_2();
	init_left_pressed_2();
	init_right_pressed_2();
	init_esc_pressed_2();
	init_ent_pressed_2();
	
	pressed_2.shapes[0] = a_pressed_2;
	pressed_2.shapes[1] = w_pressed_2;
	pressed_2.shapes[2] = s_pressed_2;
	pressed_2.shapes[3] = d_pressed_2;
	pressed_2.shapes[4] = up_pressed_2;
	pressed_2.shapes[5] = down_pressed_2;
	pressed_2.shapes[6] = left_pressed_2;
	pressed_2.shapes[7] = right_pressed_2;
	pressed_2.shapes[8] = esc_pressed_2;
	pressed_2.shapes[9] = ent_pressed_2;
	pressed_2.real = 10;
	
}
