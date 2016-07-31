
#include "pressed.h"
#include "pressed_0/pressed_0.h"
#include "pressed_1/pressed_1.h"
#include "pressed_2/pressed_2.h"


void init_pressed(){
	
	init_pressed_0();
	init_pressed_1();
	init_pressed_2();
	
	pressed.frames[0] = pressed_0;
	pressed.frames[1] = pressed_1;
	pressed.frames[2] = pressed_2;
	pressed.real = 3;
	
}
