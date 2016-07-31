
#include "esc_idle_1.h"

void init_esc_idle_1(){
	
	short x[50]		= { 44, 44, 42, 44, 48, 111, 114, 116, 117, 115, 105, 103, 98, 89, 69, 64, 59, 54, 53, 45 };
	short y[50]		= { 50, 70, 104, 107, 109, 109, 107, 104, 50, 47, 29, 27, 25, 25, 25, 24, 24, 27, 31, 46 };
	short points	= 20;
	short color[4]	= {39, 39, 39, 255};
	short z			= 1;
	
	init_shape(&esc_idle_1, x, y, points, color, z);
	
}
