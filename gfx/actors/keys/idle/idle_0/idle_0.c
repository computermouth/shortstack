
#include "idle_0.h"
#include "a_idle_0/a_idle_0.h"
#include "w_idle_0/w_idle_0.h"

void init_idle_0(){
	
	init_a_idle_0();
	init_w_idle_0();
	
	idle_0.shapes[0] = a_idle_0;
	idle_0.shapes[1] = w_idle_0;
	idle_0.real = 2;
	
}
