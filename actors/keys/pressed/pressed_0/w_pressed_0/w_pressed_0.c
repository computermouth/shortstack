
#include "w_pressed_0.h"

void init_w_pressed_0(){
	
	short x[] = { 195, 196, 197, 197, 199, 204, 208, 212, 215, 221, 243, 250, 255, 258, 269, 269, 268, 264, 201, 198 };
	short y[] = { 352, 342, 318, 299, 292, 281, 275, 273, 272, 273, 273, 272, 274, 278, 297, 350, 354, 357, 357, 355 };
	short points = 20;
	short color[] = {160, 130, 172, 255};
	short z = 1;
	
	init_shape(&w_pressed_0, x, y, points, color, z);
	
}
