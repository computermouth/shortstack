
#include "idle_1.h"
#include "a_idle_1/a_idle_1.h"
#include "w_idle_1/w_idle_1.h"
#include "s_idle_1/s_idle_1.h"
#include "d_idle_1/d_idle_1.h"
#include "up_idle_1/up_idle_1.h"
#include "down_idle_1/down_idle_1.h"
#include "left_idle_1/left_idle_1.h"
#include "right_idle_1/right_idle_1.h"
#include "esc_idle_1/esc_idle_1.h"
#include "ent_idle_1/ent_idle_1.h"

void init_idle_1(){
	
	init_a_idle_1();
	init_w_idle_1();
	init_s_idle_1();
	init_d_idle_1();
	init_up_idle_1();
	init_down_idle_1();
	init_left_idle_1();
	init_right_idle_1();
	init_esc_idle_1();
	init_ent_idle_1();
	
	idle_1.shapes[0] = a_idle_1;
	idle_1.shapes[1] = w_idle_1;
	idle_1.shapes[2] = s_idle_1;
	idle_1.shapes[3] = d_idle_1;
	idle_1.shapes[4] = up_idle_1;
	idle_1.shapes[5] = down_idle_1;
	idle_1.shapes[6] = left_idle_1;
	idle_1.shapes[7] = right_idle_1;
	idle_1.shapes[8] = esc_idle_1;
	idle_1.shapes[9] = ent_idle_1;
	idle_1.real = 10;
	
}
