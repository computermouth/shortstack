
#include "down_pressed_0.h"

void init_down_pressed_0(){
	
	short x[50]		= { 513, 516, 534, 564, 579, 582, 584, 584, 584, 583, 573, 571, 568, 556, 537, 532, 525, 522, 514, 512, 512, 511, 510 };
	short y[50]		= { 421, 423, 423, 423, 423, 421, 418, 407, 364, 361, 344, 341, 339, 339, 339, 339, 340, 343, 359, 365, 395, 408, 418 };
	short points	= 23;
	short color[4]	= {160, 130, 172, 255};
	short z			= 1;
	
	init_shape(&down_pressed_0, x, y, points, color, z);
	
}
