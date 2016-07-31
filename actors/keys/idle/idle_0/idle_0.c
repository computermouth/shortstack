
#include "idle_0.h"
#include "a_idle_0/a_idle_0.h"
#include "w_idle_0/w_idle_0.h"
#include "s_idle_0/s_idle_0.h"
#include "d_idle_0/d_idle_0.h"
#include "up_idle_0/up_idle_0.h"
#include "down_idle_0/down_idle_0.h"
#include "left_idle_0/left_idle_0.h"
#include "right_idle_0/right_idle_0.h"
#include "esc_idle_0/esc_idle_0.h"
#include "ent_idle_0/ent_idle_0.h"

void init_idle_0(){
	
	init_a_idle_0();
	init_w_idle_0();
	init_s_idle_0();
	init_d_idle_0();
	init_up_idle_0();
	init_down_idle_0();
	init_left_idle_0();
	init_right_idle_0();
	init_esc_idle_0();
	init_ent_idle_0();
	
	idle_0.shapes[0] = a_idle_0;
	idle_0.shapes[1] = w_idle_0;
	idle_0.shapes[2] = s_idle_0;
	idle_0.shapes[3] = d_idle_0;
	idle_0.shapes[4] = up_idle_0;
	idle_0.shapes[5] = down_idle_0;
	idle_0.shapes[6] = left_idle_0;
	idle_0.shapes[7] = right_idle_0;
	idle_0.shapes[8] = esc_idle_0;
	idle_0.shapes[9] = ent_idle_0;
	idle_0.real = 10;
	
}
