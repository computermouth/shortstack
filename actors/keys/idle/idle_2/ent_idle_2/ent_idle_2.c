
#include "ent_idle_2.h"

void init_ent_idle_2(){
	
	short x[50]		= { 591, 596, 648, 701, 704, 706, 705, 700, 696, 695, 693, 689, 686, 683, 678, 667, 646, 625, 604, 595, 591, 585, 579, 575, 574, 572, 570, 571, 576, 588, 591, 590, 589, 588 };
	short y[50]		= { 190, 193, 193, 194, 192, 190, 180, 148, 115, 105, 97, 83, 74, 68, 65, 66, 67, 67, 65, 64, 64, 66, 85, 94, 102, 116, 130, 137, 139, 140, 143, 161, 181, 188 };
	short points	= 34;
	short color[4]	= {39, 39, 39, 255};
	short z			= 1;
	
	init_shape(&ent_idle_2, x, y, points, color, z);
	
}
