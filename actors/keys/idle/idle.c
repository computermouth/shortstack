
#include "idle.h"
#include "idle_0/idle_0.h"
#include "idle_1/idle_1.h"
#include "idle_2/idle_2.h"


void init_idle(){
	
	init_idle_0();
	init_idle_1();
	init_idle_2();
	
	idle.frames[0] = idle_0;
	idle.frames[1] = idle_1;
	idle.frames[2] = idle_2;
	idle.real = 3;
	
}
