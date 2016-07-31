
#include "pressed_1.h"
#include "a_pressed_1/a_pressed_1.h"
#include "w_pressed_1/w_pressed_1.h"

void init_pressed_1(){
	
	init_a_pressed_1();
	init_w_pressed_1();
	
	pressed_1.shapes[0] = a_pressed_1;
	pressed_1.shapes[1] = w_pressed_1;
	pressed_1.real = 2;
	
}
