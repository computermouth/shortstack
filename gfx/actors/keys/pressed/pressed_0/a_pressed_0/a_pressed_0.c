
#include "a_pressed_0.h"

void init_a_pressed_0(){
	
	short x[50]		= { 120, 122, 125, 188, 191, 193, 193, 193, 189, 182, 180, 175, 165, 146, 140, 134, 130, 122, 121, 120 };
	short y[50]		= { 419, 422, 423, 423, 421, 418, 395, 363, 355, 344, 341, 339, 339, 339, 338, 339, 344, 361, 394, 409 };
	short points	= 20;
	short color[4]	= {160, 130, 172, 255};
	short z			= 1;
	
	init_shape(&a_pressed_0, x, y, points, color, z);
	
}
