
#include "down_idle_2.h"

void init_down_idle_2(){
	
	short x[50]		= { 516, 578, 582, 584, 584, 584, 581, 573, 570, 566, 554, 535, 529, 524, 521, 514, 512, 512, 511, 511, 513 };
	short y[50]		= { 423, 423, 421, 417, 372, 363, 358, 344, 340, 339, 339, 339, 339, 340, 344, 360, 364, 395, 409, 419, 421 };
	short points	= 21;
	short color[4]	= {39, 39, 39, 255};
	short z			= 1;
	
	init_shape(&down_idle_2, x, y, points, color, z);
	
}
