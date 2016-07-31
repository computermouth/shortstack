
#include "s_pressed_1.h"

void init_s_pressed_1(){
	
	short x[50]		= { 201, 265, 268, 270, 269, 269, 268, 258, 255, 250, 237, 222, 214, 210, 206, 198, 197, 196, 196, 198 };
	short y[50]		= { 423, 423, 420, 418, 396, 363, 361, 344, 340, 339, 340, 340, 339, 340, 344, 361, 364, 396, 418, 421 };
	short points	= 20;
	short color[4]	= {160, 130, 172, 255};
	short z			= 1;
	
	init_shape(&s_pressed_1, x, y, points, color, z);
	
}
