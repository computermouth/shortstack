
#include "esc_pressed_2.h"

void init_esc_pressed_2(){
	
	short x[50]		= { 110, 113, 116, 116, 116, 115, 105, 102, 98, 90, 68, 63, 58, 54, 45, 43, 47 };
	short y[50]		= { 109, 108, 104, 82, 51, 46, 29, 26, 25, 25, 25, 24, 24, 29, 47, 105, 109 };
	short points	= 17;
	short color[4]	= {160, 130, 172, 255};
	short z			= 1;
	
	init_shape(&esc_pressed_2, x, y, points, color, z);
	
}
