
#include "left_pressed_1.h"

void init_left_pressed_1(){
	
	short x[50]		= { 440, 503, 506, 508, 508, 508, 508, 507, 497, 495, 491, 483, 471, 459, 453, 448, 445, 438, 437, 436, 435, 435, 437 };
	short y[50]		= { 423, 423, 422, 418, 410, 383, 364, 361, 344, 341, 339, 339, 339, 339, 338, 340, 345, 360, 364, 396, 409, 418, 421 };
	short points	= 23;
	short color[4]	= {160, 130, 172, 255};
	short z			= 1;
	
	init_shape(&left_pressed_1, x, y, points, color, z);
	
}
