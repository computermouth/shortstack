
#include "d_pressed_0.h"

void init_d_pressed_0(){
	
	short x[50]		= { 272, 274, 277, 303, 338, 343, 345, 345, 345, 345, 345, 345, 340, 335, 333, 330, 326, 319, 308, 295, 291, 285, 282, 274, 273, 273, 272, 272 };
	short y[50]		= { 419, 422, 423, 423, 423, 422, 418, 410, 398, 377, 367, 363, 355, 345, 342, 340, 339, 339, 340, 339, 338, 339, 344, 360, 364, 389, 404, 415 };
	short points	= 28;
	short color[4]	= {160, 130, 172, 255};
	short z			= 1;
	
	init_shape(&d_pressed_0, x, y, points, color, z);
	
}
