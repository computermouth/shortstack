
#include "down_pressed_1.h"

void init_down_pressed_1(){
	
	short x[50]		= { 512, 516, 537, 562, 578, 582, 584, 584, 584, 582, 574, 570, 565, 558, 537, 529, 523, 520, 514, 512, 511, 510 };
	short y[50]		= { 421, 424, 423, 423, 423, 421, 418, 406, 364, 360, 345, 341, 339, 339, 339, 339, 341, 346, 359, 364, 406, 418 };
	short points	= 22;
	short color[4]	= {160, 130, 172, 255};
	short z			= 1;
	
	init_shape(&down_pressed_1, x, y, points, color, z);
	
}
