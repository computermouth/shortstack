
#include "s_idle_2.h"

void init_s_idle_2(){
	
	short x[50]		= { 195, 200, 219, 247, 263, 267, 269, 269, 269, 267, 258, 256, 251, 242, 222, 216, 210, 207, 199, 198, 197, 196, 196 };
	short y[50]		= { 419, 423, 423, 423, 423, 421, 418, 388, 364, 360, 344, 341, 339, 339, 339, 339, 339, 344, 360, 363, 379, 400, 409 };
	short points	= 23;
	short color[4]	= {39, 39, 39, 255};
	short z			= 1;
	
	init_shape(&s_idle_2, x, y, points, color, z);
	
}
