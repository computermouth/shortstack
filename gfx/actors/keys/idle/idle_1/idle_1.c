
#include "idle_1.h"
#include "a_idle_1/a_idle_1.h"
#include "w_idle_1/w_idle_1.h"

void init_idle_1(){
	
	init_a_idle_1();
	init_w_idle_1();
	
	idle_1.shapes[0] = a_idle_1;
	idle_1.shapes[1] = w_idle_1;
	idle_1.real = 2;
	
}
