
#include "w_pressed_1.h"

void init_w_pressed_1(){
	
	short x[] = { 195, 199, 203, 264, 268, 269, 269, 269, 266, 258, 256, 251, 243, 229, 220, 215, 210, 206, 198, 197, 196 };
	short y[] = { 352, 356, 357, 357, 354, 351, 337, 298, 292, 278, 274, 273, 273, 273, 273, 272, 273, 277, 295, 299, 330 };
	short points = 21;
	short color[] = {160, 130, 172, 255};
	short z = 1;
	
	init_shape(&w_pressed_1, x, y, points, color, z);
	
}
