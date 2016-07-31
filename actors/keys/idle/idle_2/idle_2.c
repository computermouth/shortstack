
#include "idle_2.h"
#include "a_idle_2/a_idle_2.h"
#include "w_idle_2/w_idle_2.h"
#include "s_idle_2/s_idle_2.h"
#include "d_idle_2/d_idle_2.h"
#include "up_idle_2/up_idle_2.h"
#include "down_idle_2/down_idle_2.h"
#include "left_idle_2/left_idle_2.h"
#include "right_idle_2/right_idle_2.h"
#include "esc_idle_2/esc_idle_2.h"
#include "ent_idle_2/ent_idle_2.h"

void init_idle_2(){
	
	init_a_idle_2();
	init_w_idle_2();
	init_s_idle_2();
	init_d_idle_2();
	init_up_idle_2();
	init_down_idle_2();
	init_left_idle_2();
	init_right_idle_2();
	init_esc_idle_2();
	init_ent_idle_2();
	
	idle_2.shapes[0] = a_idle_2;
	idle_2.shapes[1] = w_idle_2;
	idle_2.shapes[2] = s_idle_2;
	idle_2.shapes[3] = d_idle_2;
	idle_2.shapes[4] = up_idle_2;
	idle_2.shapes[5] = down_idle_2;
	idle_2.shapes[6] = left_idle_2;
	idle_2.shapes[7] = right_idle_2;
	idle_2.shapes[8] = esc_idle_2;
	idle_2.shapes[9] = ent_idle_2;
	idle_2.real = 10;
	
}
