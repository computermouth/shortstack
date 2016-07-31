
#include "left_pressed_0.h"

void init_left_pressed_0(){
	
	short x[50]		= { 435, 437, 440, 503, 506, 508, 508, 507, 502, 497, 495, 490, 484, 470, 458, 452, 449, 446, 437, 436, 436, 435, 434 };
	short y[50]		= { 419, 421, 423, 423, 421, 418, 364, 360, 352, 344, 341, 338, 339, 340, 339, 339, 340, 343, 361, 366, 393, 408, 414 };
	short points	= 23;
	short color[4]	= {160, 130, 172, 255};
	short z			= 1;
	
	init_shape(&left_pressed_0, x, y, points, color, z);
	
}
