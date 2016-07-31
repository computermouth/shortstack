
#include "pressed_0.h"
#include "a_pressed_0/a_pressed_0.h"
#include "w_pressed_0/w_pressed_0.h"

void init_pressed_0(){
	
	init_a_pressed_0();
	init_w_pressed_0();
	
	pressed_0.shapes[0] = a_pressed_0;
	pressed_0.shapes[1] = w_pressed_0;
	pressed_0.real = 2;
	
}
