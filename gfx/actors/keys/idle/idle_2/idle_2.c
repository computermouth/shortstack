
#include "idle_2.h"
#include "a_idle_2/a_idle_2.h"
#include "w_idle_2/w_idle_2.h"

void init_idle_2(){
	
	init_a_idle_2();
	init_w_idle_2();
	
	idle_2.shapes[0] = a_idle_2;
	idle_2.shapes[1] = w_idle_2;
	idle_2.real = 2;
	
}
