
#include "w_idle_2.h"

void init_w_idle_2(){
	
	short x[] = { 195, 199, 205, 263, 267, 270, 269, 269, 267, 260, 258, 255, 250, 243, 232, 220, 213, 209, 206, 198, 197, 197, 195 };
	short y[] = { 352, 356, 357, 357, 355, 351, 340, 298, 292, 281, 277, 274, 272, 273, 273, 273, 272, 274, 279, 294, 297, 323, 345 };
	short points = 23;
	short color[] = {39, 39, 39, 255};
	short z = 1;
	
	init_shape(&w_idle_2, x, y, points, color, z);
	
}
