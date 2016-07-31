
#include "esc_pressed_0.h"

void init_esc_pressed_0(){
	
	short x[50]		= { 48, 111, 116, 116, 105, 102, 98, 81, 60, 56, 53, 45, 43, 45 };
	short y[50]		= { 109, 109, 104, 50, 30, 26, 24, 26, 25, 26, 29, 48, 104, 107 };
	short points	= 14;
	short color[4]	= {160, 130, 172, 255};
	short z			= 1;
	
	init_shape(&esc_pressed_0, x, y, points, color, z);
	
}
