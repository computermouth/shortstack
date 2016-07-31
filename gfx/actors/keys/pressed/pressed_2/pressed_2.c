
#include "pressed_2.h"
#include "a_pressed_2/a_pressed_2.h"
#include "w_pressed_2/w_pressed_2.h"

void init_pressed_2(){
	
	init_a_pressed_2();
	init_w_pressed_2();
	
	pressed_2.shapes[0] = a_pressed_2;
	pressed_2.shapes[1] = w_pressed_2;
	pressed_2.real = 2;
	
}
