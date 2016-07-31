
#include "right_pressed_0.h"

void init_right_pressed_0(){
	
	short x[50]		= { 590, 593, 619, 650, 656, 659, 660, 660, 660, 660, 657, 650, 647, 642, 634, 614, 606, 600, 597, 590, 589, 587, 587, 586 };
	short y[50]		= { 422, 423, 423, 423, 423, 420, 417, 396, 368, 363, 358, 345, 341, 339, 339, 339, 338, 340, 345, 358, 362, 393, 413, 418 };
	short points	= 24;
	short color[4]	= {160, 130, 172, 255};
	short z			= 1;
	
	init_shape(&right_pressed_0, x, y, points, color, z);
	
}
